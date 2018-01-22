#include <iostream>

// int main(int argc, char const *argv[])
// {
// 	for (int k = 0; k < 10 ; k ++){
// 		if (k == 3 ){
// 			// break;
// 			continue;
// 		}
// 	std::cout << "k = " << k << std::endl;
// 	}
// 	std::cout << "Game Over!" << std::endl;
// 	return 0;
// }


int main(int argc, char const *argv[])
{
	for (int i = 0 ; i < 10 ; i ++){
		for (int j = 0 ; j < 10 ; j ++){
			if (i == 3 && j == 3){
				std::cout << "i =" << i << "j = " << j << std::endl; 
				goto label;
			}
			// std :: cout << "i = " << i << "j = " << j << std::endl;
		}
	}
	label :
	std::cout << "Game Over !" << std::endl;
	return 0;
}