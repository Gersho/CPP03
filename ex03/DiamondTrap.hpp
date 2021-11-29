/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:44:01 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:24:55 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap(std::string const & name);
		~DiamondTrap();

		void whoAmI();
		void	attack(std::string const & target) const;
		DiamondTrap &		operator=( DiamondTrap const & rhs );

	private:
		std::string _name;

};
#endif /* ***************************************************** DIAMONDTRAP_H */