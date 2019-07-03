#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Vertex {
 public:
    Vertex(string name);

    vector<string> get_edges();
    void add_edge(string e);
    string get_name();
 private:
    vector<string> _edges;
    string _name;
    
};

#endif
