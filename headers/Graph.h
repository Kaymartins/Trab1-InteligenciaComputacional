#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "Node.h"
#include "Edge.h"
#include <set>

class Graph {
    private:
        std::vector<Node> nodes;//list of vertices
        std::vector<Edge> edges;//list of edges
        std::vector<double> Td; //trip lenght for each trip d
        int numberOfTrips;//number of trips
        std::set<std::pair<int, int>> addedEdges; // set to keep track of added edges

    public:
        void addNode(int id, int score, int x, int y, bool isHotel);//add a node to the graph
        void addEdge(Node* source, Node* destination);//add a edge to the graph
        double getDistance(Node* source, Node* destination);//get the distance between two nodes
        std::vector<double> getTd();//get the trip lenght for each trip d
        void setTd(std::vector<double> Td);//set the trip distance
        void setNumberOfTrips(int numberOfTrips);//set the number of trips
        std::vector<Node> getNodes();//get the list of nodes
        std::vector<Edge*> getEdges();//get the list of edges
        
};
// Rest of the code goes here

#endif // GRAPH_H
