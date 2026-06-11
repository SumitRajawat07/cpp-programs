#include<iostream>

void solve( char ch)
{
    std::cout<<ch<<std::endl;

    ch++;
    std::cout<<ch<<std::endl;
}
int main()
{
    char ch = 's';
    std::cout<<ch<<std::endl;

    solve(ch);
    std::cout<<ch<<std::endl;

    return 0;
}