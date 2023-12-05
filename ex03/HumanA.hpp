/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:45:17 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/06 00:18:53 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack() const;

private:
	std::string name;
	Weapon &weapon;
};

#endif
