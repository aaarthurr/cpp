/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:45:41 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 14:51:45 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	:_name(""), _isSigned(false), _gradeSign(150), _gradeExe(150)
{
	
}	

Form::Form(const std::string name, const int sign, const int exe)
	:_name(name), _isSigned(false), _gradeSign(sign), _gradeExe(exe)
{
	if (exe > 150)
		throw Form::GradeTooLowException();
	if (exe <= 0)
		throw Form::GradeTooHighException();
	if (sign > 150)
		throw Form::GradeTooLowException();
	if (sign <= 0)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &src)
	:_name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _gradeExe(src._gradeExe)
{		
}

Form::~Form()
{
}

Form&	Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form &obj)
{
	std::cout << "new form : " << obj.getName() << std::endl;
	std::cout << "Status:" << obj.getIsSigned() << std::endl;
	std::cout << "Grade to sign:" << obj.getGradeSign() << std::endl;
	std::cout << "Grade to execute:" << obj.getGradeExe() << std::endl;
	return (out);
}

const std::string&	Form::getName()
{
	return(this->_name);
}

bool	Form::getIsSigned()
{
	return(this->_isSigned);
}

int		Form::getGradeSign()
{
	return(this->_gradeSign);
}

int		Form::getGradeExe()
{
		return(this->_gradeExe);
}

void Form::beSigned(const Bureaucrat &bcrat) 
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
