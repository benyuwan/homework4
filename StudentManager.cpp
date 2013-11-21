#include "StudentManager.h"
#include <iostream>
using namespace std;

int StudentManager::count = 0;
void StudentManager::showList(){
	for(int i=0;i<count;i++){
		cout<<"学号:"<<list[i]->getNo()<<"   姓名："<<list[i]->getName()<<"   成绩"<<list[i]->getGrade()<<endl;
	}
}
Student * StudentManager::input(){
	int no;
	string name;
	cout<<"请输入学号："<<endl;
	cin>>no;
	cout<<"请输入姓名："<<endl;
	cin>>name;
	Student * result  = new Student(no,name);
	return result;
}
void StudentManager::addStudent(){
	Student * newone = input();
	list[count] = newone;
	count ++;
}

void StudentManager::delStudent(){
	Student * del = input();
	int index = find(del);
	if(-1!=index){
	list[index] = list[count];
	count--;
	}
}

int StudentManager::find(Student * clue){
	for(int i=0;i<count;i++){
		if(clue->getName()==list[i]->getName()) return i;
	}
	return -1;
}

void StudentManager::setGrade(int no,int grade){
	int i;
	for(i=0;i<count;i++){
		if(no==list[i]->getNo())break;
	}
	if(i>=0&&i<count)list[i]->setGrade(grade);
	else cout<<"查无此人！"<<endl;
}