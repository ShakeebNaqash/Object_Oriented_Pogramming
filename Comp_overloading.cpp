#include <iostream>
using namespace std;

class Box
{
private:
    int length, width, height;

public:

    Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}

    
    int volume() const
    {
        return length * width * height;
    }


    bool operator>(const Box &obj)
    {
        return this->volume() > obj.volume();
    }


    void display()
    {
        cout << "Box Dimensions: " << length << "x" << width << "x" << height << " (Volume: " << volume() << ")" << endl;
    }
};

int main()
{
    Box b1(3, 4, 5), b2(2, 6, 7);

    cout << "First Box: ";
    b1.display();
    cout << "Second Box: ";
    b2.display();

    if (b1 > b2)
        cout << "First box is larger than the second box." << endl;
    else
        cout << "Second box is larger than the first box." << endl;

    return 0;
}
