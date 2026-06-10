#include<iostream>
int main()
{
    int attendence;
    std::cout<<"enter your attendence";
    std::cin>>attendence;
    
    std::string status = (attendence >= 75) ? "you are eligible for end semester":"you are not alible for end semster";
    std::cout<<status;

    return 0;


}