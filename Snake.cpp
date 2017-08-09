/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Snake.cpp
 * Author: denni
 * 
 * Created on 09 de agosto de 2017, 03:03 PM
 */

#include "Snake.h"
#include <stdlib.h>

Snake::Snake() {
    int v1;
    int v2;
    v1 = rand() % 99 + 1;
    setStart(v1);
    v2 = rand() % 100;
    while (v2 > v1) {
        v2 = rand() % 100;
    }
    setEnd(v2);
}

Snake::Snake(const Snake& orig) {
}

Snake::~Snake() {
}

