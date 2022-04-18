/*Given an already sorted array of positive integers ,design an algorithm and implement it using a program to find whether the given key is present int the arrat or nit .
Also find the total number of comparision for each case.*/ 

//Using BINARY SEARCH
#include<iostream>
using namespace std;
int main()
{
    int i,j=0,k,l,u,m,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    l=0;
    u=n-1;
    while(l<=u)
    {
        m=(u+l)/2;
        if(a[m]==k)
        {
            cout<<"Present"<<endl;
            break;
        }
        else if(k<a[m])
            u=m-1;
        else
            l=m+1;
        j++;
    }
    cout<<j<<" comparisons";

}
