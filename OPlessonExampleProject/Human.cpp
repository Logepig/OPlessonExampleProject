#include "Human.h"

string Human::get_name() {
	return name;
}

void Human::set_name(string n) {
	name = n;
}

string Human::get_surname() {
	return name;
}

void Human::set_surname(string n) {
	surname = n;
}

int Human::get_age() {
	return age;
}

void Human::set_age(int a) {
	if (a > MIN_AGE && a < MAX_AGE) {
		age = a;
	}
}
int Human::count = 0;

int Human::get_count() {
	return count;
}



// default-constructor (with no-args)
Human::Human() {
	//cout << "default-constructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 16;
	count += 1;
}

// constructor with params (with args)
Human::Human(string n, string sname, int a) {
	//cout << "constructor with params" << endl;
	name = n;
	surname = sname;
	age = a;
	count += 1;
}



Human::~Human() {
	count -= 1;
}

void Human::init(string n, string sname, int a) {
	name = n;
	surname = sname;
	age = a;
}

void Human::init_default() {
	name = "no name";
	surname = "no surname";
	age = 0;
}

string Human::convert_to_string() {
	return name + " " + surname + " age = " + to_string(age);
}
