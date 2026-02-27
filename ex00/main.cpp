/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:16:58 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/26 12:35:32 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"
int main()
{
    Zombie *z;
    z = newZombie("paco");
    z->announce();
    randomChump("ramon");
    delete(z);
    return(0);
}