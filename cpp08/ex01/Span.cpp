/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:44:43 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 17:49:15 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{
    std::cout << "Span created with a size of : " UNDERLINE GREEN << 0 << RESET << std::endl; 
}

Span::Span(unsigned int n) : N(n)
{
    std::cout << "Span created with a size of : " UNDERLINE GREEN << n << RESET << std::endl;
}

Span::Span(const Span& src) : N(src.N)
{
    std::cout << "Span copied with a size of : " UNDERLINE GREEN << src.N << RESET << std::endl;
}

Span& Span::operator=( const Span& rhs )
{
	if ( this != &rhs )
		this->N= rhs.get_N();
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (numbers.size() >= N)
        throw std::overflow_error(RED "Error: Span is full: cannot add another number !\n" RESET);
    numbers.push_back(n);
}

int Span::shortestSpan()
{
    if (numbers.size() < 2)
        throw std::runtime_error(RED "Error: Span to short: need at least 2 numbers !\n" RESET);
        
    std::vector<int> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());

    int shortest = INT_MAX;
    for (size_t i = 1; i < sorted_numbers.size(); ++i)
    {
        int span = sorted_numbers[i] - sorted_numbers[i - 1];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (numbers.size() < 2)
        throw std::runtime_error(RED "Error: Span to short: need at least 2 numbers !\n" RESET);

    int max = *std::max_element(numbers.begin(), numbers.end());
    int min = *std::min_element(numbers.begin(), numbers.end());

    return (max - min);
}

int Span::get_N() const
{
    return (this->N);
}
