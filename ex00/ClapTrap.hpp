/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:15:15 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/15 17:15:15 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:
	std::string name() const;

	int health() const;

	int energy() const;

	int get_attack() const;

private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;

public:
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &e);
	ClapTrap	&operator=(const ClapTrap &e);
	~ClapTrap();
};

#endif