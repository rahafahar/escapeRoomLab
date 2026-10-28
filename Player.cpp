#include "Player.h"
#include "Room.h"

PLayer::Player() {
    this->x = 3;
    this->y = 3;
}

PLayer::~Player() {
    //empty
}

bool PLayer::move(char direction, Room * room) {
    //take and check direction, check mobility, if able to move: change player x and y
    if(direction == 'w') {
       if( room->canMove(this->x, this->y - 1)){
        this->y -= 1;
        return true
       }
    } else if(direction == 'a') {
        if( room->canMove(this->x - 1, this->y)){
            this->x -= 1;
            return true;
       }
        } else if(direction == 'd') {
            if( room->canMove(this->x + 1, this->y)){
                this->x += 1;
                return true;
       }
    }  else if(direction == 's') {
        if( room->canMove(this->x, this->y + 1)){
                this->y += 1;
                return true;
       }
    }

    return false;

}
