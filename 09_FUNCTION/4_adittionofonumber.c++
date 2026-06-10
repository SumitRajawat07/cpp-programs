#include<iostream>

int printaddition(int x ,int y , int z )
{
    int result = x + y + z ;
    std::cout<<result;
    return result;
}

int main()
{
    int result = printaddition(10,20,30);

    return 0;
}