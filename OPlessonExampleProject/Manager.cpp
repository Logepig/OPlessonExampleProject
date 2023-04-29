#include "Managerconnector.h"

float Manager::calcStudentAvgAge(Group group) {
	
	float avg = 0;
		for (int i = 0; i < group.getSize(); i++) {
			Student st = group.get(i);
			avg += st.get_age();
		}
		return avg / group.getSize();
}