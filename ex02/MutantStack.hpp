/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By:                                              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/20 13:30:20 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/20 15:24:37 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <list>
#include <vector>

template<typename T> 
class MutantStack : public std::stack<T, std::deque<T>>
{
public:
    using iterator = typename std::stack<T>::container_type::iterator;

    MutantStack();
    MutantStack& operator=(const MutantStack& other);
    MutantStack(const MutantStack& other);
    ~MutantStack();

    void push(const T& n);
    T& top(void);
    void pop(void);
    unsigned int size(void);
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif
