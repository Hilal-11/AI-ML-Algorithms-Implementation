class Node:
    def __init__(self , data):
        self.data = data
        self.left = None
        self.right = None
        

def levelOrderTraversal(root) :
    if (root == None) :
        return
    queue = []
    queue.append(root)
    
    while(len(queue) > 0) :
        node = queue.pop(0)
        print(node.data)
        
        if(node.left != None):
            queue.append(node.left)
        if(node.right != None):
            queue.append(node.right)
                    
          
root = Node(10)
root.left = Node(11)
root.right = Node(22)
root.left.left = Node(90)
root.left.right = Node(100)
root.right.right = Node(101)


levelOrderTraversal(root)
# print(root.data)
# print(root.left.data)
# print(root.right.data)
