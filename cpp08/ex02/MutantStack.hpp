/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:52:58 by arpages           #+#    #+#             */
/*   Updated: 2024/10/15 11:38:19 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>
#include <stack>

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

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(/* args */) : std::stack<T>() {};
    MutantStack(const MutantStack &src) : std::stack<T>(src) {};
    MutantStack &operator=(const MutantStack &rhs)
    {
        if (this == &rhs)
            return *this;
        std::stack<T>::operator=(rhs);
        return *this;
    }
    ~MutantStack() {};

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    using std::stack<T>::push;
    using std::stack<T>::pop;
    using std::stack<T>::top;
    using std::stack<T>::empty;
    using std::stack<T>::size;

    iterator begin()
    {
        return this->c.begin();
    }
    
    iterator end()
    {
        return this->c.end();
    }

    const_iterator begin() const
    {
        return this->c.begin();
    }

    const_iterator end() const
    {
        return this->c.end();
    }

};
