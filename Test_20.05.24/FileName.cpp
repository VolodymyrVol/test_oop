#include <iostream>
using namespace std;

template<typename T, typename B>
void Sum(T a, B b)
{
	cout << a + b << endl;
}
template<typename T, typename B>
void Min(T a, B b)
{
	cout << a - b << endl;
}
template<typename T, typename B>
void Degree(T a, B b)
{
	cout << a * b << endl;
}
template<typename T, typename B>
void Dis(T a, B b)
{
	cout << a / b << endl;
}

int main()
{
	int a = 10;
	double b = 20;
	Sum(a, b);
	Min(a, b);
	Degree(a, b);
	Dis(a, b);
}