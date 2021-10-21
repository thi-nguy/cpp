/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 10:45:11 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

// LIBS ========================================================================
#include <iostream>
#include <string>
// =============================================================================

// PROTOTYPES ==================================================================
class Brain;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Brain
{

    public:
        Brain();
        Brain(const Brain&);
        virtual ~Brain();
        Brain &operator=(const Brain& op);

		// Getter - Setter
        void                setCapacity(unsigned long long capacity);
        unsigned long long  getCapacity();
        
        std::string         identify();

    private:
        unsigned long long _capacity;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif