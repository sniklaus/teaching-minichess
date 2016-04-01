import random

##########################################################

main_intZeromq = 54361 # CHANGE THIS - OPTIONAL
main_strName = "YOUR NAME" # CHANGE THIS - REQUIRED

##########################################################

exec(open("chess.py").read())

exec(open("zeromq.py").read())

##########################################################

if __name__ == "__main__":
	assert main_intZeromq > 1024
	assert main_intZeromq < 65535
	
	assert len(main_strName) > 2
	assert len(main_strName) < 16
	assert main_strName.find(" ") == -1
	
	random.seed()
	
	zeromq_start()
