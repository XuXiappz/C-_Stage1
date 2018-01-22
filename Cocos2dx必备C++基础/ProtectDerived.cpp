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

class Student : protected Person //只能通过继承的方式访问
{
public:
	string school;
	void showSchool();
	void showParentsInfo();
};

void Student::showSchool()
{
	cout << "the School of Student:" << school << endl;
}

void Student::showParentsInfo()
{
	cout << "name:" << this->name << endl;
	cout << "age:" << this->age << endl;
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
	pStu->showParentsInfo();


	// pStu->name = "Sammen";//编译错误 原因受保护继承只能在其子类中访问和调用,main函数(外面)中的访问并非是通过子类来访问的
	// pStu->age = 23;//编译错误
	// pStu->display();//编译错误
	delete pStu;
	return 0;
}
