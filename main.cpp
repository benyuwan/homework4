#include "StudentManager.h"
#include <iostream>
using namespace std;

int main(){

StudentManager manage;
int option;
while(1){
	cout<<"1.�鿴ѧ������"<<endl
	<<"2.���ѧ��"<<endl
	<<"3.ɾ��ѧ��"<<endl
	<<"4.��ѧ��¼��ɼ�"<<endl
	<<"5.�˳�����"<<endl;
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
	cout<<"ѧ�ţ�"<<endl;
	cin>>no;
	cout<<"�ɼ���";
	cin>>grade;
	manage.setGrade(no,grade);
	break;
case 5:
	exit(0);
}
}
}