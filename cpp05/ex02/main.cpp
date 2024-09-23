/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:46 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:36:01 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	bob("bob", 5);
	Bureaucrat	Carol("Carol", 142);
	
	std::cout << "---------ShrubberyForm----------" << std::endl;
	ShrubberyCreationForm	form1("form1");
	bob.executeForm(form1);
	Carol.signForm(form1);
	bob.executeForm(form1);
	Carol.executeForm(form1);
	
	std::cout << "---------RobotomyForm-----------" << std::endl;
	RobotomyRequestForm	form2("form2");
	bob.executeForm(form2);
	Carol.signForm(form2);
	bob.signForm(form2);
	bob.executeForm(form2);
	bob.executeForm(form2);
	bob.executeForm(form2);
	bob.executeForm(form2);
	Carol.executeForm(form2);
	
	std::cout << "--------PresidentialForm--------" << std::endl;
	PresidentialPardonForm	form3("form3");
	bob.executeForm(form3);
	Carol.signForm(form3);
	bob.signForm(form3);
	bob.executeForm(form3);
	Carol.executeForm(form3);
}