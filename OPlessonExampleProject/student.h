
#pragma once
#include "Human.h"

class Student : public Human {
private:
	static int count;
	
	float avg_mark;


public:
	static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;

	Student();
	Student(string n, string sname, int a, float mark);
	~Student();


	float get_avg_mark();
	void set_avg_mark(float mark);
	static int get_count();


};
