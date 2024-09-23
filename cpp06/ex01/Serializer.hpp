/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:51:07 by arthur            #+#    #+#             */
/*   Updated: 2024/09/19 18:16:03 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iomanip>
# include <iostream>
# include <limits>
# include <sstream>
# include <string>
# include <cstdio>
# include <cmath>
# include <cstdlib>
# include <stdint.h>

typedef	struct s_Data
{
	std::string	string;
	char		c;
	int			i;
	float		f;
	double		d;
}				t_Data;

class Serializer
{
private:
	/* data */
public:
	Serializer(/* args */);
	Serializer(const Serializer &src);
	Serializer&	operator=(const Serializer &rhs);
	~Serializer();

	static uintptr_t serialize(t_Data* ptr);
	static t_Data* deserialize(uintptr_t raw);
	virtual	void	instance() = 0;
};