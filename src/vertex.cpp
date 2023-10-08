#include "../headers/vertex.h"
#include "../headers/node.h"
#include "../headers/hotel.h"

Vertex::Vertex(int id) {
    this->id = id;
}

Vertex::~Vertex() {
    for (int i = 0; i < nodes.size(); i++) {
        delete nodes[i];
    }
    for (int i = 0; i < hotels.size(); i++) {
        delete hotels[i];
    }
}

int Vertex::getId() {
    return id;
}

void Vertex::addNode(Node* node) {
    nodes.push_back(node);
}

void Vertex::addHotel(Hotel* hotel) {
    hotels.push_back(hotel);
}

std::vector<Node*> Vertex::getNodes() {
    return nodes;
}

std::vector<Hotel*> Vertex::getHotels() {
    return hotels;
}

