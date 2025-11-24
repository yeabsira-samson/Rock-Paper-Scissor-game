#include<iostream>
using namespace std;
int main()
{
float mark,sum=0,average;
int n,i;
cout<<"Enter number of students\n";
cin>>n;
i=1;
while(i<=n)
{
cout<<"Enter student "<<i<<"mark"<<endl;
cin>>mark;
if(mark<0)
    break;

sum=sum+mark;
i++;
}
average=sum/n;
cout<<"Average mark is:"<<average;
return 0;
}