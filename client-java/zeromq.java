import java.util.Vector;

import org.json.JSONObject;
import org.zeromq.ZMQ;

public class zeromq {
    public static boolean boolRunning = false;
    
    public static void start() {
        zeromq.boolRunning = true;

        ZMQ.Context objContext = ZMQ.context(1);
        ZMQ.Socket objSocket = objContext.socket(ZMQ.PAIR); objSocket.bind("tcp://*:" + main.intZeromq);
    
        do {
            JSONObject objIn = new JSONObject(objSocket.recvStr());
            JSONObject objOut = new JSONObject();
        
            if (objIn.getString("strFunction").equals("ping") == true) {
                objOut.put("strOut", main.strName);
                
            } else if (objIn.getString("strFunction").equals("chess_reset") == true) {
                chess.reset();
                
            } else if (objIn.getString("strFunction").equals("chess_boardGet") == true) {
                objOut.put("strOut", chess.boardGet());
                
            } else if (objIn.getString("strFunction").equals("chess_boardSet") == true) {
                chess.boardSet(objIn.getString("strIn"));
                
            } else if (objIn.getString("strFunction").equals("chess_winner") == true) {
                objOut.put("strReturn", chess.winner() + "\0");
                
            } else if (objIn.getString("strFunction").equals("chess_isValid") == true) {
                objOut.put("boolReturn", chess.isValid(objIn.getInt("intX"), objIn.getInt("intY")));
                
            } else if (objIn.getString("strFunction").equals("chess_isEnemy") == true) {
                objOut.put("boolReturn", chess.isEnemy(objIn.getString("strPiece").charAt(0)));
                
            } else if (objIn.getString("strFunction").equals("chess_isOwn") == true) {
                objOut.put("boolReturn", chess.isOwn(objIn.getString("strPiece").charAt(0)));
                
            } else if (objIn.getString("strFunction").equals("chess_isNothing") == true) {
                objOut.put("boolReturn", chess.isNothing(objIn.getString("strPiece").charAt(0)));
                
            } else if (objIn.getString("strFunction").equals("chess_eval") == true) {
                objOut.put("intReturn", chess.eval());
                
            } else if (objIn.getString("strFunction").equals("chess_moves") == true) {
                Vector<String> strOut = chess.moves();
                
                objOut.put("intOut", strOut.size());
                objOut.put("strOut", "");
                
                for (int intMove = 0; intMove < strOut.size(); intMove += 1) {
                    objOut.put("strOut", objOut.get("strOut") + strOut.get(intMove));
                }
                
            } else if (objIn.getString("strFunction").equals("chess_movesShuffled") == true) {
                Vector<String> strOut = chess.movesShuffled();
                
                objOut.put("intOut", strOut.size());
                objOut.put("strOut", "");
                
                for (int intMove = 0; intMove < strOut.size(); intMove += 1) {
                    objOut.put("strOut", objOut.get("strOut") + strOut.get(intMove));
                }
                
            } else if (objIn.getString("strFunction").equals("chess_movesEvaluated") == true) {
                Vector<String> strOut = chess.movesEvaluated();
                
                objOut.put("intOut", strOut.size());
                objOut.put("strOut", "");
                
                for (int intMove = 0; intMove < strOut.size(); intMove += 1) {
                    objOut.put("strOut", objOut.get("strOut") + strOut.get(intMove));
                }
                
            } else if (objIn.getString("strFunction").equals("chess_move") == true) {
                chess.move(objIn.getString("strIn"));
                
            } else if (objIn.getString("strFunction").equals("chess_moveRandom") == true) {
                objOut.put("strOut", chess.moveRandom());
                
            } else if (objIn.getString("strFunction").equals("chess_moveGreedy") == true) {
                objOut.put("strOut", chess.moveGreedy());
                
            } else if (objIn.getString("strFunction").equals("chess_moveNegamax") == true) {
                objOut.put("strOut", chess.moveNegamax(objIn.getInt("intMaxdepth"), objIn.getInt("intDuration")));
                
            } else if (objIn.getString("strFunction").equals("chess_moveAlphabeta") == true) {
                objOut.put("strOut", chess.moveAlphabeta(objIn.getInt("intMaxdepth"), objIn.getInt("intDuration")));
                
            } else if (objIn.getString("strFunction").equals("chess_undo") == true) {
                chess.undo();
                
            }

            objSocket.send(objOut.toString());
        } while (zeromq.boolRunning == true);
        
        objSocket.close();
        objContext.term();
    }
    
    public static void stop() {
        zeromq.boolRunning = false;
    }
}
