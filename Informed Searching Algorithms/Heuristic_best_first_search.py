import heapq
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


def greedy_bfs(self, start, goal):
        open_list = []
        heapq.heappush(open_list, (self.heuristic[start], start))
        visited = set()

        while open_list:
            _, node = heapq.heappop(open_list)

            if node in visited:
                continue

            print(f"Visiting: {node}")

            if node == goal:
                print("Goal reached!")
                return

            visited.add(node)

            for neighbor in self.graph.get(node, []):
                if neighbor not in visited:
                    heapq.heappush(open_list, (self.heuristic[neighbor], neighbor))

        print("Goal not reachable!")

g = Graph()
g.add_edge('S', 'A')
g.add_edge('S', 'B')
g.add_edge('A', 'C')
g.add_edge('A', 'D')
g.add_edge('B', 'G')


heuristics = {'S': 6, 'A': 4, 'B': 2, 'C': 3, 'D': 5, 'G': 0}
g.set_heuristic(heuristics)


print("Path using Greedy Best-First Search:")
g.greedy_bfs('S', 'G')