/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:29:55 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:22:25 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default Cat constructor" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Default Cat destructor" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj) 
{
    this->type = obj.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    return(*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Myau Myau" << std::endl;   
}