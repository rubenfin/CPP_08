/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:34:47 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/30 12:19:31 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    
    return 0;
}
// 
// int main() {
    // try {
    //    
        // std::cout << "Testing with MutantStack:" << std::endl;
        // MutantStack<int> mstack;
// 
    //    
        // mstack.push(5);
        // mstack.push(737);
        // mstack.push(0);
        // 
    //    
        // MutantStack<int>::iterator it = mstack.begin();
        // MutantStack<int>::iterator ite = mstack.end();
        // 
        // ++it; z
        // --it;
        // while (it != ite) {
            // std::cout << *it << std::endl;
            // ++it;
        // }
        // 
        // std::stack<int> s(mstack);
        // 
        // std::cout << "\nTesting with std::list:" << std::endl;
        // std::list<int> lst;
// 
        // lst.push_back(5);
        // lst.push_back(737);
        // lst.push_back(0);
            //    
        // std::list<int>::iterator it_list = lst.begin();
        // std::list<int>::iterator ite_list = lst.end();
        // 
    //    while (it_list != ite_list) {
            // std::cout << *it_list << std::endl;
            // ++it_list;
        // }
// 
    // } catch (const std::exception &e) {
        // std::cerr << "Error: " << e.what() << std::endl;
    // }
// 
    // return 0;
// }

// int main() {
//     try {
//         // Test Case 1: Push and Top
// 		std::cout << "\nTest Case 1:" << std::endl;
//         MutantStack<int> mstack1;
//         mstack1.push(10);
//         mstack1.push(20);
//         mstack1.push(30);

//         std::cout << "Test Case 1: Top element: " << mstack1.top() << std::endl; // Expected: 30
//     } catch (const std::exception& e) {
//         std::cout << "Exception in Test Case 1: " << e.what() << std::endl;
//     }

//     try {
//         // Test Case 2: Pop and Size
// 		std::cout << "\nTest Case 2:" << std::endl;
//         MutantStack<int> mstack2;
//         mstack2.push(10);
//         mstack2.push(20);
//         mstack2.push(30);
        
//         mstack2.pop();
//         std::cout << "Test Case 2: Size after pop: " << mstack2.size() << std::endl; // Expected: 2
//     } catch (const std::exception& e) {
//         std::cout << "Exception in Test Case 2: " << e.what() << std::endl;
//     }

//     try {
//         // Test Case 3: Iterating with Iterator
// 		std::cout << "\nTest Case 3:" << std::endl;
//         MutantStack<int> mstack3;
//         mstack3.push(10);
//         mstack3.push(20);
//         mstack3.push(30);

//         std::cout << "Test Case 3: Stack elements: ";
//         for (MutantStack<int>::iterator it = mstack3.begin(); it != mstack3.end(); ++it) {
//             std::cout << *it << " ";  // Expected: 10 20 30
//         }
//         std::cout << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << "Exception in Test Case 3: " << e.what() << std::endl;
//     }

//     try {
//         // Test Case 4: Copy Constructor and Assignment Operator
// 		std::cout << "\nTest Case 4:" << std::endl;
//         MutantStack<int> mstack4;
//         mstack4.push(10);
//         mstack4.push(20);
//         mstack4.push(30);

//         // Copy constructor
//         MutantStack<int> mstack5 = mstack4;
//         std::cout << "Test Case 4: Top of copied stack: " << mstack5.top() << std::endl;  // Expected: 30

//         // Assignment operator
//         MutantStack<int> mstack6;
//         mstack6 = mstack4;
//         std::cout << "Test Case 4: Top of assigned stack: " << mstack6.top() << std::endl;  // Expected: 30
//     } catch (const std::exception& e) {
//         std::cout << "Exception in Test Case 4: " << e.what() << std::endl;
//     }

//     // try {
//     //     // Test Case 5: Empty Stack Behavior
// 	// 	std::cout << "\nTest Case 5:" << std::endl;
//     //     // MutantStack<int> mstack7;

//     //     // // Try to access the top of an empty stack
//     //     // std::cout << "Test Case 5: Top element of empty stack: " << mstack7.top() << std::endl; // Expected: Exception
//     // } catch (const std::exception& e) {
//     //     std::cout << "Exception in Test Case 5: " << e.what() << std::endl; // Expected exception message
//     // }


//     return 0;
// }
