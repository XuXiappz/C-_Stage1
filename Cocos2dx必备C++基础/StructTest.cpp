#include <iostream>

struct Student 
{
	const char * name;
	int age;
};

int main ()
{
	// Console.OutputEncoding = System.Text.Encoding.Default;
	Student xiaoming;
	xiaoming.name = "小明";
	xiaoming.age = 18;
	std::cout << "Name =" << xiaoming.name << std::endl;
	std::cout << "Age = " << xiaoming.age << std::endl;
	return 0;
}
