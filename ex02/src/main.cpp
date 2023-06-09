/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:05:04 by kali              #+#    #+#             */
/*   Updated: 2023/06/02 18:30:27 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string =  "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string&    stringREF = string;

    std::cout << "string = " << string << std::endl;
    std::cout << "stringPTR = " << *stringPTR << std::endl;
    std::cout << "stringREF = " << stringREF << std::endl;
    
    return 0;
}