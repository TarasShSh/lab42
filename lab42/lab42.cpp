			// lab42.cpp
			// Шевченко Тарас
			// Лабораторна робота No4.2
			// Табуляція функції, заданої формулою: функція однієї змінної
			// Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std; 
int main() {
	double x, xp, xk, dx, A, B, y, ctg;
	

	cout << "xp = ";
	cin >> xp;
	cout << "xk = ";
	cin >> xk; 
	cout << "dx = ";
	cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;
	
	x = xp;
	ctg = cos(x) / sin(x);
	while (x <= xk) {
		A = x * x*sin((4*x)/3);
		if (x < -5)
			B = ctg;
		else if(x>= -5 && x < 0)
			B = 4 - (x*x)/2;
		else 
			B = log(x*x) - (4*x)/3;
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}