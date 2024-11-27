#include<iostream>
using namespace std;
int main(){
    char arr[10] = {'A','E','I','O','U','a','e','i','o','u'};
    char input;
    cout<<"Enter an alphabet: ";
    cin>>input;
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i]==input)
        {
            cout<<"Vovel";
            break;
        }
        
        
    }
    cout<<"Not a vowel";
    return 0;
    


}