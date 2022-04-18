/*You have been given two sorted integer arrays of size m and n. Design an algorithm and
implement it using a program to find list of elements which are common to both. (Time
Complexity = O(m+n))  */


#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>m;
    int a[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    int b[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    i=0;j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            cout<<a[i]<<" ";
            i++;j++;
        }
    }
}
