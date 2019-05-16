using namespace std;
#include<bits/stdc++.h>
void merg(int *a,int *b,int n1,int *c,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i++];
        }
        else
            a[k]=c[j++];
        k++;
    }
    while(i<n1)
    {
        a[k++]=b[i++];
    }
    while(j<n2)
    {
        a[k++]=c[j++];
    }

}
void mergesort(int *a,int n)
{
    if(n<2)
        return;
    int mid=n/2;
    int b[mid],c[n-mid];
    for(int i=0;i<mid;i++)
        b[i]=a[i];
    for(int i=mid;i<n;i++)
        c[i-mid]=a[i];
    mergesort(b,mid);
    mergesort(c,n-mid);
    merg(a,b,mid,c,n-mid);
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
    mergesort(a,n);
    //for(int i=0;i<n;i++)
      //  cout<<a[i]<<" ";
}
