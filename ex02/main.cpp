/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:49:35 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/05 19:53:43 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(0));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp;
	try{
		for (int i = 0; i < MAX_VAL; i++)
		std::cout << "tmp[" << i << "]:\t" << tmp[i] << std::endl;
	}
	catch(std::exception &e){
		std::cerr << e.what() << '\t';
	}
	return 0;
}
