/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:41:21 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/14 19:54:25 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie *result;
 
    result = new(Zombie);
    result->setName(name);
    return(result);
}