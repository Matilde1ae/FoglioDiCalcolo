//
// Created by Matilde Giuliani on 26/04/25.
//

#ifndef UNTITLED45_OBSERVER_H
#define UNTITLED45_OBSERVER_H
class Observer {
public:
    virtual void update () = 0;
    virtual void attach () = 0;
    virtual void detach () = 0;
    virtual ~Observer ()=default;
};
#endif //UNTITLED45_OBSERVER_H
