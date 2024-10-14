/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:18:43 by arpages           #+#    #+#             */
/*   Updated: 2024/09/23 08:44:19 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base
{
public:
        virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void);
void	identify(Base *p);
void	identify(Base &p);