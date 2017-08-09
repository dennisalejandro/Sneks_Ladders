/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Snake.h
 * Author: denni
 *
 * Created on 09 de agosto de 2017, 03:03 PM
 */

#ifndef SNAKE_H
#define SNAKE_H

#include "Sp_Tile.h"


class Snake : public Sp_Tile {
public:
    Snake();
    Snake(const Snake& orig);
    virtual ~Snake();
    
private:

};

#endif /* SNAKE_H */

