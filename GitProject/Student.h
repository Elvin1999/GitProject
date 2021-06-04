#pragma once
#include<iostream>
using namespace std;

class Student {
public:
	string name;
	void show() {
		cout << "Name : " << name << endl;
	}
};