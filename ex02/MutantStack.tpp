/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:35:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/20 15:24:22 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() 
{
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
	if (this != &other)
	{
		this->c = other.c;
	}
	return (*this);
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
{
	*this = other;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
void MutantStack<T>::push(const T &n)
{
	std::cout << "pushing " << n << " onto the stack" << std::endl; 
	std::stack<T, std::deque<T>>::push(n);
}

template <typename T> T &MutantStack<T>::top(void)
{
	return (std::stack<T, std::deque<T>>::top());
}

template <typename T>
void MutantStack<T>::pop(void)
{
	std::stack<T, std::deque<T>>::pop();
}

template <typename T>
unsigned int MutantStack<T>::size(void)
{
	return (std::stack<T, std::deque<T>>::size());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}
