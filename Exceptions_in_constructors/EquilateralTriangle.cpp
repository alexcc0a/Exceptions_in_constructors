//
//  EquilateralTriangle.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include <iostream>
#include "EquilateralTriangle.hpp"
#include "IsoscelesTriangle.hpp"
#include "FigureError.hpp"

EquilateralTriangle::EquilateralTriangle(int _a) :
    IsoscelesTriangle(_a, _a, 60, 60) {
    name = "Равносторонний треугольник";
    if (!(a == b && b == c)) {
        throw FigureError("Все стороны не равны");
    }
    else if (!(A == 60 && B == 60 && C == 60)) {
        throw FigureError("Все углы не равны 60");
    }
}

std::string EquilateralTriangle::getCreationInfo() {
    return name + " (сторона " + std::to_string(a) +  ") создан ";
}
