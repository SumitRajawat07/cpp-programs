#include<iostream>
int main()
{
    //HERE USING LOGICAL OPERATOR (&& , || ,!)

    int x,y;
    std::cout<<"enter your number x and y "<<std::endl;
    std::cin>>x>>y;

    std::cout<<"x&&y is = "<<(x&&y)<<std::endl;
    std::cout<<"x||y is = "<<(x||y)<<std::endl;
    std::cout<<"x!=y is = "<<(x!=y)<<std::endl;

    return 0;
}