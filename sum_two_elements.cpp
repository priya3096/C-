#include<iostream>
#include <unordered_map>
using namespace std;
int how_many_pairs(int arr[], int n, int sum)
{
    int twice_count=0;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    for(int j=0;j<n;j++)
    {
        twice_count+=m[sum-arr[j]];
        if(sum-arr[j]==arr[j])
            twice_count--;

    }
    return twice_count/2;
}
int main()
{
    int arr[]={1,-1, 7, 5};
    int h=how_many_pairs(arr, 4, 6);
    cout<<h;
}
