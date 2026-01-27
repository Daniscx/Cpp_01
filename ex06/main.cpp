/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:02:23 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/27 15:51:21 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int args, char **argv)
{
    if(args != 2)
    {
        std::cout << "Please provide one level to complain about" << std::endl;
        return (1);
    }
    Harl().complain((std::string)argv[1]);
    return(0);
}