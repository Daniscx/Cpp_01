/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:16:58 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/27 20:11:45 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"
int main()
{
    Zombie *z = zombieHorde(7, "Francisco");
    int i;
    i = 0;
    while(i < 7)
    {
        z[i].announce();
        i++;
    }
    delete[] z;
    return(0);
}