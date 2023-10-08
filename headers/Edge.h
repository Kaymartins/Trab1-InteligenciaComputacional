#ifndef EDGE_H
#define EDGE_H
#include "../headers/Node.h"

class Edge{
    private:
        Node* source;
        Node* destination;
        double Td; //trip lenght for each trip d
        double distance;

    public:
        Edge(Node* source, Node* destination, double Td);
        ~Edge();
        Node* getSource();
        Node* getDestination();
        double getTd();
        double getDistance();

};

#endif // EDGE_H
