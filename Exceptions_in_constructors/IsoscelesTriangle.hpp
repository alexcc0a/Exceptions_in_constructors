//
//  IsoscelesTriangle.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Triangle.hpp"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int _a, int _b, int _A, int _B);
    std::string getCreationInfo();
};
