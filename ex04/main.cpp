/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:15 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/24 20:23:18 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/sed.h"
static void replace_function(std::ifstream& fd_read , std::ifstream& fd_write, char **strs);
static int ft_strcmp(std::string& str1 ,const char *str2, int n, int actual_point);
static int ft_strlen(char *str);
int main(int args, char **argv)
{
    
    int fd_replace;

    if(args != 5)
    {
        std::cerr << "invalid number of args please correct them" << std::endl;
        return(-1);
    }
    fd_read = open(argv[1], O_RDONLY);
    if(fd_read == -1)
    {
        std::cerr << "invalid fd for the read please put a valid fd" << std::endl;
        return(-1);
    }
    if(std::strncmp(argv[2] + ft_strlen(argv[2]) -8 , ".replace",  8) != 0)
    {
        std::cerr << "invalid file type for  replacement please put a valid fd" << std::endl;
        return(close(fd_read), -1);
    }
    std::ifstream fd_read(argv[2]);
    replace_function(fd_read, fd_replace, argv + 3);
    close(fd_read);
    close(fd_replace);
    
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
static void replace_function(std::ifstream& fd_read , std::ifstream& fd_write, char **strs)
{
    std::string buff;
    int i;
    int str1_len;
    int str2_len;
    int bytes_read;
    
    str2_len = ft_strlen(strs[1]);
    str1_len = ft_strlen(strs[0]);
    i = 0;
      std::cout << buff << std::endl;
    buff = std::get
  
    while(bytes_read > 0)
    {
        for(size_t z = 0; z < buff.size(); z++)
        {
            if(ft_strcmp(buff, strs[0], ft_strlen(strs[0]), z) == 0)
            {
                z += ft_strlen(strs[0]);
                write(fd_write, strs[1],ft_strlen(strs[1]));   
            }
            else
                {
                    write(fd_write, &buff[z], 1);
                    z++;
                }
            
        }
        bytes_read = read(fd_read, &buff, 100);
    }
    close(fd_write);
    close(fd_read);
}
