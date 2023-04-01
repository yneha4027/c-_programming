#include<iostream>
using namespace std;
int main(){
int arr[30];
int i,even=0,odd=0;
cout<<"enter any 10 numbers";
for(i=0;i<10;i++)
cin>>arr[i];
for(i=0;i<10;i++){
        if(arr[i]%2==0)

            even=even+arr[i];
        else
            odd=odd+arr[i];

}
cout<<"sum of even number"<<even;
cout<<"sum of odd number is"<<odd;










}
