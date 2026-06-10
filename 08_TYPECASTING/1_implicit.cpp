#include<iostream>
int main()
{
    int sum1 = 3; // automatic conversion int to float 
    float sum2 = 9.9;

    float result = sum1 + sum2; 
     
    std::cout<<result;  // here answer in the form of float because

    return 0;
}