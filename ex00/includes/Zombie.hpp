/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:26:48 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/26 12:34:28 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
    void 
        announce();
    void
        setName(std::string name);
};