#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <map>
#include <numeric>
#include <vector>
#include <functional>
#include "edge.h"
#include "vertex.h"

class Graph {
 public:
    Graph();
    ~Graph();

    bool add_vertex (string v);
    bool add_edge (string e);

    void print_vertices();
    void print_edges();
    string *vs();
    string *es();
    unsigned num_vs();
    unsigned num_es();
	bool is_vertex(string n);
    bool is_edge(string n);
    
 private:
	map<string, Vertex> _v_map;
    map<string, Edge> _e_map;
    vector<string> _vs;
	vector<string> _es;

    unsigned _num_vs;
    unsigned _num_es;
};

#endif
