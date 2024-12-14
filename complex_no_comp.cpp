#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r1, i1, r2, i2, mag1, mag2;
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;

    mag1 = sqrt(r1 * r1 + i1 * i1);
    mag2 = sqrt(r2 * r2 + i2 * i2);

    if (mag1 > mag2)
        cout << "First complex number has a higher magnitude." << endl;
    else if (mag1 < mag2)
        cout << "Second complex number has a higher magnitude." << endl;
    else
        cout << "Equal magnitude." << endl;

    return 0;
}
