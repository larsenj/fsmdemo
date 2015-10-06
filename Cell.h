/*
 *  Cell.h
 *  Insurgent cell for FSM
 *
 */

#ifndef CELL_H
#define CELL_H

#include "State.h"
#include "StateMachine.h"
#include <string>

class Cell {
    private:
        std::string name;
        StateMachine<Cell>* stateMachine;
    public:
        int supplies;
        
        Cell(std::string);
        
        void Update();
        //help access functions of the state the cell is currently in
        StateMachine<Cell>* GetFSM()const {return stateMachine;}
        std::string getName() {return name;}       
        ~Cell() {delete stateMachine;}
};

#endif
