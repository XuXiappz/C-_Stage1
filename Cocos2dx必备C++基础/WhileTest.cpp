#include <iostream>

int main(int argc, char const *argv[])
{
	// int i = 100;
	// int r,s,t;
	// while (i <1000){
	// 	r = i / 100;
	// 	s = ( i - r * 100 ) / 10;
	// 	t = (i - r * 100 - s * 10);
	// 	if ( i == r * r * r + s * s * s + t * t * t) {
	// 		std::cout << " i  = " << i << std:: endl;
	// 	}
	// 	i ++;
	// }


	// int i = 100;
	// int r , s , t ;
	// do {
	// 	r = i /100 ;
	// 	s = (i - r * 100) / 10;
	// 	t = i - r * 100 - s * 10 ;
	// 	if (i == r * r * r + s * s * s + t * t * t){
	// 		std::cout << "i = " << i << std:: endl;
	// 	}
	// 	i ++ ;
	// }while(i < 1000);

	int i = 8;
	int r,s;
	r = 0;
	s = 0;
	for (int j = 0; j < i ; j ++){
		std::cout << "j = " << j << std::endl;
		std::cout << "j*j = " << j * j << std::endl;
		std::cout << "j*j*j = " << j * j * j << std::endl;
	}

	return 0;
}