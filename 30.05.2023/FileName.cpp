//������ � 5. �������.
#include<iostream>
#include<cstdlib>
#include<ctime>

//������� ���� void, �� ������������ � ��������� ������� ��������
void hi() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}


int sum(int num1,int num2) {//������� ���� int ������������ � ��������� ����� �����,
	//���������� ������ ���� ���������� � ��� �����
	//int result = num1+num2;�������������, ��� ��� ��������� ����� ����� ����� � return
	return num1 + num2;//���������� num1+num2
}

//������� ��������� ���������� ������ arr ������� � ���������� ����� length � �������
void print_arr(int arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b}\n";
}

//������� ��������� ����� ���� ��������� �������
int sum_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
		return sum;//���������� �� ��������� ��� ��� ���� �������
}

//������� ��������� ��� ��-�� ������� ������� ��� ����� num
void greater_arr(int arr[], const int length, int num) {
	for (int i = 0; i < length; i++)
		if (arr[i] > num)
			std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int main() {
	system("chcp 1251>nul");
	int n, m;
	
	//������� �������
	/*
	hi();//����������� �������
	hi();
	hi();

	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << n << "+" << m << "=" << sum(n, m) << std::endl;

	std::cout<< sum(5,7) << std::endl;
	std::cout << sum(11, 77) << std::endl;*/


	//������� ��� ������ � ���������
	/*const int size = 5;//����� ����� ������ length
	int arr[size]{ 2,3,6,14,-7 };
	std::cout << "����������� ������:\n";
	print_arr(arr, size);//����� �-���, ��������� ������ � �������

	std::cout << "C���� ���� ��������� �������: " << sum_arr(arr, size) << std::endl;*/

	//������ 2. �������� ������� ��� �����
	std::cout << "������ 2. \n������:\n";
	const int size2 = 7;
	int arr2[size2]{ 14,25,78,90,34,26,12 };
	print_arr(arr2, size2);
	std::cout << "������� ����� -> ";
	std::cin >> n;

		std::cout << "�������� �������, ��� " << n << ":\n";
		greater_arr(arr2, size2, n);
		std::cout << std::endl;






	return 0;
}