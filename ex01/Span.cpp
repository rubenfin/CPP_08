/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 11:30:10 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 13:25:56 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (this->N == this->vec.size())
        throw std::exception();
    else
        vec.push_back(num);
}

unsigned int Span::shortestSpan()
{
    std::vector<int> copy;
    unsigned int currSpan = UINT32_MAX;
    if (vec.size() == 0 || vec.size() == 1)
        throw std::exception();
    
    for (size_t i = 0; i < vec.size(); i++)
        copy.push_back(vec[i]);    
    
    std::sort(copy.begin(), copy.end());
    
    for (size_t i = 0; i < copy.size() - 1; i++)
        for (size_t j = i + 1; j < copy.size(); j++)
            if (static_cast<unsigned int>(copy[j] - copy[i]) < currSpan)
                currSpan = static_cast<unsigned int>(copy[j] - copy[i]);
    return (currSpan);
}

unsigned int Span::longestSpan()
{
    if (vec.size() == 0 || vec.size() == 1)
        throw std::exception();
    auto lowest = std::min_element(vec.begin(), vec.end());
    auto highest = std::max_element(vec.begin(), vec.end());
    return ((*highest) - (*lowest));
}