#include <cmath>
#include <iostream>
using namespace std;

double calculated(double num1,double num2, char op) {
	double res;
	if (op == '/' && num2 == 0) {
		return 0;
	}
	switch (op)
	{
	case '+': return num1 + num2;
	case '-': return num1 - num2;
	case '/': return num1 / num2;
	case '*': return num1 * num2;
	default: return 0;
	}
}

double showFactor(double num1) {
	double res = 1;
	for (int i = 1; i <= num1; i++)
	{
		res *= i;
	}
	return res;
}

double showDegree(double num, double degree) {
	return pow(num, degree);
}

double showSquareNum(double num) {
	return sqrt(num);
}

double negativ(double num) {
	if (num < 0) {
		num *= -1;
	}
	 num *= -1;
	 return num;
}
int main()
{
	setlocale(0, "");
	cout << "Выберите калькулятор\n[1] Простой\n[2] Расширенный\n";
	int menu;
	cin >> menu;
	switch (menu) {
	case 1: {
		cout << "Введите первое число\n";
		double usernum1;
		cin >> usernum1;
		cout << "Введите второе число\n";
		double usernum2;
		cin >> usernum2;
		cout << "Введите символ операции(Сложение, вычитание, деление или умножжение)\n";
		char usersym;
		cin >> usersym;
		cout << "Результат: " << calculated(usernum1, usernum2, usersym) << "\n";
	}
	break;
	case 2: {
		int menu2;
		cout << "Выберите действие\n[1] Факториал числа\n[2] Возведение в степень числа\n[3] Найти квадаратный корень из числа\n[4] Преобразование числа магическим образом в отрицательное\n";
		cin >> menu2;
		switch (menu2) {
		case 1: {
			cout << "Введит число, факториал которого нужно вычислить: ";
			double numfact;
			cin >> numfact;
			cout << "Результат: " << showFactor(numfact) << endl;
		}
		break;
		case 2:
		{
			double number;
			cout << "Введит число: ";
			cin >> number;
			cout << "Введите степень в которую надо возвести число: ";
			double degree;
			cin >> degree;
			cout << "Результат: " << showDegree(number, degree) << endl;
		}
		break;
		case 3: {
			double num;
			cout << "Введите число, квадратный корень которого нужно найти: ";
			cin >> num;
			cout << "Результат: " << showSquareNum(num) << endl;
		}
		break;
		case 4:
		{
			cout << "Введите число: ";
			int num;
			cin >> num;
			cout << "Результат: " << negativ(num)<<endl;
		}
		break;
		default:
		{
			cout << "Ошибочка, перезайди в прогу";
		}
		break;




		}
	}
	break;
	}
	int _; cin >> _;
	return 0;
}
