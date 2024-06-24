#include<iostream>
using namespace std;
int main()
{
    int n,temp,rev=0;
    cout<<"enter the number: ";
    cin>>n;
    temp=n;
    while(temp)
    {
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==n)
    cout<<"it is palindrone number :"<<n;
    else
    cout<<"not palindrone number :"<<n;
}
