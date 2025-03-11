
class Node:
    def __init__(self , data):
        self.data = data
        self.left = None
        self.mid = None
        self.right = None
        
root = Node(1)
root.left = Node(2)
root.mid = Node(3)
root.right = Node(4)

print(root.data)
print(root.left.data)
print(root.mid.data)
print(root.right.data)



        