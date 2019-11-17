// siaod.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	// LAB 2  
// #TASK 1
/*double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((double)(x1 - x2) * (x1 - x2) + (double)(y1 - y2) * (y1 - y2));
}
int x1, y1, x2, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	cout << distance(x1,y1,x2,y2) << endl;
*/
// #TASK 2
/*double FindY(double x)
{
	double y;
	if (x >= -2 || x <= 2)
	{
		y = x * x;
	}
	else if (x < -2 || x > 2)
	{
		cout << 4;
	}
	return y;
}
int x, y;
cin >> x;
for (double i = -2; i <= 2; i++)
{
	cout << FindY(x) << endl;
}
*/
// #TASK 3
/*
	setlocale(LC_ALL, "Ru");
	double x, y;
	int x1 = 0, // угол №1 прямоугольника
			y1 = 0, // угол №1 прямоугольника
				x2 = -1,// угол №2 прямоугольника
					y2 = -1,// угол №2 прямоугольника
						r = 1,// радиус
							x3 = 1, //ограничение окружности
								y3 = 1; // ограничение окружности
	if (r > 0)
	{
		cout << "Введите координаты точки: " << endl;
		cin >> x >> y;
		if (((x <= x1 && y <= y1) && (x >= x2 && y >= y2)) || ((x * x + y * y <= r) && (x <= x3 && y <= y3))) cout << "Точка входит в область" << endl;
		else cout << "Точка не входит в область" << endl;
	}
	else cout << "Неверное значение радиуса!" << endl;
*/
	//LAB 3 
//#TASK 1
/*int n; cout << "Введите N: " << endl; cin >> n;
double res = 1;
for (double i = 1; i <= n; i++)
{

	res *= (1.0 + (1.0 /pow(i,2)));
}
cout << res << endl; */
//#TASK 2
/*
int fact(int n)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	else return n * fact(n - 1);
}
int n; cout << "Введите N: " << endl; cin >> n;
double x; cout << "Введите X: " << endl; cin >> x;
double res = 1;
for (int i = 1; i <= n; i++)
{
	res *= (1.0 + (sin(i*x) / fact(i)));
}
cout << res << endl;*/
//#Task 3
	/*for (double i = 0.5; i <= 0.6; i += 0.01) cout << (1.0 + exp(i)) << endl;*/
	//LAB 4 
//#TASK 1

