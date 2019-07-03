#include <iostream>

#include "../include/vertex.h"

Vertex::Vertex(string name) {
	_name = name;
}

vector<string> Vertex::get_edges() {
	return _edges;
}

void Vertex::add_edge(string e) {
	_edges.push_back(e);
}

string Vertex::get_name() {
	return _name;
}
