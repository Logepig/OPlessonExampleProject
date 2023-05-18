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
Student::Student() : Human() {
	//cout << "default-constructor" << endl;
	
	avg_mark = 4;
	count += 1;
}

// constructor with params (with args)
Student::Student(string n, string sname, int a, float mark) : Human(n, sname, a) {
	//cout << "constructor with params" << endl;
	set_name(n);
	set_surname(sname);
	set_age(a);
	avg_mark = mark;
	count += 1;
}


Student::~Student() {
	count -= 1;
}


