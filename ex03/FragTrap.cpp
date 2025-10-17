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
	_energy = base_energy;
	_health = base_health;
	_attack = base_attack;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap " << name << " constructor called.\n";
	_name = name;
	_energy = base_energy;
	_health = base_health;
	_attack = base_attack;
}

FragTrap::FragTrap(FragTrap const &e)
{
	std::cout << "FragTrap copy constructor called.\n";
	_name = e._name;
	_energy = e._energy;
	_health = e._health;
	_attack = e._attack;
}

FragTrap &FragTrap::operator=(FragTrap const &e)
{
	std::cout << "FragTrap assignement operator called.\n";
	if (this == &e)
		return (*this);
	_name = e._name;
	_energy = e._energy;
	_health = e._health;
	_attack = e._attack;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called.\n";
}