/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:26:48 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/14 19:41:56 by dmaestro         ###   ########.fr       */
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
    void 
        announce();
    void
        setName(std::string name);
};