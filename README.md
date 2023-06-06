
# Prüfer Sequence

The prüfer sequence is basically an easy way to generate a tree graph with any number of nodes, without unintentionally including a circle through the edges. If you are interested in this topic more, you can check out its [Wikipedia](https://en.wikipedia.org/wiki/Pr%C3%BCfer_sequence) page. The application generates a randomized tree graph from 2-8 nodes based on this algorithm.

Originally this was made for my combinatorics and graph theory class, that focused on the concept rather than the implementation, so the code is not the most readable and useful part of this project.

Here is an example output of the program:
```
Number of indices:
7

Generation process:  
0.) Chosen node: 4, Created edge: --  
0.) Chosen node: 5, Created edge: 45  
1.) Chosen node: 6, Created edge: 56  
2.) Chosen node: 0, Created edge: 60  
3.) Chosen node: 3, Created edge: 53  
4.) Chosen node: 1, Created edge: 61  
5.) Chosen node: 2, Created edge: 02

Edges in tree:
1.) 45  
2.) 56  
3.) 60  
4.) 53  
5.) 61  
6.) 02
```
In this example, we generated a graph with 7 nodes. In the first paragraph, you can see the where the new nodes have been connected to the graph. Then you can see all the chosen edges in the second one. This is what it would look like drawn on a chalk board:   
<img src="/PrüferSequence/graph.png" alt="TreeGraphImage" width="420" height="420">
