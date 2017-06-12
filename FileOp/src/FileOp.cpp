//============================================================================
// Name        : FileOp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const char * path = "/home/shreeganesh/Documents/C++/Implementation-of-Data-Structures/FileOp/test.txt";
	FILE * fp;
	fp = fopen(path, "w");
	char buffer[] = { 'x' , 'y' , 'z' };

	if(fp == NULL){
		cout<<"Couldn't be opened"<<endl;
	}
	else{
		fwrite(buffer , sizeof(char), sizeof(buffer), fp);
	}
	fclose(fp);

	long lSize;
	char * read_buffer;
	size_t result;
	char mystring [100];

	fp = fopen(path, "r");

	// obtain file size:
	fseek (fp , 0 , SEEK_END);
	lSize = ftell (fp);
	rewind (fp);

	// allocate memory to contain the whole file:
	read_buffer = (char*) malloc (sizeof(char)*lSize);
	if (read_buffer == NULL) {
		fputs ("Memory error",stderr); exit (2);
	}

	// copy the file into the buffer:
	result = fread (read_buffer,1,lSize,fp);

	cout<<result<<endl;

	fgets(mystring, result, fp);

	cout<<mystring<<endl;

	fclose(fp);

	return 0;
}
