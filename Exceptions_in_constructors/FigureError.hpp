//
//  FigureError.hpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#pragma once
#include <stdexcept>

class FigureError : public std::domain_error {
public:
    FigureError(const std::string& message);
};
