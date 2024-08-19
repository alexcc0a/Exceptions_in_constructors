//
//  Figure.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include <string>

class Figure {
public:
    Figure();
    std::string getCreationInfo();
protected:
    std::string name;
    int sides_count;
    std::string get_name();
};
