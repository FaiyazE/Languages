/*
 * File : extern_var.cpp
 */

#include<iostream>
#include "extern_var_util.cpp" // including the contents of a user defined file
using namespace std;

extern int count; // declaration of variable 'count'

int main() {
   cout << "count : " << count << endl;
   count = 1;
   incrementCount();
   cout << "count : " << count << endl;
   return 0;
}
