#include <iostream>
using namespace std;

class Number
{
	private:
		int a;
	public:
		void get_a(int a)
		{
			this->a=a;
			a = 52;
                        Number::a = a;
			cout << "address of class a: " << &this->a << endl; 
			cout << "address of local a: " << &a << endl;
		}
		void put_a()
		{cout<<"a= "<<a<<endl;}
};

int main()
{
	Number N;
	N.get_a(36);
	N.put_a();
	return 0;
}
