#!/usr/bin/python
#Sharfaraz Salek
#Assignment - 2
#CS260
#3.14
#Post Fix Evaluation
#Python 2.7

import math
import sys

def evaluate(parseTree): #argument takes index of 0 (start of the list)
	i = 0
	stack = [] # stack
	while i < len(parseTree):
		if parseTree[i] == '+':
			x = stack[-2] + stack[-1]
			stack.pop()
			stack.pop()
			stack.append(x)
			
		elif parseTree[i] == '-':
			x = stack[-2] - stack[-1]
			stack.pop()
			stack.pop()
			stack.append(x)
			
		elif parseTree[i] == '*':
			x = stack[-2] * stack[-1]
			stack.pop()
			stack.pop()
			stack.append(x)
			
		elif parseTree[i] == '/':
			x = stack[-2] / stack[-1]
			stack.pop()
			stack.pop()
			stack.append(x)

		else:
			stack.append(int(parseTree[i]))

		i += 1
	return stack[0]

def main(argv):
	test = raw_input()
	parseTree = []
	for line in iter(test):
		parseTree = test.split()
	output = evaluate(parseTree)
	print "Postorder"
	print "eval: %i"%output

if __name__ == "__main__":
	main(sys.argv)