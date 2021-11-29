/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:05:26 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:21:57 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(  ScavTrap const & src );
		ScavTrap(std::string const & name);
		~ScavTrap();

		void	attack(std::string const & target) const;
		void	guardGate();
		ScavTrap &		operator=(  ScavTrap const & rhs );

	private:

};

#endif /* *******************************************************  SCAVTRAP_H */