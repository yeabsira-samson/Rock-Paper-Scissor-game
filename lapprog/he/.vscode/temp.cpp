#include <iostream>
using namespace std;
int main()
{
    int temp[0],size,sum=0;
    cout<<"Enter the size of the temp";
    cin>>size;
    cout<<"Enter the element of the temp";
    for(int i=0;i<size;i++){
    cin>>temp[i];
    sum+=i;
    }
    cout<<"The sum is"<<sum;
    return 0;
}