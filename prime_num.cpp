#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=2;
    int i=0;
    while(i<n)
    {

        int prime=1;
        int j=2;
        while(j<num)
        {
            if(num%j==0)
                prime=0;
            j++;
        }
        if(prime==1){
            cout<<num<<endl;
            i++;

        }

        num++;

    }
}
