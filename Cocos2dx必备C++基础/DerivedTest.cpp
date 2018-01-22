#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
	void display();
};


void Person::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
}

class Student: Person //成员变量的访问跟继承方式相关: class Student:public Person 这样就可以了
{
public:
	string school;
};

int main(int argc, char const *argv[])
{
	Person p1 ;
	p1.name = "xiaoming";
	p1.age = 18;
	Student stu;
	stu.name = "xiaohong";
	stu.age = 19;
	stu.school = "the China West Normal Universty";
	p1.display();
	stu.display();
	return 0;
}
//成员变量的访问跟继承方式相关
/*
DerivedTest.cpp(32) : error C2247: 'Person::name' not acc
t' uses 'private' to inherit from 'Person'
        DerivedTest.cpp(8) : see declaration of 'Person::
        DerivedTest.cpp(20) : see declaration of 'Student
        DerivedTest.cpp(6) : see declaration of 'Person'
*/