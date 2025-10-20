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

class ScavTrap: public ClapTrap
{
public:
	void	guardGate() const;
	void	attack(const std::string &target);

	ScavTrap();
	explicit ScavTrap(const std::string &name);
	ScavTrap(ScavTrap const &e);
	ScavTrap	&operator=(ScavTrap const &e);
	virtual ~ScavTrap();
};

#endif