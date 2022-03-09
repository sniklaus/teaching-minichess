import json

##########################################################

import zmq # pip install pyzmq

##########################################################

zeromq_boolRunning = False

##########################################################

def zeromq_start():
    global zeromq_boolRunning
    
    zeromq_boolRunning = True
    
    objContext = zmq.Context()
    objSocket = objContext.socket(zmq.PAIR); objSocket.bind('tcp://*:' + str(main_intZeromq))
    
    while zeromq_boolRunning == True:
        objIn = json.loads(objSocket.recv().decode('utf-8'))
        objOut = {}
        
        if objIn['strFunction'] == 'ping':
            objOut['strOut'] = main_strName
            
        elif objIn['strFunction'] == 'chess_reset':
            chess_reset()
            
        elif objIn['strFunction'] == 'chess_boardGet':
            objOut['strOut'] = chess_boardGet()
            
        elif objIn['strFunction'] == 'chess_boardSet':
            chess_boardSet(objIn['strIn'])
            
        elif objIn['strFunction'] == 'chess_winner':
            objOut['strReturn'] = chess_winner()
            
        elif objIn['strFunction'] == 'chess_isValid':
            objOut['boolReturn'] = chess_isValid(objIn['intX'], objIn['intY'])
            
        elif objIn['strFunction'] == 'chess_isEnemy':
            objOut['boolReturn'] = chess_isEnemy(objIn['strPiece'])
            
        elif objIn['strFunction'] == 'chess_isOwn':
            objOut['boolReturn'] = chess_isOwn(objIn['strPiece'])
            
        elif objIn['strFunction'] == 'chess_isNothing':
            objOut['boolReturn'] = chess_isNothing(objIn['strPiece'])
            
        elif objIn['strFunction'] == 'chess_eval':
            objOut['intReturn'] = chess_eval()
            
        elif objIn['strFunction'] == 'chess_moves':
            strOut = chess_moves()
            
            objOut['intOut'] = len(strOut)
            objOut['strOut'] = str.join('', strOut)
            
        elif objIn['strFunction'] == 'chess_movesShuffled':
            strOut = chess_movesShuffled()
            
            objOut['intOut'] = len(strOut)
            objOut['strOut'] = str.join('', strOut)
            
        elif objIn['strFunction'] == 'chess_movesEvaluated':
            strOut = chess_movesEvaluated()
            
            objOut['intOut'] = len(strOut)
            objOut['strOut'] = str.join('', strOut)
            
        elif objIn['strFunction'] == 'chess_move':
            chess_move(objIn['strIn'])
            
        elif objIn['strFunction'] == 'chess_moveRandom':
            objOut['strOut'] = chess_moveRandom()
            
        elif objIn['strFunction'] == 'chess_moveGreedy':
            objOut['strOut'] = chess_moveGreedy()
            
        elif objIn['strFunction'] == 'chess_moveNegamax':
            objOut['strOut'] = chess_moveNegamax(objIn['intMaxdepth'], objIn['intDuration'])
            
        elif objIn['strFunction'] == 'chess_moveAlphabeta':
            objOut['strOut'] = chess_moveAlphabeta(objIn['intMaxdepth'], objIn['intDuration'])
            
        elif objIn['strFunction'] == 'chess_undo':
            chess_undo()

        # end
        
        objSocket.send_string(json.dumps(objOut))
    # end
    
    objSocket.close()
    objContext.destroy()
# end

def zeromq_stop():
    global zeromq_boolRunning

    zeromq_boolRunning = false
# end