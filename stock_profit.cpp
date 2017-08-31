#include<iostream>
using namespace std;
int find_max_profit(int arr[], int n)
{
    int minprice=arr[0];
    int max_profit=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minprice)
            minprice=arr[i];
        else if(arr[i]-minprice>max_profit)
            max_profit=arr[i]-minprice;
    }
    return max_profit;
}
int main()
{
    int arr[]={120,10,5,70,4,90};
    int profit=find_max_profit(arr, 6);
    cout<<profit;
}
