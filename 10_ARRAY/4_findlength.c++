#include<iostream>

int getlength(char arr[])
{
    int count = 0;
    int index  = 0;

    while(arr[index] != '\0');
    {
        count++;
        index++;
    }
    return count;
}

int main()
{
    char arr[] = "sumit rajawat";
    std::cout<<getlength(arr);

    return 0;
}