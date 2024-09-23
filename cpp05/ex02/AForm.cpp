/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:45:41 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 14:51:45 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
	:_name(""), _isSigned(false), _gradeSign(150), _gradeExe(150)
{
	
}	

AForm::AForm(const std::string name, const int sign, const int exe)
	:_name(name), _isSigned(false), _gradeSign(sign), _gradeExe(exe)
{
	if (exe > 150)
		throw AForm::GradeTooLowException();
	if (exe <= 0)
		throw AForm::GradeTooHighException();
	if (sign > 150)
		throw AForm::GradeTooLowException();
	if (sign <= 0)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &src)
	:_name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _gradeExe(src._gradeExe)
{		
}

AForm::~AForm()
{
}

AForm&	AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, AForm &obj)
{
	std::cout << "new AForm : " << obj.getName() << std::endl;
	std::cout << "Status:" << obj.getIsSigned() << std::endl;
	std::cout << "Grade to sign:" << obj.getGradeSign() << std::endl;
	std::cout << "Grade to execute:" << obj.getGradeExe() << std::endl;
	return (out);
}

const std::string&	AForm::getName() const
{
	return(this->_name);
}

bool	AForm::getIsSigned() const
{
	return(this->_isSigned);
}

int		AForm::getGradeSign() const
{
	return(this->_gradeSign);
}

int		AForm::getGradeExe() const
{
		return(this->_gradeExe);
}

void AForm::beSigned(const Bureaucrat &bcrat) 
{
    if (this->_gradeSign < bcrat.getGrade())
	{
        throw GradeTooLowException();
    }
    else 
    {
        this->_isSigned = true;
	}
}
