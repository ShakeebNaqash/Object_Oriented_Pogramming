#include <iostream>
using namespace std;

int main()
{
    float purchase, discount, finalPrice;

    cout << "Enter the purchase value: ";
    cin >> purchase;

    discount = (purchase < 100) ? 0 : (purchase <= 500) ? 0.10
                                  : (purchase <= 1000)  ? 0.15
                                                        : 0.20;

    finalPrice = purchase - (purchase * discount);

    cout << "Total price after discount: Rs " << finalPrice << endl;
    return 0;
}
