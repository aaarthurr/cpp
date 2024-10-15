/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:45:53 by arthur            #+#    #+#             */
/*   Updated: 2024/09/04 16:45:44 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeSign;
	const int			_gradeExe;
public:
	AForm();
	AForm(const std::string name, const int sign, const int exe);
	AForm(const AForm &src);
	~AForm();

	AForm &operator=(const AForm &src);

	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return (RED "Grade is too High !" RESET);
		}
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return (RED "Grade is too Low !" RESET);
		}
	};
	class	NotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return ("Form not signed !");
		}
	};
	
	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getGradeSign() const;
	int					getGradeExe() const;
	
	void beSigned(const Bureaucrat &bcrat);

	virtual void	execute(const Bureaucrat &exec) const = 0;
};

std::ostream&	operator<<(std::ostream &o, AForm &rhs);
