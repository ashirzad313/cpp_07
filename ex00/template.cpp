/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:32:57 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/05 16:43:44 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>

T min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>

T max(T a, T b)
{
	return (a > b ? a : b);
}


