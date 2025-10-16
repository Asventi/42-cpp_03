/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:14:12 by pjarnac           #+#    #+#             */
/*   Updated: 2025/10/15 17:14:12 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "ScavTrap.hpp"

TEST_CASE("ClapTrap attack")
{
	ClapTrap	a;
	ClapTrap	b("Jeanette");

	a.attack("T1");
	CHECK(a.energy() == 9);
	a.beRepaired(5);
	CHECK(a.health() == 15);
	CHECK(a.energy() == 8);
	for (int i = 0; i < 8; i++)
		a.attack("T1");
	a.attack("T1");
	CHECK(a.energy() == 0);
	a.beRepaired(5);
	CHECK(a.health() == 15);
	CHECK(a.energy() == 0);
}

TEST_CASE("ScavTrap tests")
{
	ScavTrap	scav("jean");
	ScavTrap	scav2(scav);

	std::cout << scav2.name() << "\n";
	scav2.guardGate();
	scav2.attack("quelqu'un");
	scav2.beRepaired(1);
	CHECK(scav2.health() == 101);
	CHECK(scav2.energy() == 48);
}