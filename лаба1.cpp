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
	cout << "������� ����� ���� unsigned int: ";
	cin >> n;
	cout << "��� ��� �������� �������������:" << endl;
	BinOut((unsigned char*)& n, sizeof(n));
	cout << "������� �������� ������������� ����� ���� unsigned int :" << endl;
	BinIn((unsigned char*)& n, sizeof(n));
	cout << "��� ��� ��������: " << n << endl;
	// ������������� ������������ �����
	//������� �������� (��� double)
	double x;
	cout << "������� ����� ���� double: ";
	cin >> x;
	cout << "��� ��� �������� �������������:" << endl;
	BinOut((unsigned char*)& x, sizeof(x));
	cout << "������� �������� ������������� ����� ���� double:" << endl;
	BinIn((unsigned char*)& x, sizeof(x));
	cout << "��� ��� ��������: " << x << endl;
	_getch();

		enum seasons { winter = 1, spring = 10, summer = 20, autumn = 30 };
		seasons snow = winter;
		seasons snow_melting = spring;
		seasons heat = summer;
			seasons rain = autumn;
	cout << "������������� ���������� ��������� winter � �������� ����: \n";
		BinOut((unsigned char*)& snow, sizeof(snow));
			cout << "������������� ���������� ��������� spring � �������� ����: \n";
	BinOut((unsigned char*)& snow_melting, sizeof(snow_melting));
		cout << "������������� ���������� ��������� summer � �������� ����: \n";
			BinOut((unsigned char*)& heat, sizeof(heat));
	cout << "������������� ���������� ��������� autumn � �������� ����: \n";
		BinOut((unsigned char*)& rain, sizeof(rain));
			cout << "������� ������������� ���������� ��������� winter � �������� ����: \n";
	BinIn((unsigned char*)& snow, sizeof(snow));
		cout << "�� ��������: " << snow << endl;
			cout << "������� ������������� ���������� ��������� spring � �������� ����: \n";
				BinIn((unsigned char*)& snow_melting, sizeof(snow_melting));
	cout << "�� ��������: " << snow_melting << endl;
		cout << "������� ������������� ���������� ��������� summer � �������� ����: \n";
			BinIn((unsigned char*)& heat, sizeof(heat));
				cout << "�� ��������: " << heat << endl;
	cout << "������� ������������� ���������� ��������� autumn � �������� ����: \n";
		BinIn((unsigned char*)& rain, sizeof(rain));
			cout << "�� ��������: " << rain << endl;
				return 0;

}
