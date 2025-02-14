#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int H,M;
    cin>>H>>M;

    double hour_angle = (H%12)*30+(M*0.5);
    double minute_angle = M*6;

    double angle = abs(hour_angle - minute_angle);

    angle = min(angle, 360-angle);

    cout<<fixed<<setprecision(7)<<angle<<endl;

    return 0;


}
