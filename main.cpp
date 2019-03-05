#include <iostream>
#include "MyClass.hh"
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    QuadraticFunction quad;
    quad.discriminateReturn(a,b,c);
    quad.roots(a,b,c);
}