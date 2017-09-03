#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,4,5,6,3,2,};
    int n=6;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    int mid=n/2;
    for(int k=0;k<mid;k++)
    {
        cout<<arr[k];
    }
    for(int l=0;l<mid;l++)
    {
        cout<<arr[n-l-1];
    }
}
