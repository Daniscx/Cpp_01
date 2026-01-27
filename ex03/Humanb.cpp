/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:32:45 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 17:10:33 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    HumanB::name = name;
    HumanB::someweapon = Weapon();
}
void HumanB::setWeapon(Weapon someweapon)
{
    HumanB::someweapon = someweapon;
}
void HumanB::attack()
{
    if(someweapon.getType()[0] == '\0')
         std::cout << HumanB::name << " attack with their imaginary spear"  << std::endl;
    else
        std::cout << HumanB::name << " attack with their " << HumanB::someweapon.getType() << std::endl;
    
}
HumanB::~HumanB()
{
    std::cout << "Human killed" << std::endl;
}