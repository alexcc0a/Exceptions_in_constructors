//
//  Square.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include "Rectangle.hpp"
#include "Square.hpp"
#include "FigureError.hpp"

Square::Square(int _a) :
    Rectangle(_a, _a) {
    name = "Квадрат";
    if (!(a == c && b == d && a == b)) {
        throw FigureError("Все стороны не равны");
    }
    else if (!(A == 90 && B == 90 && C == 90 && D == 90)) {
        throw FigureError("Все углы не равны 90");
    }
}

std::string Square::getCreationInfo() {
    return name + " (сторона " + std::to_string(a) + ") создан ";
}
