#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Node; // Forward declaration
class Hotel; // Forward declaration

class Vertex{
    protected:
        int id;
        std::vector<Node*> nodes;
        std::vector<Hotel*> hotels;

    public:
        Vertex(int id);//constructor
        ~Vertex();
        int getId();
        void addNode(Node* node);// add node to the vertice
        void addHotel(Hotel* hotel);// add hotel to the vertice
        std::vector<Node*> getNodes();// get all nodes from the vertice
        std::vector<Hotel*> getHotels();// get all hotels from the vertice
};

#endif // VERTEX_H
