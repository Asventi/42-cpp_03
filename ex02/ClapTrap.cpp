/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:15:15 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/15 17:15:15 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

# include "ClapTrap.hpp"

std::string ClapTrap::name() const
{
	return _name;
}

int ClapTrap::health() const
{
	return _health;
}

int ClapTrap::energy() const
{
	return _energy;
}

int ClapTrap::get_attack() const
{
	return _attack;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy <= 0 || _health <= 0)
	{
		std::cout << "ClapTrap " << _name << " have not enough healt or energy.\n";
		return ;
	}
	--_energy;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _attack << " damage! Remaining energy: " << _energy << ".\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0 || _health <= 0)
	{
		std::cout << "ClapTrap " << _name << " have not enough healt or energy.\n";
		return ;
	}
	--_energy;
	_health += amount;
	std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points, "
		<< "leaving it with " << _health << " hp.\n";
}


ClapTrap::ClapTrap(): _name("default"), _health(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _health(10),
	_energy(10), _attack(0)
{
	std::cout << "ClapTrap " << _name << " constructor called.\n";
}

ClapTrap::ClapTrap(const ClapTrap &e): _name(e._name), _health(e._health),
	_energy(e._energy), _attack(e._attack)
{
	std::cout << "ClapTrap " << _name << " copy constructor called.\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &e)
{
	std::cout << "ClapTrap assignement operator called.\n";
	if (this == &e)
		return (*this);
	_name = e._name;
	_health = e._health;
	_attack = e._attack;
	_energy = e._energy;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called.\n";
}

