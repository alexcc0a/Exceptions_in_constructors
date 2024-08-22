//
//  FigureError.cpp
//  Exceptions_in_constructors
//
//  Created by Александр Нестеров on 19/8/24.
//

#include <string>
#include "FigureError.hpp"
FigureError::FigureError(const std::string& message): std::domain_error("Ошибка создания фигуры. " + message) {}
