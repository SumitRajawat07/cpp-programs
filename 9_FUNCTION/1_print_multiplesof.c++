#include<iostream>
using namespace std;

void printmultiple(int num)
{
    for(int i = 1; i <= 10; i++)
    {
        cout<<num*i<<endl;
    }
}

int main()
{
    int number = 5;
     printmultiple(number);
    return 0;
}