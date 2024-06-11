//задача 1

#include <iostream>
#include <array>
//#include <vector>
//#include <string>

//функция выхода из программы
bool ExitProgram()
{

	char exit_Y_N{};

	do
	{
		//std::cout << std::endl;
		std::cout << "Exit programm (Y/N): ";
		std::cin >> exit_Y_N;
		std::cout << std::endl;

		if (exit_Y_N == 'Y') {
			return false;
			break;
		}
		else if (exit_Y_N == 'N') {
			return true;
			break;
		}
		else {
			std::cout << "Incorrect data!" << std::endl;
			continue;
		}

	} while (true);
}

//Напишите программу, которая создаёт массив целых чисел на 10 элементов
//и выводит на экран все элементы массива через запятую и пробел(, ).

const int SIZE = 10; //константа размера массива
std::array <int, SIZE>  InArr() {
	
	std::array <int, SIZE> Arr_1 = {1,3,5,6,8,9,10,65,2,5};

	return Arr_1;

}


int main() {

	do {
		std::cout << "Task 1 (arr)";
		std::cout << "\n"<<std::endl;

		bool fist_cycle = false;
		
		for (const auto& i : InArr()) {

			if (fist_cycle) {
				std::cout << ", ";
			}
			fist_cycle = true;

			std::cout << i;
			
		}
		std::cout << "\n" << std::endl;
					
	} while (ExitProgram());
}

