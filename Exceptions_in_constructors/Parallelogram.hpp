//
//  Parallelogram.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Quadrangle.hpp"

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int _a, int _b, int _A, int _B);
    std::string getCreationInfo();
};
