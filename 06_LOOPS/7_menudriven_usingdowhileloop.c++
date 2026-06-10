#include<iostream>
int main()
{
    int choice;
    do
    {
        std::cout<<"select an option:\n";
        std::cout<<"1.start\n2. settings\n3. exit\n";
        std::cin>>choice;

    switch(choice) {
            case 1: std::cout << "Starting...\n"; break;
            case 2: std::cout << "Settings...\n"; break;
            case 3: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice!\n";
        }
    } while (choice != 3);
    return 0;
}