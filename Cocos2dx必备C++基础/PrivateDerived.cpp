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

class Student : private Person
{
public:
	string school;
	void showSchool();
};

void Student::showSchool()
{
	cout << "the School of Student:" << school << endl;
}

int main(int argc, char const *argv[])
{
	Person * p = new Person();
	p->name = "Sameen Xu";
	p->age = 23;
	p->display();

	Student *pStu = new Student();
	pStu->school = "the China West Nomarl Universty ";
	pStu->showSchool();
	// pStu->name = "Sammen";//编译错误 原因私有继承,导致其基类的成员变量和方法在子类中都变成了私有的了
	// pStu->age = 23;//编译错误
	// pStu->display();//编译错误
	return 0;
}
