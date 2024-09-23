/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:17:01 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:17:30 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &str);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	void	execute(const Bureaucrat &exec) const;
private:
	const std::string	target;
};
