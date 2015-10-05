/*
 * Name:
 * Author: Jon Larsen
 * Description: A simple Finite State Machine for demonstrating the concept.
 *
 */

#include <iostream>
#include <string>
#include "Cell.h"

int main(int argc, char* argv[]){

//    char goAgain;
    
    std::cout << "Enter a name for your insurgent: ";
    std::string name;
    getline(std::cin, name);

    Cell cell(name);

    std::cout << "\nPress Enter to continue, or 'q' to quit\n" << std::endl;;
    do {
        cell.Update();
//        std::cin >> goAgain;
    }while(std::cin.get() != 'q');
//    }while(goAgain != 'q');

    //delete cell;    
}
