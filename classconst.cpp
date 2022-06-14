#include<iostream>
using namespace std;
class abc {
    private:
    int x,y;

    public:
    abc () :x(0),y(0){
        cout<<"Constructor is called"<<endl;
        cout<<"value of x = "<<x<<"value of y = "<<y<<endl;

    }
    abc(int x,int y) {
        cout<<"parameterized constructor is called "<<endl;
        cout<<"value of x = "<<x<<"value of y = "<<y<<endl;
    }
    abc(abc &t){

    cout<<"Compy constructor"<<endl;
    }
   
    ~abc()
    {
        cout<<"\nDestructor is called"<<endl;
        
    }
};
int main(){
    abc b,a(1,2);
    abc d(a);

    return 0;
}