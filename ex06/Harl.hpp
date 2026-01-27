/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:45:52 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/26 16:35:16 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>
    

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        std::string levels[4];
        
    public:
        Harl( void );
        ~Harl( void );
        void 
            complain( std::string level );
};

#endif