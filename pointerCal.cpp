#include<iostream>
int main()
{
using namespace std;

int a[5]={1,2,3,4,5};
int* pt;
pt=&a[0];
cout<<"The first number is: "<<*pt<<endl;

pt++;

cout<<"The second number is: "<<*pt<<endl;


return 0;
}
