/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 11:30:10 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 14:22:43 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
    std::cout << "Made a Span class with a maximum of " << N << " numbers" << std::endl;
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (this->N == this->vec.size())
        throw std::out_of_range("Vector already reached maximum size");
    vec.push_back(num);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (auto it = begin; it != end; ++it)
    {
        if (this->N == this->vec.size())
            throw std::out_of_range("Vector already reached maximum size");
        vec.push_back((*it));
    }
}

unsigned int Span::shortestSpan()
{
    std::vector<int> copy;
    unsigned int currSpan = UINT32_MAX;
    if (vec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span, need a minimum of 2");
       
    copy = vec;
    std::sort(copy.begin(), copy.end());
    
    for (size_t i = 0; i < copy.size() - 1; i++)
    {
        if (static_cast<unsigned int>(copy[i + 1] - copy[i]) < currSpan)
            currSpan = static_cast<unsigned int>(copy[i + 1] - copy[i]);
    }
    return (currSpan);
}

unsigned int Span::longestSpan()
{
    if (vec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span, need a minimum of 2");
    auto lowest = std::min_element(vec.begin(), vec.end());
    auto highest = std::max_element(vec.begin(), vec.end());
    return (static_cast<unsigned int>((*highest) - (*lowest)));
}