/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:36:35 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:05:05 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongWrongCat";
    std::cout << "Default WrongWrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongWrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.type;
    return(*this);
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    *this = obj;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Muau Myau" << std::endl;   
}