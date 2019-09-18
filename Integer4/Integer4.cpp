#include <iostream>
using namespace std;

int main()
{
	cout << "Enter length of the longest line A\n";
	int a, b;
	cin >> a;
	cout << "Enter length of the shortest lineB\n";
	cin >> b;
	int c = a / b;
	cout << "Amout of B lines on A line = " << c;
	return 0;
}