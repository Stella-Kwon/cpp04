/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:57:21 by skwon2            #+#    #+#             */
/*   Updated: 2025/01/16 15:02:50 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
// Since you are using new Brain(), 
// you must implement a copy constructor and copy assignment operator in Dog 
//to perform deep copies of the brain member.
// Using smart pointers like std::unique_ptr<Brain> instead of raw pointers is a modern and safer alternative to manage memory automatically.
Dog::Dog(): Animal(), brain(new Brain()){
    type = "Dog";
    std::cout << "Dog " << type << " is created." << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog " << type << " is destructed." << std::endl;
}

Dog::Dog(const Dog& other): Animal(other){
    
    std::cout << "Dog is copied to " << type << "." << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    if (this != &other)
    {
        type = other.type;
        std::cout << "Dog copy assignment constructor is called." << std::endl; 
    }
    return (*this);
}

const std::string& Dog::getType() const{
    return (type);
}

void Dog::makeSound() const{
    std::cout << "Bark Bark" << std::endl;
}