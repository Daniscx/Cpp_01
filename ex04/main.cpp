/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:15 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/16 17:58:13 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/sed.h"
static void replace_function(int fd_read , int fd_write, char **strs);
static int ft_strcmp(char *str1,const char *str2);
static int ft_strlen(char *str);
int main(int args, char **argv)
{
    int fd_read;
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
    if(ft_strcmp(argv[2] + ft_strlen(argv[2]) - 8, ".replace") != 0)
    {
        std::cerr << "invalid file type for  replacement please put a valid fd" << std::endl;
        return(close(fd_read), -1);
    }
    fd_replace = open(argv[2],  O_WRONLY | O_CREAT | O_TRUNC, 0777);
    replace_function(fd_read, fd_replace, argv + 3);
    close(fd_read);
    close(fd_replace);
    
}

static int ft_strcmp(char *str1, const char *str2)
{
    int i;
    
    i = 0;
    while(str1[i] && str2[i])
    {
        if(str1[i] != str2[i])
            return(str1[i] - str2[i]);
        i++;   
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
static void replace_function(int fd_read , int fd_write, char **strs)
{
    char buff[100];
    int i;
    int str1_len;
    int str2_len;
    int bytes_read;
    
    str2_len = ft_strlen(strs[1]);
    str1_len = ft_strlen(strs[0]);
    i = 0;
    bytes_read = read(fd_read, buff, 100);
    while(bytes_read > 0)
    {
        while(i < bytes_read)
        {
            if(ft_strcmp(buff + i, strs[0]) == 0)
            {
                i+= str1_len;
                write(fd_write, strs[1], str2_len);
            }
            else
            { 
                write(fd_write, &buff[i], 1);
                i++;
            }
        }
        i = 0;
        bytes_read = read(fd_read, buff, 100);
    }
}
