/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:35:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/29 16:26:55 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "Created mstack" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
void MutantStack<T>::push(const T& n)
{
    this->stck.push(n);
}

template<typename T>
T& MutantStack<T>::top(void)
{
    return (this->stck.top());
}

template<typename T>
void MutantStack<T>::pop(void)
{
    this->stck.pop();
}

template<typename T>
unsigned int MutantStack<T>::size(void)
{
    return(this->stck.size());
}
