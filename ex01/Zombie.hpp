/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:47:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/14 13:06:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);

	void setName(std::string name);
	void announce(void) const;

private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
