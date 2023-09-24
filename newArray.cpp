#include<iostream>
int main()
{
	using namespace std;

	double *pt = new double [3];
	pt[0] = 0.2;
	pt[1] = 0.5;
	pt[2] = 0.8;

	cout<< "pt[1] is "<<pt[1]<<endl;
	pt = pt + 1;
	cout<< "pt++" <<endl;
	cout<< "Now, pt[0] is" <<pt[0]<<endl;
	cout<< "now, pt[1] is" <<pt[1]<<endl;

	return 0;
}
