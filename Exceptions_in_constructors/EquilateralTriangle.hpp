//
//  EquilateralTriangle.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "IsoscelesTriangle.hpp"

class EquilateralTriangle : public IsoscelesTriangle {
public:
    EquilateralTriangle(int _a);
    std::string getCreationInfo();
};
