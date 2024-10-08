//
//  Quadrangle.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Figure.hpp"

class Quadrangle : public Figure {
public:
    Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    std::string getCreationInfo();
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
};
