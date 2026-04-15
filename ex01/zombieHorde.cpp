/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:32:29 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/13 15:22:24 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *newhorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newhorde[i].setName(name);
	return (newhorde);
}