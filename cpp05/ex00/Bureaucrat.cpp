/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:57:58 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 11:49:39 by arpages          ###   ########.fr       */
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