'''
create adjacency list of nodes only if of same type --> store the neighbors of the node

why init nodes = NULL --> whenw e dont pass an arg in constr we init w NULL (node doesnt have any data type)

1) addnode methos
- graph is free - doesnt have any val rn
- want to add a node, if passed 5, we then have 5 notes(a)
- then create adj list
- if val passsed>node that you have then raise an exception 

2) addedges
- create edge bw two ndoes
- increase edges # by 1
- check if that node is avialble so that i can directly draw the graph? (args alr in node)
- otw draw sep
- if no node
- create adj list for that node + add in that adj list that self.
- keys = npdes, vals =list (how many nodes its connected to)

-----not free graph:
- alr has node, check if avia
- add the node it is connected to 

add
- 

class
- override printing
- print the class
- 

degree distributinon: 
- Represents the probability of a randomly selected node having a certain number of connections 
- how many nodes are tehere w degree 1, 2, etc upto 6
- how many
'''

class UndirectedGraph:
    def __init__(self, num_nodes=None):
        """
        Initialize an undirected graph.
        
        :param num_nodes: Optional fixed number of nodes. If None, creates a free graph.
        """
        # Use a dictionary to store adjacency list
        self.graph = {}
        
        # If num_nodes is provided, initialize nodes
        if num_nodes is not None:
            for i in range(1, num_nodes + 1):
                self.graph[i] = set()
    
    def addNode(self, node):
        """
        Add a node to the graph.
        
        :param node: Node to be added
        """
        # If node already exists, do nothing
        if node not in self.graph:
            self.graph[node] = set()
    
    def addEdge(self, a, b):
        """
        Add an undirected edge between nodes a and b.
        
        :param a: First node
        :param b: Second node
        """
        # Ensure both nodes exist
        self.addNode(a)
        self.addNode(b)
        
        # Add edges in both directions
        self.graph[a].add(b)
        self.graph[b].add(a)
    
    def __add__(self, other):
        """
        Overload + operator to allow adding nodes or edges.
        
        :param other: Node or edge to add
        :return: A new graph with added node/edge
        """
        new_graph = UndirectedGraph()
        
        # Copy current graph's nodes and edges
        for node, neighbors in self.graph.items():
            new_graph.graph[node] = neighbors.copy()
        
        # Add the new node or edge
        if isinstance(other, int):
            new_graph.addNode(other)
        elif isinstance(other, tuple) and len(other) == 2:
            new_graph.addEdge(other[0], other[1])
        
        return new_graph
    
    def plotDegDist(self):

        import matplotlib.pyplot as plt
        
        # Calculate degrees
        degrees = [len(neighbors) for neighbors in self.graph.values()]
        
        plt.figure(figsize=(8, 6))
        plt.hist(degrees, bins='auto', alpha=0.7, color='blue', edgecolor='black')
        plt.title('Node Degree Distribution')
        plt.xlabel('Node Degree')
        plt.ylabel('Fraction of Nodes')
        plt.show()
    
    def __str__(self):

        result = f"Graph with {len(self.graph)} nodes and {sum(len(neighbors) for neighbors in self.graph.values()) // 2} edges. Neighbours of the nodes are below:\n"
        
        for node, neighbors in sorted(self.graph.items()):
            result += f"Node {node}: {neighbors}\n"
        
        return result.strip()

g = UndirectedGraph()
g = g + 10
g = g + (1, 2)
g = g + (1, 100)
g = g + (100, 3)
print(g)