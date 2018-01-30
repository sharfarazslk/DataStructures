#Sharfaraz Salek
#Convert to different ordering of tree traversal techniques
#Python 2.7
import sys 
import math

class Tree:
	def __init__(self, cargo, identifier, left=None, right=None):
		self.cargo = cargo 
		self.identifier = identifier
		self.left  = left
		self.right = right 

	def __str__(self): 
		return str(self.cargo) 

def list_in_preorder(T1, nodes_in_preorder):
	if T1 ==None: return
	nodes_in_preorder.append(T1)
	list_in_preorder(T1.left, nodes_in_preorder)
	list_in_preorder(T1.right, nodes_in_preorder)

def pre2post(nodes_in_preorder, nodes_in_postorder):
	index = 0
	print "Preorder: "
	print '[%s]'%' '.join(map(str, nodes_in_preorder))
	while ((nodes_in_preorder[index]).identifier != "l"): #finds first leaf in tree
		index += 1
	
	while (len(nodes_in_preorder) > 1): #traverses through all nodes
		nodes_in_postorder.append(nodes_in_preorder[index]) #adds first leaf to postorder
		del nodes_in_preorder[index] #deletes item from list
		nodes_in_postorder.append(nodes_in_preorder[index]) #adds right sibling of leaf to postorder
		del nodes_in_preorder[index] #deletes item from list
		index -= 1 #parent of leaf
		nodes_in_postorder.append(nodes_in_preorder[index]) #adds parent to postorder
		del nodes_in_preorder[index] 
		index += 1 #moves to next leaf

	nodes_in_postorder.append(nodes_in_preorder[0]) # adds root to list
	del nodes_in_preorder[0]
	print "Postorder from Preorder: "
	print '[%s]'%' '.join(map(str, nodes_in_postorder))

def post2pre(nodes_in_postorder, nodes_in_preorder):
	last_index = len(nodes_in_postorder) - 1 #last position in list
	nodes_in_preorder.append(nodes_in_postorder[last_index]) #adds root of tree
	del nodes_in_postorder[last_index] #removes element from post order

	index = 2 #first left-child will be here
	while(len(nodes_in_postorder) > 2):
	
		nodes_in_preorder.append(nodes_in_postorder[index])
		del nodes_in_postorder[index]
		index -= 2 #goes to leftmost child of last node
		
		nodes_in_preorder.append(nodes_in_postorder[index])
		del nodes_in_postorder[index]
		
		nodes_in_preorder.append(nodes_in_postorder[index]) #adds right child of last node
		index += 3 #goes to next child of root

	
	del nodes_in_postorder[0] 
	print "Preorder from Postorder: "
	print '[%s]'%' '.join(map(str, nodes_in_preorder))

def pre2in(nodes_in_preorder, nodes_in_inorder):
	index = 0
	while ((nodes_in_preorder[index]).identifier != "l"): #finds first leaf in tree
		index += 1

	while (len(nodes_in_preorder) > 1): #traverses through all nodes
		nodes_in_inorder.append(nodes_in_preorder[index])
		del nodes_in_preorder[index]
		index -= 1 #goes to parent of node

		nodes_in_inorder.append(nodes_in_preorder[index]) #right sibling of node
		del nodes_in_preorder[index] 

		nodes_in_inorder.append(nodes_in_preorder[index]) #next left child
		del nodes_in_preorder[index]
		index += 1

	nodes_in_inorder.append(nodes_in_preorder[0])
	del nodes_in_preorder[0] 
	print "Inorder from Preorder: "
	print '[%s]'%' '.join(map(str, nodes_in_inorder))


def main():
	#Testing Conversion of pre-order, post-order and in-order
	T4 = Tree(4, "l")
	T5 = Tree(5, "l")
	T6 = Tree(6, "l")
	T7 = Tree(7, "l")

	#children of the root
	T2 = Tree(2, "i", T4, T5)
	T3 = Tree(3, "i", T6, T7)

	#Root
	T1 = Tree(1, "r", T2, T3)

	nodes_in_preorder = [] #Stores tree nodes in preorder
	nodes_in_postorder = [] #stores nodes in post order
	nodes_in_inorder = [] #stores nodes in inorder
	list_in_preorder (T1, nodes_in_preorder)

	pre2post(nodes_in_preorder, nodes_in_postorder) 
	post2pre(nodes_in_postorder, nodes_in_preorder) 
	pre2in(nodes_in_preorder,nodes_in_inorder) 

if __name__ == "__main__":
	main(sys.argv)
