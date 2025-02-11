#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4, exam_score, average, final_average;

    cin>>n1>>n2>>n3>>n4;
    //weights
    int w1=2, w2=3, w3=4, w4=1;

    //calculate weighted average
    average = ((n1*w1)+(n2*w2)+(n3*w3)+(n4*w4)) / (w1+w2+w3+w4);
    cout<<fixed<<setprecision(1);
    cout<< "Media: "<<average<<endl;

    if(average >= 7.0)
    {
        cout<< "Aluno aprovado." <<endl;
    }
    else if (average < 5.0)
    {
        cout<< "Aluno reprovado." <<endl;
    }
    else
    {
        cout<<"Aluno em exame." <<endl;
        cin>> exam_score;
        cout<< "Nota do exame: " <<exam_score <<endl;
        final_average = (average+exam_score)/2;

        if (final_average >=5.0)
        {
            cout<< "Aluno aprovado." <<endl;
        }
        else
        {
            cout<< "Aluno reprovado." <<endl;
        }
        cout<< "Media final: "<< final_average <<endl;
    }
    return 0;
}
