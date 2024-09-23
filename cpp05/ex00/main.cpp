/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:46 by arthur            #+#    #+#             */
/*   Updated: 2024/09/04 15:34:50 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	test1("test1", 1);
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
		Bureaucrat	test2("test2", 1236);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
