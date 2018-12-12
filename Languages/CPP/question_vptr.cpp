
#include <iostream>


class A {
public:
	int data[2];
	A(int x, int y):data{x,y}{}; //extended initializer c++11
	virtual void f() {}
	int function(int a, int b) {
		return ((a) + (b));
	}
};

int main(int argc, char *argv[])
{
        /*
	 * In the main function the instance of struct/class A is treated as an array
         * of integers values. On 32-bit architecture the output will be 33 and 
         * on 64-bit arch the output will be 22. This is because there is a 
         * virtual function/method f() in the struct/class whic makes compiler insert 
         * a vptr pointer that points to vtable ( a table of pointers to virtual 
         * functions of class of struct). On 32-bit arch the vptr takes 4 byte of 
         * the class/struct instance and the rest is the data array, whic hold value 33. 
         * On 64-bit arch the vptr takes the 8 bytes so arr[2] represent access to 
         * the first element of the data array, which holds 22.
	*/

	A a(22,33);
	int *arr = (int*)&a;
	std::cout << sizeof(a) << std::endl;        
	std::cout << arr[2] << std::endl;
	std::cout << a.data[0] << std::endl;
	std::cout << a.data[1] << std::endl;
	return 0;
}
