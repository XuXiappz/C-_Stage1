#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	string name ;
	int age;
	double hight;
	char sex;

public:
	Student(string name , int age , double hight);
	Student(string pName , int pAge, double pHight, char pSex);
};

Student ::Student(string name ,int age ,double hight)
{
	this->name = name;//由于构造函数的形参名和成员变量的名相同,所以有不同的作用域,就需要this指针的获得成员变量
	this->age = age;
	this->hight = hight;
	this->sex = 'M';
}

Student::Student(string pName, int pAge, double pHight, char pSex)
{
	name = pName;//实际上是省略了this指针,this->name = pName
	age = pAge;
	hight = pHight;
	sex = pSex;
}

int main(int argc, char const *argv[])
{
	Student Stu1 = Student("xiaoming",18,178);
	Student Stu2 = Student("xiaohong",19,168,'W');
	cout << "Stu1.name = " << Stu1.name << endl;
	cout << "Stu2.name = " << Stu2.name << endl;
	return 0;
}