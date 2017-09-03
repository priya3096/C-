#include<iostream>
using namespace std;

int main()
{
    char *s="Hello World";
    char *d=s;
    int len=0;
    while(*s!='\0')
    {
        len++;
        *s++;
    }
    cout<<len;
    for(int i=0;i<5;i++)
    {
        cout<<s[i];
    }
    cout<<sizeof(s);
}
