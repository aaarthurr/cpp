/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:43:17 by arpages           #+#    #+#             */
/*   Updated: 2024/09/23 08:49:44 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdio>
#include <cstdlib>

int	main()
{
	Base	*base = generate();
	identify(base);
	identify(*base);
	identify(NULL);
	delete base;
}