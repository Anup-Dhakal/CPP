#include<iostream>
using namespace std;
class celfah{
    public:
    int cel;
    int fah;
    void getinput(){
        cout<<"Enter temp. in celsius = ";
        cin>>cel;
    }
    void convert(){
        fah = cel*(9/5)+32;

    }
    void display(){
        cout<<"The temp in fahrenheit ="<<fah<<endl;
    }
};
int main(){
    celfah c1;
    c1.getinput();
    c1.convert();
    c1.display();
    return 0;


}