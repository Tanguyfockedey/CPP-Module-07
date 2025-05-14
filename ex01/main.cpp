/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:49:44 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/14 18:18:18 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T> void print(T &element)
{
	std::cout << element << std::endl;
}

template <typename T> void doubleprint(T &element)
{
	element *= 2;
	std::cout << element << std::endl;
}

int main(void)
{
	// Test with an array of characters
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	int Length = sizeof(charArray) / sizeof(charArray[0]);
	iter(charArray, Length, print);
	
	// Test with an array of strings
	std::string strArray[] = {"Hello", "World", "!"};
	Length = sizeof(strArray) / sizeof(strArray[0]);
	iter(strArray, Length, print);
	
	// Test with an array of integers
	int intArray[] = {1, 2, 3, 4, 5};
	Length = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, Length, doubleprint);
	
	return 0;
}