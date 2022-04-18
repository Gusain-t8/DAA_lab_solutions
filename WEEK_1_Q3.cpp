/*Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in 
the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on.
Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key.
(Complexity < O(n), where n is the number of elements need to be scanned for searching)*/

//Using JUMP SEARCH
#include<iostream>
#include<cmath>
using namespace std;
int jumpsearch(int a[],int n,int k)
{
    int jump,steps,prev;
    jump=sqrt(n);
    steps=jump;
    prev=0;
    while(a[(min(n,steps)-1)]<k)
    {
        prev=steps;
        steps+=jump;
        if(prev>=n)
            return -1;
    }
    while(a[prev]<k)
    {
        prev++;
        if(prev==min(n,steps))
            return -1;

    }
    if(a[prev] == k)
        return prev;
    return 0;
}
int main()
{
    int i,n,t,j,k,res;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
        res=jumpsearch(a,n,k);
        if(res==-1)
            cout<<"not found"<<endl;
        else
            cout<<"found @ "<<res+1<<endl;
    }

}
