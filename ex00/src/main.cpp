/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juportie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:13:41 by juportie          #+#    #+#             */
/*   Updated: 2025/11/12 11:25:19 by juportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include <iostream>

int main(void)
{
	Animal a0;
	std::cout << a0.getType() << '\n';
	a0.makeSound();
	Animal acp(a0);
	std::cout << acp.getType() << '\n';
	return (0);
}
