/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:24:51 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/05 21:59:38 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap st_a;
	DiamondTrap st_b("Bart");
	DiamondTrap st_c(st_b);
	DiamondTrap st_d("Dan");

	// st_a.attack("a wall");
	// st_b.attack("a wall");
	// st_c.attack("a wall");
	// st_d.attack("a wall");
	// st_a = st_d;
	// st_a.attack("the same wall");
	
	// st_b.takeDamage(5);
	// st_b.beRepaired(1);
	// st_b.takeDamage(50);

	// st_c.attack("something");
	// st_c.highFivesGuys();
	// st_c.guardGate();


	std::cout << std::endl;

	st_a.whoAmI();
	std::cout << st_a << std::endl;

	st_b.whoAmI();
	std::cout << st_b << std::endl;

	st_c.whoAmI();
	std::cout << st_c << std::endl;

	st_d.whoAmI();
	std::cout << st_d << std::endl;
}