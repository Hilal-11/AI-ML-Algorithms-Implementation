
class Node :
    def __init__(self , data):
        self.data = data
        self.left = None
        self.right = None
        

root = Node(10)
root.left = Node(20)
root.right = Node(30)

root.left.left = Node(21)
root.left.right = Node(22)

root.right.left = Node(31)
root.right.right = Node(32)

print(root.data)
print(root.left.data)
print(root.right.data)

print(root.left.left.data)
print(root.left.right.data)
        
        
print(root.right.left.data)
print(root.right.right.data)