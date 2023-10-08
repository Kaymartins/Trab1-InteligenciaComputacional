#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Node; // Forward declaration
class Hotel; // Forward declaration

class Vertex{
    protected:
        int id;
        int x; // x coordinate
        int y; // y coordinate
        int score;
        std::vector<Node*> nodes;//list of associated nodes
        std::vector<Hotel*> hotels;//list of associated hotels
        bool hotel;
        bool visited;

    public:
        Vertex(int id);//constructor
        ~Vertex();
        int getId();
        int getX();
        int getY();
        int getScore();
        void markVisited();
        void markAsHotel();
        bool isVisited();
        bool getIsHotel();
        void addNode(Node* node);// add node to the vertice
        void addHotel(Hotel* hotel);// add hotel to the vertice
        std::vector<Node*> getNodes();// get all nodes from the vertice
        std::vector<Hotel*> getHotels();// get all hotels from the vertice
};

#endif // VERTEX_H
