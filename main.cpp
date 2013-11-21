#include "StudentManager.h"
#include <iostream>
using namespace std;

int main(){

StudentManager manage;
int option;
while(1){
	cout<<"1.查看学生名单"<<endl
	<<"2.添加学生"<<endl
	<<"3.删除学生"<<endl
	<<"4.按学号录入成绩"<<endl
	<<"5.退出程序"<<endl;
cin>>option;
switch(option){
case 1:
	manage.showList();
	break;
case 2:
	manage.addStudent();
	break;
case 3:
	manage.delStudent();
	break;
case 4:
	int no;
	int grade;
	cout<<"学号："<<endl;
	cin>>no;
	cout<<"成绩：";
	cin>>grade;
	manage.setGrade(no,grade);
	break;
case 5:
	exit(0);
}
}
}