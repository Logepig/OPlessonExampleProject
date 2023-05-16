#include "student.h"


int Student::count = 0;

int Student::get_count() {
	return count;
}

float Student::get_avg_mark() {
	return avg_mark;
}

void Student::set_avg_mark(float mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		avg_mark = mark;
	}
}

// default-constructor (with no-args)
Student::Student() {
	//cout << "default-constructor" << endl;
	set_name("no name");
	set_surname("no surname");
	set_age(16);
	avg_mark = 4;
	count += 1;
}

// constructor with params (with args)
Student::Student(string n, string sname, int a, float mark) {
	//cout << "constructor with params" << endl;
	set_name(n)
	set_surname(sname);
	set_age(a);
	avg_mark = mark;
	count += 1;
}


Student::Student(float mark) {
	//cout << "constructor with params" << endl;
	avg_mark = mark;
}

Student::~Student() {
	count -= 1;
}


string Student::convert_to_string() {
	return name + " " + surname + " age = " + to_string(age)
		+ ", average mark = " + to_string(avg_mark) + ")";
}
