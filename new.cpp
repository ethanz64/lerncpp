#include <iostream>
int main()
{
    using namespace std;

    int nights = 1001;
    int *pt =new int;
    *pt = 1001;

    cout<<"nights_value = "<<nights<< ": location = " <<&nights<<endl;
    cout<<"pt_value = " <<*pt<< ": location "<<pt<<endl;



    return 0;
}
