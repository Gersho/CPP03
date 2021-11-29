/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:25:16 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:25:25 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(): ClapTrap("Anthony")
{
	_hp = 100;
	_ep = 100;
	_atkdmg = 30;
	std::cout << "FragTrap " << ClapTrap::_name << "(default) contructor called." << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ): ClapTrap(src._name)
{

	*this = src;
	std::cout << "FragTrap " << _name << " copy contructor called." << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_atkdmg = 30;
	std::cout << "FragTrap " << _name << " copy contructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		ClapTrap::operator=( rhs );
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name
	<< " displays a positive high five request" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */