#include<iostream>
using namespace std;

int main()
{  
	int track[]={10,20,30,40},*striker;

	striker=track;
	track[1]+=30;
	cout<<"Striker>"<<*striker<<endl;
	*striker-=10;
	striker++;
        cout << "striker : %p" << striker << endl;
        cout << "striker : %p" << (striker + 1) << endl;
	cout<<"Next@"<<*striker<<endl;
	striker+=2;
	cout<<"Last@"<<*striker<<endl;
	cout<<"Reset To"<<track[0]<<endl;

	return 0;
}
