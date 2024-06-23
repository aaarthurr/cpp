/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:27:40 by arthur            #+#    #+#             */
/*   Updated: 2024/06/23 20:18:15 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main( void )
{
	ClapTrap A("\033[1;35mClap\033[0m");
	ScavTrap B("\033[1;31mScav\033[0m");
	A.attack("Target");
	A.takeDamage(5);
	B.attack("Another Target");
	B.takeDamage(30);
	B.guardGate();
}