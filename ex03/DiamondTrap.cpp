/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:34:47 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/17 10:34:47 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI()
{
	std::cout << "Name: " << _name << "\tClap name: " << ClapTrap::_name << "\n";
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor called.\n";
	_name = "default";
	ClapTrap::_name = "default_clap_name";
	_health = FragTrap::base_health;
	_energy = ScavTrap::base_energy;
	_attack = FragTrap::base_attack;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	std::cout << "DiamondTrap " << name << " constructor called.\n";
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_health = FragTrap::base_health;
	_energy = ScavTrap::base_energy;
	_attack = FragTrap::base_attack;
}

DiamondTrap::DiamondTrap(DiamondTrap const &e)
{
	std::cout << "DiamondTrap " << _name << " copy constructor called.\n";
	_name = e._name;
	ClapTrap::_name = e.ClapTrap::_name;
	_energy = e._energy;
	_health = e._health;
	_attack = e._attack;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &e)
{
	std::cout << "DiamondTrap " << _name << " assignement operator called.\n";
	if (this == &e)
		return (*this);
	_name = e._name;
	ClapTrap::_name = e.ClapTrap::_name;
	_energy = e._energy;
	_health = e._health;
	_attack = e._attack;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond trap " << _name << " destructor called.\n";
}

