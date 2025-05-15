/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:34:39 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/15 14:59:41 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	std::cout << "Constructor with size called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &copy) : _array(new T[copy._size]), _size(copy._size)
{
	std::cout << "Copy constructor called" << std::endl;
	unsigned int i = 0;
	while (i < _size)
	{
		_array[i] = copy._array[i];
		i++;
	}
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
	if (_array)
		delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	unsigned int i = 0;
	if (this != &copy)
	{
		if (_array)
			delete[] _array;
		_size = copy._size;
		_array = new T[_size];
		while (i < _size)
		{
			_array[i] = copy._array[i];
			i++;
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfBounds();
	return _array[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw OutOfBounds();
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return "Index out of bounds";
}
