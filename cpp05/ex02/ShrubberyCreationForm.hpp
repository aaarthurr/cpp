/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:04:01 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:08:14 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &str);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	void	execute(const Bureaucrat &exec) const;
private:
	const std::string	target;
};
