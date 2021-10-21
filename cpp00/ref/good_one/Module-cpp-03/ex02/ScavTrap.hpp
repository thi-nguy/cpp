/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/12 22:38:51 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// LIBS ========================================================================
#include "ClapTrap.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class ScavTrap;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		virtual ~ScavTrap();
		ScavTrap &operator=(const ScavTrap& op);
		
		void			challengeNewcomer(std::string const & target);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif