#include<iostream>
using namespace std;
class example{
private:
int x;
public:
example(): x(10){}
friend void frenfn(example );
};
void frenfn(example s1){
    cout<<"value of x = "<<s1.x<<endl;
}
int main(){
    example s1;
    frenfn(s1);
    return 0;
}