

class Node :
    def __init__(self , data):
        self.data = data
        self.left = None
        self.right = None
        
def preOrderTraversal() :
    pass    

root = Node(10)
root.left = Node(11)
root.right = Node(22)

print(root.data)
print(root.left.data)
print(root.right.data)


