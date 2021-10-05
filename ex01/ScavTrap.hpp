/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:05:26 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/05 16:11:48 by kzennoun         ###   ########lyon.fr   */
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

		void guardGate();
		ScavTrap &		operator=(  ScavTrap const & rhs );

	private:

};

//std::ostream &			operator<<( std::ostream & o,  ScavTrap const & i );

#endif /* *******************************************************  SCAVTRAP_H */