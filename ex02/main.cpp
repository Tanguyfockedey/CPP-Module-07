/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:21:32 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/14 20:46:17 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int main(void)
{
	// Test default constructor
	Array<int> Array1(5);
	Array1[0] = 42;
	
	// Test copy constructor
	Array<int> Array2(Array1);
	
	// Test size method
	std::cout << "Array1 size: " << Array1.size() << std::endl;
	std::cout << "Array2 size: " << Array2.size() << std::endl << std::endl;

	// Test deep copy
	std::cout << "Array1[0]: " << Array1[0] << std::endl;
	std::cout << "Array2[0]: " << Array2[0] << std::endl << std::endl;

	Array1[0] = 21;
	std::cout << "Array1[0]: " << Array1[0] << std::endl;
	std::cout << "Array2[0]: " << Array2[0] << std::endl << std::endl;

	// Test out of bounds exception
	try
	{
		std::cout << "Array1[5]: " << Array1[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	Array<std::string> Array3(3);
	Array3[0] = "Hello";
	Array3[1] = "World";
	Array3[2] = "!";
	std::cout << "Array3[0]: " << Array3[0] << std::endl;
	std::cout << "Array3[1]: " << Array3[1] << std::endl;
	std::cout << "Array3[2]: " << Array3[2] << std::endl << std::endl;

	return 0;
}