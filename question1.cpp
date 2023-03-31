#include<iostream>
using namespace std;

int main(){
    int num1,num2,temp;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    temp=num2;
    num2=num1;
    num1=temp;

    cout<<"after swapping the 1st number"<<num1<<endl;
    cout<<"after swapping the 2nd number is"<<num2<<endl;




}
