using namespace std;
#include<bits/stdc++.h>
void selection_sort(int *a,int n)
{
    int m,id;
    for(int i=0;i<n;i++)
    {
        m=INT_MAX;
        id=-1;
        for(int j=i+1;j<n;j++)  //finding minimum element index from range i to n;
        {
            if(a[j]<m)
            {
                m=a[j];
                id=j;
            }

        }
        if(id!=-1 && a[id]<a[i])
            swap(a[id],a[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    selection_sort(a,n);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
}
