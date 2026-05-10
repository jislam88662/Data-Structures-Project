#ifndef NODE_H
#define NODE_H
using namespace std;
#include<string>
#include "Song.h"
class Node {
public:
	Node* left;
	Node* right;
	Song* song;

	Node();
};
#endif
