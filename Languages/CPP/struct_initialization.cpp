
#include <iostream>



int main(int argc, char* argv[])
{
    struct my_struct{
        int arr[25];
    };
    my_struct *bar;
    std::cout << sizeof(*bar);
}
