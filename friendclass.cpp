#include<iostream>
using namespace std;
class first {
   string A ;
   public:
   first(){
    A = "Anup";
   }
   friend class second;

};
class second {
    public:
   void display(first x){
    cout<<"A = "<<x.A<<endl;
   }
};
int main(){
    first f1;
    second s1;
    s1.display(f1);
    return 0;
}