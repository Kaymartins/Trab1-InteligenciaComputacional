#include "../headers/Node.h"
#include <cmath>
#include <iostream>

Node::Node(int id, int score, int x, int y, bool isHotel){
    this->firstEdge = nullptr;
    this->lastEdge = nullptr;
    this->id = id;
    this->score = score;
    this->x = x;
    this->y = y;
    this->visited = false;
    this->hotel = isHotel;
}

Edge* Node::getFirstEdge(){
    return this->firstEdge;
}

Edge* Node::getLastEdge(){
    return this->lastEdge;
}

void Node::addEdge(Node* target){

    if(this->searchEdge(target->getId()) != nullptr){
        return;
    }
    
    Edge* newEdge = new Edge(target->getId(), this->getId(), getDistance(this, target));
    if(this->firstEdge == nullptr){
        this->firstEdge = newEdge;
        this->lastEdge = newEdge;
    }else{
        this->lastEdge->setNextEdge(newEdge);
        this->lastEdge = newEdge;
    }
}

Edge* Node::searchEdge(int id){
    Edge* currentEdge = this->firstEdge;
    while(currentEdge != nullptr){
        if(currentEdge->getTargetId() == id){
            return currentEdge;
        }
        currentEdge = currentEdge->getNextEdge();
    }
    return nullptr;
}

void Node::setNextNode(Node* nextNode){
    this->nextNode = nextNode;
}

Node* Node::getNextNode(){
    return this->nextNode;
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


double Node::getDistance(Node* source, Node* destination){
    double x1 = source->getX();
    double y1 = source->getY();
    double x2 = destination->getX();
    double y2 = destination->getY();
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


bool Node::canBeVisited(){
    if(!this->isHotel() && this->isVisited()){
        return false;
    }

    return true;
}

std::vector<Edge*> Node::getEdges(){
    Edge* currentEdge = this->firstEdge;
    std::vector<Edge*> edges;
    while(currentEdge != nullptr){
        edges.push_back(currentEdge);
        currentEdge = currentEdge->getNextEdge();
    }
    return edges;
}



