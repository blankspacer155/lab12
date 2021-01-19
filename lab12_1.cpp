#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double data[],int n,double ans[])
{
    double sumplus=0,sumpow=0,summul=1,suminv=0,max=data[0],min=data[0];
    for(int i=0;i<n;i++)
    {
        sumpow+=data[i]*data[i];
        sumplus+=data[i];
        summul*=data[i];
        suminv+=1/data[i];
        if(data[i]>max)max=data[i];
        if(data[i]<min)min=data[i];
    }
   
     ans[0]=sumplus/n;
    ans[1]=sqrt((sumpow/n)-pow(((sumplus/n)),2));
    ans[2]=pow(summul,(double)1/n);
    ans[3]=n/suminv;
    ans[4]=max;
    ans[5]=min; 
}