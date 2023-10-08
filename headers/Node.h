#ifndef NODE_H
#define NODE_H

#include "vertex.h"

//herança da classe Vertex, é possível acessar os atributos e métodos da classe Vertex a partir da classe Node
class Node{
    private:
        int id;
        int score;
        int x;//coordenada x
        int y;//coordenada y
        bool visited;
        bool hotel;
    public:
        Node(int id, int score, int x, int y, bool isHotel);//construtor
        int getId();
        int getScore();
        int getX();
        int getY();
        bool isHotel();
        void markVisited();
        bool isVisited();
};

#endif // NODE_H
