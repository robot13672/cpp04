/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:35:05 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 13:28:40 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Default Wrong WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default Wrong WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->type = obj.type;
    return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Some Wrong WrongAnimal soud" << std::endl;   
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}