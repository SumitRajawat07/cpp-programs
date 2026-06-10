#include<iostream>
int main()
{
    //HERE USING ASSIGNMENT OPERATOR (=,+=,-=,/=,%=)

    int x;
    std::cout<<"enter the value of  x "<<std::endl;
    std::cin>>x;

    std::cout<<"the value of x is = "<<x<<std::endl;
    std::cout<<"the upadated value of x is = "<<(x += 10)<<std::endl;
    std::cout<<"the second updated value of x is = "<<(x -= 3)<<std::endl;
    std::cout<<"the third value of x is = "<<(x /= 4)<<std::endl;
    std::cout<<"the last value of x is = "<<(x %= 8)<<std::endl;
    
    return 0;
}