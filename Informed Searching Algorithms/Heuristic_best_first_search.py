class Graph:
    def __init__(self):
        self.graph = {}
        self.heuristic = {}

    def add_edge(self, u, v):
        if u not in self.graph:
            self.graph[u] = []
        self.graph[u].append(v)
        
     def set_heuristic(self, h_values):
        self.heuristic = h_values

    def set_heuristic(self, h_values):
        self.heuristic = h_values


g = Graph()
g.add_edge('S', 'A')
g.add_edge('S', 'B')
g.add_edge('A', 'C')
g.add_edge('A', 'D')
g.add_edge('B', 'G')


heuristics = {'S': 6, 'A': 4, 'B': 2, 'C': 3, 'D': 5, 'G': 0}
g.set_heuristic(heuristics