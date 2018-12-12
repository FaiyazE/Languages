#include <iostream>
using namespace std;

void fun(int &b)
{
	b=20;
}

int main()
{
	int a =10;

	fun(a);

	cout<<"Value of A: "<<a<<endl;
	return 0;
}
