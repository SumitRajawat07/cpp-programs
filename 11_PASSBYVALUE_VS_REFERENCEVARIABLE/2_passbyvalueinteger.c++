#include<iostream>

void solve(int a)
{
    std::cout<<a<<std::endl;

    a++;
    std::cout<<a<<std::endl;

}
int main()
{
    int a = 3;
    std::cout<<a<<std::endl;

    solve(a);
    std::cout<<a<<std::endl;

    return 0;
}