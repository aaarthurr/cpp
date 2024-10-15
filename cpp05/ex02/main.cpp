/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:46 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 12:13:01 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	srand(static_cast<unsigned int>(time(0)));
	Bureaucrat	bob(BLUE "bob" RESET, 5);
	Bureaucrat	Carol( GREEN "Carol" RESET, 142);
	std::cout << std::endl;
	std::cout << "---------ShrubberyForm----------" << std::endl;
	ShrubberyCreationForm	form1(CYAN "Shrubbery Form" RESET);
	bob.executeForm(form1);
	Carol.signForm(form1);
	bob.executeForm(form1);
	Carol.executeForm(form1);
	std::cout << std::endl;
	std::cout << "---------RobotomyForm-----------" << std::endl;
	RobotomyRequestForm	form2(MAGENTA "Robotomy Form" RESET);
	bob.executeForm(form2);
	Carol.signForm(form2);
	bob.signForm(form2);
	std::cout << "--robotomy test--"<< std::endl;
	bob.executeForm(form2);
	bob.executeForm(form2);
	bob.executeForm(form2);
	bob.executeForm(form2);
	Carol.executeForm(form2);
	std::cout << std::endl;
	std::cout << "--------PresidentialForm--------" << std::endl;
	PresidentialPardonForm	form3(YELLOW "Presidential Form" RESET);
	bob.executeForm(form3);
	Carol.signForm(form3);
	bob.signForm(form3);
	bob.executeForm(form3);
	Carol.executeForm(form3);
}