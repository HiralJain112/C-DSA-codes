#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2,b=4;
   // int*aptr=&a;
    //int *bptr=&b;
    //swap(aptr,bptr);
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}