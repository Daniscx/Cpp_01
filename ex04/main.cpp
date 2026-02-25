/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:15 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/25 15:49:13 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/sed.h"
static void replace_function(std::ifstream& fd_read , std::ofstream& fd_write, char **strs);
static int ft_strcmp(std::string& str1 ,const char *str2, int n, int actual_point);
static int ft_strlen(char *str);
int main(int args, char **argv)
{
    
    std::cout << 2 << std::endl;
    if(args != 4)
    {
        std::cerr << "invalid number of args please correct them" << std::endl;
        return(-1);
    }
   
    std::ifstream fd_read(argv[1]);
    std::cout << 2 << std::endl;
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
        std::cout << 2 << std::endl;
  
    replace_function(fd_read, fd_replace, argv + 2);
    fd_read.close();
    fd_replace.close();
    
}

static int ft_strcmp(std::string& str1, const char *str2, int n, int actual_point)
{
    int i;
    
    i = 0;
    while(str1[actual_point] && str2[i] && i < n)
    {
        if(str1[actual_point] != str2[i])
            return(str1[actual_point] - str2[i]);
        i++;
        actual_point++;   
    }
    return(0);
}
static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
static void replace_function(std::ifstream& fd_read , std::ofstream& fd_write, char **strs)
{
    std::string buff;
    std::string buff2;
    std::string new_coso;
    int i;
    int str1_len;
    int str2_len;
    new_coso = strs[1];
    str2_len = ft_strlen(strs[1]);
    str1_len = ft_strlen(strs[0]);
    i = 0;
    while(std::getline(fd_read, buff))
    {
        
        for(size_t z = 0; z < buff.size(); z++)
        {
            
             
            if(ft_strcmp(buff, strs[0], ft_strlen(strs[0]), z) == 0)
            {
                buff.replace(z, ft_strlen(strs[0]), new_coso);
                continue;
            }
        }
        fd_write << buff << std::endl;
    }

    fd_write.close();
    fd_read.close();
}
