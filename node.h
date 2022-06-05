#ifndef NODE_H
#define NODE_H

#include <vector>
#include <cinttypes>
using namespace std;

namespace sol200
{
    struct Node
    {
        int id;
        vector<Node *> neighbors;
        Node(int id) : id(id){};
    };
}
#endif