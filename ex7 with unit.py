import numpy as np 
import unittest

#Unit test
class Test_Methods(unittest.TestCase):

	def test_sum(self):
		self.assertEqual(sum_ar(1,2), 3)

	def test_sub(self):
		self.assertEqual(sub(10, 7), 3)

#generrating numbers from 0 to 255 in 3d array
def generate():
	a = np.random.randint(255, size=(3,3,3))
	b = np.random.randint(255, size=(3,3,3)) 

	return a, b
#summing array
def sum_ar(a, b):
	print("sum of a and b")
	return np.sum([a,b])
#substraction of arrays
def sub(a ,b):
	print("a - b: \n", np.sum([a, b*-1]))
	print("\nb - a: \n", np.sum([b, a*-1]))
	return int(np.sum([a, b*-1]))

#scaling(multipling every element by scalar)
def scalar(a, b, scal):
	print("Scalar of a and b: \n")
	print("A * scal = \n", a*int(scal))
	print("B * scal = \n", b*int(scal))
	
#sum of elements of array/bigger sum
def sum_of_and_big(a, b):
	print("Sum of mass:\na = ", np.sum(a), "\nb = ", np.sum(b))
	if np.sum(a) > np.sum(b):
		print("Sum of a is greater than sum of b")
	elif np.sum(b[:])>np.sum(a[:]):
		print("Sum of b is greater than sum of a")
	else:
		print("Sums are equal")


if __name__ == '__main__':
	#running unittest
	unittest.main()
	#if ok -> run program


	data = generate()
	a = data[0]
	b = data[1]

	print("Enter number to choose: 1 - sum, 2 - higher, 3 - scalar, 4 - sum of mass")
	en = 4

	if en ==1:
		sum_ar(a, b)
	elif en == 2:
		sub(a,b)
	elif en == 3:
		print("choose scalar :")
		sc = input()
		scalar(a, b, sc)
	elif en == 4:
		sum_of_and_big(a,b)
