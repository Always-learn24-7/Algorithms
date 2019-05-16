using namespace std;
#include<bits/stdc++.h>
int part(int *a,int low,int high)
{
    int pivot=a[high],p=low;
    for(int i=low;i<high;i++)
    {
        if(a[i]<pivot)
        {
            swap(a[i],a[p]);
            p++;
        }
    }
    swap(a[p],a[high]);
    return p;
}
void quicksort(int *a,int low,int high)
{
    if(low<high)
    {
        int p=part(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
