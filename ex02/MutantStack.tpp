/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:35:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/08/12 11:42:30 by rfinneru      ########   odam.nl         */
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
		this->stck = other.stck;
	}
	return (*this);
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
{
	this->stck = other.stck;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
void MutantStack<T>::push(const T &n)
{
	this->stck.push(n);
}

template <typename T> T &MutantStack<T>::top(void)
{
	return (this->stck.top());
}

template <typename T>
void MutantStack<T>::pop(void)
{
	this->stck.pop();
}

template <typename T>
unsigned int MutantStack<T>::size(void)
{
	return (this->stck.size());
}

template <typename T> 
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (iterator(&this->top() - this->size() + 1));
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (iterator(&this->top() + 1)); 
}