/*Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
implement it using a program to find which alphabet has maximum number of occurrences and
print it. (Time Complexity = O(n)) (Hint: Use counting sort)  */

#include<iostream>
using namespace std;
int findmax(char a[],int n)
{
    char res=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>res)
            res=a[i];
    return res;
}
int main()
{
    int i,j,t,n,k,res,rep;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        char a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        res=findmax(a,n);
        int b[res];
        for(k=0;k<res+1;k++)
            b[k]=0;
        for(j=0;j<n;j++)
            b[a[j]]++;
        rep=b[0];
        for(j=1;j<res+1;j++)
            if(b[j]>rep)
                rep=b[j];
        for(j=0;j<res+1;j++)
        {
            if(rep>1 && b[j]==rep)
            {
                printf("%c - %d",j,b[j]);
                cout<<endl;
                break;
            }

        }
        if(rep<=1)
            cout<<"NO DUPLICATE"<<endl;
    }
}
