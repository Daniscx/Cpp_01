/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:04:12 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 16:51:04 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"

Weapon::Weapon()
{
    Weapon::type = '\0';
}
Weapon::Weapon(std::string type)
{
    Weapon::type = type;
}
const std::string Weapon::getType()
{
    return(Weapon::type);
}
void Weapon::setType(std::string type)
{
    Weapon::type = type;
}
Weapon::~Weapon()
{
    std::cout << "weapon destroyed" << std::endl;
}