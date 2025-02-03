#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum=num1+num2;
    cout<<setw(20)<<"sum is: "<<sum;
    cout<<endl;



    cout<<noshowpoint;
    float sub = num1-num2;
    cout<<setw(20)<<"Subtraction is: "<<sub;
    cout<<endl;



    float mul= num1*num2;
    cout<<setw(20)<<"Multiplication is: "<<mul;
    cout<<endl;


    double div=num1/num2;
    cout<<setw(20)<<"Division is: "<<div;
    cout<<endl;


    getch();

    return 0;



}
