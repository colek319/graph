




#include <../include/graph.h>

Graph::Graph() {
    _num_vs = 0;
    _num_es = 0;
}

Graph::~Graph() {
}

// in the future try to make this a function that returns
// a lambda function, or something equivalent (maybe)

// we only add a vertex if the name to be added is not already
// a vertex. Further, when a vertex is added, it has no invident
// edges.
bool Graph::add_vertex(string v) {
    if (not is_vertex(v)) {
        _v_map(v) = Vertex(v);
        return true;
    }

    return false;
}

// only adds edge if u and v are vertices, and e is
// not a used name
bool Graph::add_edge(string e, string u, string v) {
    if (not is_edge(e) and is_vertex(u) and is_vertex(v)) {
        _v_map(e) = Edge(u, v, e);
        return true;
    }
    return false;
}

// returns true if n is a name for a vertex or edge
bool Graph::is_vertex(string n) {
    auto and_func = [](auto a, auto b){a && b};
    return accumulate(_vs.begin(), _vs.end(), 1, and_func);
}

template<>


bool Graph::is_edge(string n) {
    auto and_func = [](auto a, auto b){a && b};
    return accumulate(_es.begin(), _es.end(), 1, and_func);
}



// this duplicate code is gross

void Graph::print_vertices() {
    cout << "{";
    for (string elem : _vs) {
        cout << " " << elem << " ";
    }
    cout << "}\n";
}

void Graph::print_edges() {
    cout << "{";
    for (string elem : _es) {
        cout << " " << elem << " ";
    }
    cout << "}\n";
}

string *Graph::vs() {
    return _vs.data();
}

string *Graph::es() {
    return _es.data();
}

unsigned Graph::num_vs() {
    return _num_vs;
}

unsigned Graph::num_es() {
    return _num_es;
}

