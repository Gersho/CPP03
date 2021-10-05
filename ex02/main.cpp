/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:24:51 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/05 16:37:17 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap st_a;
	FragTrap st_b("Bart");
	FragTrap st_c(st_b);
	FragTrap st_d("Dan");

	st_a.attack("a wall");
	st_a = st_d;
	st_a.attack("the same wall");
	
	st_b.takeDamage(5);
	st_b.beRepaired(1);
	st_b.takeDamage(50);

	st_c.attack("something");
	st_c.highFivesGuys();

	std::cout << st_d << std::endl;
}