import json

##########################################################

import zmq # pip install pyzmq

##########################################################

zeromq_boolRunning = False

##########################################################

def zeromq_start():
	global zeromq_boolRunning
	
	zeromq_boolRunning = True
	
	objectContext = zmq.Context()
	objectSocket = objectContext.socket(zmq.PAIR)
	
	objectSocket.bind("tcp://*:" + str(main_intZeromq))
	
	while zeromq_boolRunning == True:
		objectIn = None
		objectOut = {}
		
		objectIn = json.loads(objectSocket.recv().decode())
		
		if objectIn["strFunction"] == "ping":
			objectOut["strOut"] = main_strName
			
		elif objectIn["strFunction"] == "chess_reset":
			chess_reset()
			
		elif objectIn["strFunction"] == "chess_boardGet":
			objectOut["strOut"] = chess_boardGet()
			
		elif objectIn["strFunction"] == "chess_boardSet":
			chess_boardSet(objectIn["strIn"])
			
		elif objectIn["strFunction"] == "chess_winner":
			objectOut["strReturn"] = chess_winner()
			
		elif objectIn["strFunction"] == "chess_isValid":
			objectOut["boolReturn"] = chess_isValid(objectIn["intX"], objectIn["intY"])
			
		elif objectIn["strFunction"] == "chess_isEnemy":
			objectOut["boolReturn"] = chess_isEnemy(objectIn["strPiece"])
			
		elif objectIn["strFunction"] == "chess_isOwn":
			objectOut["boolReturn"] = chess_isOwn(objectIn["strPiece"])
			
		elif objectIn["strFunction"] == "chess_isNothing":
			objectOut["boolReturn"] = chess_isNothing(objectIn["strPiece"])
			
		elif objectIn["strFunction"] == "chess_eval":
			objectOut["intReturn"] = chess_eval()
			
		elif objectIn["strFunction"] == "chess_moves":
			strOut = chess_moves()
			
			objectOut["intOut"] = len(strOut)
			objectOut["strOut"] = str.join('', strOut)
			
		elif objectIn["strFunction"] == "chess_movesShuffled":
			strOut = chess_movesShuffled()
			
			objectOut["intOut"] = len(strOut)
			objectOut["strOut"] = str.join('', strOut)
			
		elif objectIn["strFunction"] == "chess_movesEvaluated":
			strOut = chess_movesEvaluated()
			
			objectOut["intOut"] = len(strOut)
			objectOut["strOut"] = str.join('', strOut)
			
		elif objectIn["strFunction"] == "chess_move":
			chess_move(objectIn["strIn"])
			
		elif objectIn["strFunction"] == "chess_moveRandom":
			objectOut["strOut"] = chess_moveRandom()
			
		elif objectIn["strFunction"] == "chess_moveGreedy":
			objectOut["strOut"] = chess_moveGreedy()
			
		elif objectIn["strFunction"] == "chess_moveNegamax":
			objectOut["strOut"] = chess_moveNegamax(objectIn["intDepth"], objectIn["intDuration"])
			
		elif objectIn["strFunction"] == "chess_moveAlphabeta":
			objectOut["strOut"] = chess_moveAlphabeta(objectIn["intDepth"], objectIn["intDuration"])
			
		elif objectIn["strFunction"] == "chess_undo":
			chess_undo()
		
		objectSocket.send_string(json.dumps(objectOut))
		
		objectIn = None
		objectOut = None
	
	objectSocket.close()
	objectContext.destroy()


def zeromq_stop():
	global zeromq_boolRunning

	zeromq_boolRunning = false
