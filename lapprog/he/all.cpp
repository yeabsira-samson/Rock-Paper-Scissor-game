#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string name[20];
   cout<<"Enter the name";
   for(int i=0;i<=20;i++)
   getline(cin,name[i]);
   for(int i=0;i<=20;i++)
   cout<<name[i];
    return 0;
}