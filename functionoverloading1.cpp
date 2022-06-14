//finding cube of float ,integer and double number
#include<iostream>
#include<math.h>
using namespace std;
int cube(int a)
{
    int cube1 = pow(a,3);
    return(cube1);
}
float cube (float a ){
    float cube2 = pow(a,3);
    return(cube2);
}
double cube(double a ){
    double cube3 = pow(a,3);
    return(cube3);
}
int main(){
    int num1;float num2;double num3;
    cout<<"Enter integer   float   and  double number  ::"<<endl;
    cin>>num1>>num2>>num3;
   cout<<"cube of integer number  you entered = "<<cube(num1)<<endl;
   cout<<"cube of float number  you entered = "<<cube(num2)<<endl;
   cout<<"cube of double number  you entered = "<<cube(num3)<<endl;
  
    return 0 ;
}