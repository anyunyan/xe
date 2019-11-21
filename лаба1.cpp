#include<iostream>
#include <conio.h>      
using namespace std;
void BinOut(unsigned char* Buf, int len) {
	int i, j;
	unsigned char byte;
	for (i = len - 1; i >= 0; i--)
		for (j = 1, byte = Buf[i]; j <= 8; byte <<= 1, j++)
			_putch(byte & 0x80 ? '1' : '0');
	printf("\n");
}

void BinIn(unsigned char* Buf, int len) {
	int i, j;
	char ch;
	for (i = len - 1; i >= 0; i--)
		for (j = 1, Buf[i] = 0; j <= 8; Buf[i] = (Buf[i] << 1) + (ch - '0'), j++) {
			while ((ch = _getch()) != '0' && ch != '1');
			_putch(ch);
		}
	printf("\n");
}
int main() {
	setlocale(LC_ALL, "Russian");
	
	unsigned int n;
	cout << "Введите число типа unsigned int: ";
	cin >> n;
	cout << "Это его двоичное представление:" << endl;
	BinOut((unsigned char*)& n, sizeof(n));
	cout << "Введите двоичное представление числа типа unsigned int :" << endl;
	BinIn((unsigned char*)& n, sizeof(n));
	cout << "Это его значение: " << n << endl;
	// Представление вещественных чисел
	//двойной точности (тип double)
	double x;
	cout << "Введите число типа double: ";
	cin >> x;
	cout << "Это его двоичное представление:" << endl;
	BinOut((unsigned char*)& x, sizeof(x));
	cout << "Введите двоичное представление числа типа double:" << endl;
	BinIn((unsigned char*)& x, sizeof(x));
	cout << "Это его значение: " << x << endl;
	_getch();

		enum seasons { winter = 1, spring = 10, summer = 20, autumn = 30 };
		seasons snow = winter;
		seasons snow_melting = spring;
		seasons heat = summer;
			seasons rain = autumn;
	cout << "Представление символьной константы winter в двоичном коде: \n";
		BinOut((unsigned char*)& snow, sizeof(snow));
			cout << "Представление символьной константы spring в двоичном коде: \n";
	BinOut((unsigned char*)& snow_melting, sizeof(snow_melting));
		cout << "Представление символьной константы summer в двоичном коде: \n";
			BinOut((unsigned char*)& heat, sizeof(heat));
	cout << "Представление символьной константы autumn в двоичном коде: \n";
		BinOut((unsigned char*)& rain, sizeof(rain));
			cout << "Введите представление символьной константы winter в двоичном коде: \n";
	BinIn((unsigned char*)& snow, sizeof(snow));
		cout << "Ее значение: " << snow << endl;
			cout << "Введите представление символьной константы spring в двоичном коде: \n";
				BinIn((unsigned char*)& snow_melting, sizeof(snow_melting));
	cout << "Ее значение: " << snow_melting << endl;
		cout << "Введите представление символьной константы summer в двоичном коде: \n";
			BinIn((unsigned char*)& heat, sizeof(heat));
				cout << "Ее значение: " << heat << endl;
	cout << "Введите представление символьной константы autumn в двоичном коде: \n";
		BinIn((unsigned char*)& rain, sizeof(rain));
			cout << "Ее значение: " << rain << endl;
				return 0;

}
