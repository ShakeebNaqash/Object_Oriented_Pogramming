#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,sum=0,per,total_marks = 500;
    cout<<"Welcome to percenteage caluclator:"<<endl;
    cout<<"Enter markd in 5 subjects :"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    sum = a+b+c+d+e;
    per = (sum/total_marks)*100;

    cout<<"sum and percentage is " <<sum <<" "<< per<<endl;
    
    return 0;
}