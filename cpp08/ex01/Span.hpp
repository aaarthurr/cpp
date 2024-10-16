/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:44:45 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 17:37:01 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

#define RESET      "\e[0m"     // Réinitialise la couleur
#define BLACK      "\e[30m"    // Noir
#define RED        "\e[31m"    // Rouge
#define GREEN      "\e[32m"    // Vert
#define YELLOW     "\e[33m"    // Jaune
#define BLUE       "\e[34m"    // Bleu
#define MAGENTA    "\e[35m"    // Magenta
#define CYAN       "\e[36m"    // Cyan
#define WHITE      "\e[37m"    // Blanc

#define BOLD       "\e[1m"     // Gras
#define UNDERLINE  "\e[4m"     // Surligné

class Span
{
private:
    unsigned int N;
    std::vector<int> numbers;
public:
    Span(/* args */);
    Span(unsigned int n);
    Span(const Span &src);
    Span &operator=(const Span &src);
    ~Span();

    int get_N() const;

    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
};
