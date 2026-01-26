/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:15:02 by ainthana          #+#    #+#             */
/*   Updated: 2026/01/26 15:01:24 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMAN_HPP

class	HumanB {
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		HumanB(std::string	name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif