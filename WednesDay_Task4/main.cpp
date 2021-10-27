#include<stdio.h>
class Object
{
public:
	void SetPosition(float point_x, float point_y, float point_z);
	float GetPosition_x() { return position_x; }
	float GetPosition_y() { return position_y; }
	float GetPosition_z() { return position_z; }
	virtual void Update();
private:
	float position_x;
	float position_y;
	float position_z;
};
class Vehicle : public Object
{
public:
	virtual void SpeedUp();
	void SetAccel(float acc);
	float GetSpeed() { return speed; }
private:
	void SetSpeed(float spee);
private:
	float speed;
	float accel;
};
class Car : public Vehicle
{
public:
	void SetSpeed(float speed);
	float GetSpeed() { return now_speed; }
private:
	float now_speed;
};
int main()
{

}
void Object::SetPosition(float point_x, float point_y, float point_z)
{
	position_x += point_x;
	position_y += point_y;
	position_z += point_z;
}
void Object::Update()
{
	printf("現在の x座標は%f\ny座標は%f\nz座標は%f です。\n", position_x, position_y, position_z);
}
void Vehicle::SpeedUp()
{
	float scan_acc;
	scanf_s("どれくらいスピードを出しますか?%f\n", &scan_acc);
	SetSpeed(scan_acc);
}
void Vehicle::SetAccel(float acc)
{
	accel = acc;
}
void Vehicle::SetSpeed(float spee)
{
	float totalSpeed = speed + spee;
	speed = totalSpeed;
}
void Car::SetSpeed(float speed)
{
	
}