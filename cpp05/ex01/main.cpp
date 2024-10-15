/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:46 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 11:57:14 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	test1(GREEN "Steven" RESET, 1);
		Form		form1(MAGENTA "Legal File 2024" RESET, 68, 20);
		std::cout << form1 << std::endl;
		test1.signForm(form1);
		std::cout << form1 << std::endl;
		test1.signForm(form1); //err (ne fait rien)
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		Bureaucrat	test2(BLUE "Micheal" RESET, 93);
		Form		form2(CYAN "Register 2025" RESET, 2, 89);
		std::cout << form2 << std::endl;
		test2.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try {
		Form		form2(CYAN BOLD "Register 2025 bis" RESET, 0, 89);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
}
