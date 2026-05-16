#include<iostream>
#include<windows.h>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int first_number;
	int second_number;
	int third_number;
	
	std::cout << "Введите первое число:";
	std::cin >> first_number;
    std::cout << "Введите второе число:";
	std::cin >> second_number;
	std::cout << "Введите третье число:";
	std::cin >> third_number;
	
	second_number > first_number && second_number > third_number && first_number > third_number ? std :: cout << "Результат: " << second_number << " " << first_number << " " << third_number << std :: endl :
	third_number > second_number && third_number > first_number && first_number > second_number ? std :: cout << "Результат: " << third_number << " " << first_number << " " << second_number << std :: endl :
	third_number > second_number && second_number > first_number && third_number > first_number ? std :: cout << "Результат: " << third_number << " " << second_number << " " << first_number << std :: endl :
	first_number > second_number && first_number > third_number && third_number > second_number ? std :: cout << "Результат: " << first_number << " " << third_number << " " << second_number << std :: endl :
    second_number > first_number && second_number > third_number && third_number > first_number ? std :: cout << "Результат: " << second_number << " " << third_number << " " << first_number << std :: endl :
	std :: cout << "Результат: " << first_number << " " << second_number << " " << third_number << std :: endl;
	return 0;
}
