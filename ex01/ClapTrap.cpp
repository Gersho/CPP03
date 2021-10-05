/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:24:38 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/05 12:59:42 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Alice"), _hp(10), _ep(10), _atkdmg(0)
{
	std::cout << "ClapTrap " << _name << " (default) contructor called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
	std::cout << "ClapTrap " << _name << " copy contructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string const & name): _hp(10), _ep(10), _atkdmg(0)
{
	_name = name;
	std::cout << "ClapTrap " << _name << " string contructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << " = operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
		this->_atkdmg = rhs.get_atkdmg();
		this->_hp = rhs.get_hp();
		this->_ep = rhs.get_ep();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	std::cout << " << operator called" << std::endl;

	o << "Name: " << i.get_name() << std::endl
	<< "HitPoints: " << i.get_hp() << std::endl
	<< "EnergyPoints: " << i.get_ep() << std::endl
	<< "AttackDamage: " << i.get_atkdmg() << std::endl;
	
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const & target) const
{
	std::cout 
	<< "ClapTrap " << _name
	<<  " attacks " << target
	<< ", causing " <<  _atkdmg << " points of damage!"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int prev = _hp;

	_hp -= amount;

	std::cout 
	<< "ClapTrap " << _name
	<< " takes " << amount << " damage"
	<< " going from " << prev
	<< " to " << _hp
	<< std::endl;
/*
	if (_hp <= 0)
	{
		std::cout
		<< "ClapTrap " << _name << " dies"
		<< std::endl;

		// _name = "AAAAA";
		// ClapTrap::~ClapTrap();
	}
	*/
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int prev = _hp;

	_hp += amount;

	std::cout 
	<< "ClapTrap " << _name
	<< " is repaired " << amount << " damage"
	<< " going from " << prev
	<< " to " << _hp
	<< std::endl;

}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	ClapTrap::get_hp() const
{
	return _hp;
}

int	ClapTrap::get_ep() const
{
	return _ep;
}

int	ClapTrap::get_atkdmg() const
{
	return _atkdmg;
}

std::string	ClapTrap::get_name() const
{
	return _name;
}


/* ************************************************************************** */