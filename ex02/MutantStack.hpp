/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:35:06 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 16:26:33 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>

template<typename T>
class MutantStack
{
private:
    std::stack<T> stck;
public:
    MutantStack();
    ~MutantStack();

    void push(const T& n);
    T& top(void);
    void pop(void);
    unsigned int size(void);
    typename T::iterator++(void);
};

#include "MutantStack.tpp"

#endif
