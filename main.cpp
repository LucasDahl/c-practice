//
//  main.cpp
//  FirstProgram
//
//  Created by Lucas Dahl on 4/7/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// Lucas Dahl, 4/7/20
// This program is to do test printing to the console


// MARK: notes
// cout  is output(print statment)
// <iostream is in standard namespce
// comments both single line and multiple are the same as swift
// C++ programs start with main

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Simple prints the string
    cout << "My name is Lucas Dahl. Today is 4/7/20.\nI love to program!\nI mainly use swift, but want to expand.\nI havent tried C++ for almost 3 years\n";
    
    
    // Varibales
    int x;
    // Takes input and stores in the variable x
    cin >> x;
    cout << x;
    
    // ends the program
    return 0;
    
}
