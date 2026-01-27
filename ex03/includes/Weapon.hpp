/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:01:53 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 16:45:07 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>
class Weapon
{
    private:
    std::string type;

    public:
    const std::string
        getType();
    void
        setType(std::string Type);
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    
};
#endif