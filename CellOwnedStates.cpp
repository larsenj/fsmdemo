/*
 * File: CellOwnedStates.cpp
 * Description: Class definitions for all the states that the Cell can be in.
 *
 */

#include "CellOwnedStates.h"
#include "Cell.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

//----------------------------CellGlobalState---------------------------------//
//CellGlobalState::CellGlobalState(){}
//CellGlobalState::~CellGlobalState(){}

CellGlobalState* CellGlobalState::Instance(){
    static CellGlobalState instance;
    return &instance;
} 

void CellGlobalState::Execute(Cell* c){
}

//---------------------------------Attack-------------------------------------//
AttackState* AttackState::Instance(){
    static AttackState instance;
    return &instance;
} 

void AttackState::Enter(Cell* c){
    std::cout << c->getName() << ": Going to attack my enemies!" << std::endl;
}

void AttackState::Execute(Cell* c){
    randNum = rand() % 9 + 1;
    if(randNum <= 5)
        std::cout << c->getName() << ": BOOM goes the bomb!" << std::endl;
    else
        std::cout << c->getName() << ": BANG BANG! Eat lead!" << std::endl;

    c->supplies -= 1;
    if(c->supplies < 1)
        c->GetFSM()->ChangeState(ResupplyState::Instance());
    else 
        c->GetFSM()->ChangeState(DrinkTeaState::Instance());
}

void AttackState::Exit(Cell* c){
    std::cout <<  c->getName() << ": Another blow for the insurgency!" << std::endl;
}

//--------------------------------Resupply------------------------------------//
ResupplyState* ResupplyState::Instance(){
    static ResupplyState instance;
    return &instance;
} 

void ResupplyState::Enter(Cell* c){
    std::cout <<  c->getName() << ": Out of bullets :(" << std::endl;
}

void ResupplyState::Execute(Cell* c){
    std::cout <<  c->getName() << ": Loading up on supplies from my smuggler buddies" << std::endl;
    c->supplies = 3;
    c->GetFSM()->ChangeState(DrinkTeaState::Instance());
}

void ResupplyState::Exit(Cell* c){
    std::cout <<  c->getName() << ": Locked, cocked, and ready to rock!" << std::endl;
}

//--------------------------IntimidatePopulation------------------------------//
IntimidatePopulationState* IntimidatePopulationState::Instance(){
    static IntimidatePopulationState instance;
    return &instance;
} 

void IntimidatePopulationState::Enter(Cell* c){
    std::cout <<  c->getName() << ": Time to show the unwashed masses who's boss." << std::endl;
}

void IntimidatePopulationState::Execute(Cell* c){
    std::cout <<  c->getName() << ": Gimmie all your money, or else..." << std::endl;
    c->GetFSM()->ChangeState(DrinkTeaState::Instance());
}

void IntimidatePopulationState::Exit(Cell* c){
    std::cout <<  c->getName() << ": That'll learn 'em." << std::endl;
}

//--------------------------------DrinkTea------------------------------------//
DrinkTeaState* DrinkTeaState::Instance(){
    static DrinkTeaState instance;
    return &instance;
} 

void DrinkTeaState::Enter(Cell* c){
    std::cout <<  c->getName() << ": Being an insurgent is thirsty work." << std::endl;
}

void DrinkTeaState::Execute(Cell* c){
    std::cout <<  c->getName() << ": Ah tea... Wait, I didn't mix the green" << 
        "tea with the black, did I?" << std::endl;
    randNum = rand() % 8 + 1;
    if(randNum <= 3)
        c->GetFSM()->ChangeState(AttackState::Instance());
    else if(randNum > 6)
        c->GetFSM()->ChangeState(IntimidatePopulationState::Instance());
}

void DrinkTeaState::Exit(Cell* c){

}
