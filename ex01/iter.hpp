/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:26 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/05 17:40:13 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>
#include <cstddef>

template <typename T>

void	ft_print(T element)
{
	std::cout << element << std::endl;
}

template <typename T, typename F>

void iter(T *array, size_t length, F function)
{
	for (int i = 0; i < (int)length; i++)
	{
		function(array[i]);
	}
}

#endif // __ITER_HPP__ //
