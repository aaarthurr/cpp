/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:57:58 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 12:07:25 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : _name("unknown"), _grade(150)
{
	std::cout << "Created a bureaucrate named " << _name;
	std::cout << " and have a grade of " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(unsigned int grade) :  _name("unknown"), _grade(grade)
{	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Created a bureaucrate named " << _name;
	std::cout << " and have a grade of " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name) :  _name(name), _grade(150)
{
	std::cout << "Created a bureaucrate named " << _name;
	std::cout << " and have a grade of " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) :  _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Created a bureaucrate named " << _name;
	std::cout << " and have a grade of " << _grade << std::endl;
}


Bureaucrat::Bureaucrat( const Bureaucrat& src ) : _name(src._name), _grade(src._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs )
{
	if ( this != &rhs )
		this->_grade = rhs.getGrade();
	return *this;
}


void	Bureaucrat::incrementGrade()
{
	if ( _grade - 1 < 1 )
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if ( _grade + 1 > 150 )
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::ostream&	operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

void	Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned() == true)
        std::cout << form.getName() << " is already signed" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signed " << form.getName() << std::endl;
		}
		catch (AForm::GradeTooLowException &e)
		{
			std::cerr << this->_name << " couldn't sign " << form.getName() << " because " RED UNDERLINE "Grade is too Low" RESET << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << this->getName() << " cannot execute " << form.getName() << " because " RED UNDERLINE << e.what() << RESET << std::endl;
	}
}
