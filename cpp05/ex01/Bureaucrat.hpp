/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:36:44 by arthur            #+#    #+#             */
/*   Updated: 2024/10/15 11:52:46 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

#define RESET      "\e[0m"     // Réinitialise la couleur
#define BLACK      "\e[30m"    // Noir
#define RED        "\e[31m"    // Rouge
#define GREEN      "\e[32m"    // Vert
#define YELLOW     "\e[33m"    // Jaune
#define BLUE       "\e[34m"    // Bleu
#define MAGENTA    "\e[35m"    // Magenta
#define CYAN       "\e[36m"    // Cyan
#define WHITE      "\e[37m"    // Blanc

#define BOLD       "\e[1m"     // Gras
#define UNDERLINE  "\e[4m"     // Surligné

#include "Form.hpp"

class Form;

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

	void	signForm(Form &form);
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );
