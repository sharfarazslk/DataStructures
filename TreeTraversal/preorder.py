#Sharfaraz Salek
#Pre Fix Evaluation
#Python 2.7

import math
import sys

def evaluate(parseTree): #argument takes index of 0 (start of the list)
	i = 0
	if i < len(parseTree):
		if parseTree[i] == '+':
			del parseTree[i]
			return evaluate(parseTree) + evaluate(parseTree)
		elif parseTree[i] == '-':
			del parseTree[i]
			return evaluate(parseTree) - evaluate(parseTree)
		elif parseTree[i] == '*':
			del parseTree[i]
			return evaluate(parseTree) * evaluate(parseTree)
		elif parseTree[i] == '/':
			del parseTree[i]
			return evaluate(parseTree) / evaluate(parseTree)
		else:
			element = parseTree[i]
			del parseTree[i]
			return int(element)

def main(argv):
	test = raw_input()
	parseTree = []
	for line in iter(test):
		parseTree = test.split()
	output = evaluate(parseTree)
	print "Preorder"
	print "eval: %i"%output

if __name__ == "__main__":
	main(sys.argv)
