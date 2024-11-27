#include<iostream>
using namespace std;
int main(){
    int num = 1001;
    int count = 0,rem;
    while (num!=0)
    {
    rem = num%10;
    num /= 10;   
    count++;
    }
    cout<<"digits are: "<<count<<endl;
    return 0;
    
}