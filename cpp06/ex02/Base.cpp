/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:18:48 by arpages           #+#    #+#             */
/*   Updated: 2024/09/23 08:50:19 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdio>
#include <cstdlib>

Base * generate(void)
{
    Base    *base;
    srand(static_cast<unsigned int>(time(0)));
    int     i = rand() % 3;
    std::cout << i << std::endl;
	if (i == 0)
    {
		std::cout << "Class type A created !" << std::endl;
		base = new A();
	}
	else if (i == 1)
    {
		std::cout << "Class type B created !" << std::endl;
		base = new B();
	}
	else
    {
		std::cout << "Class type C created !" << std::endl;
		base = new C();
	}
	return (base);
}

void	identify(Base *p)
{
		A	*test1 = dynamic_cast<A *>(p);
		B	*test2 = dynamic_cast<B *>(p);
		C	*test3 = dynamic_cast<C *>(p);
		if (test1 != NULL)
			std::cout << "Actual type identified : A" << std::endl;
		else if (test2 != NULL)
			std::cout << "Actual type identified : B" << std::endl;
		else if (test3 != NULL)
			std::cout << "Actual type identified : C" << std::endl;
		else
			std::cout << "No Type identified..." << std::endl;
}

void	identify(Base &p)
{
	try {
		A	&test1 = dynamic_cast<A &>(p);
		(void)test1;
		std::cout << "Actual type identified : A" << std::endl;
		return ;
	}
	catch (std::exception &bc) {
		(void)bc;
	}
	try {
		B	&test2 = dynamic_cast<B &>(p);
		(void)test2;
		std::cout << "Actual type identified : B" << std::endl;
		return ;
	}
	catch (std::exception &bc) {
		(void)bc;
	}
	try {
		C	&test3 = dynamic_cast<C &>(p);
		(void)test3;
		std::cout << "Actual type identified : C" << std::endl;
		return ;
	}
	catch (std::exception &bc) {
		std::cout << "No Type identified..." << std::endl;
	}
}