/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:44:11 by arthur            #+#    #+#             */
/*   Updated: 2024/09/19 18:04:24 by arthur           ###   ########.fr       */
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

class ScalarConverter
{
  private:
		static bool	is_char(const std::string &arg);
		static bool	is_int(const std::string &arg);
		static bool	is_float(const std::string &arg);
		static bool	is_double(const std::string &arg);

		static void	print_char(const std::string &arg);
		static void	print_int(const std::string &arg);
		static void	print_float(const std::string &arg);
		static void	print_double(const std::string &arg);

  public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter&	operator=(const ScalarConverter &rhs);
		~ScalarConverter();
		
		static void	convert(std::string arg);
		virtual	void	instance() = 0;
};
