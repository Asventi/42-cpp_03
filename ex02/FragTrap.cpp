/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:30:33 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/16 17:30:33 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " would like to high fives.\n";
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called.\n";
	_name = "default";
	_energy = 100;
	_health = 100;
	_attack = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap " << name << " constructor called.\n";
	_name = name;
	_energy = 100;
	_health = 100;
	_attack = 30;
}

FragTrap::FragTrap(FragTrap const &e): ClapTrap(e)
{
	std::cout << "FragTrap copy constructor called.\n";
}

FragTrap &FragTrap::operator=(FragTrap const &e)
{
	std::cout << "FragTrap assignement operator called.\n";
	if (this == &e)
		return (*this);
	ClapTrap::operator=(e);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called.\n";
}