/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:18:48 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 12:10:00 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm()
	:AForm(), target("")
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &str)
	:AForm("RobotomyRequestForm", 72, 45), target(str)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	:AForm(src), target(src.target)
{
		
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void	RobotomyRequestForm::execute(const Bureaucrat &exec) const
{
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	if (exec.getGrade() > getGradeExe())
		throw AForm::GradeTooLowException();
	
	std::cout << "DRRRRRRR. DRRRRRRRRRRRR.. DRRRRRRRRR... " ;
	if (rand() % 2 == 0)
	{
		std::cout << RED " CRACK !!!!!" RESET << std::endl << "The robotomy failed..." << std::endl;
	}
	else
	{
		std::cout << YELLOW " Cling !" RESET << std::endl;
		std::cout << exec.getName() << " has been robotomized successfully !" << std::endl;
	}
	
}