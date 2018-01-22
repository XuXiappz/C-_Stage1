#include <iostream>
#include <string>
using namespace std;

class Student
{
	int age;
	string name;
	char sex;

public:
	// void display()
	// {
	// 	cout << "age: " << age << endl;
	// 	cout << "name:" << name << endl;
	// 	cout << "sex:" << sex << endl;
	// }
	void display();
};

void Student::display()
{
		cout << "age: " << age << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;
}

int main(int argc, char const *argv[])
{
	Student stud1,stud2;
	stud1.display();
	stud2.display();

	return 0;
}