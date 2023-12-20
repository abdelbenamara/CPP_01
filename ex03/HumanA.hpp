/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:45:17 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/20 22:59:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void) const;

private:
	std::string name;
	Weapon &weapon;
};

#endif
