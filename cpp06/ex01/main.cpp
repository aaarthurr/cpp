/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:05:14 by arthur            #+#    #+#             */
/*   Updated: 2024/09/19 18:12:10 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	t_Data	*	myData = new t_Data;
	uintptr_t	rawData;

	myData->string = "Hello World!";
	myData->c = 'H';
	myData->i = 42;
	myData->f = 08.15f;
	myData->d = 4711.0;
	std::cout << "string : " << myData->string << std::endl;
	std::cout << "char   : " << myData->c << std::endl;
	std::cout << "int    : " << myData->i << std::endl;
	std::cout << "float  : " << myData->f << std::endl;
	std::cout << "double : " << myData->d << std::endl;
	std::cout << "Pointer to data structure before serialization: " << &myData << std::endl;
	
	rawData = Serializer::serialize(myData);

	std::cout << "\n";

	myData = Serializer::deserialize(rawData);
	
	std::cout << "Pointer to data structure after deserialization: " << &myData << std::endl;
	std::cout << "string : " << myData->string << std::endl;
	std::cout << "char   : " << myData->c << std::endl;
	std::cout << "int    : " << myData->i << std::endl;
	std::cout << "float  : " << myData->f << std::endl;
	std::cout << "double : " << myData->d << std::endl;
	delete myData;
	return(0);
}