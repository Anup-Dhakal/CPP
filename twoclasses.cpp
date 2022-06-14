#include<iostream>
using namespace std;
class second ;
class first{
    int x;
    public:
    first():x(30){}
    friend void add(first ,second);
};
class second{
    int y;
    public:
    second():y(20){}
    friend void add(first ,second);
};
void add(first a,second b){
    cout<<"The sum = "<<a.x+b.y<<endl;
}
int main(){
    first one;
    second two;
    add(one,two);
    return 0;
}