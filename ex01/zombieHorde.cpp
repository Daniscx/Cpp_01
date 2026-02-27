/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:36:45 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/26 12:45:59 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"
Zombie* zombieHorde( int N, std::string name )
{
    Zombie *result = new Zombie[N];
    int i;

    i = 0;
    while (i < N)
    {
        result[i].setName(name);
        i++;
    }
    return(result);
}