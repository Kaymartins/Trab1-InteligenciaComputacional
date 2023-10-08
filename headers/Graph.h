#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "Node.h"
#include "Edge.h"
#include <unordered_set>

class Graph {
    private:
        std::vector<Node> nodes;//list of vertices
        std::vector<Edge> edges;//list of edges
        double Td; //trip lenght for each trip d
        std::unordered_set<std::pair<int, int>> addedEdges; // Track added edges


    public:
        void addNode(int id, int score, int x, int y, bool isHotel, double Td);//add a node to the graph
        void addEdge(Node* source, Node* destination);//add a edge to the graph
        double getDistance(Node* source, Node* destination);//get the distance between two nodes
        double getTd();//get the trip distance
        void setTd(double Td);//set the trip distance
        std::vector<Node> getNodes();//get the list of nodes
        std::vector<Edge> getEdges();//get the list of edges
};
// Rest of the code goes here

#endif // GRAPH_H
