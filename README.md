
# Traversal in graphs

The graph is one non-linear data structure. That is consists of some nodes and their connected edges. The edges may be directed or undirected.


The graph has two types of traversal algorithms. 
These are called the

Breadth First Search and 

Depth First Search.




## Breadth first search


Here we use Queue data structure.
The traversal start from source node, its visit all the children of the root, then start with first then visits all its children, this process will repeat until no more element to visit. 
A standard BFS implementation puts each vertex of the graph into one of two categories:

1.Visited

2.Not Visited

## Depth first search

Here we use stack data structure.
The traversal start from source node and goes till all the successor of the first neighbor, then continues with the remaining nodes and so on. 
A standard DFS implementation puts each vertex of the graph into one of two categories:

1.Visited

2.Not Visited
