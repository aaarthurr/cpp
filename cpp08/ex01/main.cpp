/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:44:40 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 17:41:38 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "MANDATORY TEST" << std::endl;
    
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "MY TEST" << std::endl;

    // Test 1: Tester avec moins de 2 nombres (devrait lever une exception)
    try {
        Span smallSpan(2);
        smallSpan.addNumber(5);
        std::cout << "Shortest Span (with only one number): " << smallSpan.shortestSpan() << std::endl;  // Devrait lever une exception
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    // Test 2: Tester l'ajout lorsque la Span est pleine (devrait lever une exception)
    try {
        Span fullSpan(3);
        fullSpan.addNumber(1);
        fullSpan.addNumber(2);
        fullSpan.addNumber(3);
        fullSpan.addNumber(4);  // Devrait lever une exception
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    // Test 3: Tester avec une grande série de nombres
    try {
        Span largeSpan(10);
        for (int i = 1; i <= 10; ++i) {
            largeSpan.addNumber(i * 5);  // Ajouter les multiples de 5
        }
        std::cout << "Shortest Span (10 numbers): " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span (10 numbers): " << largeSpan.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    // Test 4: Tester la Span vide (devrait lever une exception)
    try {
        Span emptySpan(5);  // Span vide
        std::cout << "Shortest Span (empty): " << emptySpan.shortestSpan() << std::endl;  // Devrait lever une exception
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}