/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:01:17 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/15 23:31:58 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon( void );
		Weapon( std::string type );
		const	std::string& getType( void ) const;
		void	setType( std::string type );

	private:
		std::string	_type;
};

#endif