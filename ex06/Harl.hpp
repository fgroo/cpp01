/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 22:58:49 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/15 23:49:50 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
	public:
		void	complain( std::string level );
	private : 
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif