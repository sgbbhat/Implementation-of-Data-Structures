//============================================================================
// Name        : Traingle.cpp
// Author      : Shreeganesh Bhat
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
using namespace std;

struct Point{
	float x,y;
};

struct Triangle{
	Point p[3];
};

void readPoint(Point &p){
	cout<<"Enter x and y coordinates : "<<endl;
	cin>>p.x>>p.y;
}

void readTriangle(Triangle &t){
	for(int i=0; i<3; i++){
		readPoint(t.p[i]);
	}
}

void printPoint(Point &p){
	cout<<"( "<<p.x<<" , "<<p.y<<" )"<<endl;
}

void printTraingle(Triangle &t){
	cout<<"Vertices of a triangle : "<<endl;
	for(int i = 0; i<3; i++){
		printPoint(t.p[i]);
	}
}

bool checkCommonPoint(Triangle t1, Triangle t2){
	for(int i=0; i<3; i++){
		if(t1.p[i].x == t2.p[i].x && t1.p[i].y == t2.p[i].y){
			return true;
		}
	}

	return false;
}

int main() {
	Triangle T1, T2;
	cout<<"Enter coordinates for t1 : "<<endl;
	readTriangle(T1);
	cout<<"Enter coordinates for t2 : "<<endl;
	readTriangle(T2);
	return 0;
}
