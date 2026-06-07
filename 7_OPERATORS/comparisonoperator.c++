#include<iostream>
int main()
{
    //HERE USING COMPARISION OPERATOR (>, < , >= , <= , == , != ) THEY OPERATOR GIVES OUTPUT IN THE FOEM OF 1(TRUE) 0(FALSE)

    int x,y;
    std::cout<<"enter two value for x and y for compare"<<std::endl;
    std::cin>>x>>y;

    std::cout<<"x>y is ="<<(x>y)<<std::endl;
    std::cout<<"x<y is ="<<(x<y)<<std::endl;
    std::cout<<"x>= is ="<<(x>=y)<<std::endl;
    std::cout<<"x<y is ="<<(x<y)<<std::endl;
    std::cout<<"x==y is ="<<(x==y)<<std::endl;
    std::cout<<"x!=y is ="<<(x!=y)<<std::endl;

    return 0;

}