// siaod.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>
#include <time.h>
#include <iomanip>
using namespace std;
int factorial(int n)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}
double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((double)(x1 - x2) * (x1 - x2) + (double)(y1 - y2) * (y1 - y2));
}
void FindY(double x)
{
	if (x >= -2 && x <= 2)cout << x * x << endl;
	else if (x < -2 || x > 2)cout << 4;
}
void Norm(vector<double>& v)
{
	int i;
	double max;
	max = v[0];
	for (i = 1; i < v.size(); i++) if (v[i] > max) max = v[i];
	for (i = 0; i < v.size(); i++) v[i] = v[i] / max;
}
void buble_sort(double* arr, int size);
void print_array(double* arr, int size);
int main()
{
	setlocale(LC_ALL, "RUS");
	// LAB 2 
// #TASK 1
/*nt x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1,y1,x2,y2) << endl;
	*/
// #TASK 2
	/*double x;
	cin >> x;
	FindY(x);*/

// #TASK 3
	setlocale(LC_ALL, "Ru");
	/*double x, y;
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
		if (((x <= x1 && y <= y1) && (x >= x2 && y >= y2)) || ((x * x + y * y <= r) && (x <= x3 && y <= y3))||(x != -0.5 && y != 0.5) && (x != 0.5 && y != -0.5)) cout << "Точка входит в область" << endl;
		else cout << "Точка не входит в область" << endl;
	}
	else cout << "Неверное значение радиуса!" << endl;*/
	//2-Я  2 3 задание ЛАБА ДОДЕЛАТЬ!!!!!!!!!!!!!
//LAB 3 
//#TASK 1
/*int n; cout << "Введите N: " << endl; cin >> n;
double res = 1;
for (double i = 1; i <= n; i++)
{
	res *= (1.0 + (1.0 / pow(i,2)));
}
cout << res << endl;*/
//#TASK 2
/*int n; cout << "Введите N: " << endl; cin >> n;
double x; cout << "Введите X: " << endl; cin >> x;
double res = 1;
for (int i = 1; i <= n; i++)
{
	res *= (1.0 + (sin(i*x) / factorial(i)));
}
cout << res << endl;*/
//#Task 3
	/*double x, y, h; cout << "Введите x, y, h" << endl;
	cin >> x >> y >> h;
	for (double i = x; i <= y; i += h)
	{
		cout << (1.0 + exp(i)) << " " << i <<endl;
	}*/
	//LAB 4 
//#TASK 1
/*	int k = 0, j = 1;
	double s = 0, x, e, i;
	cout << "введите x и  e\n";
	cin >> x >> e;
	do
	{
		i = ( (pow(-1,k)*pow(x,4*k+1)) / (factorial(2*k)*(4*k+1) ));
		s += i;
		j = -j;
		k += 1;
	} while (abs(i) >= e);
	cout << "e = " << e << "\n";
	cout << "сумма = " << s << "\n";*/

//#TASK 2
	//sinh(x); x, e; ряд тейлора.
	/*double k = 3, j = 1;
	double s = 0, x, e, i;
	cout << "введите x и  e\n";
	cout << sinh(0.5);
	cin >> x >> e;
	do
	{
		i = (x + pow(x,k)/factorial(k));
		s += i;
		j = -j;
		k += 2;
		cout << s <<"\t"<< sinh(s) <<endl;
	} while (abs(i) >= e);
	cout << "e = " << e << "\n";
	cout << "сумма = " << s << "\n"; */
	
	//LAB 5


//task 3
/*const int n = 5;
int a[n];
for (int i = 0; i < n; i++) cin >> a[i];
bool less = true, nobig = true, big = true, noless = true, nolessbig = true, bigless = true;
for (int i = 1; i < n; i++)
{
	if (less && a[i] >= a[i - 1]) less = false;
	if (nobig && a[i] > a[i - 1]) nobig = false;
	if (big && a[i] <= a[i - 1]) big = false;
	if (noless && a[i] < a[i - 1]) noless = false;
	if (nolessbig && a[i-1] > a[i])nolessbig = false;
	if (bigless && a[i-1] < a[i])bigless = false;
	if (!less && !nobig && !big && !noless) { cout << "Никакая" << endl; break; }
}
if (less) cout << "Убывающая" << endl;
if (nobig) cout << "Невозрастающая" << endl;
if (big) cout << "Возрастающая" << endl;
if (noless) cout << "Неубывающая" << endl;
if (nolessbig) cout << "Строго возрастающая" << endl;
if (bigless) cout << "Строго убывающая" << endl;*/


//task 11
/*int i,n;
cin >> n;
vector<double> v(n);
for(int j = 0; j < n; j++)
	cin >> v[j];

cout << "Исходный вектор: " << endl;
for (i = 0; i < v.size(); i++) cout << v[i] << " ";
cout << endl;

Norm(v);

cout << "Вектор после нормирования: " << endl;
for (i = 0; i < v.size(); i++) cout << v[i] << " ";
cout << endl;*/
//task 19
/*const int n = 5;
int arr[n];
for (int i = 0; i < n; i++) {
	cin >> arr[i];
}

for (unsigned int i = 0; i < n; i++) { //  i - номер первого не отсортированного элемента
	unsigned int min = i; // min - индекс минимального элемента

	for (unsigned int j = i + 1; j < n; j++) { // ищем минимальный элемент в остатке массива
		if (arr[j] < arr[min]) {
			min = j;
			cout << arr[i] << " ";
		}
		//cout << endl;
	}
	if (min != i) { // если минимальный элемент не на своем месте - переносим его
		int temp_value = arr[i];
		cout << arr[i] << " " << endl;
		arr[i] = arr[min];
		arr[min] = temp_value;
		cout << arr[i] << " ";
	}
}
for (unsigned int i = 0; i < n; i++) cout << arr[i] << " ";*/
int n; cin >> n;
double* a = new double[n];
for (int i = 0; i < n; i++) cin >> a[i];
buble_sort(a, n);
delete[] a;
//LAB 6
//task 3

/*int n;
cin >> n;
n + 1;
for (int k = 0; k < n; k++)
{
	for (int j = 0; j < n; j++)
	{
		if (n != 1)
		{
			cout << n - 1 << endl;
		}
		
	}
}*/

//task 14
/*Среди столбцов целочисленной матрицы
A( n x m)
, содержащих
только положительные элементы, найти столбец с минимальным
произведением элементов.
*/
/*int n, m, i, j, s, first, nom;
int mass[20][20];

cout << "Введите количество столбцов: ";
cin >> n;

cout << "Введите количество строк: ";
cin >> m;
cout << "Введите матрицу, пример:\n\
1 1 1\n\
1 1 1\n\
1 1 1" << endl;
for (i = 0; i < m; i++)
{
	for (j = 0; j < n; j++)
	{
		cin >> mass[i][j];
	}
}


for (i = 0; i < m; i++)
{
	for (j = 0; j < n; j++)
	{
		cout << mass[i][j] << " ";
	}
	cout << endl;
}

s = 1;
first = 1;
nom = 0;

for (i = 0; i < m; i++)  // принимаем произведение первого столбца за минимум
	first *= mass[i][0];


for (i = 1; i < n; i++)
{
	for (j = 0; j < m; j++)
	{
		s = s * abs(mass[j][i]);

	}
	if (s < first)
	{
		nom = i;
		first = s;
	}
	s = 1;
}
cout << "Номер столбца с минимальным произведением элементов: " << nom + 1;*/

	return 0;
}
void buble_sort(double* arr, int size)
{
	double temp;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			cout << arr[j] << " ";
			if (arr[j + 1] < arr[j])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				cout << arr[j] << " ";
			}
			cout << arr[j] << " ";
		}
		cout << arr[i] << " " << endl;
	}
	print_array(arr, size);
}
void print_array(double* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}