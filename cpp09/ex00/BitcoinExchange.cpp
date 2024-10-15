/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:24:12 by arpages           #+#    #+#             */
/*   Updated: 2024/10/15 17:54:12 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream base("data.csv");
    this->min_date = -1;
    this->max_date = -1;
    
    file.open("test.txt");
    
    if (!base.is_open())
    {
        std::cerr << RED "Impossible d'ouvrir le fichier!" RESET << std::endl;
        return;
    }
    BitcoinExchange::set_map(this->data_base, base);
    if (!file.is_open())
    {
        std::cerr << RED "Impossible d'ouvrir le fichier!" RESET << std::endl;
        return;
    }
    this->exchange();
    return;
}

/*
BitcoinExchange::BitcoinExchange()
{
    // Constructor with parameter
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
    // Copy constructor
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if (this != &rhs) {
        // Replace by values from rhs
    }
    return *this;
}
*/

BitcoinExchange::~BitcoinExchange()
{
    // Destructor
}

double BitcoinExchange::get_price(int key)
{
    while (key > 0)
    {
        if (data_base[key])
            return(data_base[key]);
        key--;
    }
    return (0);
}

void BitcoinExchange::exchange()
{
    std::string line;
    int date;
    int multiplicateur;
    bool isHeader = true;  // Variable pour sauter la première ligne (les entêtes)

    while (getline(file, line))
    {
        date = 0;
        multiplicateur = 0;
        if (isHeader)
        {
            isHeader = false;  // Sauter la ligne d'entête
            continue;
        }
        if (check_line(line) == 0)
        {
            std::cout << RED "Error: bad input => " RESET << line << std::endl;
            continue;
        }
        std::stringstream ss(line);  // Utiliser stringstream pour diviser la ligne
        std::string cell;
        std::string parts;
        std::string value;
        int temp;
        getline(ss, cell, '|');
        std::stringstream sss(cell);
        getline(sss, parts, '-');
        std::istringstream stream1(parts);
        stream1 >> temp;
        date += temp * 10000;
        getline(sss, parts, '-');
        std::istringstream stream2(parts);
        stream2 >> temp;
        date += temp * 100;
        getline(sss, parts, '-');
        std::istringstream stream3(parts);
        stream3 >> temp;
        date += temp;
        if (date < min_date)
        {
            std::cout << RED "error :: no data under at this range" RESET << std::endl;
            continue;
        }
        if (date > max_date + 10000)
        {
            std::cout << RED "error :: no data over at this range" RESET << std::endl;
            continue;
        }
        // Lire la deuxième cellule (description)
        getline(ss, value);
        std::istringstream stream4(value);
        stream4 >> multiplicateur;
        if (multiplicateur > 100000)
        {
            std::cout << RED "Error: too large number." RESET << std::endl;
            continue;
        }
        if (multiplicateur < 0)
        {
            std::cout << RED "Error: not a positive number." RESET << std::endl;
            continue;
        }
        std::cout << cell << " => " << multiplicateur << " => " << this->get_price(date) * multiplicateur << std::endl;         
    }
}

void BitcoinExchange::set_map(std::map<int, double> &data_base, std::ifstream &file)
{
    int date = 0;
    double price = 0;
    std::string line;
    bool isHeader = true;  // Variable pour sauter la première ligne (les entêtes)

    while (getline(file, line))
    {
        date = 0;
        price = 0;
        if (isHeader)
        {
            isHeader = false;  // Sauter la ligne d'entête
            continue;
        }
        std::stringstream ss(line);  // Utiliser stringstream pour diviser la ligne
        std::string cell;
        std::string parts;
        std::string value;
        int temp;

        // Lire la première cellule (id) et la convertir en int
        getline(ss, cell, ',');
        
        std::stringstream sss(cell);
        getline(sss, parts, '-');
        std::istringstream stream1(parts);
        stream1 >> temp;
        date += temp * 10000;
        getline(sss, parts, '-');
        std::istringstream stream2(parts);
        stream2 >> temp;
        date += temp * 100;
        getline(sss, parts, '-');
        std::istringstream stream3(parts);
        stream3 >> temp;
        date += temp;
        
        if (min_date == -1)
        {
            min_date = date;
            max_date = date;
        }
        if (date <= min_date)
            min_date = date;
        if (date >= max_date)
            max_date = date;

        // Lire la deuxième cellule (description)
        getline(ss, value);

        std::istringstream stream4(value);
        stream4 >> price;
        
        // Insérer la clé et la valeur dans la map
        data_base[date] = price;

        //std::cout << "Valeur associée à la clé " << date << ": " << data_base[date] << std::endl;
    }
}

int check_line(std::string str)
{
    std::string base = "0000-00-00 | -0";
    int i = 0;
    int part = 0;
    while(base[i])
    {
        if (!str[i])
            return(0);
        if (base[i] == '0')
        {
            if (isdigit(str[i]) == 0)
                return(0);
        }
        else if (part == 1 && base[i] == '-')
        {
            if (isdigit(str[i]) != 1)
                return(1);
            else if (str[i] != '-')
                return(0);
        }
        else
        {
            if (base[i] != str[i])
                return(0);
        }
        if (str[i] == '|')
            part = 1;
        i++;
    }
    return(1);
}