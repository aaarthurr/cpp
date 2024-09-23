/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:08:46 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:38:08 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	:AForm(), target("")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &str)
	:AForm("ShrubberyCreationForm", 145, 137), target(str)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	:AForm(src), target(src.target)
{
		
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void	ShrubberyCreationForm::execute(const Bureaucrat &exec) const
{
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	if (exec.getGrade() > getGradeExe())
		throw AForm::GradeTooLowException();
	
	
}