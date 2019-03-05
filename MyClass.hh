//
// Created by MacBook Pro on 2019-03-05.
//

#ifndef LAB09_MYCLASS_H
#define LAB09_MYCLASS_H


class QuadraticFunction {
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
public:
    float discriminateReturn( float a, float b,float c);
    int roots( float a,float b,float c);
};

#endif //LAB09_MYCLASS_H
