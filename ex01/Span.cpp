/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 11:30:10 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/30 12:31:26 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
    std::cout << "Made a Span class with a maximum of " << N << " numbers" << std::endl;
}

Span::Span(const Span &other)
{
    *this = other;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_N = other._N;
        this->_vec = other._vec;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (this->_N == this->_vec.size())
        throw std::out_of_range("Vector already reached maximum size");
    this->_vec.push_back(num);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::size_t size = std::distance(begin, end);
    if (this->_vec.size() + size > this->_N) {
        throw std::out_of_range("Span will exceed its maximum size.");
    }
    this->_vec.insert(this->_vec.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
    unsigned int currSpan = UINT32_MAX;
    if (_vec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span, need a minimum of 2");
       
    std::vector<int> copy(_vec);
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
    if (_vec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span, need a minimum of 2");
    auto lowest = std::min_element(_vec.begin(), _vec.end());
    auto highest = std::max_element(_vec.begin(), _vec.end());
    return (static_cast<unsigned int>((*highest) - (*lowest)));
}