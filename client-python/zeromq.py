import json

##########################################################

import zmq # sudo pip install pyzmq

##########################################################

zeromq_strMode = ""
zeromq_strName = ""
zeromq_boolRunning = False

##########################################################

def zeromq_start(strMode, strName):
	global zeromq_strMode
	global zeromq_strName
	global zeromq_boolRunning
	
	zeromq_strMode = strMode
	zeromq_strName = strName
	zeromq_boolRunning = True
	
	contextHandle = zmq.Context()
	socketHandle = contextHandle.socket(zmq.PAIR)
	
	if zeromq_strMode == "tcp":
		socketHandle.bind("tcp://*:54361")
		
	elif zeromq_strMode == "ipc":
		socketHandle.bind("ipc:///tmp/minichess-zeromq")
	
	while zeromq_boolRunning == True:
		jsonIn = None
		jsonOut = {}
		
		jsonIn = json.loads(socketHandle.recv())
		
		if jsonIn["strFunction"] == "ping":
			jsonOut["strOut"] = zeromq_strName
			
		elif jsonIn["strFunction"] == "chess_reset":
			chess_reset()
			
		elif jsonIn["strFunction"] == "chess_boardGet":
			jsonOut["strOut"] = chess_boardGet()
			
		elif jsonIn["strFunction"] == "chess_boardSet":
			chess_boardSet(jsonIn["strIn"])
			
		elif jsonIn["strFunction"] == "chess_winner":
			jsonOut["strReturn"] = chess_winner()
			
		elif jsonIn["strFunction"] == "chess_isValid":
			jsonOut["boolReturn"] = chess_isValid(jsonIn["intX"], jsonIn["intY"])
			
		elif jsonIn["strFunction"] == "chess_isEnemy":
			jsonOut["boolReturn"] = chess_isEnemy(jsonIn["strPiece"])
			
		elif jsonIn["strFunction"] == "chess_isOwn":
			jsonOut["boolReturn"] = chess_isOwn(jsonIn["strPiece"])
			
		elif jsonIn["strFunction"] == "chess_isNothing":
			jsonOut["boolReturn"] = chess_isNothing(jsonIn["strPiece"])
			
		elif jsonIn["strFunction"] == "chess_eval":
			jsonOut["intReturn"] = chess_eval()
			
		elif jsonIn["strFunction"] == "chess_moves":
			strOut = chess_moves()
			
			jsonOut["intOut"] = len(strOut)
			jsonOut["strOut"] = str.join('', strOut)
			
		elif jsonIn["strFunction"] == "chess_movesShuffled":
			strOut = chess_movesShuffled()
			
			jsonOut["intOut"] = len(strOut)
			jsonOut["strOut"] = str.join('', strOut)
			
		elif jsonIn["strFunction"] == "chess_movesEvaluated":
			strOut = chess_movesEvaluated()
			
			jsonOut["intOut"] = len(strOut)
			jsonOut["strOut"] = str.join('', strOut)
			
		elif jsonIn["strFunction"] == "chess_move":
			chess_move(jsonIn["strIn"])
			
		elif jsonIn["strFunction"] == "chess_moveRandom":
			jsonOut["strOut"] = chess_moveRandom()
			
		elif jsonIn["strFunction"] == "chess_moveGreedy":
			jsonOut["strOut"] = chess_moveGreedy()
			
		elif jsonIn["strFunction"] == "chess_moveNegamax":
			jsonOut["strOut"] = chess_moveNegamax(jsonIn["intDepth"], jsonIn["intDuration"])
			
		elif jsonIn["strFunction"] == "chess_moveAlphabeta":
			jsonOut["strOut"] = chess_moveAlphabeta(jsonIn["intDepth"], jsonIn["intDuration"])
			
		elif jsonIn["strFunction"] == "chess_undo":
			chess_undo()
		
		socketHandle.send(json.dumps(jsonOut))
		
		jsonIn = None
		jsonOut = None
	
	socketHandle.close()
	contextHandle.destroy()


def zeromq_stop():
	global zeromq_boolRunning

	zeromq_boolRunning = true
