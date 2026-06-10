#include<iostream>

int printmultiplication(int x , int y, int z)
{
    int result = x*y*z;
    std::cout<<result;
    return result;
}

int main()
{
     int result = printmultiplication(2,3,4);

     return 0;
}