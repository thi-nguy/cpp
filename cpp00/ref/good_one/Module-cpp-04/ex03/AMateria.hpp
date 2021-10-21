/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:07:41 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>

# include "ICharacter.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class AMateria;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class AMateria
{
    private:
        std::string     _type;
        unsigned int    _xp;

    public:
        // Coplien
        AMateria(std::string const & type);
        AMateria(const AMateria&);
        virtual ~AMateria();
        AMateria &operator=(const AMateria& op);

        // Getter - Setter
        std::string const & getType() const;        // Returns the materia type
        unsigned int        getXP() const;          // Returns the Materia'XP

        // Additionnal
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif