#include "student.h"

int main() {
	Student s1("Ivan", "Ivanov", 14, 7.6); Student s2("Alex", "Invisible", 15, 10);
	Student s3("Peter", "Pen", 12, 4); Student s4("Harry", "Potter", 14, 9.6);
	Student s5("Alice", "Inder", 13, 8);
	Group group; group.add(s1);
	group.add(s2); group.add(s3);
	group.add(s4); group.add(s5);

	Manager manager;
	cout << " Group average age  " << manager.calcStudentsAvgAge(group) << endl; cout << " Group average mark  " << manager.calcStudentsAvgMark(group) << endl;
	Student s = manager.findBestStudents(group);
	cout << "Best group student " << s.convert() << endl;
	s = manager.findWorstStudents(group); cout << "Worst group student " << s.convert() << endl;
	return 0;
	return 0;
}
