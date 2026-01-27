/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:36:45 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/14 19:52:59 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"
Zombie* zombieHorde( int N, std::string name )
{
    Zombie *result;
    int i;

    result = new Zombie[N];
    i = 0;
    while (i < N)
    {
        result[i].setName(name);
        i++;
    }
    return(result);
}