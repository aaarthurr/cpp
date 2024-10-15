/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:24:05 by arpages           #+#    #+#             */
/*   Updated: 2024/10/15 17:57:20 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>
#include <stack>
#include <map>
#include <string>
#include <sstream> 

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

class BitcoinExchange
{
private:
    std::map<int, double>	data_base;
    int max_date;
    int min_date;
    std::ifstream           file;
public:
    BitcoinExchange(/* args */);
    ~BitcoinExchange();

    void set_map(std::map<int, double> &data_base, std::ifstream &file);
    void exchange();
    double get_price(int key);
};


int check_line(std::string str);