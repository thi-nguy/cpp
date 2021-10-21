/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:31:49 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
// =============================================================================

// PROTOTYPES ==================================================================
class Enemy;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Enemy
{
    private:
        int             _hp;
        std::string     _type;

    public:
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy&);
        virtual ~Enemy();
        Enemy &operator=(const Enemy& op);

        // Getter / Setter
        std::string     getType() const;
        int             getHP() const;

        // Additionnal
        virtual void    takeDamage(int amount);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif