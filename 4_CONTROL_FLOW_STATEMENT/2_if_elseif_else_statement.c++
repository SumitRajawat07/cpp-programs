#include<iostream>
int main()
{
    int marks;

    std::cout<<"enter  your marks "<<std::endl;
    std::cin>>marks;
    std::cout<<"your  marks is "<< marks<<std::endl;

    if(marks>90)
       { 
        std::cout<<"A";
       }

        else if(marks>80)
        {
            std::cout<<"B";
        }

        else{
            std::cout<<"so your grade is c " << std::endl;
        }
    
}