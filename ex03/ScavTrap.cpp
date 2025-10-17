/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:04:38 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/16 11:04:38 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeping mode.\n";
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called.\n";
	_name = "default";
	_energy = base_energy;
	_health = base_health;
	_attack = base_attack;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap " << name << " constructor called.\n";
	_name = name;
	_energy = base_energy;
	_health = base_health;
	_attack = base_attack;
}

ScavTrap::ScavTrap(ScavTrap const &e)
{
	std::cout << "ScavTrap copy constructor called.\n";
	_name = e._name;
	_energy = e._energy;
	_health = e._health;
	_attack = e._attack;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &e)
{
	std::cout << "ScavTrap assignement operator called.\n";
	if (this == &e)
		return (*this);
	_name = e._name;
	_energy = e._energy;
	_health = e._health;
	_attack = e._attack;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called.\n";
}
