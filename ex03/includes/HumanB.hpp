/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:32:50 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 16:40:01 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
private:
    Weapon someweapon;
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB();
    void
        setWeapon(Weapon someweapo);
    void
        attack();
};

#endif

