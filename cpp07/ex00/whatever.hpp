/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:14:04 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 12:55:51 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T> void swap(T &a, T &b)
{
	T	temp = b;
	b = a;
	a = temp;
}

template <typename T> T max(T a, T b)
{
	return (a > b) ? a : b;
}

template <typename T> T min(T a, T b)
{
	return (a < b) ? a : b;
}
