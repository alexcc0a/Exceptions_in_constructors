//
//  Square.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Rectangle.hpp"

class Square : public Rectangle {
public:
    Square(int _a);
    std::string getCreationInfo();
};
