/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:26:17 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 12:59:25 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T> void iter(T *array, size_t lenght, void (*f)(T&))
{
	for (size_t i = 0; i < lenght; i++)
		f(array[i]);
}

template<typename T>void    t_print(T &t)
{
	std::cout << t << " ";
}
