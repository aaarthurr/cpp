/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:29:38 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:38:01 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:AForm(), target("")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &str)
	:AForm("PresidentialPardonForm", 25, 5), target(str)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	:AForm(src), target(src.target)
{
		
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void	PresidentialPardonForm::execute(const Bureaucrat &exec) const
{
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	if (exec.getGrade() > getGradeExe())
		throw AForm::GradeTooLowException();
	std::cout << target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}