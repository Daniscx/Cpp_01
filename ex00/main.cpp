/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:16:58 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/14 18:32:47 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"
int main()
{
    Zombie *z;
    z = newZombie("paco");
    z->announce();
    randomChump("ramon");
    free(z);
    return(0);
}