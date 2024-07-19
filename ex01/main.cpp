/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:00:09 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:31:20 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int arraySize = 10;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize; ++i) 
    {
        if (i < arraySize / 2) 
            animals[i] = new Dog();
        else 
            animals[i] = new Cat();
    }
    
    for (int i = 0; i < arraySize; ++i) 
    {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < arraySize; ++i) 
    {
        delete animals[i];
    }

    return 0;
}