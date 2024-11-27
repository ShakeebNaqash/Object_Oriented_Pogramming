#include<iostream>
using namespace std;
int main(){
    int num  = 906,rem;
    while (num!=0)
    {
    rem = num%10;
    cout<<rem;
    num /= 10;   
    
    }
    return 0;
}