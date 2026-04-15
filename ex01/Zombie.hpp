/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:10:31 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/08 17:33:00 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie( void );
		Zombie(std::string name);
		~Zombie(void);
		void	announce( void );
		void	setName( std::string name );
	private:
		std::string	_name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
