//
//  Parallelogram.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include "Quadrangle.hpp"
#include "Parallelogram.hpp"
#include "FigureError.hpp"

Parallelogram::Parallelogram(int _a, int _b, int _A, int _B) :
    Quadrangle(_a, _b, _a, _b, _A, _B, _A, _B) {
    name = "Параллелограмм";
    if (!(a == c && b == d)) {
        throw FigureError("Стороны a,c и b,d попарно не равны");
    }
    else if (!(A == C && B == D)) {
        throw FigureError("Углы A,C и B,D попарно не равны");
    }
}

std::string Parallelogram::getCreationInfo() {
    return name + " (стороны " + std::to_string(a) + ", " + std::to_string(b) + "; углы " + std::to_string(A) + ", " + std::to_string(B) + ") создан ";
}
