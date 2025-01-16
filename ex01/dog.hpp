/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:57:44 by skwon2            #+#    #+#             */
/*   Updated: 2025/01/16 13:43:18 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "animal.hpp"
# include "brain.hpp"

class Dog : public Animal{
    private :
        Brain* brain;
    protected :
        std::string type;
    public :
        Dog();
        ~Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        const std::string& getType() const override;
        void makeSound() const override;
};

#endif