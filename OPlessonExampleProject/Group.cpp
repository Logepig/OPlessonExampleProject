
#include "Group.h"


Group::Group(){
	list = NULL;
	size = 0;
	groupname = "No name";
}
Group::Group(Student* ls, int sz, string nm){
	list = ls;
	size = sz;
	groupname = nm;
}
Group::Group(string nm){
	groupname = nm;
	list = NULL;
	size = 0;
 }
Group::~Group(){
	if (list != NULL) {
		delete[] list;
	}
}

string Group::converter(Student ls, int sz, string nm) {
	string msg = "Student list of " + nm + ":";
	for (int i = 0; i < size; i++) {
		Student st = list[i];
		msg += "\n" + to_string(i + 1) + ") " + st.convert_to_string();
	}
}
int Group::getSize(int sz) {
	return size;
}
void Group::add(Student student){
	if (list == NULL) {
		size = 1;
		list = new Student[1];
		list[0] = student;
	}
	else {
		Student* temp = new Student[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}
		temp[size] = student;
		delete[] list;
		list = temp;
		size++;
	}
}
void Group::kick(int index){
	if (list != NULL && index < size && index >= 0) {
		Student* temp = new Student[size - 1];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				temp[j] = list[i];
				j++;
			}	
		}
		delete[] list;
		list = temp;
		size--;
 	}
}
Student Group::get(int index){
	return list[index];
}