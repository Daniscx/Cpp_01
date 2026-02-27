/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:58:14 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/26 12:46:52 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>

int main()
{
    std::string  str;
    std::string* stringPTR;
    std::string& stringREF = str;
    
    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    stringREF = str;
    
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return(0);
}