/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 11:30:22 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 12:18:23 by rfinneru      ########   odam.nl         */
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
    unsigned int N;
    std::vector<int> vec;
public:
    Span(unsigned int N);
    ~Span();

    void addNumber(int num);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif
