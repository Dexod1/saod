#include <iostream>
using namespace std;

void Rotate(int a[], int n, bool clockwise) {
    if (clockwise) {
        int x = a[n - 1];
        for (int* p = a + n - 1; p - a > 0; *p-- = *(p - 1)) {}
        a[0] = x;
    }
    else {
        
        int x = a[0];
        for (int* p = a; p - a < n; *p++ = *(p + 1)) {}
        a[n - 1] = x;
        
    }
}

int main()
{
    int a[5]{ 1,2,3,4,5 };
    int b[5]{ 1,2,3,4,5 };
    cout << "index: ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << ' ';
    cout << endl;

    cout << "pointer: ";
    for (int* p = a; p - a < 5; p++)
        cout << *p << ' ';
    cout << endl;

    cout << "clockwise rotate: ";
    Rotate(a, 3, true);
    for (int* p = a; p - a < 5; p++)
        cout << *p << ' ';
    cout << endl;

    cout << "counterclockwise rotate: ";
    Rotate(b, 3, false);
    for (int* p = b; p - b < 5; p++)
        cout << *p << ' ';
    cout << endl;

}