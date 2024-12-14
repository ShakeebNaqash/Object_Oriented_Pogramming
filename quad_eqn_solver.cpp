#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Invalid quadratic equation." << endl;
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Real and distinct roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout << "Real and equal roots: " << root1 << " and " << root2 << endl;
    }
    else
    {
        cout << "Imaginary roots." << endl;
    }

    return 0;
}
