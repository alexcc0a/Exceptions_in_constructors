//
//  Rectangle.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Quadrangle.hpp"

class Rectangle : public Quadrangle {
public:
    Rectangle(int _a, int _b);
    std::string getCreationInfo();
};
