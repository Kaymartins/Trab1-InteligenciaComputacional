#include <iostream>
#include "../headers/Graph.h"
#include "../headers/Node.h"
#include <cmath>
#include <unordered_set>

void Graph::addNode(int id, int score, int x, int y, bool isHotel){
    Node newNode(id, score, x, y, isHotel);
    this->nodes.push_back(newNode);

    int size = this->nodes.size();
    
    //maybe an possible modification for it could be verify if the distance between two nodes is bigger than the 
    //trip distance especified by the instance, so the graph would only have possibles edges and make the heuristic easier to work (??? just an possibilitie)
    //also chatGPT mentioned adjacentMatrix, idk if it could be part of an heuristic too; 
    if(size > 1){
        for(int i = 0; i < size - 1; i++){
            //create an edge between the new node and the others nodes
            
            this->addEdge(&this->nodes[i], &newNode);
            this->addEdge(&newNode, &this->nodes[i]);
            
        }
    }
}

void Graph::addEdge(Node* source, Node* destination){
    
    
    //verify if the edge already exists
     if (addedEdges.find({source->getId(), destination->getId()}) == addedEdges.end()) {
        Edge newEdge(source, destination);
        edges.push_back(newEdge);
        addedEdges.insert({source->getId(), destination->getId()});
     }

}

double Graph::getDistance(Node* source, Node* destination){
    double x1 = source->getX();
    double y1 = source->getY();
    double x2 = destination->getX();
    double y2 = destination->getY();
    return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

std::vector<double> Graph::getTd(){
    return this->Td;
}

void Graph::setTd(std::vector<double> Td){
    this->Td = Td;
}

std::vector<Node> Graph::getNodes(){
    return this->nodes;
}

std::vector<Edge> Graph::getEdges(){
    return this->edges;
}

void Graph::setNumberOfTrips(int numberOfTrips){
    this->numberOfTrips = numberOfTrips;
}

