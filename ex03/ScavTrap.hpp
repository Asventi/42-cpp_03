/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:04:38 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/16 11:04:38 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
	const static int	base_health = 100;
	const static int	base_energy = 50;
	const static int	base_attack = 20;

public:
	void	guardGate();

	ScavTrap();
	explicit ScavTrap(const std::string &name);
	ScavTrap(ScavTrap const &e);
	ScavTrap	&operator=(ScavTrap const &e);
	virtual ~ScavTrap();
};

#endif