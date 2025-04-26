//
// Created by Matilde Giuliani on 26/04/25.
//

#ifndef UNTITLED45_SUBJECT_H
#define UNTITLED45_SUBJECT_H
#include "Observer.h"
class Subject {
public:
    virtual void subscribe (Observer * o) = 0;
    virtual void unsubscribe (Observer * o) = 0;
    virtual void notify () = 0;
    virtual ~Subject ()= default;
};
#endif //UNTITLED45_SUBJECT_H
