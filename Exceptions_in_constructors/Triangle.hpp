//
//  Triangle.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Figure.hpp"

class Triangle : public Figure {
public:
    Triangle(int _a, int _b, int _c, int _A, int _B, int _C);
    std::string getCreationInfo();
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
};
