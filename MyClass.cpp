//
// Created by MacBook Pro on 2019-03-05.
//

//
// Created by MacBook Pro on 2019-03-05.
#include "MyClass.hh"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float QuadraticFunction::discriminateReturn(float a,float b,float c) {
    float discriminant=b * b - 4 * a * c;
    cout<< setprecision(4) << fixed<<"Discriminant="<<discriminant<<endl;
    return discriminant;
}

int QuadraticFunction::roots(float a,float b ,float c) {
    float discriminant=b * b - 4 * a * c;
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
        cout << "Roots are complex." << endl;
        cout << setprecision(4) << fixed << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << setprecision(4) << fixed << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}
