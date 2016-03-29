import random

##########################################################

execfile('chess.py')

execfile('zeromq.py')

##########################################################

if __name__ == "__main__":
	random.seed()
	
	zeromq_start("tcp", "YOUR NAME")
