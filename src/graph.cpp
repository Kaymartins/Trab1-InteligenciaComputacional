#include "../headers/Graph.h"
#include "../headers/Node.h"
#include <cmath>

void Graph::addNode(int id, int score, int x, int y, bool isHotel, double Td){
    Node newNode(id, score, x, y, isHotel);
    this->nodes.push_back(newNode);
    setTd(Td);
    
    int size = this->nodes.size();

    //maybe an possible modification for it could be verify if the distance between two nodes is bigger than the 
    //trip distance especified by the instance, so the graph would only have possibles edges and make the heuristic easier to work (??? just an possibilitie)
    for(int i = 0; i < size - 1; i++){
        //create an edge between the new node and the others nodes
        this->addEdge(&this->nodes[i], &newNode);
        this->addEdge(&newNode, &this->nodes[i]);
    }
}

void Graph::addEdge(Node* source, Node* destination){
    //verify if the edge already exists
    if(this->addedEdges.find(std::make_pair(source->getId(), destination->getId())) == this->addedEdges.end()){
        Edge newEdge(source, destination);
        this->edges.push_back(newEdge);
        this->addedEdges.insert(std::make_pair(source->getId(), destination->getId()));
    }
}

double Graph::getDistance(Node* source, Node* destination){
    double x1 = source->getX();
    double y1 = source->getY();
    double x2 = destination->getX();
    double y2 = destination->getY();
    return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

double Graph::getTd(){
    return this->Td;
}

void Graph::setTd(double Td){
    this->Td = Td;
}

std::vector<Node> Graph::getNodes(){
    return this->nodes;
}

std::vector<Edge> Graph::getEdges(){
    return this->edges;
}

