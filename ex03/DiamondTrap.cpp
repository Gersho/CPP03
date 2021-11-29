/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:44:03 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:25:16 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(): _name("Aya")
{
	ClapTrap::_name = _name + "_clap_name";
	_hp = 100;
	_ep = 50;
	_atkdmg = 30;
	std::cout << "DiamondTrap " << _name << "(default) contructor called." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
	std::cout << "DiamondTrap " << _name << " copy contructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name): _name(name)
{
	ClapTrap::_name = _name + "_clap_name";
	_hp = 100;
	_ep = 50;
	_atkdmg = 30;
	std::cout << "DiamondTrap " << _name << " string contructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		ClapTrap::operator=( rhs );
		_name = rhs._name;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI()
{
	std::cout 
	<< "DiamondTrap name: " << _name << std::endl
	<< "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const & target) const
{
	ScavTrap::attack(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */