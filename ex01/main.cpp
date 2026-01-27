/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:16:58 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/14 19:53:43 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"
int main()
{
    Zombie *z;
    int i;
    
    z = zombieHorde(7, "Francisco");
    i = 0;
    while(i < 7)
    {
        z[i].announce();
        i++;
    }
    return(0);
}