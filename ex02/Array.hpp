/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:21:55 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/14 20:18:18 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> class Array
{
	private:
		T *_array;
		unsigned int _size;

	public:
		// Constructors and destructors
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();

		// Operators
		Array &operator=(const Array &copy);
		T &operator[](unsigned int i);
		const T &operator[](unsigned int i) const;

		// Access operator
		unsigned int size() const;

		// Exception handling
		class OutOfBounds : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#include "Array.tpp"
