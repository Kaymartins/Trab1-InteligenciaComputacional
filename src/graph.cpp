#include <iostream>
#include "../headers/Graph.h"
#include "../headers/Node.h"
#include <cmath>
#include <unordered_set>
using namespace std;

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
            newNode.addEdge(&this->nodes[i]);
            this->nodes[i].addEdge(&newNode);
        }
    }
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


void Graph::setNumberOfTrips(int numberOfTrips){
    this->numberOfTrips = numberOfTrips;
}

std::vector<Edge*> Graph::getEdges(){
    std::vector<Node> nodes = this->getNodes();
    std::vector<Edge*> edges;
    for(int i = 0; i < nodes.size(); i++){
        std::vector<Edge*> nodeEdges = nodes[i].getEdges();
        for(int j = 0; j < nodeEdges.size(); j++){
            edges.push_back(nodeEdges[j]);
        }
    }


    return edges;
}

