#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X;
    double Y;

    double speed;

    cin>>X>>Y;
    cout<<fixed;
    cout<<setprecision(3);

    speed = X/Y;

    cout<<speed<<" km/l"<<endl;


    return 0;
}
