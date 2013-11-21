#include <string>
using std::string;
using std::wstring;
class Student{
public:
	Student(int no,string name,int grade=0):no(no),name(name),grade(grade){}
	int getNo(){
	return no;
	}
	string getName(){
	return name;
	}
	int getGrade(){
	return grade;
	}
	void setGrade(int grade){
	this->grade = grade;
	};
private:
	int no;
	string name;
	int grade;
};