/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:08:25 by arpages           #+#    #+#             */
/*   Updated: 2024/10/14 16:40:08 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // Test 1: Vector with elements
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try {
        std::vector<int>::iterator it = easyfind(vec, 3); // Element exists
        std::cout << "Found 3 at position: " << std::distance(vec.begin(), it) << "\n";
    } catch (const std::runtime_error& e) {
        std::cout << e.what();
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 6); // Element does not exist
        std::cout << "Found 6 at position: " << std::distance(vec.begin(), it) << "\n";
    } catch (const std::runtime_error& e) {
        std::cout << e.what();
    }

    // Test 2: List with elements
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    try {
        std::list<int>::iterator it = easyfind(lst, 30); // Element exists
        std::cout << "Found 30 at position: " << std::distance(lst.begin(), it) << "\n";
    } catch (const std::runtime_error& e) {
        std::cout << e.what();
    }

    try {
        std::list<int>::iterator it = easyfind(lst, 60); // Element does not exist
        std::cout << "Found 60 at position: " << std::distance(lst.begin(), it) << "\n";
    } catch (const std::runtime_error& e) {
        std::cout << e.what();
    }

    // Test 3: Array with elements (using a C-style array instead of std::array)
    int arr[5] = {100, 200, 300, 400, 500};

    try {
        int* it = std::find(arr, arr + 5, 300); // Element exists
        if (it != arr + 5) {
            std::cout << "Found 300 at position: " << (it - arr) << "\n";
        } else {
            std::cout << "Element not found in the container\n";
        }
    } catch (const std::runtime_error& e) {
        std::cout << e.what();
    }

    try {
        int* it = std::find(arr, arr + 5, 600); // Element does not exist
        if (it != arr + 5) {
            std::cout << "Found 600 at position: " << (it - arr) << "\n";
        } else {
            std::cout << "Element not found in the container\n";
        }
    } catch (const std::runtime_error& e) {
        std::cout << e.what();
    }

    return 0;
}