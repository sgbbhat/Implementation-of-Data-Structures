//============================================================================
// Name        : ClassSize.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct book{
	int SBN;
	string author;
};

class student{
	int serialNo;
	string name;

public:
	void setName(string n){
		name = n;
	}

	void setserialNo(int slNo){
		serialNo = slNo;
	}
};

// Note :  The function declarations made in the class student
// do not occupy space in an instance of the class.

int main() {
	book b1;
	student s1;
	int x = 10;
	cout<<"Size of int : " <<sizeof(x)<<" bytes " <<endl;
	cout<<"Size occupied by book : "<<sizeof(b1)<<" bytes " <<endl;
	cout<<"Size occupied by student : "<<sizeof(s1)<<" bytes " <<endl;
	return 0;
}
