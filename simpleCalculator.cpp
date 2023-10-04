#include<iostream>
using namespace std;
int main(){
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
      float num1,num2,check;
      cout<<"\nEnter value 1: ";
      cin>>num1;
      cout<<"Enter value 2: ";
      cin>>num2;
      cout<<"\n1.ADD";
      cout<<"\n2.Subtract";
      cout<<"\n3.Multiplication";
      cout<<"\n4.Division";
      cout<<"\nEnter the option :";
      cin>>check;

      if (check==1)
      {
        cout<<"\nAns of :"<<num1<<"+"<<num2<<"="<<num1+num2;
      }
      else if (check==2)
      {
        cout<<"\nAns of :"<<num1<<"-"<<num2<<"="<<num1-num2;
      }
      else if (check==3)
      {
       cout<<"\nAns of :"<<num1<<"*"<<num2<<"="<<num1*num2;
      }
      else if (check==4)
      {
        cout<<"\nAns of :"<<num1<<"/"<<num2<<"="<<num1/num2;
      }
      else
      {
        cout<<endl<<"Invalid Input!"<<endl;
      }

      cout<<"\n\nDo you want to play Again: if Yes press y else Enter any other key:";
      cin>>ch;
    }
    cout<<"\nThank You : ";

    return 0;
}