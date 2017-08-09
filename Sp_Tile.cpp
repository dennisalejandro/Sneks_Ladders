/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sp_Tile.cpp
 * Author: denni
 * 
 * Created on 09 de agosto de 2017, 02:51 PM
 */

#include "Sp_Tile.h"

Sp_Tile::Sp_Tile() {
}

Sp_Tile::Sp_Tile(const Sp_Tile& orig) {
}

Sp_Tile::~Sp_Tile() {
}

int Sp_Tile::move(int pos) {
    if (this ->Start == pos) {
        pos = this-> End;
    }
    return pos;
}
