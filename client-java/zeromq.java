import java.util.Vector;

import org.json.JSONObject;
import org.zeromq.ZMQ;

public class zeromq {
	public static boolean boolRunning = false;
	
	public static void start() {
		{
			zeromq.boolRunning = true;
		}
		
		{
			ZMQ.Context objectContext = ZMQ.context(1);
			ZMQ.Socket objectSocket = objectContext.socket(ZMQ.PAIR);
			
			{
				objectSocket.bind("tcp://*:" + main.intZeromq);
			}
			
			{
				do {
					JSONObject objectIn = null;
					JSONObject objectOut = new JSONObject();
					
					{
						objectIn = new JSONObject(objectSocket.recvStr());
					}
					
					{
						if (objectIn.getString("strFunction").equals("ping") == true) {
							objectOut.put("strOut", main.strName);
							
						} else if (objectIn.getString("strFunction").equals("chess_reset") == true) {
							chess.reset();
							
						} else if (objectIn.getString("strFunction").equals("chess_boardGet") == true) {
							objectOut.put("strOut", chess.boardGet());
							
						} else if (objectIn.getString("strFunction").equals("chess_boardSet") == true) {
							chess.boardSet(objectIn.getString("strIn"));
							
						} else if (objectIn.getString("strFunction").equals("chess_winner") == true) {
							objectOut.put("strReturn", chess.winner() + "\0");
							
						} else if (objectIn.getString("strFunction").equals("chess_isValid") == true) {
							objectOut.put("boolReturn", chess.isValid(objectIn.getInt("intX"), objectIn.getInt("intY")));
							
						} else if (objectIn.getString("strFunction").equals("chess_isEnemy") == true) {
							objectOut.put("boolReturn", chess.isEnemy(objectIn.getString("strPiece").charAt(0)));
							
						} else if (objectIn.getString("strFunction").equals("chess_isOwn") == true) {
							objectOut.put("boolReturn", chess.isOwn(objectIn.getString("strPiece").charAt(0)));
							
						} else if (objectIn.getString("strFunction").equals("chess_isNothing") == true) {
							objectOut.put("boolReturn", chess.isNothing(objectIn.getString("strPiece").charAt(0)));
							
						} else if (objectIn.getString("strFunction").equals("chess_eval") == true) {
							objectOut.put("intReturn", chess.eval());
							
						} else if (objectIn.getString("strFunction").equals("chess_moves") == true) {
							Vector<String> strOut = chess.moves();
							
							objectOut.put("intOut", strOut.size());
							objectOut.put("strOut", "");
							
							for (int intFor1 = 0; intFor1 < strOut.size(); intFor1 += 1) {
								objectOut.put("strOut", objectOut.get("strOut") + strOut.get(intFor1));
							}
							
						} else if (objectIn.getString("strFunction").equals("chess_movesShuffled") == true) {
							Vector<String> strOut = chess.movesShuffled();
							
							objectOut.put("intOut", strOut.size());
							objectOut.put("strOut", "");
							
							for (int intFor1 = 0; intFor1 < strOut.size(); intFor1 += 1) {
								objectOut.put("strOut", objectOut.get("strOut") + strOut.get(intFor1));
							}
							
						} else if (objectIn.getString("strFunction").equals("chess_movesEvaluated") == true) {
							Vector<String> strOut = chess.movesEvaluated();
							
							objectOut.put("intOut", strOut.size());
							objectOut.put("strOut", "");
							
							for (int intFor1 = 0; intFor1 < strOut.size(); intFor1 += 1) {
								objectOut.put("strOut", objectOut.get("strOut") + strOut.get(intFor1));
							}
							
						} else if (objectIn.getString("strFunction").equals("chess_move") == true) {
							chess.move(objectIn.getString("strIn"));
							
						} else if (objectIn.getString("strFunction").equals("chess_moveRandom") == true) {
							objectOut.put("strOut", chess.moveRandom());
							
						} else if (objectIn.getString("strFunction").equals("chess_moveGreedy") == true) {
							objectOut.put("strOut", chess.moveGreedy());
							
						} else if (objectIn.getString("strFunction").equals("chess_moveNegamax") == true) {
							objectOut.put("strOut", chess.moveNegamax(objectIn.getInt("intDepth"), objectIn.getInt("intDuration")));
							
						} else if (objectIn.getString("strFunction").equals("chess_moveAlphabeta") == true) {
							objectOut.put("strOut", chess.moveAlphabeta(objectIn.getInt("intDepth"), objectIn.getInt("intDuration")));
							
						} else if (objectIn.getString("strFunction").equals("chess_undo") == true) {
							chess.undo();
							
						}
					}
					
					{
						objectSocket.send(objectOut.toString());
					}
				} while (zeromq.boolRunning == true);
			}
			
			objectSocket.close();
			objectContext.term();
		}
	}
	
	public static void stop() {
		{
			zeromq.boolRunning = false;
		}
	}
}
