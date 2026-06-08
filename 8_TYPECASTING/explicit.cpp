#include<iostream>
#include<iomanip>
int main()
{
    int num1 = 10;
    float num2 = 9.5;

    float result = num1 + (int)num2;

    std::cout<<std::fixed<<std::setprecision(1)<<result;

    return 0;
}