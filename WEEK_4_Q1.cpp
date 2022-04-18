/*Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by dividing the array into two subarrays and combining these subarrays
after sorting each one of them. Your program should also find number of comparisons and
inversions during sorting the array. */


//Using MERGE SORT
#include<iostream>
using namespace std;
int c;
void mergearray(int a[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int b[h+1];
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    c++;
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=h)
        b[k++]=a[j++];
    for(i=l;i<=h;i++)
        a[i]=b[i];
}
void mergesort(int a[],int l,int h)
{   int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        mergearray(a,l,mid,h);
    }
}
int InvCount(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                    s++;

    return s;
}
int main()
{
    int n,t,i,j,s;
    cin>>t;
    for(i=0;i<t;i++)
    {   c=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        s=InvCount(a,n);
        mergesort(a,0,n-1);

        for(j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl<<"comparisions: "<<c<<endl;
        cout<<"inversions: "<<s<<endl;



    }
}
