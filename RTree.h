#ifndef RTREE_H
#define RTREE_H

#include <iostream>
#include <vector>

using namespace std;

struct Rectangle{
    int width;
    int height;

    int getArea(){ return width*height; }
};

struct Node{
    bool isLeaf;
};

#endif