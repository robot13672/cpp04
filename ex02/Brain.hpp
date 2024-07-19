/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:12:04 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/19 14:12:19 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
    public:
        Brain();
        virtual ~Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
    private:
        std::string _ideas[100];
};

#endif