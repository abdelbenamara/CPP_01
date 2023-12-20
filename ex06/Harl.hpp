/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:16:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/14 13:09:55 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <string>

class Harl
{
public:
	Harl(void);
	~Harl(void);

	void complain(std::string level);

private:
	static std::string mood[];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
