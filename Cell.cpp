/*
 *  Cell.cpp
 *  Insurgent cell for FSM
 *
 */
#include "Cell.h"
#include "StateMachine.h"
#include "State.h"
#include "CellOwnedStates.h"
//#include <time.h>
//#include <stdlib.h>
#include <iostream>
#include <string>

Cell::Cell(std::string s):name(s){
    stateMachine = new StateMachine<Cell>(this);
    std::cout << "Created cell " << name << std::endl;
    stateMachine->SetGlobalState(CellGlobalState::Instance());
}


void Cell::Update(){
    std::cout << "in update\n";
    stateMachine->Update();
}

/*
Cell::Cell(int name){
    ID = name;
    members = 5;
    cType = line;
    srand(time(NULL) + ID);//cellNumber is added to avoid multiple cells having the same seed
    isAlive = true;
}

Cell::Cell(int name, CellType type, int numMembers, int pwr){
    ID = name;
    cType = type;
    members = numMembers;
    power = pwr;
    srand(time(NULL) + ID);
    isAlive = true;
    //std::cout << "Creating cell " << name << std::endl;
}

Cell::Cell(int name, CellType type, int numMembers, int pwr, int higher){
    ID = name;
    cType = type;
    members = numMembers;
    power = pwr;
    isAlive = true;
    higherID = higher;
    srand(time(NULL) + ID);
    //std::cout << "Creating cell " << name << std::endl;
}

//Fix this, or make virtual, or move
bool Cell::event(int chance){
    randNum = rand() % 9 + 1;
    //return false if unable to conduct operations
    //if(!leader || supplies < 33 || members < 3 || randNum < chance) {
    if(randNum < chance) {
        //if unable to conduct ops, and logistics available, then resupply
        //if(supplies < 33 && isSupplied())
        //    supplies += 10;        
        //if (isSupplied())
            //supplies += 10;
        //std::cout << cellName[cType] << " cell " << ID << " did nothing." << std::endl;
        return false;
    }

    //supplies -= 30;
    std::cout << cellName[cType] << " cell " << ID << " performed an action." << std::endl;
    return true;
}

std::string Cell::getType() {
    std::string s = cellName[cType];
    return s;
}

Cell::~Cell(){
        std::cout << "Deleting "  << cellName[cType] << " Cell " << getID() << std::endl;
    }
*/
