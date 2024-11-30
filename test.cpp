#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <print>
#include <cstdio>
#include "Head.h"
using namespace std;

class Student
{
public:

	char name;
	int ID;

	void setdata(char setname ,int setID)
	{
		name = setname;
		ID = setID;

		//return 0;
	}

	void showData()
	{
		cout << "ÐÕÃû£º " << name << "Ñ§ºÅ£º " << ID << endl;
	}

private:

};


int main()
{
	//Student s1;
	//s1.setdata(111, 122);
	//s1.showData();
	//BubbleSort();
	//Swap(a, b);
	

	return 0;
}