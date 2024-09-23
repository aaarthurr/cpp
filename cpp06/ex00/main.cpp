/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:22:55 by arthur            #+#    #+#             */
/*   Updated: 2024/09/19 17:38:57 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error : use with one argument" << std::endl;
	else
	{
		std::string str = argv[1];
		ScalarConverter::convert(str);
	}
	return(0);
}