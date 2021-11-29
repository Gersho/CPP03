/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:05:21 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:22:02 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap("Anthony")
{
	_hp = 100;
	_ep = 50;
	_atkdmg = 20;
	std::cout << "ScavpTrap " << ClapTrap::_name << "(default) contructor called." << std::endl;
}

ScavTrap::ScavTrap( const  ScavTrap & src ) : ClapTrap(src._name)
{

	*this = src;
	std::cout << "ScavTrap " << _name << " copy contructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_atkdmg = 20;
	std::cout << "ScavTrap " << _name << " copy contructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has enterred Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(std::string const & target) const
{
	std::cout 
	<< "ScavTrap " << _name
	<<  " attacks " << target
	<< ", causing " <<  _atkdmg << " points of damage!"
	<< std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */