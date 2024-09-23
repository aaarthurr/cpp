/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:28:42 by arthur            #+#    #+#             */
/*   Updated: 2024/09/06 15:29:18 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &str);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	void	execute(const Bureaucrat &exec) const;
private:
	const std::string	target;
};