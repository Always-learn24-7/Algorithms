using namespace std;
#include<bits/stdc++.h>
void insertion_sort(int *a,int n)
{
    for(int i=1;i<n;i++)    //i=1,since 1st element is always sorted;
    {
        int k=a[i];
        int j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    insertion_sort(a,n);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
}

