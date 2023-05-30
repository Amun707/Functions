//Модуль № 5. Функции.
#include<iostream>
#include<cstdlib>
#include<ctime>

//функция типа void, не возвращающая в программу никаких значений
void hi() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}


int sum(int num1,int num2) {//функция типа int возвращающая в программу целое число,
	//являющееся суммой двух переданных в нее чисел
	//int result = num1+num2;необязательно, так как посчитать сумму можно прямо в return
	return num1 + num2;//возвращаем num1+num2
}

//функция выводящая переданный массив arr длинною в переданное число length в консоль
void print_arr(int arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b}\n";
}

//функция считающая сумму всех элементов мвссива
int sum_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
		return sum;//возвращает то указываем что нам надо вернуть
}

//Функция выводящая все эл-ты массива большие чем число num
void greater_arr(int arr[], const int length, int num) {
	for (int i = 0; i < length; i++)
		if (arr[i] > num)
			std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int main() {
	system("chcp 1251>nul");
	int n, m;
	
	//Простые функции
	/*
	hi();//процедурная функция
	hi();
	hi();

	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << n << "+" << m << "=" << sum(n, m) << std::endl;

	std::cout<< sum(5,7) << std::endl;
	std::cout << sum(11, 77) << std::endl;*/


	//функции при работе с массивами
	/*const int size = 5;//можно везде писать length
	int arr[size]{ 2,3,6,14,-7 };
	std::cout << "Изначальный массив:\n";
	print_arr(arr, size);//вызов ф-ции, выводящей массив в консоль

	std::cout << "Cумма всех элементов массива: " << sum_arr(arr, size) << std::endl;*/

	//задача 2. Элементы большие чем число
	std::cout << "Задача 2. \nМассив:\n";
	const int size2 = 7;
	int arr2[size2]{ 14,25,78,90,34,26,12 };
	print_arr(arr2, size2);
	std::cout << "Введите число -> ";
	std::cin >> n;

		std::cout << "Элементы большие, чем " << n << ":\n";
		greater_arr(arr2, size2, n);
		std::cout << std::endl;






	return 0;
}