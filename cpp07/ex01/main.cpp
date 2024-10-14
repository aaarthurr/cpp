/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:29:01 by arpages           #+#    #+#             */
/*   Updated: 2024/09/23 09:57:01 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	int	tab1[5] = {89, 56, 23, 12, 4};
	iter<int>(tab1, 5, t_print);
	std::cout << std::endl << "----------------------------------------" << std::endl;

	char tab2[6] = {'a', 'z', 'e', 'r', 't', 'y'};
	iter<char>(tab2, 6, t_print);
	std::cout << std::endl << "----------------------------------------" << std::endl;

	double tab3[5] = {89.3, 56.2, 75.42, 12.09, 87.59};
	iter<double>(tab3, 5, t_print);
	std::cout << std::endl << "----------------------------------------" << std::endl;

	std::string	tab4[5];
	tab4[0] = "salut";
	tab4[1] = "comment";
	tab4[2] = "tu";
	tab4[3] = "va";
	tab4[4] = "?";
	iter<std::string>(tab4, 5, t_print);
	std::cout << std::endl << "----------------------------------------" << std::endl;
}