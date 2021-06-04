#pragma once
#include<iostream>
using namespace std;

class Student {
	string name;
public:
	void show() {
		cout << "Name : " << name << endl;
	}
	string getName() const {
		return name;
	}
};