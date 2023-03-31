#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"please enter the number"<<endl;
    cin>>num;
    if(num>0){


        cout<<"The entered number is positive number";
    }
    else if(num<0){

        cout<<"The entered number is negative";
    }

else
{
    cout<<"The entered number is zero";
    return 0;
}
}
