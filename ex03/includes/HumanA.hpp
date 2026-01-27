/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:07:11 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 16:26:15 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP
class HumanA
{
private:
    Weapon someweapon;
    std::string name;
public:
    HumanA(std::string name, Weapon someweapon );
    ~HumanA();
    void 
        attack();
};
#endif


