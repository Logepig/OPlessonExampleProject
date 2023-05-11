#include "Managerconnector.h"

float Manager::calcStudentsAvgAge(Group group) {
	
	float avg = 0;
	for (int i = 0; i < group.getSize(); i++) {
		Student st = group.get(i);
		avg += st.get_age();
	}

	return avg /= group.getSize();
}
float Manager::calcStudentsAvgMark(Group group) {
	float avg = 0;
	for (int i = 0; i < group.getSize(); i++) {
		Student st = group.get(i);
		avg += st.get_avg_mark();
	}

	return avg /= group.getSize();
}

Student Manager::findBestStudents(Group group) {
	Student st = group.get(0);
	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).get_avg_mark() > st.get_avg_mark()) {
			st = group.get(i);
		}
	}
	return st;

}

Student Manager::findWorstStudents(Group group) {
	Student st = group.get(0);
	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).get_avg_mark() < st.get_avg_mark()) {
			st = group.get(i);
		}
	}
	return st;
}
