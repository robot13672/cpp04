/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:00:09 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:43:17 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    Animal *arr[2];
    // Animal *animal = new Animal();
    arr[0] = new Cat();
    arr[1] = new Dog();
    
    delete arr[0];
    delete arr[1];
}