/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:53:51 by arpages           #+#    #+#             */
/*   Updated: 2024/10/15 11:41:05 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>

int main()
{
    std::cout << "-MANDATORY TEST-" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "----MY TEST----" << std::endl;

    MutantStack<int> copyStack(mstack);
    std::cout << "Top of copied stack: " << copyStack.top() << std::endl;

    MutantStack<int> assignedStack;
    assignedStack = mstack;
    std::cout << "Top of assigned stack: " << assignedStack.top() << std::endl;

    MutantStack<int> emptyStack;
    if (emptyStack.empty()) {
        std::cout << "The stack is empty." << std::endl;
    }

    emptyStack.push(42);
    std::cout << "Top of the empty stack after push: " << emptyStack.top() << std::endl;

    return 0;
}