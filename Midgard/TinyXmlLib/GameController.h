/* 
 * File:   GameController.h
 * Author: steven
 *
 * Created on May 6, 2015, 11:55 PM
 */

#ifndef GAMECONTROLLER_H
#define	GAMECONTROLLER_H
#include  "LogicGameController.h"
#include "ViewGameController.h"

class GameController {
public:
    GameController();
    GameController(LogicGameController,ViewGameController);
    ~GameController();
private:

};

#endif	/* GAMECONTROLLER_H */

