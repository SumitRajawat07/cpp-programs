#include<iostream>
int main()
{
    int day;
    std::cout<<"enter a number so give you a day  "<<std::endl;
    std::cin>>day;

    switch(day)
    {
        case 1:
        std::cout<<"today is monday";
        break;
        case 2 : std::cout<<"today is tuesday"; break;
        case 3 : std::cout<<"today is wednesday"; break;
        case 4 : std::cout<<"today is thusday"; break;
        case 5 : std::cout<<"today is friday"; break;
        case 6 : std::cout<<"today is satarday"; break;
        case 7 : std::cout<<"today is sunday" ; break;
        default : std::cout<<"invalid day";
    }

    return 0;

}