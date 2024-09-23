/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:44 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:34:04 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	_name;
	int		_grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(unsigned int grade);
	Bureaucrat(std::string const &name);
	Bureaucrat(std::string const &name, unsigned int grade);
	Bureaucrat(const Bureaucrat &src);
	
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &src);

	void incrementGrade(void);
	void decrementGrade(void);

	int getGrade(void) const;
	const std::string getName(void) const;

	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return ("Grade is too High !");
		}
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return ("Grade is too Low !");
		}
	};

	void	signForm(AForm &form);
	void	executeForm(AForm const &form);
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );
