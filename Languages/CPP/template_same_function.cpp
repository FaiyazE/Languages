#include <iostream>





template <type T, type T>
void Add(T a, T b)
{

	int c;
        c = a + b;
        std::cout << "inside withou template arg:" << c << std::endl

}
template <T, T>
void Add(T a, T b)
{

	T c;
        c = a + b;
        std::cout << "Inside with template arg: " << c << std::endl
}
int main(int argc, char **argv)
{
    int a = 6, b = 78;
    float x = 90;
    Add<int,int>(a,b);

    return 0;
}
