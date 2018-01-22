#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int age ;
	string name ;
	char sex ;

public:
	void display();
	Student();
	Student(int pAge,string pName, char pSex);
};

void Student::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "sex:" << sex << endl;
}

Student::Student()
{
	name = "xiaoming";
	age = 18;
	sex = 'M';
}

Student::Student(int pAge,string pName,char pSex)
{
	name = pName;
	age = pAge;
	sex = pSex;
}

int main(int argc, char const *argv[])
{
	Student std1;
	Student std2 = Student(28,"jiaozhi",'W');
	std1.display();
	std2.display();
	return 0;
}
