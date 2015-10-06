/*
 * File: State.h
 * Description: Base state that a specific object's states will inherit from
 *
 */

#ifndef STATE_H
#define STATE_H

template <class T>
class State{
    public:
        virtual void Enter(T*) = 0;
        virtual void Execute(T*) = 0;
        virtual void Exit(T*) = 0;
        virtual ~State(){};
};//end class


#endif
