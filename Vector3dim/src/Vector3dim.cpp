//============================================================================
// Name        : Vector3dim.cpp
// Author      : Shreeganesh Bhat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <math.h>
using namespace std;

class V3{
private:
	double x,y,z;

public:
	V3(double  = 0.0, double v2 = 0.0, double v3 = 0.0);
	V3 operator + (V3 const &b);
	V3 operator * (double factor);
	double length();
	void print();
	void setV3(double v1, double v2, double v3);
	~V3();
};

void V3::setV3(double v1, double v2, double v3)
{
	x = v1;
	y = v2;
	z = v3;
}

V3::V3(double v1 , double v2 , double v3 )
{
	x = v1 ;
	y = v2 ;
	z = v3 ;
}

V3 V3::operator + (V3 const &b)
{
	V3 v;
	v.x = x + b.x;
	v.y = y + b.y;
	v.z = z + b.z;

	return v;
}

V3 V3::operator * (double factor)
{
	V3 v ;
	v.x = x * factor;
	v.y = y * factor;
	v.z = z * factor;

	return v;
}

double V3::length()
{
	return sqrt(x*x + y*y + z*z);
}

void V3::print(void)
{
	cout<<"x : "<<x<<endl;
	cout<<"y : "<<y<<endl;
	cout<<"z : "<<z<<endl;
}

V3::~V3()
{
	return;
}

int main()
{
	V3 vel, acc, pos;
	V3 currDispl, currPos;
	double t = 0.0, deltaT, totalT;
	double v1, v2, v3;
	cout<<"Give x, y and z components of initial velocity : "<<endl;
	cin>>v1>>v2>>v3;
	vel.setV3(v1, v2, v3);
	cout<<"Give x, y and z components of initial accleration : "<<endl;
	cin>>v1>>v2>>v3;
	acc.setV3(v1, v2, v3);
	cout<<"Give x, y and z components of initial position : "<<endl;
	cin>>v1>>v2>>v3;
	pos.setV3(v1, v2, v3);

	cout<<"Enter total simulation time : "<<endl;
	cin>>totalT;

	cout<<"Simulation time granularity : "<<endl;
	cin>>deltaT;


	if(totalT < 0 || deltaT < 0)
	{
		cout<<"Invalid input"<<endl;
		return -1;
	}

	while(t <= totalT)
	{
		currDispl = (vel*t) + (acc*0.5*t*t);
		currPos = currDispl + pos;

		cout<< "Time : "<< t << " " << endl;
		currPos.print();

		t = t + deltaT;
	}

	return 0;
}
