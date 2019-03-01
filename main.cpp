#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
class QuadraticFunction {
public:
    float discriminateReturn() {
        float d=b * b - 4 * a * c;
        cout<< setprecision(4) << fixed<<"Discriminant="<<d<<endl;
        return d;
    }
    int roots() {
        if (discriminant > 0) {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << setprecision(4) << fixed << "x1 = " << x1 << endl;
            cout << setprecision(4) << fixed << "x2 = " << x2 << endl;
        } else if (discriminant == 0) {
            cout << "Roots are real and same." << endl;
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            cout << setprecision(4) << fixed << "x1 = x2 =" << x1 << endl;
        } else {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are complex and different." << endl;
            cout << setprecision(4) << fixed << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
            cout << setprecision(4) << fixed << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }
     return 0;
    }
};
int main() {


    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    QuadraticFunction quad;
    quad.discriminateReturn();
    quad.roots();
}