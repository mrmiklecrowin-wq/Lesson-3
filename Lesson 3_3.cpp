#include<iostream>
#include<string>
#include<windows.h>

int main(){
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	std::string gender;
	std::string star_sign;
	unsigned short age = 0;
	
	
	std::cout << "Введите ваш пол : " << std::endl;	
	std::cin >> gender;
	std::cout << "Введите ваш знак задиака : " << std::endl;	
    std::cin >> star_sign;	
	std::cout << "Введите ваш возраст : " << std::endl;	
    std::cin >> age;
	
	
	if ((gender == "мужчина" || gender == "Мужчина") && ((star_sign == "рыбы" || star_sign == "Рыбы") || (star_sign == "рак" || star_sign == "Рак" ) || (star_sign == "скорпион" || star_sign == "Скорпион" )) && age < 40) {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
	}
	
    else if((gender == "женщина" || gender == "Женщина") && ((star_sign == "телец" || star_sign == "Телец") || (star_sign == "дева" || star_sign == "Дева") || (star_sign == "козерог" || star_sign == "Козерог")) && (age >= 15 && age <= 30)) {
		std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << std::endl;
	}	
	
	else {
		std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;

	}
	return 0;
}
