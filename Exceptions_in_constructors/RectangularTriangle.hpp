//
//  RectangularTriangle.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Triangle.hpp"

class RectangularTriangle : public Triangle {
public:
    RectangularTriangle(int _a, int _b, int _c, int _A, int _B);
    std::string getCreationInfo();
};
