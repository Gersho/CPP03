/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:25:06 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:25:30 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap(std::string const & name);
		~FragTrap();

		void highFivesGuys(void);
		FragTrap &		operator=( FragTrap const & rhs );

	private:

};
#endif /* ******************************************************** FRAGTRAP_H */