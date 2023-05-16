#pragma once
#include "main.h"
class Human
{
	private:
		static int count;
		string name;
		string surname;
		int age;
		float avg_mark;


	public:
		static const int MIN_AGE = 0;
		static const int MAX_AGE = 160;

		Human();
		Human(string n, string sname, int a);
		

		~Human();

		string get_name();
		void set_name(string n);
		string get_surname();
		void set_surname(string n);
		int get_age();
		void set_age(int a);
		static int get_count();

		void init(string n, string sname, int a);
		void init_default();
		string convert_to_string();
	};



