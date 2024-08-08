/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:35:06 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/08/08 11:51:14 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>

template<typename T>
class StackIterator
{
public:
    using PointerType = T*;
    using ReferenceType = T&;
    
public:
    StackIterator(PointerType ptr) : m_Ptr(ptr) {}
    StackIterator& operator++()
    {
        m_Ptr++;
        return (*this);
    }

    StackIterator operator++(int)
    {
        StackIterator iterator = *this;
        ++(*this);
        return (iterator);
    }    
    
    StackIterator& operator--()
    {
        m_Ptr--;
        return (*this);
    }

    StackIterator operator--(int)
    {
        StackIterator iterator = *this;
        --(*this);
        return (iterator);
    }
    
    ReferenceType operator[](int index)
    {
        return *(m_Ptr + index);
    }

    PointerType operator->()
    {
        return (m_Ptr);
    }

    ReferenceType operator*()
    {
        return (*m_Ptr);
    }

    bool operator==(const StackIterator& other) const
    {
        return (m_Ptr == other.m_Ptr);
    }

    bool operator!=(const StackIterator& other) const
    {
        return (m_Ptr != other.m_Ptr);
    }

    // friend std::ostream& operator<<(std::ostream &os, const StackIterator<T> &it)
    // {
    //     os << *it.m_Ptr;
    //     return os;
    // }
private:
    PointerType m_Ptr;
};


template<typename T> 
class MutantStack : public std::stack<T>
{
public:
    using ValueType = T;
    using iterator = StackIterator<T>;
private:
    T* m_Data;
    std::stack<T> stck;
public:
    MutantStack();
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
