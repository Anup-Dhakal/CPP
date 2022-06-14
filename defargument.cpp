//function overloading with default argument
#include<iostream>
#include<math.h>
using namespace std;
int area(int p ,int q,int r=0 )
{
    int rectange_area =p*q;
    return (rectange_area);
}
float area(int p , int q ,double r)
{
    
    float s = (p+q+r)/2.0;
    
    float triange_area = sqrt(s*(s-p)*(s-q)*(s-r));
    return (triange_area);
}
int main(){
    int side1 =2,side2=3;
    double side3 =4.2;
    cout<<"Area of rectangle = "<<area(side1,side2)<<endl;
    cout<<"Area of triangle = "<<area(side1,side2,side3)<<endl;
    
    return 0;
}