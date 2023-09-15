#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	if (b != 0)
	{
		cout << a / b;
	}
	else
	{
		return -1;
	}
	system("pause");
}