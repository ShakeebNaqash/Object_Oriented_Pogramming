#include<iostream>
using namespace std;
int main(){
    int num  = 909,rem,x=0;
    int originalnum = num;
    while (num!=0)
    {
    rem = num%10;
    x = rem+x*10;
    num /= 10;   
    
    }
    if (originalnum == x)
    {
        cout<<"Pallindrome";
    }
    else cout<<"Not a pallindrome";
    return 0;
}