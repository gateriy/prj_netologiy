//задача 4 массивы

#include <iostream>
#include <array>

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

//Напишите программу, которая создаёт и инициализирует неупорядоченный массив целых чисел на 10 
//элементов и сортирует его пузырьком в обратную сторону.
const int SIZE = 10;
std::array <int, SIZE>  InArr() {
	std::array <int, SIZE> Arr_1 = { 5,2,3,4,5,60,70,8,9,10 };
	return Arr_1;
}

//MAX MIN функция
std::array <int, SIZE>  SortArr(const std::array <int, SIZE>& arr, bool max_min) {

	int arr_n{ 0 };
	std::array <int, SIZE> arr_2 = arr;
	bool var_x = false;

	do {
		 var_x = false;
		//for (const auto& i : arr_2) {
		//		std::cout << i << ", ";	}
			for (int n = 0; n < SIZE-1; ++n) {

				if (arr_2[n] < arr_2[n + 1] && !max_min) {

					arr_n = arr_2[n + 1];
					arr_2[n + 1] = arr_2[n];
					arr_2[n] = arr_n;
					var_x = true;
					
				}
				if (arr_2[n] > arr_2[n + 1] && max_min) {

					arr_n = arr_2[n + 1];
					arr_2[n + 1] = arr_2[n];
					arr_2[n] = arr_n;
					var_x = true;

				}


			}
		//	std::cout << "---\t" << var_x << std::endl;		
	} while (var_x);

	return arr_2;
}

int main() {
	char tp = 'D';
	bool type_x = true;
	do {
		std::cout << "Task 4 (arr)";
		std::cout << "\n" << std::endl;

		do {
			std::cout << "Type of sorting (direct/revers) D/R: ";
			std::cin >> tp;
			std::cout << std::endl;

			if (tp == 'D') {
				type_x = true;
				break;
			}
			else if (tp == 'R') {
				type_x = false;
				break;
			}
			else {
				std::cout << "Incorrect data!" << std::endl;
				continue;
			}
		} while (true);

		bool fist_cycle = false;
		std::cout << "Array before sorting:\t";
		for (const auto& i : InArr()) {

			if (fist_cycle) {
				std::cout << ", ";
			}
			fist_cycle = true;
			std::cout << i;
		}
		std::cout << std::endl;

		fist_cycle = false;
		std::cout << "Array after sorting:\t";
		for (const auto& i : SortArr(InArr(), type_x)) {

			if (fist_cycle) {
				std::cout << ", ";
			}
			fist_cycle = true;
			std::cout << i;
		}
		std::cout << "\n" << std::endl;

	} while (ExitProgram());
}


