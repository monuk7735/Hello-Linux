#include <iostream>
using namespace std;
class coords
{
    float x;
    float y;
    float z;

public:
    coords()
    {
        cout << "Enter coordinates:\nx: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
        cout << "z: ";
        cin >> z;
    }
    void display()
    {
        cout << "The coordinates are:\n";
        cout << "x: " << x << "\t";
        cout << "y: " << y << "\t";
        cout << "z: " << z << "\n";
    }
    void operator++()
    {
        x = ++x;
        y = ++y;
        z = ++z;
    }
    void operator--()
    {
        x = --x;
        y = --y;
        z = --z;
    }
    void operator+=(coords add)
    {
        x += add.x;
        y += add.y;
        z += add.z;
        // return;
    }
    bool operator==(coords second)
    {
        if (x == second.x && y == second.y && z == second.z)
            return true;
        return false;
    }
};

int main()
{
    coords first;
    first.display();
    ++first;
    cout << "After incrementing ";
    first.display();
    --first;
    cout << "After Decrementing ";
    first.display();
    cout << "\nEnter new coordinates: \n";
    coords second;
    if (first == second)
        cout << "\nFirst coordinates are EQUAL to second coordinates.\n";
    else
        cout << "\nFirst coordinates are NOT EQUAL to second coordinates.\n";
    cout << "After ADDING first and second coordinates, ";
    first += second;
    first.display();
    return 0;
}
