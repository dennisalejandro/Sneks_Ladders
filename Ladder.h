/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ladder.h
 * Author: denni
 *
 * Created on 09 de agosto de 2017, 03:11 PM
 */

#ifndef LADDER_H
#define LADDER_H

#include "Sp_Tile.h"


class Ladder : public Sp_Tile {
public:
    Ladder();
    Ladder(const Ladder& orig);
    virtual ~Ladder();
private:

};

#endif /* LADDER_H */

