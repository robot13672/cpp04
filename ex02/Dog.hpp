/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:00:11 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:23:34 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
       Brain *brain;
       
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog &operator=(const Dog &obj);
        void makeSound() const;
};

#endif