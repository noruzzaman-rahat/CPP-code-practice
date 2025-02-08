#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int R;
    double pi=3.14159;
    double volume;

    cin>>R;
    cout<<fixed;
    cout<<setprecision(3);

    volume = (4/3.0)*pi*R*R*R;
    cout<<"VOLUME = "<<volume<<endl;

    return 0;
}
