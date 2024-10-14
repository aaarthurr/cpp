/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:17:57 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 13:13:35 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class	Array
{
private:
	T* 				_array;
	unsigned int	_size;
public:
	Array<T>() : _array(NULL), _size (0) {};
	Array<T>(unsigned int n) : _array(new T[n]), _size(n) {};
	Array<T>(const Array &src) : _array(new T[src._size]), _size(src._size) {
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	};
	Array&	operator=(const Array &rhs) {
		if (this != &rhs)
		{
			if (_array)
				delete [] _array;
			_array = new T[rhs._size];
			_size = rhs._size;
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
		}
		return (*this);
	};
	~Array<T>() {delete [] _array;};
	
	class	InvalidIndexException : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return ("Invalid out of bounds !");
		}
	};
	
	T&	operator[](unsigned int i) {
		if (i >= size())
			throw InvalidIndexException();
		return (_array[i]);
	};
	
	unsigned int size() const {return(_size);};
};
