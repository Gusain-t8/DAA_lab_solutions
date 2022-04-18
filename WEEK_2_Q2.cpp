/*Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k]. */

#include<iostream>
using namespace std;
void func(int a[],int n)
{
    int i,j=n-1,s=0,k,flag=0;
    while(j>=0)
    {
        for(i=0;i<j;i++)
        {
            s=a[i]+a[j];
            for(k=j;k<n;k++)
            {
                if(s==a[k])
                {
                    cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                    flag=1;
                    break;
                }
            }
        }
        j--;
    }
    if(flag!=1)
        cout<<"not sequence found"<<endl;
}
int main()
{
    int i,j,n,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        func(a,n);
    }
}
