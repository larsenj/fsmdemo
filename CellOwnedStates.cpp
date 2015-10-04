/*
 * File: CellOwnedStates.cpp
 * Description: Class definitions for all the states that the Cell can be in.
 *
 */

#include "CellOwnedStates.h"
#include "Cell.h"
#include <iostream>

//----------------------------CellGlobalState---------------------------------//
//CellGlobalState::CellGlobalState(){}
//CellGlobalState::~CellGlobalState(){}

CellGlobalState* CellGlobalState::Instance(){
    static CellGlobalState instance;
    return &instance;
} 

void CellGlobalState::Execute(Cell* c){
    std::cout << "Global State" << std::endl;
    //c->GetFSM()->ChangeState(XXXXX::Instance());
}

//---------------------------------Attack-------------------------------------//
AttackState* AttackState::Instance(){
    static AttackState instance;
    return &instance;
} 

void AttackState::Enter(Cell* c){
    std::cout << "Going to attack my enemies!" << std::endl;
}

void AttackState::Execute(Cell* c){

}

void AttackState::Exit(Cell* c){
    std::cout << "Another blow for the insurgency!" << std::endl;
}

//--------------------------------Resupply------------------------------------//
ResupplyState* ResupplyState::Instance(){
    static ResupplyState instance;
    return &instance;
} 

void ResupplyState::Enter(Cell* c){
    std::cout << "Out of bullets :(" << std::endl;
}

void ResupplyState::Execute(Cell* c){

}

void ResupplyState::Exit(Cell* c){
    std::cout << "Locked, cocked, and ready to rock!" << std::endl;
}


//--------------------------IntimidatePopulation------------------------------//
IntimidatePopulationState* IntimidatePopulationState::Instance(){
    static IntimidatePopulationState instance;
    return &instance;
} 

void IntimidatePopulationState::Enter(Cell* c){
    std::cout << "Time to show the unwashed masses who's boss." << std::endl;
}

void IntimidatePopulationState::Execute(Cell* c){

}

void IntimidatePopulationState::Exit(Cell* c){
    std::cout << "That'll learn 'em." << std::endl;
}

//--------------------------------DrinkTea------------------------------------//
DrinkTeaState* DrinkTeaState::Instance(){
    static DrinkTeaState instance;
    return &instance;
} 

void DrinkTeaState::Enter(Cell* c){
    std::cout << "Being an insurgent is thirsty work." << std::endl;
}

void DrinkTeaState::Execute(Cell* c){
    std::cout << "Ah tea... Wait, I didn't mix the green tea with the black,"
       <<" did I?" << std::endl;
}

void DrinkTeaState::Exit(Cell* c){

}
