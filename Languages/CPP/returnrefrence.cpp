using namespace std;
#include <iostream>

int X; //Global variable

//prototype of funToSetX()
int & funToSetX();
int & funToSetX1();

int main()
{
    X = 100;
    
    int Y;
    
    Y = funToSetX1();
    cout<<"1.Value of x is : "<< Y<<endl;
    
    funToSetX() = 200;
    
    Y = funToSetX();
    cout<<"2.Value of X is : "<< Y<<endl;
        
    return 0;    
}

//Definition of funToSetX()
int & funToSetX()
{
    return X;    
}
//Definition of funToSetX()
int & funToSetX1()
{
    int x = 100;
    return x;    
}

