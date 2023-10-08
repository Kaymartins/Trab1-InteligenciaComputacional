#include "../headers/Edge.h"
#include <cmath>

Edge::Edge(Node* source, Node* destination, double Td){
    this->source = source;
    this->destination = destination;
    this->Td = Td;
    setDistance();
}

Edge::~Edge(){
    delete this->source;
    delete this->destination;
}

Node* Edge::getSource(){
    return this->source;
}

Node* Edge::getDestination(){
    return this->destination;
}

double Edge::getTd(){
    return this->Td;
}

double Edge::getDistance(){
    return this->distance;
}

void Edge::setDistance(){
    double x1 = this->source->getX();
    double y1 = this->source->getY();
    double x2 = this->destination->getX();
    double y2 = this->destination->getY();
    this->distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}
