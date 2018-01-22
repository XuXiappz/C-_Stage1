#include <iostream>
union Student
{
	const char * name;
	int age;
}s;

int main(int argc, char const *argv[])
{
	s.name = "Tony";
	// s.age = 18;
	std::cout << "Name = " << s.name  << std::endl;
	// std::cout << "Age" << s.age << std::endl;
	return 0;
}