#include <iostream>
using namespace std;


void callByPointer(int *p)
{
    *p = *p + 10; 
    cout << "Inside callByPointer function, value = " << *p << endl;
}

int main()
{
    int num = 20;

    cout << "Before callByPointer, num = " << num << endl;
    callByPointer(&num);                                  
    cout << "After callByPointer, num = " << num << endl;

    return 0;
}
