#ifndef EDGE_H
#define EDGE_H

class Edge{
    private:
        int targetId;
        int originId;
        Edge* nextEdge;
        double distance;
        bool marked;

    public:
        Edge(int targetId, int originId, double distance);
        ~Edge();
        int getTargetId();
        Edge* getNextEdge();
        double getOriginId();
        void setNextEdge(Edge* nextEdge);
        double getDistance();
};

#endif // EDGE_H
