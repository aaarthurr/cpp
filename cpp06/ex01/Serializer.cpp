/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:51:04 by arthur            #+#    #+#             */
/*   Updated: 2024/09/19 18:08:06 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(/* args */)
{
}

Serializer::Serializer(const Serializer &src)
{
	(void)src;
}

Serializer&	Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	return (*this);
}


Serializer::~Serializer()
{
}

uintptr_t	Serializer::serialize(t_Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_Data*		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<t_Data *>(raw));
}