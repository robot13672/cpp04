/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:04:26 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:43:51 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    COUT << "Default Animal constructor" << ENDL;
}

Animal::~Animal()
{
    COUT << "Default Animal destructor" << ENDL;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.type;
    return(*this);
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

// void Animal::makeSound(void) const
// {
//     COUT << "Some Animal Sound" << ENDL;   
// }

std::string Animal::getType(void) const
{
    return(this->type);
}