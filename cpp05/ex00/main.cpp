/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:46 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 11:48:40 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	test1(GREEN "Steven" RESET, 1);
		std::cout << test1 << std::endl;
		test1.decrementGrade();
		test1.decrementGrade();
		std::cout << test1 << std::endl;
		test1.incrementGrade();
		test1.incrementGrade();
		std::cout << test1 << std::endl;
		test1.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		Bureaucrat	test2(BLUE "Micheal" RESET, 1236);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
