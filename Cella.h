//
// Created by Matilde Giuliani on 26/04/25.
//

#ifndef UNTITLED45_CELLA_H
#define UNTITLED45_CELLA_H
#include <iostream>
#include <ncurses.h>
using namespace std;
class Cella {
public:
    Cella (const string & n, int d) : nomeCella (n), dimensione (d) {}
    virtual void show () const {
        cout<<"Titolo cella: "<<nomeCella<<"e di dimensione"<<dimensione<<endl;
    }

    const string &getNomeCella() const {
        return nomeCella;
    }

    virtual int getValore () const = 0;
    virtual ~Cella () {}
protected:
    string nomeCella;
    int dimensione;
};

#endif //UNTITLED45_CELLA_H
