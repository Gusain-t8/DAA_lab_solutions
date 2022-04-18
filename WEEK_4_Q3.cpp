/*Given an unsorted array of integers, design an algorithm and implement it using a program to
find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))  */

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
    do
    {do{i++;}while(a[i]<=pivot);
    do{j--;}while(a[j]>pivot);
    if(i<j)swapval(&a[i],&a[j]);
    }while(i<j);
    swapval(&a[l],&a[j]);
    return j;
}
int quicksort(int a[],int l,int h,int k)
{   int pivot;
    if(l<h)
    {
        pivot=arraypart(a,l,h);
        if(pivot==k)
            return a[pivot];
        else if(pivot<k)
            return quicksort(a,pivot+1,h,k);
        else
            return quicksort(a,l,pivot-1,k);

    }
    return 0;
}
int main()
{
    int l,t,i,j,k,n,res;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
    res=quicksort(a,0,n,k-1);
    if(res==0)
        cout<<"NO";
    else
        cout<<res<<endl;


    }

}
