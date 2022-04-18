/*Given an unsorted array of integers, design an algorithm and implement it using a program to
find whether two elements exist such that their sum is equal to the given key element. (Time
Complexity = O(n log n))       */


#include<iostream>
using namespace std;
int findmax(int a[],int n)
{
    int i,m;
    m=a[0];
    for(i=1;i<n;i++)
        if(a[i]>m)
            m=a[i];
    return m;
}
int main()
{
    int i,j,t,n,k,m,flag,s;
    cin>>t;
    for(i=0;i<t;i++)
    {   flag=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
        m=findmax(a,n);
        int b[m];
        for(j=0;j<m+1;j++)
            b[j]=0;
        for(j=0;j<n;j++)
            {   s=k-a[j];
               if(b[s]!=0 && s>=0 && s<m)
               {
                   cout<<a[j]<<" "<<s<<","<<endl;
                   flag=1;
               }
            b[a[j]]++;
            }
        if(flag==0)
            cout<<"NO SUCH PAIR EXIST"<<endl;

    }
}
