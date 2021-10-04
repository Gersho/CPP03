/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:24:51 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/04 18:46:12 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct_a;
	ClapTrap ct_b("Bart");
	ClapTrap ct_c(ct_b);
	ClapTrap ct_d("Dan");

	ct_a.attack("a wall");
	ct_a = ct_d;
	ct_a.attack("the same wall");
	
	ct_b.takeDamage(5);
	ct_b.beRepaired(1);
	ct_b.takeDamage(50);

	ct_c.attack("something");

	std::cout << ct_d << std::endl;
}