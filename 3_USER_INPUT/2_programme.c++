#include<iostream>
#include<string>

int main()
{
   std:: string favgame;

    std:: cout << "enter your fav game" << std:: endl;

    std:: getline  (std:: cin ,favgame);
    std:: cout << "your fav game " << favgame << std:: endl;

    return 0;
}