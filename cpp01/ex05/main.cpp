/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:26:06 by arthur            #+#    #+#             */
/*   Updated: 2024/06/16 15:08:17 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    std::string input= "empty";
    Harl        harl;

	std::cout << "accepted input :" << std::endl;
	std::cout << "DEBUG" << std::endl;
	std::cout << "INFO" << std::endl;
	std::cout << "WARNING" << std::endl;
	std::cout << "ERROR" << std::endl;
	std::cout << "use \"exit\" to exit" << std::endl;
	std::cout << "--------------------" << std::endl;
    while (input.compare("exit") != 0)
    {
        std::cout << "-Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    }
    return 0;
}