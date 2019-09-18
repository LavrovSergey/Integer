#include <iostream>
using namespace std;
int main()
{
	cout << "Enter kilograms to see how many tons it is\n";
	int a;
	cin >> a;
	int b = a / 1000;
	if (b == 1) { cout << "It is " << b << " ton"; }
	else (cout << "It is " << b << " tones");
}
