#include<iostream>
using namespace std;

inline int product(int a,int b)
{
    static int c=0;
    c=c+1;
    return a*b;
}

int main()
{
    int num1, num2;
    cout<<"Enter first number:"<<endl;
