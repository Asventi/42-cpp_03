/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:30:33 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/16 17:30:33 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
protected:
	const static int	base_health = 100;
	const static int	base_energy = 100;
	const static int	base_attack = 30;

public:
	void	highFivesGuys();

	FragTrap();
	explicit FragTrap(const std::string &name);
	FragTrap(FragTrap const &e);
	FragTrap	&operator=(FragTrap const &e);
	virtual ~FragTrap();
};

#endif