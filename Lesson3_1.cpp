#include <iostream>

int main(){
	setlocale(LC_ALL,"Rus");
	bool t = true;
	bool f = false;
	bool result_1 = t || t;
	bool result_2 = f || t;
	bool result_3 = t || f;
	bool result_4 = f || f;
	
	std::cout << "Оператор: ||"<< std::endl;
	std::cout << "true    true    "<< std::boolalpha << result_1 << std::endl;
	std::cout << "false   true    "<< std::boolalpha << result_2 << std::endl;
	std::cout << "true    false   "<< std::boolalpha << result_3 << std::endl;
	std::cout << "false   false   "<< std::boolalpha << result_4 << std::endl;
	std::cout << std::endl;
	
	bool result_5 = t && t;
	bool result_6 = f && t;
	bool result_7 = t && f;
	bool result_8 = f && f;
	
	std::cout << "Оператор: &&"<< std::endl;
	std::cout << "true    true    "<< std::boolalpha << result_5 << std::endl;
	std::cout << "false   true    "<< std::boolalpha << result_6 << std::endl;
	std::cout << "true    false   "<< std::boolalpha << result_7 << std::endl;
	std::cout << "false   false   "<< std::boolalpha << result_8 << std::endl;
	
	return 0;
}
