#include <iostream>
int main(int argc, char const *argv[])
{
	// int number1 = 0;
	// int number2 = 9;
	// int max = 0;
	// if (number1 > number2) {
	// 	max = number1;
	// }
	// else{
	// 	max = number2;
	// }
	// std::cout << "the maximum is " << max << std::endl;
	// return 0;

	int score = 0;
	std::cin >> score;
	long long int scoreVar = score/10;
	char resChar = ' ';
	switch (scoreVar){
		case 9 :
			resChar = 'A';
			break;
		case 8 :
			resChar = 'B';
			break;
		case 7 :
			resChar = 'C';
			break;
		case 6 :
			resChar = 'D';
			break;
		case 5 :
			resChar = 'E';
			break;
		default :
			resChar = 'F';
			break;
	}
	std::cout << "Score = " << score << std::endl;
	std::cout << "ScoreLevel = " << resChar << std::endl;

	return 0;
}