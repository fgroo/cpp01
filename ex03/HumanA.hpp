/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:01:40 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/13 19:14:32 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon &weapon );
		void	attack( void ) const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif