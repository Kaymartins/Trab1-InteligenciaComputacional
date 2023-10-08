#ifndef NODE_H
#define NODE_H

//class node represents the vertice conjuntion of the graph that can represents both a hotel or a node
class Node{
    private:
        int id;
        int score;
        int x;//coordenate x
        int y;//coordenate y
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
        bool canBeVisited();
};

#endif // NODE_H
