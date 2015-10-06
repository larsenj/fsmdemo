/*
 *  Cell.cpp
 *  Insurgent cell for FSM
 *
 */
#include "Cell.h"
#include "StateMachine.h"
#include "State.h"
#include "CellOwnedStates.h"
#include <string>
//#include <iostream>

Cell::Cell(std::string s):name(s){
    supplies = 2; //determines when the resupply state is needed
    stateMachine = new StateMachine<Cell>(this);
    //std::cout << "Created cell " << name << std::endl;
    stateMachine->SetGlobalState(CellGlobalState::Instance());
    stateMachine->SetCurrentState(DrinkTeaState::Instance());
}


void Cell::Update(){
    stateMachine->Update();
}
