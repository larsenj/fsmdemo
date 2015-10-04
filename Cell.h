/*
 *  Cell.h
 *  Insurgent cell for FSM
 *
 */

#ifndef CELL_H
#define CELL_H

#include <string>
#include "State.h"
#include "StateMachine.h"
//#include "CellOwnedStates.h"

//#include <vector>

//enum CellType { line, ldr, logistics, sct, med };

class Cell {
    private:
        std::string name;
        StateMachine<Cell>* stateMachine;

        /*
        int ID;
        int members;
        int randNum;
        CellType cType;
        int power;
        int wCount = 0;
        int higherID;
        bool isAlive;
        */

    public:
        Cell(std::string);
        
        void Update();
        StateMachine<Cell>* GetFSM()const {return stateMachine;}
        
        ~Cell() {delete stateMachine;}


        /*
        Cell();
        Cell(int);
        Cell(int, CellType, int, int);//name,type,members,pwr
        Cell(int, CellType, int, int, int);//name,type,members,pwr,higher
        virtual bool event(int);
        const char* cellName[5] = { "line", "ldr", "log", "scout", "med" };
        virtual bool HandleMessage(const Message&){};
        ~Cell();
        
        //-----Getters and Setters -----//
        inline CellType getCellType() { return cType;}
        std::string getType(); 
        inline void setIsAlive(bool n) { isAlive = n; }
        inline bool getIsAlive() { return isAlive; }
        inline void setHigherID(int n) { higherID = n; }
        inline int getHigherID(int n) { return higherID; }
        inline int getWeekCount() { return wCount; }
        inline int getPower() { return power; }
        inline int getID() { return ID; }
        //virtual functions below added to prevent "slicing" in vector<Cell*>
        virtual bool hasLeader(){}; 
        virtual void setLeader(){}; 
        virtual bool isSupplied(){}; 
        virtual void setSupplied(){}; 
        virtual int getSupplies(){};
        virtual void buildLdrC2(std::vector<Cell*>&, std::vector<Cell*>&){};
        */

};

#endif
