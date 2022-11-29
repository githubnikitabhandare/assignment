#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout<<"Enter the Number :";
    cin>>n;

    while(n>=0 && n<=30000)
    {
        i=n%10;

        if(i!=0 && i!=1)
        {
            cout<<"The Number is Not Binary.";
            break;
        }

        n=n/10;

        if(n==0)
        {
            cout<<"The Number is binary.";
            break;
        }
    }
}