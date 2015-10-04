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

    std::cout << "Enter a name for your insurgent: ";


    std::string name = "Dush";

    Cell cell(name);

    cell.Update();

    //delete cell;    
}
