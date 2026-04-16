/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:01:23 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/16 14:03:35 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return (1);

	std::string s1 = av[2], s2 = av[3];
	if (s1.empty())
		return (1);

	std::ifstream file(av[1]);
	if (!file.is_open())
		return (1);

	std::stringstream	ss;
	ss << file.rdbuf();
	std::string str = ss.str();

	std::ofstream file2((std::string(av[1]) + ".replace").c_str());
	if (!file2.is_open())
		return (1);

	std::string new_str;
	size_t prev = 0;
	for (size_t i = 0; (i = str.find(s1, i)) != std::string::npos;) {
		new_str += str.substr(prev, i - prev);
		new_str += s2;
		prev = i + s1.length();
		i += s1.length();
	}
	if (prev != str.length())
		new_str += str.substr(prev);
	file2 << new_str;
	return (0);
}