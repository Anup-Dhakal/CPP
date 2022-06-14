//Dynamic memory allcation new and delete operator

#include<iostream>
using namespace std;
int main()
{
    int *p;//pointer variable declaration
    p =new int; // int type memory allocated in heap "Dynamic memory allocation "
    *p = 10; // assigning value in heap memory
    cout<<*p<<endl;
    delete p; //de-allocation of dynamic memory
    int *ptr;
    ptr =new int[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter"<<i<<"number of array";
        cin>>ptr[i];
    }
    for (int i =0;i<5;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}