#include "Student.h"
#include <vector>
class StudentManager{
public:
	void showList();
	void addStudent();
	void delStudent();
	void setGrade(int no,int grade);
private:
	Student* list[2000];
	static int count;
	Student * input();
	int find(Student* clue);
};