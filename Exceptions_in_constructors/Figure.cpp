//
//  Figure.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include <iostream>
#include "Figure.hpp"

Figure::Figure() {
    name = "Фигура";
    sides_count = 0;
};

std::string Figure::get_name() { return name; }

std::string Figure::getCreationInfo() {
    return  "Фигура создана ";
}
