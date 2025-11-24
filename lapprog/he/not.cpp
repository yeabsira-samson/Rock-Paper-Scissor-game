#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string name1,name2;
    cout<<"Enter a name of student";
    getline(cin,name1);
    cout<<"Enter the second student name";
    getline(cin,name2);
    if(name1.compare(name2)>0)
    cout<<name1.compare(name2);
    return 0;
}
