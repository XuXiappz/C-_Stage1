#include <iostream>
#include <string>
using namespace std;
class Person 
{
protected:
	string name ;
	int age;
	char sex;

public:
	void display();
	Person();
	Person(string name , int age , char sex);
};
Person::Person()
{
	this->age = 0;
	this->name = "NoName";
	this->sex = 'M';
}

Person::Person(string name ,int age , char sex)
{
	this->name = name;
	this->age = age;
	this->sex = sex;
}
void Person::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "sex:" << sex << endl;
}

class Student:public Person
{
public:
	string school;
	// Student(string school , string stuName ,char stuSex , int stuAge);
	Student(string school , string stuName ,char stuSex , int stuAge):Person(stuName,stuAge,stuSex);//父类构造函数的参数列表一定要与子类构造函数参数列表相同,如果不同,会编译报错
};

// Student::Student(string school , string stuName ,char stuSex , int stuAge)
Student::Student(string school , string stuName ,char stuSex , int stuAge):Person(stuName,stuAge,stuSex)
{
	this->school = school;
	this->name = stuName;
	this->sex = stuSex;
	this->age = stuAge;
}

int main(int argc, char const *argv[])
{
 	Student *stu = new Student("the China West Nomarl Universty","xiaoxu",'W',23);
 	stu->display();
 	delete stu;
 	
 	return 0;
}