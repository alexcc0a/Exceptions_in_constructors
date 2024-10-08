//
//  Rhomb.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include "Parallelogram.hpp"
#include "Rhomb.hpp"
#include "FigureError.hpp"

Rhomb::Rhomb(int _a, int _A, int _B) :
    Parallelogram(_a, _a, _A, _B) {
    name = "Ромб";
    if (!(a == c && b == d && a == b)) {
        throw FigureError("Все стороны не равны");
    }
    else if (!(A == C && B == D)) {
        throw FigureError("Углы A,C и B,D попарно не равны");
    }
}

std::string Rhomb::getCreationInfo() {
    return name + " (сторона " + std::to_string(a) + "; углы " + std::to_string(A) + ", " + std::to_string(B) + ") создан ";
}
