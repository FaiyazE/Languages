
#include <iostream>

void print(int a , int b)
{
   std::cout << "a : " << a << std::endl;
   std::cout << "b : " << b << std::endl;
   return;

}
void add(int &a, int &b)
{
	a = 32;
        b = 64;
    return;
}


/*int main(int argc, char *argv[])
{
   int a,b;
   add( a, b);
   print(a,b);
}*/
