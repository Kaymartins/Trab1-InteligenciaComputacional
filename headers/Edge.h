#ifndef EDGE_H
#define EDGE_H
#include "../headers/Node.h"

class Edge{
    private:
        Node* source;
        Node* destination;
        double distance;

    public:
        Edge(Node* source, Node* destination);
        ~Edge();
        Node* getSource();
        Node* getDestination();
        double getTd();
        double getDistance();
        void setDistance();
};

#endif // EDGE_H
