/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sp_Tile.h
 * Author: denni
 *
 * Created on 09 de agosto de 2017, 02:51 PM
 */

#ifndef SP_TILE_H
#define SP_TILE_H

class Sp_Tile {
public:
    Sp_Tile();
    Sp_Tile(const Sp_Tile& orig);
    int move(int);
    void setStart(int);
    void setEnd(int);
    int getStart();
    int getEnd();
    virtual ~Sp_Tile();
    int a;
private:
    int Start;
    int End;
};

#endif /* SP_TILE_H */

