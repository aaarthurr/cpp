/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:27:40 by arthur            #+#    #+#             */
/*   Updated: 2024/06/23 21:10:22 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int main( void )
{
	ClapTrap 	A("\033[1;35mClap\033[0m");
	ScavTrap 	B("\033[1;31mScav\033[0m");
	FragTrap 	C("\033[1;34mFrag\033[0m");
	DiamondTrap D("\033[1;36mDiamond\033[0m");
	A.attack("Target");
	B.guardGate();
	C.highFive();
	D.whoAmI();
}