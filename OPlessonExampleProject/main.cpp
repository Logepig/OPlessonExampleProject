
#include "Group.h"
#include "Managerconnector.h"

int main() {
	Student s1("Ivan", "Ivanov", 14, 7.6); 
	Student s2("Alex", "Invisible", 15, 10);
	Student s3("Peter", "Pen", 12, 4); 
	Student s4("Harry", "Potter", 14, 9.6);
	Student s5("Alice", "Inder", 13, 8);
	Student s6;
	Student s7;
	Student s8;
	Student s9;
	Student s10;
	cout << "Count of students: " << Student::get_count() << endl;
	return 0;
}
