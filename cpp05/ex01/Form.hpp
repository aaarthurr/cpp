/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:45:53 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 11:53:11 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeSign;
	const int			_gradeExe;
public:
	Form();
	Form(const std::string name, const int sign, const int exe);
	Form(const Form &src);
	~Form();

	Form &operator=(const Form &src);

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
	
	const std::string&	getName();
	bool				getIsSigned();
	int					getGradeSign();
	int					getGradeExe();
	
	void beSigned(const Bureaucrat &bcrat);
};

std::ostream&	operator<<(std::ostream &o, Form &rhs);
