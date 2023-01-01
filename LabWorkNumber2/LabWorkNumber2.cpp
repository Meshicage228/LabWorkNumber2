#include <iostream>
using namespace std;
// Условие задачи : Пользователь вводит 5 чисел, вывести на экран наибольшее число
// Программа проверяет, является ли введенное с клавиатуры число однозначным, двузначным или трехзначным
// Написать калькулятор с помощью switch()
void Prog(int num)
{
	num = abs(num);
	if (num >=0 && num <10)
	{
		cout << " это число однозначное";
	}
	 else if (num >= 10 && num < 100) 
	 {
		cout << " это число двузначное";
	 }
	 else if (num >=100 &&  num <1000)
	 {
		 cout << " это число трехзначное";
	 }
	 if(num >= 1000)
	 {
		 cout << " > трехзначного";
	 }
}
void vivod(char znak, int number1, int number2) {
	if (number2 < 0) {
		cout << number1 << znak << "(" << number2 << ")" << " = ";
	}
	else {
		cout << number1 << znak << number2 << " = ";
	}
}
int main()
{
	setlocale(0, "rus");
	/*int number;
    int array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите число: ";
		cin >> number;
		cout << number;
		Prog(number);
		cout << endl;
		array[i] = number;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << "\t";
	}
	int max = array[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < array[i]) {
			max = array[i];
		}
	}
	cout << endl;
	cout << max << " является наибольшим из введенных \n";
	*/
//Калькулятор
	char oparation;
	cout << "Теперь РАБОТАЕТ КАЛЬКУЛЯТОР! \n";
	cout << "Введите 2 числа : ";
	double chisl1, chisl2;
	cin >> chisl1 >> chisl2;
	cout << "Введите операцию из предложенного списка    + - * /     :";
	cin >> oparation;
	switch (oparation)
	{
	default:
		cout << "Введенная вами операция не существует";
		break;
	case '+':
		vivod(oparation, chisl1, chisl2);
		cout << chisl1 + chisl2;
		break;
	case '-':
		vivod(oparation, chisl1, chisl2);
		cout << chisl1 - chisl2;
		break;
	case '*':
		vivod(oparation, chisl1, chisl2);
		cout << chisl1 * chisl2;
			break;
	case '/':
		if (chisl2 == 0) {
			cout << " Вы хотите поделить на ноль??? Я бы не стал....";
		}
		else
		{
			vivod(oparation, chisl1, chisl2);
			cout << chisl1 / chisl2;
		}
		break;
	}
	return 0;
}
