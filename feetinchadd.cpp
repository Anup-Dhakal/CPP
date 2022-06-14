//ADD DIstances in Feet and inch
#include<iostream>
using namespace std;
struct distance{
    int feet;
    int inches;
};
int main()
{
    struct distance d1,d2;
    cout<<"details of distance 1"<<endl;
    cout<<"feets = ";
    cin>>d1.feet;
    cout<<"inches = ";
    cin>>d1.inches;
    cout<<"details of distance 2"<<endl;
    cout<<"feets = ";
    cin>>d2.feet;
    cout<<"inches = ";
    cin>>d2.inches;
    //Addition
    int totalinch =d1.inches+d2.inches;
    int totalfeet = d1.feet+d2.feet;
    //condition and correction if inch is more than 12 
    if (totalinch >=12)
    {
        totalinch = totalinch - 12;
        totalfeet=totalfeet +1;
    }
    cout<<"Total distance = "<<totalfeet<<" feet "<<totalinch<<" inches"<<endl;
    
    
    return 0;
}