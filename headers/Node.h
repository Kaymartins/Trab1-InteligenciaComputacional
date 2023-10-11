#ifndef NODE_H
#define NODE_H

#include "Edge.h"
#include <vector>

//class node represents the vertice conjuntion of the graph that can represents both a hotel or a node
class Node{
    private:
        int id;
        Edge* firstEdge;
        Edge* lastEdge;
        Node* nextNode;
        int score;
        int x;//coordenate x
        int y;//coordenate y
        bool visited;
        bool hotel;
    public:
        Node(int id, int score, int x, int y, bool isHotel);//construtor
        int getId();
        int getScore();
        void addEdge(Node* target);//add a edge to the node
        Edge* searchEdge(int id);//search for a edge with the id passed as parameter
        Edge* getFirstEdge();
        Edge* getLastEdge();
        std::vector<Edge*> getEdges();
        void setNextNode(Node* nextNode);
        Node* getNextNode();
        double getDistance(Node* origin, Node* target);//calculate the distance between two nodes
        int getX();
        int getY();
        bool isHotel();
        void markVisited();
        bool isVisited();
        bool canBeVisited();
};

#endif // NODE_H
