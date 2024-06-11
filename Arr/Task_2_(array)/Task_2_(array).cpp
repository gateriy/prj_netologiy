//задача 2 массивы

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

//Напишите программу, которая создаёт массив целых чисел на 10 элементов, 
//выводит на экран все элементы массива, находит минимальный и максимальный элементы массива и выводит их на экран.

const int SIZE = 10; //константа размера массива
std::array <int, SIZE>  InArr() {
	std::array <int, SIZE> Arr_1 = { 3,2,5,6,3,9,65,65,2,5 };
	return Arr_1;
}

//MAX MIN функция
int MaxMinArr(const std::array <int, SIZE>& arr, bool max_min) {

	int res = arr[0];

	for (const auto& i : arr) {

		for (const auto& n :arr){
				
				if (i >= n && res <i && max_min) {
					res = i;
				}
			
				if (i <= n && res > i && !max_min) {
					res = n;
				}

		}
	}
	return res;
}

int main() {

	do {
		std::cout << "Task 2 (arr)";
		std::cout << "\n" << std::endl;

		bool fist_cycle = false;

		for (const auto& i : InArr()) {

			if (fist_cycle) {
				std::cout << ", ";
			}
			fist_cycle = true;

			std::cout << i;

		}
		std::cout << "\n" << std::endl;
		std::cout << "Max array: " << MaxMinArr(InArr(), true) << std::endl;
		std::cout << "Min array: " << MaxMinArr(InArr(), false);
		std::cout << "\n" << std::endl;

	} while (ExitProgram());
}

