/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 11:30:47 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/30 12:31:31 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try{
		Span sp = Span(5);
		sp.addNumber(0);
		sp.addNumber(2147383647);
        std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

	try
	{
		Span sp = Span(5);

		std::vector<int> test = {1, 2, 4, 7, 12};

		sp.addNumbers(test.begin(), test.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

	try
	{
		Span sp = Span(10000);

		std::vector<int> vec;
		vec.reserve(10000);
        for (size_t i = 0; i < 10000; i++)
            vec.emplace_back(i);
		sp.addNumbers(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return (0);
}