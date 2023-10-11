#include <iostream>
using namespace std;
#include <cmath>
#include "../headers/Graph.h"
#include "../headers/Node.h"
#include <fstream>

Graph* readyGeedy(string filename){

    ifstream file(filename);
    if(!file.is_open()){
        cout << "Error opening file" << endl;
        return nullptr;
    }

    cout << "file opened" << endl;

    int numberOfNodes, numberOfExtraHotels, numberOfTrips;
    double tourMaxLenght;
    std::vector<double> eachTripLenght;

    file >> numberOfNodes >> numberOfExtraHotels >> numberOfTrips;
    file >> tourMaxLenght;
    for(int i = 0; i < numberOfTrips; i++){
        double tripLenght;
        file >> tripLenght;
        eachTripLenght.push_back(tripLenght);
    }
    
    Graph* graph = new Graph();
    graph->setNumberOfTrips(numberOfTrips);
    graph->setTd(eachTripLenght);

    //adiciona os hoteis de entrada e saida no grafo
    for(int i = 0; i < 2; i++){
        int id, score, x, y;
        bool isHotel = true;
        id = i+1;
        file >> x >> y >> score;
        graph->addNode(id, score, x, y, isHotel);
    }

    //adiciona os outros hoteis no grafo
    for(int i = 0; i < numberOfExtraHotels; i++){
        int id, score, x, y;
        bool isHotel = true;
        id = i+3;
        file >> x >> y >> score;
        graph->addNode(id, score, x, y, isHotel);
    }

    //adiciona os outros pontos de interesse no grafo
    for(int i = 0; i < numberOfNodes - 2; i++){
        int id, score, x, y;
        bool isHotel = false;
        id = i+3+numberOfExtraHotels;
        file >> x >> y >> score;
        graph->addNode(id, score, x, y, isHotel);
    }

    file.close();
    cout << "file closed" << endl;

    // graph->printGraph("graph.dot");

    return graph;
}

int main(int argc, char const *argv[]) {
    string input_file = argv[1];
    cout << input_file << endl;
    readyGeedy(input_file);
    return 0;
}

