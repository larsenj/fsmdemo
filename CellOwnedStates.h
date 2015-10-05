/*
 * File: CellOwnedStates.h
 *
 */

#ifndef CELLOWNEDSTATES_H
#define CELLOWNEDSTATES_H

#include "State.h"
#include <cstdlib>
#include <ctime>

class Cell;

//----------------------Global State-------------------------//
class CellGlobalState:public State<Cell>{
    private:
        int randNum;
        CellGlobalState(){srand(time(NULL));}   
        ~CellGlobalState(){}   
        //copy ctor and assignment should be private
        CellGlobalState(const CellGlobalState&);
        CellGlobalState& operator=(const CellGlobalState&);
                 
    public:
        static CellGlobalState* Instance();
        virtual void Enter(Cell*){}
        virtual void Execute(Cell*);
        virtual void Exit(Cell*){}

        //virtual ~CellGlobalState();
};

//------------------------Attack-------------------------//
class AttackState: public State<Cell>{
    private:
        int randNum;
        AttackState(){srand(time(NULL));}
        //copy ctor and assignment should be private
        AttackState(const AttackState&);
        AttackState& operator=(const AttackState&);

    public:
        static AttackState* Instance();
        void Enter(Cell*);
        void Execute(Cell*);
        void Exit(Cell*);
};


//-----------------Intimidate Population-------------------//
class IntimidatePopulationState: public State<Cell>{
    private:
        IntimidatePopulationState(){}
        //copy ctor and assignment should be private
        IntimidatePopulationState(const IntimidatePopulationState&);
        IntimidatePopulationState& operator=(const IntimidatePopulationState&);
                 
    public:
        static IntimidatePopulationState* Instance();
        void Enter(Cell*);
        void Execute(Cell*);
        void Exit(Cell*);
};


//------------------------Resupply-------------------------//
class ResupplyState: public State<Cell>{
    private:
        ResupplyState(){}
        //copy ctor and assignment should be private
        ResupplyState(const ResupplyState&);
        ResupplyState& operator=(const ResupplyState&);
                 
    public:
        static ResupplyState* Instance();
        void Enter(Cell*);
        void Execute(Cell*);
        void Exit(Cell*);
};


//-----------------------Drink Tea-------------------------//
class DrinkTeaState: public State<Cell>{
    private:
        DrinkTeaState(){}
        //copy ctor and assignment should be private
        DrinkTeaState(const DrinkTeaState&);
        DrinkTeaState& operator=(const DrinkTeaState&);
                 
    public:
        static DrinkTeaState* Instance();
        void Enter(Cell*);
        void Execute(Cell*);
        void Exit(Cell*);
};

#endif
