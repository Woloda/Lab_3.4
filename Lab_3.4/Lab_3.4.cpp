#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double y;
	double R;

	cout << "x = ";  cin >> x;
	cout << endl;
	cout << "y = ";  cin >> y;
	cout << endl;
	cout << "R = ";  cin >> R;
	cout << endl;


	if (y >= sqrt(R * R - (pow(x + R, 2))) - R && y <= 0 && x >= -R)
		cout << "Так1" << endl;
	else
		cout << "Ні1" << endl;
	if (y <= sqrt(R * R - (pow(x - R, 2))) && y >= 0)
		cout << "Так2" << endl;
	else
		cout << "Ні2" << endl;

	cin.get();
	return 0;
}