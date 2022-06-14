//adding complex number using concept of class and object
#include<iostream>
using namespace std;
class complex{
  

    public:
    int img;
    int real;
    void getinput(){
        cout<<"Enter real part :"<<endl;
        cin>>real;
        cout<<"Enter imaginary part :"<<endl;
        cin>>img;
    }
    void add(complex c1 , complex c2){
        int img = c1.img +c2.img;
        int real = c1.real +c2.real;
        cout<<"img  "<<img<<"\nreal  "<<real<<endl;
    }
    
};
int main(){
    complex c1,c2,c3;
    c1.getinput();
    
    c2.getinput();


    c3.add(c1,c2);
    
    return 0;
}