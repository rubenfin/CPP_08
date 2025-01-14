/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 11:30:22 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/19 11:18:51 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm> 

class Span
{
private:
    unsigned int _N;
    std::vector<int> _vec;
public:
    Span(unsigned int N);
    Span(const Span& other);
    Span &operator=(const Span& other);
    ~Span();

    void addNumber(int num);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif
