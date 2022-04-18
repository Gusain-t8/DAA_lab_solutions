/*Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any 
duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n)) */

//Using QUICK SORT
#include<iostream>
using namespace std;
void swapval(int* i,int* j)
{
    int temp= *i;
    *i=*j;
    *j=temp;
}
int arraypart(int a[],int l,int h)
{
    int pivot,i,j;
    i=l;
    j=h;
    pivot=a[l];
    while(i<j)
    {do{i++;}while(a[i]<=pivot);
    do{j--;}while(a[j]>pivot);
    if(i<j)
    {swapval(&a[i],&a[j]);}
    }
    swapval(&a[j],&a[l]);
    return j;
}
void quicksort(int a[],int l,int h)
{   int pivot;
    if(l<h)
    {
        pivot=arraypart(a,l,h);
        quicksort(a,l,pivot);
        quicksort(a,pivot+1,h);

    }
}
int main()
{
    int l,t,i,j,flag,n;
    cin>>t;
    for(i=0;i<t;i++)
    {   flag=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        quicksort(a,0,n);
        for(j=0;j<n-1;j++)
        {
            if(a[j]==a[j+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
