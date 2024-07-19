/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:23:10 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:23:47 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Default Dog constructor" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Default Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.type;
    return(*this);
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    *this = obj;
}

void Dog::makeSound(void) const
{
    std::cout << "GAV GAV" << std::endl;   
}