# Graphs

## 7.1 Graph Terminology
A graph consists of **nodes** (also called **vertices**) that are connected with **edges**.
* `n`: number of nodes
* `m`: number of edges

A **path** leads from a node to another node through the edges of the graph.

<img src="Photos/path.png" width="200">

The **length** of a path is the number of edges in it.

A **cycle** is a path where the first and last node is the same.

<img src="Photos/cycle.png" width="200">

A graph is **connected** if there is a path between any two nodes.

<img src="Photos/connected.png" width="200">

A **tree** is a connected graph that does not contain **cycles**.

<img src="Photos/tree.png" width="200">

In a **directed** graph, the edges can be traversed in one direction only.

<img src="Photos/directed.png" width="200">

In a **weighted** graph, each edge is assigned a weight.

<img src="Photos/weighted.png" width="200">

Two nodes are **neighbors or adjacent** if there is an edge between them. The **degree** of a node is the number of its neighbors.

<img src="Photos/degrees.png" width="200">

In a directed graph:  
* the **indegree** of a node is the number of edges that end at the node
* the **outdegree** of a node is the number of edges that start at the node.

<img src="Photos/indegrees.png" width="200">

A graph is **bipartite** if it is possible to color its nodes using two colors in such a way that no adjacent nodes have the same color.

<img src="Photos/bipartite.png" width="200">