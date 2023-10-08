#include "../headers/node.h"

Node::Node(int id, int score, int x, int y, bool isHotel){
    this->id = id;
    this->score = score;
    this->x = x;
    this->y = y;
    this->visited = false;
    this->hotel = isHotel;
}

int Node::getId(){
    return this->id;
}

int Node::getScore(){
    return this->score;
}

int Node::getX(){
    return this->x;
}

int Node::getY(){
    return this->y;
}

void Node::markVisited(){
    this->visited = true;
}

bool Node::isVisited(){
    return this->visited;
}

bool Node::isHotel(){
    return this->hotel;
}

