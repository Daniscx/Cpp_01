/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:32:15 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/26 12:39:49 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"


void Zombie::announce()
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..."  << std::endl;
    
}
Zombie::Zombie()
{
    Zombie::name = '\0';
}
Zombie::Zombie(std::string name)
{
    Zombie::name = name;
}
void Zombie::setName(std::string name)
{
    Zombie::name = name;
}
Zombie::~Zombie()
{
    std::cout << "Zombie destructor called" << std::endl;
}