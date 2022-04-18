/*Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given
key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n)) */

#include<iostream>
using namespace std;
int func(int a[],int n,int k,int s)
{   int i,j=n-1,res=-1,m;

    while(i<=j)
    {
        m=(i+j)/2;
        if(k==a[m])
        {
            res=m;
            if(s==1)
                j=m-1;
            else
                i=m+1;
        }
        else if(k<a[m])
            j=m-1;
        else
            i=m+1;

    }
    return res;
}
int main()
{
    int i,j,n,t,k,f,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
        f=func(a,n,k,1);
        l=func(a,n,k,0);
        if(f==-1)
            cout<<"not found"<<endl;
        else
            cout<<k<<"-"<<l-f+1<<endl;
    }
}
