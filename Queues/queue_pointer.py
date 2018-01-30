#Sharfaraz Salek
#Pointer Implementation of a Queue
#Python 2.7

class Node:
	def __init__(self, cargo=None, next=None):
		self.cargo = cargo
		self.next = next

	def __str__(self):
		return str(self.cargo)

class Queue:
	def __init__(self):
		self.length=0
		self.head=None
		self.last=None

	def Front(self):
		return (self.head.cargo)
	
	def Enqueue(self, cargo):
		node = Node(cargo)
		node.next = None
		if self.length == 0: #if list is empty
			self.last = node
			self.head = self.last
			self.length = self.length + 1
		else:
			last = self.last #find last node
			last.next = node #append the new node
			self.last = node
			self.length = self.length + 1

	def Dequeue(self):
		cargo = self.head.cargo
		self.head = self.head.next
		self.length = self.length - 1
		if self.length == 0:
			self.last = None

	def Empty(self):
		if (self.length == 0):
			return True
		else:
			return False
	
	def Makenull(self):
		self.head = None
		self.last = None
		self.length = 0


