

class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

function preOrderTraversal(root) {
    if(root == null) return;

    console.log(root.data);
    preOrderTraversal(root.left);
    preOrderTraversal(root.right);
}

function preOrderTraversal(root){
	if(root == null) return;
	let st = [];
	st.push(root);
	
	while(!st.isEmpty()){
		let current = st.peek();
		st.pop();
		console.log(current.data);
		
		if(current.right != NULL) st.push(current.right);
		if(current.left != NULL) st.push(current.left)
	}
}

root = new Node(10);
root.left = new Node(11);
root.right = new Node(22);

preOrderTraversal(root);
// console.log(root.data)
// console.log(root.left.data)
// console.log(root.right.data)
