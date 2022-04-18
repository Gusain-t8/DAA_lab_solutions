/*Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal 
to a given key, K.  */

#include<iostream>
using namespace std;
void sortfunc(int A[], int n){
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}
void func(int a[],int n,int s)
{
    int i,j=n-1,k,flag=0,d=0;
    while(j>=0)
    {
        for(i=0;i<j;i++)
        {
            d=a[j]-a[i];
                if(s==d)
                {
                    flag++;
                    break;
                }
            }
        j--;
    }
    if(flag==0)
        cout<<"not found"<<endl;
    else
        cout<<flag<<endl;
}
int main()
{
    int i,j,n,t,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
        sortfunc(a,n);
        func(a,n,k);
    }
}
