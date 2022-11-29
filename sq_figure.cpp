#include<iostream>
using namespace std;

int main()
{
    int a=6;
    int b=6;
    
    for(int i=1;i<=a;i++){
      for(int n=1;n<=b;n++){
        if((i==1)||(i==6)){
          cout<<"_";
       } 
    else if((n==1)||(n==6))
   {
        cout<<"|";}
       else {
        cout<<" ";
        }}cout<<endl;
        }}