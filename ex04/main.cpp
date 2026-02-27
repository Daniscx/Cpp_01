/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:15 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/27 20:54:00 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/sed.h"
static void replace_function(std::ifstream& fd_read , std::ofstream& fd_write, char **strs);
int main(int args, char **argv)
{
    if(args != 4)
    {
        std::cerr << "invalid number of args please correct them" << std::endl;
        return(-1);
    }
   
    std::ifstream fd_read(argv[1]);
    std::string archivo = argv[1];
    archivo +=  + ".replace";
    std::ofstream  fd_replace(archivo.c_str());
    if(!fd_replace)
    {
        std::cerr << "invalid fd for the read please put a valid fd" << std::endl;
        return(-1);
    }
    if(!fd_replace)
    {
        std::cerr << "invalid file type for  replacement please put a valid fd" << std::endl;
        return(fd_read.close(), -1);
    }
    replace_function(fd_read, fd_replace, argv + 2);
    fd_read.close();
    fd_replace.close();
    
}

static void replace_function(std::ifstream& fd_read , std::ofstream& fd_write, char **strs)
{
    std::string buff;
    std::string buff2;
    std::string new_coso;
    std::string oderstr;
    oderstr = strs[0];
    new_coso = strs[1];

    while(std::getline(fd_read, buff))
    {
        
        for(size_t z = 0; z < buff.size(); z++)
        {
                buff2 = buff.substr(z, oderstr.size());
            if(buff2 == oderstr)
            {
                buff.replace(z, oderstr.size(), new_coso);
                continue;
            }
             
        }
        
        fd_write << buff << std::endl;
    }

    fd_write.close();
    fd_read.close();
}
