#include <iostream>
#incluide "../include/edge.h"

using namespace std;

Edge::Edge(string src, string dst, string name) {
	_src = src;
    _dst = dst;
    _name = name;
}

string Edge::src() {
	return _src;
}

string Edge::dst() {
	return _dst;
}

string Edge::get_name() {
	return _name;
}
