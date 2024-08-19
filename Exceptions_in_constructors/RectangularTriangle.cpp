//
//  RectangularTriangle.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include <iostream>
#include "Triangle.hpp"
#include "RectangularTriangle.hpp"
#include "FigureError.hpp"

RectangularTriangle::RectangularTriangle(int _a, int _b, int _c, int _A, int _B) :
    Triangle(_a, _b, _c, _A, _B, 90) {
    name = "Прямоугольный треугольник";
    if (C != 90) {
        throw FigureError("Угол C всегда равен 90");
    }
}

std::string RectangularTriangle::getCreationInfo() {
    return name + " (стороны " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + "; углы " + std::to_string(A) + ", " + std::to_string(B) + ") создан ";
}
