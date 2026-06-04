#include<iostream>
int main()
{
    int age;
    std::cout<<"enter your age";
    std::cin>>age;

    //using if else statement
    // if(age >= 18)
    // {
    //     std::cout<<"you can  eligible for vote";
    // }
    // else
    // {
    //     std::cout<<"you can not eligible for vote";
    // }

    // using ternary operator

    std::string status =  (age >= 18)?"adult":"minor";
    std::cout<<status;

    return 0;
}