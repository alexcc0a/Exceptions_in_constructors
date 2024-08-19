//
//  Rhomb.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include "Parallelogram.hpp"

class Rhomb : public Parallelogram {
public:
    Rhomb(int _a, int _A, int _B);
    std::string getCreationInfo();
};
