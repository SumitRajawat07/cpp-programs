#include<iostream>

void solve(int &arr)
{
    std::cout<<arr<<std::endl;

    arr++;
    std::cout<<arr<<std::endl;
}
int main()
{
    int a = 5;
    std::cout<<a<<std::endl;

    solve(a);
    std::cout<<a<<std::endl;

    return  0;
}