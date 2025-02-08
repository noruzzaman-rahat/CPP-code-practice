#include <iostream>
using namespace std;

int main() {
    float num;

    cin>>num;

    if(0 <= num && num <= 25)
    {
        cout<<"Intervalo [0,25]" <<endl;
    }
    else if(25<num&&num <=50)
    {
        cout<<"Intervalo (25,50]" <<endl;
    }
    else if(75<num&&num <=100)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }
    else
    {
        cout<<"Fora de intervalo" <<endl;
    }

    return 0;
}


