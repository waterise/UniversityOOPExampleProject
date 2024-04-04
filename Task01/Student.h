#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
string name;
int age;
double mark;
public:



	// default constructor (конструктор по умолчанию)
	Student() {
		cout << "calling default constructor" << endl;
		name = "no name";
		age = 5;
		mark = 4;
		//*mark = new double[5];
	}


	// canonical constructor with parameters (arguments)
	// канонический конструктор
	Student(string nm, int a, double m) {
		cout << "calling canonical constructor" << endl;
		name = nm;
		age = a;
		mark = m;
	}

	// constructor with parameters (arguments)
	Student(string nm) {
		cout << "calling constructor with parameters 1" << endl;
		name = nm;
		age = 0;
		mark = 0;
	}

	// constructor with parameters (arguments)
	Student(double m) {
		cout << "calling constructor with parameters 2" << endl;
		name = "no name";
		age = 0;
		mark = m;
	}

	//// copy-constructor
	//Student(const Student& student) {

	//}
	
	// destructor (деструктор)
	~Student() {
		cout << "calling destructor" << endl;
		//delete[] mark;
	}
	string getName() {
		return name;
	}
	void setName(string nm) {
		name = nm;
	}
	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 0 && a < 90) {
			age = a;
		}
	}
	double getMark() {
		return mark;
	}
	void setMark(double m) {
		if (m > 0 && m <= 10) {
			mark = m;
		}
	}



	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);
		return s;
	}
};
