#ifndef EDGE_H
#define EDGE_H

class Edge {
 public:
    Edge(string src, string dst, string name);

    string src();
    string dst();
    string get_name();
 private:
    string _src;
    string _dst;
    string _name;
};

#endif 
