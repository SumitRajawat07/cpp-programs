#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age "<<endl;
    cin>>age;

   
   if(age>=18){
    cout<<"you are elible to vote"<<age<<endl;
   }
   else{
    cout<<"you are not eligble for vote "<<age<<endl;
   }
}