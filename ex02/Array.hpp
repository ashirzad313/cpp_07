/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:14:05 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/05 19:42:05 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template <class T>

class Array
{
	private :
		T				*_array;
		unsigned int	_length;
	public :
		Array(void)
		{
			this->_array = NULL;
		}
		Array(unsigned int n)
		{
			if (n == 0)
			{
				this->_array = NULL;
				this->_length = 0;
				return ;
			}
			this->_array = new T[n];
			this->_length = n;
			for (int i = 0; i < (int)n; i++)
				this->_array[i] = 0;
		}
		Array(Array &copy): _array(NULL), _length(copy._length)
		{
			*this = copy;
		}
		Array &operator=(Array &other)
		{
			if (this->_length)
				delete [] this->_array;
			this->_length = other.size();
			this->_array = new T[this->_length];
			for (int i = 0; i < (int)this->_length; i++)
				this->_array[i] = other._array[i];
			return (*this);
		}
		unsigned int size(void)
		{
			return (this->_length);
		}
		T	&operator[](unsigned int index)
		{
			if (index >= this->_length || this->_array == NULL)
				throw IndexError();
			return this->_array[index];
		}
		class IndexError : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Index is invalid");
				}
		};
		~Array(void)
		{
			if (this->_array != NULL)
				delete[] this->_array;
		}
};

#endif // __ARRAY_HPP__ //
