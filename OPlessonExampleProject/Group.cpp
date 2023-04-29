
#include"Group.h"


Group();
Group(Student* ls, int sz, string nm);
Group(string nm);
~Group();

string converter(Student ls, int sz, int nm);
int getSize(int sz);
void add(Student student);
void kick(Student student);
Student get(int index);