/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:15:21 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/14 18:20:35 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T> T max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}
