#include<iostream>
#include<cstring>
int main()
{
    // here concatination of two char array
    char arr1[] = "sumit";
    char arr2[] = "rajawat";

     strcat(arr1,arr2);
     std::cout<<arr1<<std::endl;

     // here copy of char array
     strcpy(arr2 ,arr1);
     std::cout<<arr2<<std::endl;

     // here comapre of char array
     strcmp(arr1 , arr2);
     std::cout<<arr1<<std::endl;

    //here length of chararray
    std::cout<<strlen(arr1);


    return 0;
}