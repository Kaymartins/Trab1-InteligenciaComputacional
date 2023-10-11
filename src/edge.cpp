#include "../headers/Edge.h"


Edge::Edge(int targetId, int originId, double distance){
    this->targetId = targetId;
    this->originId = originId;
    this->distance = distance;
    this->nextEdge = nullptr;
    this->marked = false;
}

Edge::~Edge(){
    if(this->nextEdge != nullptr){
        delete this->nextEdge;
    }
}

int Edge::getTargetId(){
    return this->targetId;
}

Edge* Edge::getNextEdge(){
    return this->nextEdge;
}

double Edge::getOriginId(){
    return this->originId;
}

double Edge::getDistance(){
    return this->distance;
}

void Edge::setNextEdge(Edge* nextEdge){
    this->nextEdge = nextEdge;
}

