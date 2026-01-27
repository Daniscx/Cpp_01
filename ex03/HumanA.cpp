/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:20:47 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 17:16:17 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanA.hpp"

void HumanA::attack()
{
    std::cout << HumanA::name << " attack with their " << HumanA::someweapon.getType() << std::endl;

}
HumanA::HumanA(std::string name, Weapon someweapon)
{
    if(name[0] == '\0')
        std::cout << "please name the human" << std::endl;
    if(someweapon.getType()[0] == '\0')
        std::cout << "please add a valid Weapon" << std::endl;
    HumanA::name = name;
    HumanA::someweapon = someweapon;
}
HumanA::~HumanA()
{
    std::cout << "Human killed" << std::endl;
}
