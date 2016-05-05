#include "main.h"

bool test_board() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n") != 0) {
		printf("test: failed test_board_001\n");
		return false;
	}
	
	chess_boardSet("18 W\n.k...\npn..r\n..p.P\n.Pp..\nP...K\nRB..Q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.k...\npn..r\n..p.P\n.Pp..\nP...K\nRB..Q\n") != 0) {
		printf("test: failed test_board_002\n");
		return false;
	}
	
	chess_boardSet("19 W\n.k.n.\n...pr\npbP.p\npB.pP\n..PK.\nRN..Q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.k.n.\n...pr\npbP.p\npB.pP\n..PK.\nRN..Q\n") != 0) {
		printf("test: failed test_board_003\n");
		return false;
	}
	
	chess_boardSet("15 W\n.b..r\n.....\nk.Npp\np.pPP\n..q..\nR.B.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.b..r\n.....\nk.Npp\np.pPP\n..q..\nR.B.K\n") != 0) {
		printf("test: failed test_board_004\n");
		return false;
	}
	
	chess_boardSet("11 B\n.N.nr\n.pq.p\n.b.p.\n...PP\nPPP..\nRB.KQ\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n.N.nr\n.pq.p\n.b.p.\n...PP\nPPP..\nRB.KQ\n") != 0) {
		printf("test: failed test_board_005\n");
		return false;
	}
	
	chess_boardSet("20 W\n.rk..\nq.p..\np..pn\n.p.P.\nP...K\nR.NQ.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.rk..\nq.p..\np..pn\n.p.P.\nP...K\nR.NQ.\n") != 0) {
		printf("test: failed test_board_006\n");
		return false;
	}
	
	chess_boardSet("15 W\n.k.n.\n.p..r\n.pbPp\n.P.PB\n....K\nRN...\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.k.n.\n.p..r\n.pbPp\n.P.PB\n....K\nRN...\n") != 0) {
		printf("test: failed test_board_007\n");
		return false;
	}
	
	chess_boardSet("13 B\nB...N\n...p.\nkb..p\n.....\nPpPKP\n..RQ.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nB...N\n...p.\nkb..p\n.....\nPpPKP\n..RQ.\n") != 0) {
		printf("test: failed test_board_008\n");
		return false;
	}
	
	chess_boardSet("15 B\n.b.nr\n.Pp..\n..k.p\nR..PP\n.p.NQ\n.q..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n.b.nr\n.Pp..\n..k.p\nR..PP\n.p.NQ\n.q..K\n") != 0) {
		printf("test: failed test_board_009\n");
		return false;
	}
	
	chess_boardSet("10 B\n.r...\nPp.bp\n..p.n\nB.p..\nP..PP\nRN..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "10 B\n.r...\nPp.bp\n..p.n\nB.p..\nP..PP\nRN..K\n") != 0) {
		printf("test: failed test_board_010\n");
		return false;
	}
	
	chess_boardSet("16 W\n.kQr.\npqp..\n...pP\nP....\nRPB..\n....K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.kQr.\npqp..\n...pP\nP....\nRPB..\n....K\n") != 0) {
		printf("test: failed test_board_011\n");
		return false;
	}
	
	chess_boardSet("19 B\n.kbnr\n....P\npQP..\nP.P.p\nP..K.\n...R.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.kbnr\n....P\npQP..\nP.P.p\nP..K.\n...R.\n") != 0) {
		printf("test: failed test_board_012\n");
		return false;
	}
	
	chess_boardSet("16 B\n.k...\np.p.q\n.pN.p\nPP..P\n..PB.\nR.b.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.k...\np.p.q\n.pN.p\nPP..P\n..PB.\nR.b.K\n") != 0) {
		printf("test: failed test_board_013\n");
		return false;
	}
	
	chess_boardSet("9 W\nk.b.r\n.nP.p\np..p.\nPp.P.\n..PqP\nRNBQ.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "9 W\nk.b.r\n.nP.p\np..p.\nPp.P.\n..PqP\nRNBQ.\n") != 0) {
		printf("test: failed test_board_014\n");
		return false;
	}
	
	chess_boardSet("15 W\n....r\nkpp.p\nB.Pp.\nP.P..\nR..KP\n.Nb.Q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n....r\nkpp.p\nB.Pp.\nP.P..\nR..KP\n.Nb.Q\n") != 0) {
		printf("test: failed test_board_015\n");
		return false;
	}
	
	chess_boardSet("20 B\n...r.\nbk...\n.p..N\nBP.p.\nP.P.p\n.R..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n...r.\nbk...\n.p..N\nBP.p.\nP.P.p\n.R..K\n") != 0) {
		printf("test: failed test_board_016\n");
		return false;
	}
	
	chess_boardSet("16 W\nk..q.\n...br\np....\n..pPp\nP.P.P\nR.Q.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk..q.\n...br\np....\n..pPp\nP.P.P\nR.Q.K\n") != 0) {
		printf("test: failed test_board_017\n");
		return false;
	}
	
	chess_boardSet("16 B\n...n.\n..B..\nk.p..\np.P..\nP..qP\n....K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n...n.\n..B..\nk.p..\np.P..\nP..qP\n....K\n") != 0) {
		printf("test: failed test_board_018\n");
		return false;
	}
	
	chess_boardSet("18 W\n.krQ.\n....N\np....\n.PP..\np..qK\nR.B..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.krQ.\n....N\np....\n.PP..\np..qK\nR.B..\n") != 0) {
		printf("test: failed test_board_019\n");
		return false;
	}
	
	chess_boardSet("11 B\nk...r\nb.pp.\n..nP.\nP..qp\nP..NP\nR.B.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk...r\nb.pp.\n..nP.\nP..qp\nP..NP\nR.B.K\n") != 0) {
		printf("test: failed test_board_020\n");
		return false;
	}
	
	chess_boardSet("11 W\nkqbr.\n..pN.\npp...\n.P...\nP.Pnp\nRBQ..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 W\nkqbr.\n..pN.\npp...\n.P...\nP.Pnp\nRBQ..\n") != 0) {
		printf("test: failed test_board_021\n");
		return false;
	}
	
	chess_boardSet("11 W\nk.b.r\n.Np.n\npp..p\n.PpPP\nP.P..\nR.BQ.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 W\nk.b.r\n.Np.n\npp..p\n.PpPP\nP.P..\nR.BQ.\n") != 0) {
		printf("test: failed test_board_022\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..r.\npbB..\nPpp..\nRPP.P\n.....\n.NQ.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk..r.\npbB..\nPpp..\nRPP.P\n.....\n.NQ.K\n") != 0) {
		printf("test: failed test_board_023\n");
		return false;
	}
	
	chess_boardSet("12 B\nkqbnr\n.P.pp\n..p..\nN..P.\nPPQ.P\n..RBK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkqbnr\n.P.pp\n..p..\nN..P.\nPPQ.P\n..RBK\n") != 0) {
		printf("test: failed test_board_024\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.r..\np..qp\nPp.pn\nB.N.Q\nP.P.P\n...RK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.r..\np..qp\nPp.pn\nB.N.Q\nP.P.P\n...RK\n") != 0) {
		printf("test: failed test_board_025\n");
		return false;
	}
	
	chess_boardSet("19 B\n.kq.r\np.Qpb\nN....\n....q\np....\nR..K.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.kq.r\np.Qpb\nN....\n....q\np....\nR..K.\n") != 0) {
		printf("test: failed test_board_026\n");
		return false;
	}
	
	chess_boardSet("15 W\n....r\npp.kp\nP....\n..N.P\n.PbK.\n.R...\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n....r\npp.kp\nP....\n..N.P\n.PbK.\n.R...\n") != 0) {
		printf("test: failed test_board_027\n");
		return false;
	}
	
	chess_boardSet("16 B\n.Qb.r\np..Pp\n.....\nN....\n..p.K\n..B..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.Qb.r\np..Pp\n.....\nN....\n..p.K\n..B..\n") != 0) {
		printf("test: failed test_board_028\n");
		return false;
	}
	
	chess_boardSet("12 B\nkq...\np.rp.\nPp.P.\n..p..\n.PP.K\n.nB.Q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq...\np.rp.\nPp.P.\n..p..\n.PP.K\n.nB.Q\n") != 0) {
		printf("test: failed test_board_029\n");
		return false;
	}
	
	chess_boardSet("14 W\n.q...\nk..Q.\npb..r\nB....\n..p.P\n.R..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.q...\nk..Q.\npb..r\nB....\n..p.P\n.R..K\n") != 0) {
		printf("test: failed test_board_030\n");
		return false;
	}
	
	chess_boardSet("13 W\nk.qr.\np.p.b\np.Pp.\n.PNPp\nP..nP\nR.Q..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk.qr.\np.p.b\np.Pp.\n.PNPp\nP..nP\nR.Q..\n") != 0) {
		printf("test: failed test_board_031\n");
		return false;
	}
	
	chess_boardSet("12 B\n.q.r.\n.kpbp\npp.PQ\n.P.P.\nn....\nRNBK.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.q.r.\n.kpbp\npp.PQ\n.P.P.\nn....\nRNBK.\n") != 0) {
		printf("test: failed test_board_032\n");
		return false;
	}
	
	chess_boardSet("9 W\n..b.r\n.k.pp\npp.q.\n...PP\nPPQn.\nRNB..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "9 W\n..b.r\n.k.pp\npp.q.\n...PP\nPPQn.\nRNB..\n") != 0) {
		printf("test: failed test_board_033\n");
		return false;
	}
	
	chess_boardSet("11 W\nkq..r\n..p.p\np....\nP.Pb.\n...B.\nRNQq.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 W\nkq..r\n..p.p\np....\nP.Pb.\n...B.\nRNQq.\n") != 0) {
		printf("test: failed test_board_034\n");
		return false;
	}
	
	chess_boardSet("15 W\n.b..r\nkp..p\n.QnN.\nq...P\nPpP..\n...RK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.b..r\nkp..p\n.QnN.\nq...P\nPpP..\n...RK\n") != 0) {
		printf("test: failed test_board_035\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kb..\np.r..\nB..pn\nP....\n.Pp.P\n...RK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.kb..\np.r..\nB..pn\nP....\n.Pp.P\n...RK\n") != 0) {
		printf("test: failed test_board_036\n");
		return false;
	}
	
	chess_boardSet("12 B\nk..r.\n.p.pp\np.K.n\nqPP.Q\nPR.P.\n...B.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk..r.\n.p.pp\np.K.n\nqPP.Q\nPR.P.\n...B.\n") != 0) {
		printf("test: failed test_board_037\n");
		return false;
	}
	
	chess_boardSet("9 W\nk.bnr\npp.p.\nN.p.p\n.....\nPPPP.\n.RBQq\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "9 W\nk.bnr\npp.p.\nN.p.p\n.....\nPPPP.\n.RBQq\n") != 0) {
		printf("test: failed test_board_038\n");
		return false;
	}
	
	chess_boardSet("13 B\n..r..\npNp.p\n...P.\n.P.Pb\nR.Pq.\n...BK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n..r..\npNp.p\n...P.\n.P.Pb\nR.Pq.\n...BK\n") != 0) {
		printf("test: failed test_board_039\n");
		return false;
	}
	
	chess_boardSet("16 B\nk.b.r\npp...\n..n.P\nPRP.p\n..K.P\n....Q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk.b.r\npp...\n..n.P\nPRP.p\n..K.P\n....Q\n") != 0) {
		printf("test: failed test_board_040\n");
		return false;
	}
	
	chess_boardSet("11 B\nkqb.r\n..p.p\np...n\np.P..\nPP.P.\n.RQ.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nkqb.r\n..p.p\np...n\np.P..\nPP.P.\n.RQ.K\n") != 0) {
		printf("test: failed test_board_041\n");
		return false;
	}
	
	chess_boardSet("13 W\nk...r\npb..p\n....p\nPPp..\n..Q..\nRNB..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk...r\npb..p\n....p\nPPp..\n..Q..\nRNB..\n") != 0) {
		printf("test: failed test_board_042\n");
		return false;
	}
	
	chess_boardSet("12 W\n.k.r.\n.qpb.\npp.pp\n...PP\nPnP.K\n.RQB.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.k.r.\n.qpb.\npp.pp\n...PP\nPnP.K\n.RQB.\n") != 0) {
		printf("test: failed test_board_043\n");
		return false;
	}
	
	chess_boardSet("10 B\nN.bnr\n.p.p.\n..p.p\np.PB.\nPPQ.P\n..R.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "10 B\nN.bnr\n.p.p.\n..p.p\np.PB.\nPPQ.P\n..R.K\n") != 0) {
		printf("test: failed test_board_044\n");
		return false;
	}
	
	chess_boardSet("19 B\n...b.\nkNq..\n..PKr\n....p\n..PB.\n.....\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n...b.\nkNq..\n..PKr\n....p\n..PB.\n.....\n") != 0) {
		printf("test: failed test_board_045\n");
		return false;
	}
	
	chess_boardSet("17 B\nk...r\n..p.p\nqBR..\n.P...\n...Pb\n.N..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk...r\n..p.p\nqBR..\n.P...\n...Pb\n.N..K\n") != 0) {
		printf("test: failed test_board_046\n");
		return false;
	}
	
	chess_boardSet("16 W\n.kq.r\n..ppb\npp.KN\nPP...\n.Bn.P\nR....\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.kq.r\n..ppb\npp.KN\nPP...\n.Bn.P\nR....\n") != 0) {
		printf("test: failed test_board_047\n");
		return false;
	}
	
	chess_boardSet("20 B\n.k.nr\n.pqp.\n....P\nNPb..\n...P.\n..RQK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n.k.nr\n.pqp.\n....P\nNPb..\n...P.\n..RQK\n") != 0) {
		printf("test: failed test_board_048\n");
		return false;
	}
	
	chess_boardSet("17 W\nr....\nk..bp\n.pqp.\nPp.BP\nRK.n.\n.N...\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nr....\nk..bp\n.pqp.\nPp.BP\nRK.n.\n.N...\n") != 0) {
		printf("test: failed test_board_049\n");
		return false;
	}
	
	chess_boardSet("9 W\nqr...\nkNppp\npp.P.\n.P..P\nP.Pn.\n.RBQ.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "9 W\nqr...\nkNppp\npp.P.\n.P..P\nP.Pn.\n.RBQ.\n") != 0) {
		printf("test: failed test_board_050\n");
		return false;
	}
	
	chess_boardSet("18 W\nk..Qr\np....\nP..Pb\nQpp..\n..PP.\n.N..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk..Qr\np....\nP..Pb\nQpp..\n..PP.\n.N..K\n") != 0) {
		printf("test: failed test_board_051\n");
		return false;
	}
	
	chess_boardSet("16 B\n.B...\n...pp\np.p..\nP.PqP\nRP.n.\n.N..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.B...\n...pp\np.p..\nP.PqP\nRP.n.\n.N..K\n") != 0) {
		printf("test: failed test_board_052\n");
		return false;
	}
	
	chess_boardSet("6 B\nQ...r\n..ppp\npp..n\nN...P\nPPPP.\nR.B.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "6 B\nQ...r\n..ppp\npp..n\nN...P\nPPPP.\nR.B.K\n") != 0) {
		printf("test: failed test_board_053\n");
		return false;
	}
	
	chess_boardSet("20 W\n.b..r\n.....\nN.p..\nkP.pp\nP..B.\n.RQ.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.b..r\n.....\nN.p..\nkP.pp\nP..B.\n.RQ.K\n") != 0) {
		printf("test: failed test_board_054\n");
		return false;
	}
	
	chess_boardSet("18 W\n..kbr\np.p.P\n..n.P\n...P.\nP.B..\nR...q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n..kbr\np.p.P\n..n.P\n...P.\nP.B..\nR...q\n") != 0) {
		printf("test: failed test_board_055\n");
		return false;
	}
	
	chess_boardSet("12 B\nkr...\npnp..\n.p.pb\nPq.PN\n.P..P\n.R.BK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkr...\npnp..\n.p.pb\nPq.PN\n.P..P\n.R.BK\n") != 0) {
		printf("test: failed test_board_056\n");
		return false;
	}
	
	chess_boardSet("12 W\n....b\nk...r\nq...p\npPP.P\n.P.P.\nRNB.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n....b\nk...r\nq...p\npPP.P\n.P.P.\nRNB.K\n") != 0) {
		printf("test: failed test_board_057\n");
		return false;
	}
	
	chess_boardSet("20 B\n.kb..\n.n.Q.\npP..r\n.pK.p\n.Rq..\n.NB..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n.kb..\n.n.Q.\npP..r\n.pK.p\n.Rq..\n.NB..\n") != 0) {
		printf("test: failed test_board_058\n");
		return false;
	}
	
	chess_boardSet("13 W\n...r.\npkq.p\n.Qpp.\nN..P.\nP.P.P\nR.Bn.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n...r.\npkq.p\n.Qpp.\nN..P.\nP.P.P\nR.Bn.\n") != 0) {
		printf("test: failed test_board_059\n");
		return false;
	}
	
	chess_boardSet("15 B\n..qnr\n..Ppp\n..p.P\nN..P.\nPP.K.\nR.Bb.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n..qnr\n..Ppp\n..p.P\nN..P.\nPP.K.\nR.Bb.\n") != 0) {
		printf("test: failed test_board_060\n");
		return false;
	}
	
	chess_boardSet("10 W\nk..r.\np.p.p\n.p...\n...qP\nPPbP.\nRNBnQ\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "10 W\nk..r.\np.p.p\n.p...\n...qP\nPPbP.\nRNBnQ\n") != 0) {
		printf("test: failed test_board_061\n");
		return false;
	}
	
	chess_boardSet("14 B\nk...r\n.p.b.\n..pqp\nPP...\nB.pPP\n...RK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk...r\n.p.b.\n..pqp\nPP...\nB.pPP\n...RK\n") != 0) {
		printf("test: failed test_board_062\n");
		return false;
	}
	
	chess_boardSet("15 B\nkqr..\npbpp.\n....p\n.pP..\nP.NP.\nBR.nK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkqr..\npbpp.\n....p\n.pP..\nP.NP.\nBR.nK\n") != 0) {
		printf("test: failed test_board_063\n");
		return false;
	}
	
	chess_boardSet("14 W\n..bnr\nkpQp.\n.P..p\np...P\nP....\nR.qK.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n..bnr\nkpQp.\n.P..p\np...P\nP....\nR.qK.\n") != 0) {
		printf("test: failed test_board_064\n");
		return false;
	}
	
	chess_boardSet("11 W\nk..br\nqnp.p\npP.p.\nP..P.\n.RB.P\n.N..q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 W\nk..br\nqnp.p\npP.p.\nP..P.\n.RB.P\n.N..q\n") != 0) {
		printf("test: failed test_board_065\n");
		return false;
	}
	
	chess_boardSet("17 W\nkr...\n.p...\n.....\nPQP.p\nR...P\n...n.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkr...\n.p...\n.....\nPQP.p\nR...P\n...n.\n") != 0) {
		printf("test: failed test_board_066\n");
		return false;
	}
	
	chess_boardSet("18 B\n..qr.\n.k..p\nP.b..\nn.KPp\n..Q..\nR.B..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n..qr.\n.k..p\nP.b..\nn.KPp\n..Q..\nR.B..\n") != 0) {
		printf("test: failed test_board_067\n");
		return false;
	}
	
	chess_boardSet("11 B\n..qnr\nk.N.p\npP.p.\n.PpPP\n.RP.Q\n..B.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n..qnr\nk.N.p\npP.p.\n.PpPP\n.RP.Q\n..B.K\n") != 0) {
		printf("test: failed test_board_068\n");
		return false;
	}
	
	chess_boardSet("18 B\n.k...\np.p.r\nb.PP.\n...Pp\npPNB.\nR..QK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n.k...\np.p.r\nb.PP.\n...Pp\npPNB.\nR..QK\n") != 0) {
		printf("test: failed test_board_069\n");
		return false;
	}
	
	chess_boardSet("20 B\nr....\nq..p.\np..bp\nPkNQP\n.....\n...RK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nr....\nq..p.\np..bp\nPkNQP\n.....\n...RK\n") != 0) {
		printf("test: failed test_board_070\n");
		return false;
	}
	
	chess_boardSet("18 B\nkbr..\npn.N.\nqK..p\nP..pP\npPP..\n....Q\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nkbr..\npn.N.\nqK..p\nP..pP\npPP..\n....Q\n") != 0) {
		printf("test: failed test_board_071\n");
		return false;
	}
	
	chess_boardSet("12 W\nkqr..\n..p..\n.p.Nb\npP..P\nPnPQ.\n...RK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkqr..\n..p..\n.p.Nb\npP..P\nPnPQ.\n...RK\n") != 0) {
		printf("test: failed test_board_072\n");
		return false;
	}
	
	chess_boardSet("12 W\n....r\nqk.b.\nPpPBp\n.p...\n....P\nRN.QK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n....r\nqk.b.\nPpPBp\n.p...\n....P\nRN.QK\n") != 0) {
		printf("test: failed test_board_073\n");
		return false;
	}
	
	chess_boardSet("13 B\n.....\npk...\n..p.Q\nPp...\n.....\n..RK.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.....\npk...\n..p.Q\nPp...\n.....\n..RK.\n") != 0) {
		printf("test: failed test_board_074\n");
		return false;
	}
	
	chess_boardSet("17 W\nk..n.\np.pPp\nq....\nP.PQK\n.r...\n.R.B.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk..n.\np.pPp\nq....\nP.PQK\n.r...\n.R.B.\n") != 0) {
		printf("test: failed test_board_075\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.br.\n.np..\n...pp\n.PpP.\nP.B.q\nR.QK.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.br.\n.np..\n...pp\n.PpP.\nP.B.q\nR.QK.\n") != 0) {
		printf("test: failed test_board_076\n");
		return false;
	}
	
	chess_boardSet("15 B\nk...r\n.p..p\npq.b.\nN.Ppp\nPP.B.\nR.K..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk...r\n.p..p\npq.b.\nN.Ppp\nPP.B.\nR.K..\n") != 0) {
		printf("test: failed test_board_077\n");
		return false;
	}
	
	chess_boardSet("12 B\n.kbNr\np.qpp\n.....\n.P.pP\np.PQK\nR.B..\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.kbNr\np.qpp\n.....\n.P.pP\np.PQK\nR.B..\n") != 0) {
		printf("test: failed test_board_078\n");
		return false;
	}
	
	chess_boardSet("19 B\nk....\npr...\n.Pp.n\nNP.p.\n..BpP\nq.Q.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk....\npr...\n.Pp.n\nNP.p.\n..BpP\nq.Q.K\n") != 0) {
		printf("test: failed test_board_079\n");
		return false;
	}
	
	chess_boardSet("15 B\nq.b.r\npPppp\n.....\n.nPP.\nB.Q.P\nR...K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nq.b.r\npPppp\n.....\n.nPP.\nB.Q.P\nR...K\n") != 0) {
		printf("test: failed test_board_080\n");
		return false;
	}
	
	chess_boardSet("18 B\n.kb..\n.p..p\np....\nqBprn\n..PKP\n.....\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n.kb..\n.p..p\np....\nqBprn\n..PKP\n.....\n") != 0) {
		printf("test: failed test_board_081\n");
		return false;
	}
	
	chess_boardSet("15 B\n.q..r\nkn.b.\n.NPBp\np...P\nP.P..\n....K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n.q..r\nkn.b.\n.NPBp\np...P\nP.P..\n....K\n") != 0) {
		printf("test: failed test_board_082\n");
		return false;
	}
	
	chess_boardSet("12 B\n..b.r\n....p\np.Kpn\n.....\npPP.P\n.RBQ.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n..b.r\n....p\np.Kpn\n.....\npPP.P\n.RBQ.\n") != 0) {
		printf("test: failed test_board_083\n");
		return false;
	}
	
	chess_boardSet("15 W\nk.bq.\npp.pr\n..p.P\nP....\n.Qp..\nRN..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk.bq.\npp.pr\n..p.P\nP....\n.Qp..\nRN..K\n") != 0) {
		printf("test: failed test_board_084\n");
		return false;
	}
	
	chess_boardSet("19 W\nkr...\n..R..\n..P.p\n..B.P\n.Q.P.\n.N..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nkr...\n..R..\n..P.p\n..B.P\n.Q.P.\n.N..K\n") != 0) {
		printf("test: failed test_board_085\n");
		return false;
	}
	
	chess_boardSet("20 B\nkr...\np....\n..p.p\nP.q.P\nP...K\n.R...\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nkr...\np....\n..p.p\nP.q.P\nP...K\n.R...\n") != 0) {
		printf("test: failed test_board_086\n");
		return false;
	}
	
	chess_boardSet("12 W\nk...r\nqp..p\n.p.Q.\nBp..P\nP....\nRn..K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk...r\nqp..p\n.p.Q.\nBp..P\nP....\nRn..K\n") != 0) {
		printf("test: failed test_board_087\n");
		return false;
	}
	
	chess_boardSet("17 W\nkQ..r\n....B\n....N\np...p\nPP..P\n..R.b\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkQ..r\n....B\n....N\np...p\nPP..P\n..R.b\n") != 0) {
		printf("test: failed test_board_088\n");
		return false;
	}
	
	chess_boardSet("13 W\nk..r.\npR..p\n..p..\n.B...\nP.PqP\n...Q.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk..r.\npR..p\n..p..\n.B...\nP.PqP\n...Q.\n") != 0) {
		printf("test: failed test_board_089\n");
		return false;
	}
	
	chess_boardSet("7 W\nkqbr.\npppp.\nPP..n\n..P..\n....P\nRNBQq\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "7 W\nkqbr.\npppp.\nPP..n\n..P..\n....P\nRNBQq\n") != 0) {
		printf("test: failed test_board_090\n");
		return false;
	}
	
	chess_boardSet("21 W\nQ....\n.b..p\nRk...\n...r.\n.P.pP\n....K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nQ....\n.b..p\nRk...\n...r.\n.P.pP\n....K\n") != 0) {
		printf("test: failed test_board_091\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..n.\n.pbp.\nRq...\nN...r\n.p..P\n..BK.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk..n.\n.pbp.\nRq...\nN...r\n.p..P\n..BK.\n") != 0) {
		printf("test: failed test_board_092\n");
		return false;
	}
	
	chess_boardSet("20 B\n..kr.\n.p..B\n.pn.b\n...P.\n..PNP\n..RK.\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..kr.\n.p..B\n.pn.b\n...P.\n..PNP\n..RK.\n") != 0) {
		printf("test: failed test_board_093\n");
		return false;
	}
	
	chess_boardSet("18 W\nk....\npp.pp\nnr...\n.P..b\nR.P.K\n....B\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk....\npp.pp\nnr...\n.P..b\nR.P.K\n....B\n") != 0) {
		printf("test: failed test_board_094\n");
		return false;
	}
	
	chess_boardSet("17 W\nk...q\nppnP.\n...Pp\nNpR..\nP..P.\n....K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk...q\nppnP.\n...Pp\nNpR..\nP..P.\n....K\n") != 0) {
		printf("test: failed test_board_095\n");
		return false;
	}
	
	chess_boardSet("19 B\n...r.\npb.kP\np.p..\n.R..P\n.....\n..QBK\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n...r.\npb.kP\np.p..\n.R..P\n.....\n..QBK\n") != 0) {
		printf("test: failed test_board_096\n");
		return false;
	}
	
	chess_boardSet("13 B\n.k..r\np...Q\nb.p.B\n.P..p\n.P.PK\n.N...\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.k..r\np...Q\nb.p.B\n.P..p\n.P.PK\n.N...\n") != 0) {
		printf("test: failed test_board_097\n");
		return false;
	}
	
	chess_boardSet("19 W\nk...q\n.....\npp.p.\nnP.pr\n....P\n..Q.K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk...q\n.....\npp.p.\nnP.pr\n....P\n..Q.K\n") != 0) {
		printf("test: failed test_board_098\n");
		return false;
	}
	
	chess_boardSet("13 B\n..b.r\npN..p\n....n\n..PKP\n.Bq.Q\n.....\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n..b.r\npN..p\n....n\n..PKP\n.Bq.Q\n.....\n") != 0) {
		printf("test: failed test_board_099\n");
		return false;
	}
	
	chess_boardSet("13 W\nkq..r\nppbp.\nP.n.p\n..N..\nR.PQB\n....K\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkq..r\nppbp.\nP.n.p\n..N..\nR.PQB\n....K\n") != 0) {
		printf("test: failed test_board_100\n");
		return false;
	}

	return true;
}

bool test_winner() {
	chess_reset();
	if (chess_winner() != '?') {
		printf("test: failed test_winner_001\n");
		return false;
	}
	
	chess_boardSet("19 W\nb..n.\n.k...\n.p.Pr\n.PBPK\nR...Q\n.....\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_002\n");
		return false;
	}
	
	chess_boardSet("20 W\n...r.\nqb..p\nppkpn\nPP..P\n..QBK\nRN...\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_003\n");
		return false;
	}
	
	chess_boardSet("18 W\nkr...\n..q.p\n.pp..\nNP...\nR.Qnp\n...K.\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_004\n");
		return false;
	}
	
	chess_boardSet("12 W\n..r..\npk..p\npbppn\nP..P.\nQ.P.P\nR...K\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_005\n");
		return false;
	}
	
	chess_boardSet("14 B\nk..R.\npN.r.\nq...p\n.PPpP\n...B.\n.Q..K\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_006\n");
		return false;
	}
	
	chess_boardSet("14 W\n.k.r.\n...qp\nbpPp.\n.BNP.\n.Q..P\n..R.K\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_007\n");
		return false;
	}
	
	chess_boardSet("15 W\n.....\npkq.r\nbp.PN\n.P.Qp\nP.B.P\nR..K.\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_008\n");
		return false;
	}
	
	chess_boardSet("13 B\nk...r\npPp.p\n....n\npP.p.\nP..qK\nRQ...\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_009\n");
		return false;
	}
	
	chess_boardSet("18 B\nkq..r\n.bPKp\npP...\nR.Np.\n.PP..\nQ...B\n");
	if (chess_winner() != '?') {
		printf("test: failed test_winner_010\n");
		return false;
	}
	
	chess_boardSet("15 B\n...r.\nppnQ.\n..p..\nNPPp.\nP..P.\nR...K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_011\n");
		return false;
	}
	
	chess_boardSet("39 W\n....r\n.q...\npk...\nP....\nn....\nB....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_012\n");
		return false;
	}
	
	chess_boardSet("40 W\n.k...\n.....\n.QN..\n.q...\n.P..p\n..R..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_013\n");
		return false;
	}
	
	chess_boardSet("20 B\n..b..\nQ.P.r\np.n.p\nPq..N\n.P..P\nR.B.K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_014\n");
		return false;
	}
	
	chess_boardSet("14 W\n.q..r\nk.ppb\np..Pp\n.P.PB\nP..pP\n..R..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_015\n");
		return false;
	}
	
	chess_boardSet("41 W\n..k..\n.Q..P\nP....\n....P\n.bq..\nq..K.\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_016\n");
		return false;
	}
	
	chess_boardSet("41 W\nB....\n.....\nkPp..\n....p\nP....\nRNK..\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_017\n");
		return false;
	}
	
	chess_boardSet("24 B\n.B.nQ\npr.bp\n.p...\nP....\n..pP.\n..R.K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_018\n");
		return false;
	}
	
	chess_boardSet("37 W\nr....\n...p.\n....p\n..k.P\n.....\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_019\n");
		return false;
	}
	
	chess_boardSet("41 W\nkrq..\n.....\nP....\nK....\n.b.Q.\n.....\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_020\n");
		return false;
	}
	
	chess_boardSet("17 W\n...n.\nP....\nb....\nq.kP.\n..P.r\nR.BQ.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_021\n");
		return false;
	}
	
	chess_boardSet("36 W\n.....\n.....\n.....\n.kp..\np....\n.RB.Q\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_022\n");
		return false;
	}
	
	chess_boardSet("38 B\n.K...\n..b..\n.....\n.Q..R\n.N...\n..B..\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_023\n");
		return false;
	}
	
	chess_boardSet("13 W\nkr...\nq.p.b\npBP.p\n.P.P.\nPQ.pN\nR....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_024\n");
		return false;
	}
	
	chess_boardSet("15 B\nRb.n.\n....r\n..Np.\n.KP..\n.P.qP\n.....\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_025\n");
		return false;
	}
	
	chess_boardSet("26 B\nq..b.\npR.r.\n...p.\nPP.Pp\n...KP\n..B..\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_026\n");
		return false;
	}
	
	chess_boardSet("28 W\n...n.\npqkp.\n....P\n..p..\n..Q.P\nB.R.b\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_027\n");
		return false;
	}
	
	chess_boardSet("27 W\n.k..r\n.P..p\n..b.P\n.....\nNP.p.\n...q.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_028\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n..R..\n.k...\n...BP\n.....\n....K\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_029\n");
		return false;
	}
	
	chess_boardSet("22 W\nk....\n.qrpp\n....P\nPp...\n.RpPQ\n..B..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_030\n");
		return false;
	}
	
	chess_boardSet("14 B\n.Q.Qr\n.....\np....\nn.QpP\nP....\nRN..K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_031\n");
		return false;
	}
	
	chess_boardSet("41 W\n.k...\n.....\nPpp.r\n...Rp\n.K...\nQ..q.\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_032\n");
		return false;
	}
	
	chess_boardSet("23 W\n..k..\n....r\npp.Qn\n.P.q.\nP..p.\nRb.NB\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_033\n");
		return false;
	}
	
	chess_boardSet("36 W\n.Rk..\nn...p\npq..P\nP....\n.....\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_034\n");
		return false;
	}
	
	chess_boardSet("20 W\nk....\n.....\nq...p\n...r.\n....P\nQ..R.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_035\n");
		return false;
	}
	
	chess_boardSet("28 W\nk....\np...p\nP..np\n..r.P\n..P..\n.R...\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_036\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n...p.\np.k..\n...r.\n.Kb..\n.....\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_037\n");
		return false;
	}
	
	chess_boardSet("41 W\nr..k.\n.P...\n....p\n....P\n..pK.\n.....\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_038\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n...Q.\n...b.\n.....\n.Rp..\n.k..K\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_039\n");
		return false;
	}
	
	chess_boardSet("35 B\n...n.\n.....\n.....\n.pqP.\n...P.\n....K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_040\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n....K\n..k..\nNP...\nPB...\nR....\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_041\n");
		return false;
	}
	
	chess_boardSet("26 B\n.N..b\n..prp\n...PP\nRPK..\nQP..q\n.....\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_042\n");
		return false;
	}
	
	chess_boardSet("16 W\n.qb.r\np....\n....p\nP.kPp\n..P..\nRN.Q.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_043\n");
		return false;
	}
	
	chess_boardSet("41 W\n.k...\n.r...\n...P.\nR....\nq....\nB..K.\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_044\n");
		return false;
	}
	
	chess_boardSet("41 W\nq...r\n.q.k.\n..p..\n..P.b\nR..K.\nB...Q\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_045\n");
		return false;
	}
	
	chess_boardSet("33 B\nb....\np.p..\nR...q\n..P..\n.....\n..K..\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_046\n");
		return false;
	}
	
	chess_boardSet("19 W\n...n.\np..k.\nQpp..\n.....\nP..Pr\n..R..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_047\n");
		return false;
	}
	
	chess_boardSet("28 B\nQ....\n..P.K\n.....\n.qb..\n.....\n.....\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_048\n");
		return false;
	}
	
	chess_boardSet("6 B\n.qb.r\n.pppp\npB.K.\n...P.\nPnP.P\nRN.Q.\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_049\n");
		return false;
	}
	
	chess_boardSet("8 B\nQ.b.r\nq.ppp\nPp...\n..n.P\nP.PP.\nRN.BK\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_050\n");
		return false;
	}
	
	chess_boardSet("41 W\n...k.\n...P.\n.P..p\np..BP\nP....\n.K...\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_051\n");
		return false;
	}
	
	chess_boardSet("34 W\nk....\n....R\np....\nPp...\n...r.\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_052\n");
		return false;
	}
	
	chess_boardSet("17 W\n...n.\np...r\npk..p\nP....\n.p.P.\nRBQ..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_053\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n.....\n....N\n...R.\nk....\n...qK\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_054\n");
		return false;
	}
	
	chess_boardSet("41 W\n...Q.\n.....\n.NQ..\nq....\nkP..K\n.B...\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_055\n");
		return false;
	}
	
	chess_boardSet("8 W\nk.bnr\n...pp\nppN..\nP..P.\n.PP.q\nR..Q.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_056\n");
		return false;
	}
	
	chess_boardSet("24 W\n.q.n.\n.....\nPk..r\nRpp.P\n....p\n....B\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_057\n");
		return false;
	}
	
	chess_boardSet("38 W\n.....\nk.b.p\n.p...\n..N..\n.q...\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_058\n");
		return false;
	}
	
	chess_boardSet("35 B\nQ....\n.....\n.P.K.\np.q..\n.....\n.q...\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_059\n");
		return false;
	}
	
	chess_boardSet("32 W\nQQ.k.\n.....\n.p.P.\n.....\n..q..\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_060\n");
		return false;
	}
	
	chess_boardSet("41 W\n..r..\n..k..\n..R..\n..P.P\n.....\n...K.\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_061\n");
		return false;
	}
	
	chess_boardSet("20 W\nkb..r\n...p.\np.PPp\nP....\n...BQ\n.q...\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_062\n");
		return false;
	}
	
	chess_boardSet("21 W\n....q\nk...P\n.....\n.Pp..\nPRP.Q\n..Bn.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_063\n");
		return false;
	}
	
	chess_boardSet("8 B\nQ.bn.\np...r\n..Ppp\nq.P..\nPP..P\nRNB.K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_064\n");
		return false;
	}
	
	chess_boardSet("41 W\n.n...\n.P...\n.k...\n....p\n..B..\nQ.K..\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_065\n");
		return false;
	}
	
	chess_boardSet("41 W\n...r.\nk...p\np...P\nb.N..\nB....\nR...K\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_066\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..n.\npp.q.\n..pPP\nPP...\nR...P\n.NB.b\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_067\n");
		return false;
	}
	
	chess_boardSet("22 W\nk.Q..\nq....\n....p\nnpP..\nP..P.\n..R..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_068\n");
		return false;
	}
	
	chess_boardSet("15 B\nR...r\n..pqp\n....b\nN.PpP\n...K.\n..B.Q\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_069\n");
		return false;
	}
	
	chess_boardSet("11 B\n....r\n.b.Qp\npP..n\n.Pp.P\n..P.P\nRB..K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_070\n");
		return false;
	}
	
	chess_boardSet("18 W\nq....\nb..k.\n.B...\np..P.\n.P.Nr\nR....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_071\n");
		return false;
	}
	
	chess_boardSet("41 W\n.RQ..\n.....\n....r\n..K.p\n....P\n...k.\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_072\n");
		return false;
	}
	
	chess_boardSet("17 B\n.b..r\np.qpp\n...N.\n..RPP\n..BK.\n...Q.\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_073\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\nkpK..\n.R...\np....\nP...B\n..r..\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_074\n");
		return false;
	}
	
	chess_boardSet("15 W\nk...r\n.pqb.\np.n.p\nP.PN.\n.PPp.\nRB..Q\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_075\n");
		return false;
	}
	
	chess_boardSet("23 W\nkQ.n.\n....Q\n..Q.p\nR.q.P\n.P...\n....q\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_076\n");
		return false;
	}
	
	chess_boardSet("8 W\nk.b.r\npp..p\n....n\n.PpP.\n..P..\nRNBQ.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_077\n");
		return false;
	}
	
	chess_boardSet("21 W\nk....\n..r..\np.p..\np..Pp\nP.Q..\n.RBn.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_078\n");
		return false;
	}
	
	chess_boardSet("16 B\nK.bn.\n.....\np.Q..\nN.PP.\nP.P..\nRB...\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_079\n");
		return false;
	}
	
	chess_boardSet("41 W\nk....\n.....\npp...\n.q..p\n.r...\nK....\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_080\n");
		return false;
	}
	
	chess_boardSet("25 W\n.....\nn.kQ.\npPp.p\nP.B..\nR..q.\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_081\n");
		return false;
	}
	
	chess_boardSet("29 W\nk.b.Q\np.p..\nP..p.\n.....\n..rq.\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_082\n");
		return false;
	}
	
	chess_boardSet("41 W\nK....\nn...r\n.R..k\n..P..\nP....\n.....\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_083\n");
		return false;
	}
	
	chess_boardSet("29 W\n...nr\nk..Np\np..PP\nP....\n...b.\n..Q..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_084\n");
		return false;
	}
	
	chess_boardSet("29 B\nr....\n...PP\npPp..\nP...K\n.nBb.\n.....\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_085\n");
		return false;
	}
	
	chess_boardSet("41 W\n...q.\nk.p..\n.p.Q.\n.nQ..\n...Bb\n...K.\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_086\n");
		return false;
	}
	
	chess_boardSet("18 B\n...br\n.Qp.p\n..P.n\n.....\nPRBp.\n....K\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_087\n");
		return false;
	}
	
	chess_boardSet("20 W\n.k.Qr\n.Bp..\nP..Pp\np...P\nP..b.\n...R.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_088\n");
		return false;
	}
	
	chess_boardSet("36 W\n.b...\nk....\nQ....\n...pP\n.....\n.....\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_089\n");
		return false;
	}
	
	chess_boardSet("31 B\n..b..\n.....\nr.BP.\np.R..\nPP..K\n.....\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_090\n");
		return false;
	}
	
	chess_boardSet("31 W\nk.Nq.\n.....\n..p..\nb....\nP....\n.r...\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_091\n");
		return false;
	}
	
	chess_boardSet("27 W\n.r...\n.kp..\np.PP.\nP...p\n.....\n...nb\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_092\n");
		return false;
	}
	
	chess_boardSet("5 B\n.Nb.r\npp.pp\n..pqn\n.P..P\nP.PP.\nR.BQK\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_093\n");
		return false;
	}
	
	chess_boardSet("41 W\n...k.\n....r\n.....\nBpKb.\n....Q\n.R...\n");
	if (chess_winner() != '=') {
		printf("test: failed test_winner_094\n");
		return false;
	}
	
	chess_boardSet("28 W\n.....\n.....\nQk...\nRb..r\n.P.PP\n.N...\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_095\n");
		return false;
	}
	
	chess_boardSet("13 W\nkq...\npnN..\n.p...\n.P..p\nP..r.\n.R.Q.\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_096\n");
		return false;
	}
	
	chess_boardSet("27 B\n.....\n.....\np.p..\nP.PQ.\n.K...\n....B\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_097\n");
		return false;
	}
	
	chess_boardSet("32 B\n.R...\n...r.\n..qp.\nK..Pp\n....P\n.n...\n");
	if (chess_winner() != 'W') {
		printf("test: failed test_winner_098\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n.k...\n.qr..\n.....\n..p..\n.R...\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_099\n");
		return false;
	}
	
	chess_boardSet("41 W\n.....\n..Q.k\npP.q.\n.....\n..P..\n..r..\n");
	if (chess_winner() != 'B') {
		printf("test: failed test_winner_100\n");
		return false;
	}
	
	return true;
}

bool test_isValid() {
	chess_reset();
	
	for (int intFor1 = -1; intFor1 < 6; intFor1 += 1) {
		for (int intFor2 = -1; intFor2 < 7; intFor2 += 1) {
			bool boolValid = true;
			
			if (intFor1 < 0) {
				boolValid = false;
				
			} else if (intFor1 > 4) {
				boolValid = false;
				
			}
			
			if (intFor2 < 0) {
				boolValid = false;
				
			} else if (intFor2 > 5) {
				boolValid = false;
				
			}
			
			if (chess_isValid(intFor1, intFor2) != boolValid) {
				return false;
			}
		}
	}
	
	return true;
}

bool test_isEnemy() {
	chess_reset();
	
	if (chess_isEnemy('k') != true) {
		printf("test: failed test_isEnemy_001\n");
		return false;
		
	} else if (chess_isEnemy('q') != true) {
		printf("test: failed test_isEnemy_002\n");
		return false;
		
	} else if (chess_isEnemy('b') != true) {
		printf("test: failed test_isEnemy_003\n");
		return false;
		
	} else if (chess_isEnemy('n') != true) {
		printf("test: failed test_isEnemy_004\n");
		return false;
		
	} else if (chess_isEnemy('r') != true) {
		printf("test: failed test_isEnemy_005\n");
		return false;
		
	} else if (chess_isEnemy('p') != true) {
		printf("test: failed test_isEnemy_006\n");
		return false;
		
	} else if (chess_isEnemy('K') != false) {
		printf("test: failed test_isEnemy_007\n");
		return false;
		
	} else if (chess_isEnemy('Q') != false) {
		printf("test: failed test_isEnemy_008\n");
		return false;
		
	} else if (chess_isEnemy('B') != false) {
		printf("test: failed test_isEnemy_009\n");
		return false;
		
	} else if (chess_isEnemy('N') != false) {
		printf("test: failed test_isEnemy_010\n");
		return false;
		
	} else if (chess_isEnemy('R') != false) {
		printf("test: failed test_isEnemy_011\n");
		return false;
		
	} else if (chess_isEnemy('P') != false) {
		printf("test: failed test_isEnemy_012\n");
		return false;
		
	} else if (chess_isEnemy('.') != false) {
		printf("test: failed test_isEnemy_013\n");
		return false;
		
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_isEnemy('k') != false) {
		printf("test: failed test_isEnemy_014\n");
		return false;
		
	} else if (chess_isEnemy('q') != false) {
		printf("test: failed test_isEnemy_015\n");
		return false;
		
	} else if (chess_isEnemy('b') != false) {
		printf("test: failed test_isEnemy_016\n");
		return false;
		
	} else if (chess_isEnemy('n') != false) {
		printf("test: failed test_isEnemy_017\n");
		return false;
		
	} else if (chess_isEnemy('r') != false) {
		printf("test: failed test_isEnemy_018\n");
		return false;
		
	} else if (chess_isEnemy('p') != false) {
		printf("test: failed test_isEnemy_019\n");
		return false;
		
	} else if (chess_isEnemy('K') != true) {
		printf("test: failed test_isEnemy_020\n");
		return false;
		
	} else if (chess_isEnemy('Q') != true) {
		printf("test: failed test_isEnemy_021\n");
		return false;
		
	} else if (chess_isEnemy('B') != true) {
		printf("test: failed test_isEnemy_022\n");
		return false;
		
	} else if (chess_isEnemy('N') != true) {
		printf("test: failed test_isEnemy_023\n");
		return false;
		
	} else if (chess_isEnemy('R') != true) {
		printf("test: failed test_isEnemy_024\n");
		return false;
		
	} else if (chess_isEnemy('P') != true) {
		printf("test: failed test_isEnemy_025\n");
		return false;
		
	} else if (chess_isEnemy('.') != false) {
		printf("test: failed test_isEnemy_026\n");
		return false;
		
	}
	
	return true;
}

bool test_isOwn() {
	chess_reset();
	
	if (chess_isOwn('k') != false) {
		printf("test: failed test_isOwn_001\n");
		return false;
		
	} else if (chess_isOwn('q') != false) {
		printf("test: failed test_isOwn_002\n");
		return false;
		
	} else if (chess_isOwn('b') != false) {
		printf("test: failed test_isOwn_003\n");
		return false;
		
	} else if (chess_isOwn('n') != false) {
		printf("test: failed test_isOwn_004\n");
		return false;
		
	} else if (chess_isOwn('r') != false) {
		printf("test: failed test_isOwn_005\n");
		return false;
		
	} else if (chess_isOwn('p') != false) {
		printf("test: failed test_isOwn_006\n");
		return false;
		
	} else if (chess_isOwn('K') != true) {
		printf("test: failed test_isOwn_007\n");
		return false;
		
	} else if (chess_isOwn('Q') != true) {
		printf("test: failed test_isOwn_008\n");
		return false;
		
	} else if (chess_isOwn('B') != true) {
		printf("test: failed test_isOwn_009\n");
		return false;
		
	} else if (chess_isOwn('N') != true) {
		printf("test: failed test_isOwn_010\n");
		return false;
		
	} else if (chess_isOwn('R') != true) {
		printf("test: failed test_isOwn_011\n");
		return false;
		
	} else if (chess_isOwn('P') != true) {
		printf("test: failed test_isOwn_012\n");
		return false;
		
	} else if (chess_isOwn('.') != false) {
		printf("test: failed test_isOwn_013\n");
		return false;
		
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_isOwn('k') != true) {
		printf("test: failed test_isOwn_014\n");
		return false;
		
	} else if (chess_isOwn('q') != true) {
		printf("test: failed test_isOwn_015\n");
		return false;
		
	} else if (chess_isOwn('b') != true) {
		printf("test: failed test_isOwn_016\n");
		return false;
		
	} else if (chess_isOwn('n') != true) {
		printf("test: failed test_isOwn_017\n");
		return false;
		
	} else if (chess_isOwn('r') != true) {
		printf("test: failed test_isOwn_018\n");
		return false;
		
	} else if (chess_isOwn('p') != true) {
		printf("test: failed test_isOwn_019\n");
		return false;
		
	} else if (chess_isOwn('K') != false) {
		printf("test: failed test_isOwn_020\n");
		return false;
		
	} else if (chess_isOwn('Q') != false) {
		printf("test: failed test_isOwn_021\n");
		return false;
		
	} else if (chess_isOwn('B') != false) {
		printf("test: failed test_isOwn_022\n");
		return false;
		
	} else if (chess_isOwn('N') != false) {
		printf("test: failed test_isOwn_023\n");
		return false;
		
	} else if (chess_isOwn('R') != false) {
		printf("test: failed test_isOwn_024\n");
		return false;
		
	} else if (chess_isOwn('P') != false) {
		printf("test: failed test_isOwn_025\n");
		return false;
		
	} else if (chess_isOwn('.') != false) {
		printf("test: failed test_isOwn_026\n");
		return false;
		
	}
	
	return true;
}

bool test_isNothing() {
	chess_reset();
	
	if (chess_isNothing('k') != false) {
		printf("test: failed test_isNothing_001\n");
		return false;
		
	} else if (chess_isNothing('q') != false) {
		printf("test: failed test_isNothing_002\n");
		return false;
		
	} else if (chess_isNothing('b') != false) {
		printf("test: failed test_isNothing_003\n");
		return false;
		
	} else if (chess_isNothing('n') != false) {
		printf("test: failed test_isNothing_004\n");
		return false;
		
	} else if (chess_isNothing('r') != false) {
		printf("test: failed test_isNothing_005\n");
		return false;
		
	} else if (chess_isNothing('p') != false) {
		printf("test: failed test_isNothing_006\n");
		return false;
		
	} else if (chess_isNothing('K') != false) {
		printf("test: failed test_isNothing_007\n");
		return false;
		
	} else if (chess_isNothing('Q') != false) {
		printf("test: failed test_isNothing_008\n");
		return false;
		
	} else if (chess_isNothing('B') != false) {
		printf("test: failed test_isNothing_009\n");
		return false;
		
	} else if (chess_isNothing('N') != false) {
		printf("test: failed test_isNothing_010\n");
		return false;
		
	} else if (chess_isNothing('R') != false) {
		printf("test: failed test_isNothing_011\n");
		return false;
		
	} else if (chess_isNothing('P') != false) {
		printf("test: failed test_isNothing_012\n");
		return false;
		
	} else if (chess_isNothing('.') != true) {
		printf("test: failed test_isNothing_013\n");
		return false;
		
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_isNothing('k') != false) {
		printf("test: failed test_isNothing_014\n");
		return false;
		
	} else if (chess_isNothing('q') != false) {
		printf("test: failed test_isNothing_015\n");
		return false;
		
	} else if (chess_isNothing('b') != false) {
		printf("test: failed test_isNothing_016\n");
		return false;
		
	} else if (chess_isNothing('n') != false) {
		printf("test: failed test_isNothing_017\n");
		return false;
		
	} else if (chess_isNothing('r') != false) {
		printf("test: failed test_isNothing_018\n");
		return false;
		
	} else if (chess_isNothing('p') != false) {
		printf("test: failed test_isNothing_019\n");
		return false;
		
	} else if (chess_isNothing('K') != false) {
		printf("test: failed test_isNothing_020\n");
		return false;
		
	} else if (chess_isNothing('Q') != false) {
		printf("test: failed test_isNothing_021\n");
		return false;
		
	} else if (chess_isNothing('B') != false) {
		printf("test: failed test_isNothing_022\n");
		return false;
		
	} else if (chess_isNothing('N') != false) {
		printf("test: failed test_isNothing_023\n");
		return false;
		
	} else if (chess_isNothing('R') != false) {
		printf("test: failed test_isNothing_024\n");
		return false;
		
	} else if (chess_isNothing('P') != false) {
		printf("test: failed test_isNothing_025\n");
		return false;
		
	} else if (chess_isNothing('.') != true) {
		printf("test: failed test_isNothing_026\n");
		return false;
		
	}
	
	return true;
}

bool test_eval() {
	char charBuffer[1024] = { };
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() != 0) {
			printf("test: failed test_eval_001\n");
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() != 0) {
			printf("test: failed test_eval_002\n");
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() >= 0) {
			printf("test: failed test_eval_003\n");
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() <= 0) {
			printf("test: failed test_eval_004\n");
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d W\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() <= 0) {
			printf("test: failed test_eval_005\n");
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d B\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() >= 0) {
			printf("test: failed test_eval_006\n");
			return false;
		}
	}
	
	return true;
}

bool test_movesCompare(int intMoves, char* charA, char* charB) {
	if (strlen(charA) != intMoves * 6) {
		return false;
		
	} else if (strlen(charB) != intMoves * 6) {
		return false;
		
	}
	
	int intA[256] = { };
	int intB[256] = { };
	
	for (int intFor1 = 0; intFor1 < intMoves; intFor1 += 1) {
		intA[intFor1] = (charA[(intFor1 * 6) + 0] * 1) + (charA[(intFor1 * 6) + 1] * 100) + (charA[(intFor1 * 6) + 3] * 10000) + (charA[(intFor1 * 6) + 4] * 1000000);
		intB[intFor1] = (charB[(intFor1 * 6) + 0] * 1) + (charB[(intFor1 * 6) + 1] * 100) + (charB[(intFor1 * 6) + 3] * 10000) + (charB[(intFor1 * 6) + 4] * 1000000);
	}
	
	for (int intFor1 = 0; intFor1 < intMoves - 1; intFor1 += 1) {
		int intMin = intFor1;
		
		for (int intFor2 = intFor1 + 1; intFor2 < intMoves; intFor2 += 1) {
			if (intA[intFor2] < intA[intMin]) {
				intMin = intFor2;
			}
		}
		
		if (intFor1 == intMin) {
			continue;
		}
		
		int intSwap = intA[intFor1];
		intA[intFor1] = intA[intMin];
		intA[intMin] = intSwap;
	}
	
	for (int intFor1 = 0; intFor1 < intMoves - 1; intFor1 += 1) {
		int intMin = intFor1;
		
		for (int intFor2 = intFor1 + 1; intFor2 < intMoves; intFor2 += 1) {
			if (intB[intFor2] < intB[intMin]) {
				intMin = intFor2;
			}
		}
		
		if (intFor1 == intMin) {
			continue;
		}
		
		int intSwap = intB[intFor1];
		intB[intFor1] = intB[intMin];
		intB[intMin] = intSwap;
	}
	
	for (int intFor1 = 0; intFor1 < intMoves; intFor1 += 1) {
		if (intA[intFor1] != intB[intFor1]) {
			return false;
		}
	}
	
	return true;
}

bool test_moves() {
	int intBuffer = 0;
	char charBuffer[1024] = { };
	
	chess_reset();
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-a3\nb2-b3\nc2-c3\nd2-d3\ne2-e3\nb1-a3\nb1-c3\n") != true) {
		printf("test: failed test_moves_001\n");
		return false;
	}
	
	chess_boardSet("17 B\nk.r..\n..p..\n.pN.b\n.PP..\nP..QK\n.RB..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b6\nc6-d6\nc6-e6\nb4-c3\ne4-d5\ne4-d3\ne4-c2\ne4-b1\ne4-e5\ne4-d4\ne4-e3\n") != true) {
		printf("test: failed test_moves_002\n");
		return false;
	}
	
	chess_boardSet("12 W\n..Q.r\np..q.\n....n\n.k..p\nPPP.P\nRNBK.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-c5\nc6-c4\nc6-c3\nc6-b5\nc6-a4\nc6-d5\na2-a3\na2-b3\nc2-c3\nc2-b3\nb1-a3\nb1-d2\nb1-c3\nc1-d2\nc1-e3\nd1-d2\nd1-e1\n") != true) {
		printf("test: failed test_moves_003\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..b.\n..P..\n.pp.N\n.P.rB\nP...P\n.R.K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nd6-c5\nd6-e5\nd6-c6\nd6-e6\nd6-d5\nc4-c3\nc4-b3\nd3-d4\nd3-d5\nd3-c3\nd3-b3\nd3-e3\nd3-d2\nd3-d1\n") != true) {
		printf("test: failed test_moves_004\n");
		return false;
	}
	
	chess_boardSet("12 W\n.q..r\nk.ppp\np.bP.\nP.P.P\nRP.n.\n.NB.K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-c5\nd4-e5\ne3-e4\na2-a1\nb2-b3\nb1-d2\nc1-d2\nc1-c2\nc1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_005\n");
		return false;
	}
	
	chess_boardSet("19 B\n.kb..\n.pp..\npqNPQ\nP.P..\n.PK..\nR.B..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-a5\nc6-d5\nc6-e4\nc6-d6\nb5-c4\nc5-d4\nb4-c4\nb4-b3\nb4-b2\nb4-a5\nb4-a3\nb4-c3\n") != true) {
		printf("test: failed test_moves_006\n");
		return false;
	}
	
	chess_boardSet("13 W\n.....\nrk.Bp\npqp..\nNp.P.\nPP..P\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-c6\nd5-e6\nd5-c4\nd5-e4\nd5-d6\nd5-c5\nd5-d4\na3-c4\na3-b5\na3-c2\na3-b1\nd3-d4\nd3-c4\na2-b3\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_007\n");
		return false;
	}
	
	chess_boardSet("15 B\nkr...\n.n..p\nP.p..\nPpQ..\nR..PK\n..B..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-d6\nb6-e6\nb5-d6\nb5-a3\nb5-d4\nb5-c3\ne5-e4\nb3-b2\nb3-a2\n") != true) {
		printf("test: failed test_moves_008\n");
		return false;
	}
	
	chess_boardSet("19 W\nk...r\nPp...\nb..pP\n.....\nN.pKP\n...q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-e5\na2-c3\na2-b4\na2-c1\nd2-d3\nd2-c2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\ne2-e3\n") != true) {
		printf("test: failed test_moves_009\n");
		return false;
	}
	
	chess_boardSet("18 B\nq..nr\n.ppp.\nkP..P\np..K.\nPbPNB\n.R...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-c6\na6-a5\nd6-c4\nd6-e4\ne6-e5\ne6-e4\nc5-c4\nc5-b4\nd5-d4\nd5-e4\na4-a5\na4-b4\na4-b3\nb2-c3\nb2-d4\nb2-e5\nb2-a1\nb2-c1\nb2-b3\n") != true) {
		printf("test: failed test_moves_010\n");
		return false;
	}
	
	chess_boardSet("11 B\nkr...\np.q.p\n..p.b\nPQB..\n...PP\nRN..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b5\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-b4\nb6-b3\na5-a4\nc5-c6\nc5-b5\nc5-d5\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc4-b3\ne4-d5\ne4-c6\ne4-d3\ne4-c2\ne4-b1\ne4-d4\ne4-e3\n") != true) {
		printf("test: failed test_moves_011\n");
		return false;
	}
	
	chess_boardSet("12 B\nqb.nr\n.pk.p\n..p..\n..pP.\nP..RP\nB..QK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-a4\na6-a3\na6-a2\nb6-a5\nb6-c6\nd6-e4\nb5-b4\nc5-c6\nc5-d5\nc5-b4\nc5-d4\ne5-e4\nc4-d3\nc3-c2\nc3-d2\n") != true) {
		printf("test: failed test_moves_012\n");
		return false;
	}
	
	chess_boardSet("13 W\nqk..r\np.Ppp\n.PN..\nn...P\nPbB.K\nR...Q\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b6\nb4-b5\nb4-a5\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-d2\ne3-e4\nc2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b1\nc2-d1\nc2-c3\nc2-d2\nc2-c1\ne2-d2\ne2-d3\ne2-d1\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-c1\ne1-b1\ne1-d2\ne1-c3\n") != true) {
		printf("test: failed test_moves_013\n");
		return false;
	}
	
	chess_boardSet("12 B\nb.k.r\n.qp.p\nnB..p\n...PP\nP.P.K\n..R..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nc6-b6\nc6-d6\nc6-d5\ne6-d6\nb5-b6\nb5-a5\nb5-b4\nb5-c4\nb5-d3\nc5-c4\nc5-b4\na4-b6\na4-c3\na4-b2\ne4-d3\n") != true) {
		printf("test: failed test_moves_014\n");
		return false;
	}
	
	chess_boardSet("21 W\nk..br\npPp..\n...pP\n.P.Q.\np.P.P\n..B.K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-b6\nb5-a6\ne4-e5\nb3-b4\nd3-d4\nd3-c3\nd3-e3\nd3-d2\nd3-d1\nd3-c4\nc2-c3\ne2-e3\nc1-b2\nc1-a3\nc1-d2\nc1-e3\nc1-b1\nc1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_015\n");
		return false;
	}
	
	chess_boardSet("14 W\nk.b..\npqp.r\nnp...\n...KQ\nPP.P.\n..R..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-d4\nd3-c3\nd3-c4\nd3-e4\nd3-c2\nd3-e2\ne3-e4\ne3-e5\ne3-e2\ne3-e1\ne3-d4\ne3-c5\na2-a3\nb2-b3\nc1-c2\nc1-c3\nc1-c4\nc1-c5\nc1-b1\nc1-a1\nc1-d1\nc1-e1\n") != true) {
		printf("test: failed test_moves_016\n");
		return false;
	}
	
	chess_boardSet("14 B\n.Rkbr\n..p..\np.Ppp\nP..P.\n..B.P\n....K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-b5\nc6-d5\nd6-e5\nd6-d5\ne6-e5\ne4-e3\ne4-d3\n") != true) {
		printf("test: failed test_moves_017\n");
		return false;
	}
	
	chess_boardSet("12 W\nkq.n.\n.pp.Q\np..pb\nN..P.\nPPP.K\nRB...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-e6\ne5-d5\ne5-c5\ne5-e4\ne5-d6\ne5-d4\na3-c4\na3-b5\nd3-e4\nb2-b3\nc2-c3\ne2-e3\ne2-d2\ne2-e1\ne2-d1\nb1-c1\n") != true) {
		printf("test: failed test_moves_018\n");
		return false;
	}
	
	chess_boardSet("17 B\nk...r\npq..p\n.p..n\n..bKQ\nPNP..\n.R.B.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\ne6-d6\ne6-c6\ne6-b6\na5-a4\nb5-b6\nb5-c5\nb5-d5\nb5-c6\nb5-a4\nb5-c4\nb5-d3\nb4-b3\ne4-c5\ne4-d6\ne4-d2\nc3-d4\nc3-b2\nc3-d2\nc3-e1\nc3-c4\nc3-b3\n") != true) {
		printf("test: failed test_moves_019\n");
		return false;
	}
	
	chess_boardSet("14 B\n.qr..\nkbpp.\nppP.p\nP...P\nQP...\n.B.K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nc6-d6\nc6-e6\na5-a6\nb5-a6\nb5-c4\nd5-d4\nd5-c4\nb4-b3\nb4-a3\n") != true) {
		printf("test: failed test_moves_020\n");
		return false;
	}
	
	chess_boardSet("20 B\n.q.nr\np.p.p\n...k.\n..p..\nP...K\n.R..Q\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-b1\nd6-b5\nd6-c4\nd6-e4\na5-a4\nc5-c4\ne5-e4\nd4-d5\nd4-c4\nd4-e4\nd4-d3\nd4-e3\nc3-c2\n") != true) {
		printf("test: failed test_moves_021\n");
		return false;
	}
	
	chess_boardSet("19 W\n.....\nk...p\nP.Q..\n.....\nP..bP\nq..qK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-c6\nc4-b4\nc4-d4\nc4-e4\nc4-c3\nc4-c2\nc4-c1\nc4-b5\nc4-a6\nc4-d5\nc4-e6\nc4-b3\nc4-d3\na2-a3\ne2-e3\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_022\n");
		return false;
	}
	
	chess_boardSet("18 B\n.kb.r\np.p..\n.....\n.Q..p\nP.q.P\n...K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-d6\ne6-d6\ne6-e5\ne6-e4\na5-a4\nc5-c4\nc2-c3\nc2-c4\nc2-b2\nc2-a2\nc2-d2\nc2-e2\nc2-c1\nc2-b3\nc2-d3\nc2-e4\nc2-b1\nc2-d1\n") != true) {
		printf("test: failed test_moves_023\n");
		return false;
	}
	
	chess_boardSet("13 W\nkq...\n.pQ.p\n....b\npP...\nP..KP\nR.r..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b5\nc5-d5\nc5-e5\nc5-c4\nc5-c3\nc5-c2\nc5-c1\nc5-b6\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nb3-b4\nd2-d3\nd2-c2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\ne2-e3\na1-b1\na1-c1\n") != true) {
		printf("test: failed test_moves_024\n");
		return false;
	}
	
	chess_boardSet("14 W\n..qnr\n.p..P\n..pPb\npk.KP\nPP.B.\nRN..Q\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-d6\nd4-d5\nd3-c3\nd3-c4\nd3-e4\nd3-c2\nd3-e2\na2-b3\nb2-a3\nd2-c3\nd2-b4\nd2-a5\nd2-c1\nd2-c2\nd2-e2\nd2-d1\nb1-a3\nb1-c3\ne1-e2\ne1-d1\ne1-c1\n") != true) {
		printf("test: failed test_moves_025\n");
		return false;
	}
	
	chess_boardSet("17 W\n.....\n.p.br\np.p.p\nP..qK\nP..k.\nB....\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e3-e4\ne3-d3\ne3-e2\ne3-d4\ne3-d2\na1-b2\na1-c3\na1-d4\na1-e5\na1-b1\n") != true) {
		printf("test: failed test_moves_026\n");
		return false;
	}
	
	chess_boardSet("18 B\n.b.r.\np..p.\n..k..\nRN.pq\n....P\nB..QK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-c5\nb6-d4\nb6-a6\nb6-c6\nb6-b5\nd6-c6\nd6-e6\na5-a4\nd5-d4\nc4-c5\nc4-b4\nc4-d4\nc4-c3\nc4-b5\nc4-b3\nd3-d2\nd3-e2\ne3-e4\ne3-e5\ne3-e6\ne3-e2\ne3-d4\ne3-c5\ne3-d2\ne3-c1\n") != true) {
		printf("test: failed test_moves_027\n");
		return false;
	}
	
	chess_boardSet("14 B\nkq.r.\n.bp.p\np..pQ\n..pBN\nPP..P\n.R.K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-a5\nd6-c6\nd6-e6\nd6-d5\nb5-c6\nb5-c4\nb5-d3\nb5-a5\nb5-b4\nc5-c4\na4-a3\nd4-e3\nc3-c2\nc3-b2\n") != true) {
		printf("test: failed test_moves_028\n");
		return false;
	}
	
	chess_boardSet("13 W\nk.b..\nPpr..\n..n.p\n....K\nq.P.N\nRQ...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e3-e4\ne3-d3\ne3-d4\ne3-d2\nc2-c3\ne2-c3\ne2-d4\ne2-c1\na1-a2\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-c1\nb1-d1\nb1-e1\nb1-a2\n") != true) {
		printf("test: failed test_moves_029\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..br\n.n.qp\npp...\npP.P.\nP.P.K\nR.B..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-a4\nd3-d4\nc2-c3\ne2-e3\ne2-d2\ne2-e1\ne2-d1\na1-b1\nc1-b2\nc1-a3\nc1-d2\nc1-e3\nc1-b1\nc1-d1\n") != true) {
		printf("test: failed test_moves_030\n");
		return false;
	}
	
	chess_boardSet("18 W\nkq..r\nb.P.p\np.P.P\n.....\nPq.K.\nR..Q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b6\na2-a3\nd2-d3\nd2-c2\nd2-e2\nd2-c3\nd2-e3\nd2-c1\nd2-e1\na1-b1\na1-c1\nd1-c1\nd1-b1\nd1-e1\nd1-c2\nd1-b3\nd1-a4\nd1-e2\n") != true) {
		printf("test: failed test_moves_031\n");
		return false;
	}
	
	chess_boardSet("21 W\n.kbn.\n....r\n..p.p\n.Pp.p\nRP...\n....K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-c4\na2-a3\na2-a4\na2-a5\na2-a6\na2-a1\nb2-c3\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_032\n");
		return false;
	}
	
	chess_boardSet("12 W\nkq.n.\n.pp.r\np...b\nPP...\nR.P..\n.NBqK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-a4\na2-b2\na2-a1\nc2-c3\nb1-d2\nb1-c3\nc1-b2\nc1-d2\nc1-e3\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_033\n");
		return false;
	}
	
	chess_boardSet("19 W\n...nr\n.....\nkqbPp\n.P..P\nR.P..\n.B..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d5\nb3-a4\nb3-c4\na2-a3\na2-a4\na2-b2\na2-a1\nc2-c3\nb1-b2\nb1-a1\nb1-c1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_034\n");
		return false;
	}
	
	chess_boardSet("12 W\nk.q.r\n.pp.b\np...p\nn.P.P\n.QPP.\nR.BK.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-c4\nb2-b3\nb2-b4\nb2-b5\nb2-a2\nb2-b1\nb2-a3\nd2-d3\na1-a2\na1-a3\na1-b1\nc1-b1\nd1-e1\nd1-e2\n") != true) {
		printf("test: failed test_moves_035\n");
		return false;
	}
	
	chess_boardSet("13 B\nkb.r.\n..p.p\np..KN\n.q.PB\n..P.P\nR..Q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-a5\nb6-c6\nb6-b5\nd6-c6\nd6-e6\nd6-d5\nd6-d4\nc5-c4\nc5-d4\ne5-d4\na4-a3\nb3-b4\nb3-b5\nb3-a3\nb3-c3\nb3-d3\nb3-b2\nb3-b1\nb3-c4\nb3-d5\nb3-e6\nb3-a2\nb3-c2\n") != true) {
		printf("test: failed test_moves_036\n");
		return false;
	}
	
	chess_boardSet("12 W\nkq..b\nppppr\n.PN.p\n....P\nPRPP.\n..BnK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a5\nb4-c5\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\na2-a3\nb2-b3\nb2-b1\nc2-c3\nd2-d3\nc1-b1\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_moves_037\n");
		return false;
	}
	
	chess_boardSet("16 B\n...b.\npk..Q\n.p...\nN.P.P\nPP.BP\n.R..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c5\nd6-e5\nd6-c6\nd6-e6\nd6-d5\na5-a4\nb5-b6\nb5-c5\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nb4-b3\nb4-a3\nb4-c3\n") != true) {
		printf("test: failed test_moves_038\n");
		return false;
	}
	
	chess_boardSet("15 B\nkq.n.\n..pr.\nPpPpb\n....P\nRP.P.\n.N..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-b5\nb6-a5\nd6-b5\nd6-c4\nd5-e5\nb4-b3\nd4-d3\nd4-e3\ne4-d3\ne4-c2\ne4-b1\ne4-e5\n") != true) {
		printf("test: failed test_moves_039\n");
		return false;
	}
	
	chess_boardSet("12 B\n..br.\nkp..p\np.pq.\nP.P.K\nRQP..\n.....\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-d5\nc6-e4\nc6-b6\nc6-c5\nd6-e6\nd6-d5\na5-a6\na5-b6\na5-b4\nb5-b4\ne5-e4\nd4-d5\nd4-e4\nd4-d3\nd4-d2\nd4-d1\nd4-c5\nd4-b6\nd4-c3\nd4-e3\n") != true) {
		printf("test: failed test_moves_040\n");
		return false;
	}
	
	chess_boardSet("14 B\n..q.r\nkp.K.\n.R...\n....P\n..p..\n..BQ.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-c5\nc6-c4\nc6-c3\nc6-d5\ne6-d6\ne6-e5\ne6-e4\ne6-e3\na5-a6\na5-a4\na5-b6\na5-b4\nc2-d1\n") != true) {
		printf("test: failed test_moves_041\n");
		return false;
	}
	
	chess_boardSet("16 W\n...br\nk.p..\np.p.p\nPqP.P\n.Q..B\n...RK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b2-b3\nb2-a2\nb2-c2\nb2-d2\nb2-b1\nb2-a1\nb2-c1\ne2-d3\ne2-c4\ne2-d2\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nd1-d6\nd1-c1\nd1-b1\nd1-a1\ne1-d2\n") != true) {
		printf("test: failed test_moves_042\n");
		return false;
	}
	
	chess_boardSet("13 W\nk.r..\n.p...\nN...p\nP...Q\nRn...\n..BQK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-c5\na4-b6\na4-c3\na4-b2\ne3-e4\ne3-d3\ne3-c3\ne3-b3\ne3-e2\ne3-d4\ne3-c5\ne3-b6\ne3-d2\na2-b2\na2-a1\nc1-b2\nc1-d2\nc1-c2\nc1-b1\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nd1-d6\nd1-c2\nd1-b3\nd1-e2\ne1-e2\ne1-d2\n") != true) {
		printf("test: failed test_moves_043\n");
		return false;
	}
	
	chess_boardSet("17 W\nk..b.\n..Nqp\npB.r.\n..Q..\npPP.P\nR.K..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-a6\nc5-e6\nc5-a4\nc5-b3\nc5-e4\nc5-d3\nb4-a5\nb4-a3\nb4-b5\nb4-c4\nb4-b3\nc3-c4\nc3-b3\nc3-a3\nc3-d3\nc3-e3\nc3-d4\nc3-d2\nc3-e1\nb2-b3\ne2-e3\na1-a2\na1-b1\nc1-b1\nc1-d1\nc1-d2\n") != true) {
		printf("test: failed test_moves_044\n");
		return false;
	}
	
	chess_boardSet("18 W\n..k..\nQPr.P\n..p..\n.p.p.\nBPPK.\nR....\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a6\na5-a4\na5-a3\na5-b6\na5-b4\na5-c3\nb5-b6\nb5-c6\ne5-e6\na2-b3\na2-b1\na2-a3\nc2-c3\nc2-b3\nc2-d3\nd2-d3\nd2-e2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\na1-b1\na1-c1\na1-d1\na1-e1\n") != true) {
		printf("test: failed test_moves_045\n");
		return false;
	}
	
	chess_boardSet("17 B\n.k.n.\n...r.\nbQ.Pp\n..Pq.\n....N\n.R..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nb6-c5\nd6-b5\nd6-c4\nd5-c5\nd5-b5\nd5-a5\nd5-e5\nd5-d4\na4-b5\na4-c6\na4-b3\na4-c2\na4-d1\na4-a5\na4-a3\ne4-e3\nd3-d4\nd3-c3\nd3-e3\nd3-d2\nd3-d1\nd3-c4\nd3-b5\nd3-a6\nd3-c2\nd3-b1\nd3-e2\n") != true) {
		printf("test: failed test_moves_046\n");
		return false;
	}
	
	chess_boardSet("14 B\nkq..r\n.n...\np.pPp\nBP...\nP...P\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-d6\nb6-a5\nb6-c5\nb6-d4\ne6-d6\ne6-c6\ne6-e5\nb5-d6\nb5-a3\nb5-d4\nb5-c3\na4-b3\nc4-c3\nc4-b3\ne4-e3\n") != true) {
		printf("test: failed test_moves_047\n");
		return false;
	}
	
	chess_boardSet("18 B\n.k.nr\n..p.p\n....Q\nNq...\n.P.P.\nR..bK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nd6-b5\nd6-c4\nd6-e4\nc5-c4\nb3-b4\nb3-b5\nb3-a3\nb3-c3\nb3-d3\nb3-e3\nb3-b2\nb3-a4\nb3-c4\nb3-d5\nb3-a2\nb3-c2\nd1-c2\nd1-e2\nd1-c1\n") != true) {
		printf("test: failed test_moves_048\n");
		return false;
	}
	
	chess_boardSet("16 W\nk..qr\np.b..\nnpPpP\nP.KN.\n.PP.Q\nRB...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-e5\na3-b4\nc3-b3\nc3-b4\nc3-d4\nc3-d2\nd3-b4\nd3-c5\nd3-e5\nd3-c1\nd3-e1\nb2-b3\ne2-e3\ne2-d2\ne2-e1\ne2-d1\na1-a2\nb1-a2\nb1-c1\n") != true) {
		printf("test: failed test_moves_049\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..nr\n.p.p.\n.B..p\nQ...b\nP.P.P\nq...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a5\nb4-c5\nb4-d6\nb4-c3\nb4-d2\nb4-a4\nb4-c4\nb4-b3\na3-a4\na3-a5\na3-a6\na3-b3\na3-c3\na3-d3\na3-e3\na3-b2\na3-c1\nc2-c3\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_050\n");
		return false;
	}
	
	chess_boardSet("16 W\n...nr\n.kbq.\npNP.p\nP....\nRpP.P\n..BQK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a6\nb4-d5\nb4-c6\nb4-d3\nc4-b5\nc4-d5\na2-b2\na2-a1\nc2-c3\ne2-e3\nc1-b2\nc1-d2\nc1-e3\nc1-b1\nd1-d2\nd1-d3\nd1-d4\nd1-d5\ne1-d2\n") != true) {
		printf("test: failed test_moves_051\n");
		return false;
	}
	
	chess_boardSet("21 W\nk.Qnr\np....\n.....\nR...q\n.P.Kp\n.N...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-c5\nc6-c4\nc6-c3\nc6-c2\nc6-c1\nc6-b5\nc6-a4\nc6-d5\nc6-e4\na3-a4\na3-a5\na3-b3\na3-c3\na3-d3\na3-e3\na3-a2\na3-a1\nb2-b3\nd2-d3\nd2-c2\nd2-e2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\nb1-c3\n") != true) {
		printf("test: failed test_moves_052\n");
		return false;
	}
	
	chess_boardSet("18 B\nr....\nbqpPp\n..P..\n.p...\nRk.QP\n....K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-c6\na6-d6\na6-e6\na5-b6\na5-b4\na5-c3\na5-d2\na5-a4\nb5-b6\nb5-b4\nb5-c6\nb5-a4\nb5-c4\ne5-e4\nb3-a2\nb2-a2\nb2-c2\nb2-b1\nb2-a3\nb2-c3\nb2-a1\nb2-c1\n") != true) {
		printf("test: failed test_moves_053\n");
		return false;
	}
	
	chess_boardSet("20 B\n.q...\n.k...\n.Pp.p\n...p.\nPP.BP\nR..K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-d6\nb6-e6\nb6-a5\nb6-c5\nb6-d4\nb6-e3\nb5-a5\nb5-c5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nc4-c3\ne4-e3\nd3-e2\n") != true) {
		printf("test: failed test_moves_054\n");
		return false;
	}
	
	chess_boardSet("17 B\n.kr..\np.p.p\n.p.B.\n...q.\nPPN.K\nR..Q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-b5\nc6-d6\nc6-e6\na5-a4\nc5-c4\nc5-d4\ne5-e4\ne5-d4\nb4-b3\nd3-d4\nd3-c3\nd3-b3\nd3-a3\nd3-e3\nd3-d2\nd3-d1\nd3-c4\nd3-b5\nd3-a6\nd3-e4\nd3-c2\nd3-e2\n") != true) {
		printf("test: failed test_moves_055\n");
		return false;
	}
	
	chess_boardSet("11 B\n..b.r\nkp.p.\np.nKp\nPq..P\nR.PP.\n.N.Q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\na5-a6\na5-b6\na5-b4\nb5-b4\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nb3-b4\nb3-a3\nb3-c3\nb3-d3\nb3-e3\nb3-b2\nb3-b1\nb3-a2\nb3-c2\n") != true) {
		printf("test: failed test_moves_056\n");
		return false;
	}
	
	chess_boardSet("19 B\nk.q.r\np..Pp\n.P...\nNP..b\nP..QP\nRnK..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nc6-b6\nc6-d6\nc6-c5\nc6-c4\nc6-c3\nc6-c2\nc6-c1\nc6-b5\nc6-a4\nc6-d5\ne6-d6\na5-a4\na5-b4\ne5-e4\ne3-d4\ne3-c5\ne3-b6\ne3-d2\ne3-e4\ne3-d3\nb1-a3\nb1-d2\nb1-c3\n") != true) {
		printf("test: failed test_moves_057\n");
		return false;
	}
	
	chess_boardSet("13 W\n.r...\nk.p.p\nPb...\n..p.p\nP.PNP\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-a3\nd2-b3\nd2-c4\nd2-e4\nd2-b1\na1-b1\na1-c1\na1-d1\ne1-d1\n") != true) {
		printf("test: failed test_moves_058\n");
		return false;
	}
	
	chess_boardSet("15 W\n.....\nBk.pr\n....n\n.Pp.q\nP.PKb\nRN...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-b6\na5-b4\na5-c3\na5-a6\na5-a4\nb3-b4\na2-a3\nd2-d3\nd2-e2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\nb1-a3\nb1-c3\n") != true) {
		printf("test: failed test_moves_059\n");
		return false;
	}
	
	chess_boardSet("17 B\n..q.r\nkN..b\npp..P\nPPpK.\n.....\nR...Q\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-c5\nc6-c4\nc6-b5\nc6-d5\nc6-e4\ne6-d6\na5-a6\na5-b5\na5-b6\ne5-d6\ne5-d4\ne5-d5\na4-b3\nb4-a3\nc3-c2\n") != true) {
		printf("test: failed test_moves_060\n");
		return false;
	}
	
	chess_boardSet("13 W\nk....\nq..br\npP.pn\n.P..K\n.BPP.\nR...Q\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b5\nb4-a5\nb3-a4\ne3-e4\ne3-d3\ne3-e2\ne3-d4\nb2-a3\nb2-c3\nb2-d4\nb2-c1\nb2-a2\nb2-b1\nc2-c3\nd2-d3\na1-a2\na1-a3\na1-a4\na1-b1\na1-c1\na1-d1\ne1-e2\ne1-d1\ne1-c1\ne1-b1\n") != true) {
		printf("test: failed test_moves_061\n");
		return false;
	}
	
	chess_boardSet("19 W\nk.r..\n.p.Q.\npb..p\nPpP.q\n...PB\n.N..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-d6\nd5-c5\nd5-b5\nd5-e5\nd5-d4\nd5-d3\nd5-c6\nd5-e6\nd5-c4\nd5-b3\nd5-e4\na3-b4\nc3-c4\nc3-b4\nd2-d3\nd2-e3\ne2-d3\ne2-c4\ne2-b5\ne2-d1\ne1-d1\n") != true) {
		printf("test: failed test_moves_062\n");
		return false;
	}
	
	chess_boardSet("12 W\n.q..r\n....p\nk.nPb\npPp..\nQ.KPP\nRN...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d5\nd4-e5\nb3-b4\nb3-a4\nb3-c4\na2-a3\na2-b2\nc2-c3\nc2-b2\nc2-c1\nc2-d3\nc2-d1\nd2-d3\nd2-c3\ne2-e3\nb1-a3\nb1-c3\n") != true) {
		printf("test: failed test_moves_063\n");
		return false;
	}
	
	chess_boardSet("12 W\nkq..r\n.Nb.p\n.pp..\n..K..\nP.P.P\nR..Q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-d6\nb5-a3\nb5-d4\nc3-c4\nc3-b3\nc3-d3\nc3-b4\nc3-d4\nc3-b2\nc3-d2\na2-a3\ne2-e3\na1-b1\na1-c1\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nd1-d6\nd1-c1\nd1-b1\nd1-e1\n") != true) {
		printf("test: failed test_moves_064\n");
		return false;
	}
	
	chess_boardSet("15 W\nk.q.r\n..Q.Q\npbp..\n.P..n\n.P.PK\n.RB..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b5\nc5-a5\nc5-d5\nc5-c4\nc5-b6\nc5-d6\nc5-b4\nc5-d4\nc5-e3\ne5-e6\ne5-d5\ne5-e4\ne5-e3\ne5-d6\ne5-d4\ne5-c3\nb3-a4\nb3-c4\nd2-d3\nd2-e3\ne2-e3\ne2-e1\ne2-d3\ne2-d1\nb1-a1\nc1-c2\nc1-d1\n") != true) {
		printf("test: failed test_moves_065\n");
		return false;
	}
	
	chess_boardSet("14 B\nkb...\n.p..p\np.Pr.\nP.P.q\n.P.PK\nRBQ..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-a5\nb6-c5\nb6-c6\nb5-b4\nb5-c4\ne5-e4\nd4-d5\nd4-d6\nd4-c4\nd4-e4\nd4-d3\nd4-d2\ne3-e4\ne3-d3\ne3-c3\ne3-e2\ne3-d2\n") != true) {
		printf("test: failed test_moves_066\n");
		return false;
	}
	
	chess_boardSet("12 W\n.q..r\nkb.Bp\np.p..\nPpNPP\n.PPnK\nR....\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-c6\nd5-e6\nd5-c4\nd5-e4\nd5-d6\nd5-c5\nd5-d4\nc3-a4\nc3-b5\nc3-e4\nc3-a2\nc3-b1\nc3-d1\nd3-d4\nd3-c4\ne3-e4\nc2-b3\ne2-d2\ne2-e1\ne2-d1\na1-a2\na1-b1\na1-c1\na1-d1\na1-e1\n") != true) {
		printf("test: failed test_moves_067\n");
		return false;
	}
	
	chess_boardSet("21 W\n.q.B.\n.kp..\np.np.\n...PP\n.P.Q.\n.q.K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c5\nd6-e5\nd6-c6\nd6-e6\nd6-d5\nd3-c4\ne3-e4\ne3-d4\nb2-b3\nd2-c2\nd2-e2\nd2-c3\nd2-b4\nd2-a5\nd2-c1\nd2-e1\nd1-c1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_moves_068\n");
		return false;
	}
	
	chess_boardSet("16 B\n.k.qr\nP.p.p\n...N.\n.PBnP\n...Q.\n..b.K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nd6-c6\nd6-d5\nd6-d4\nc5-c4\nc5-d4\ne5-e4\ne5-d4\nd3-b4\nd3-b2\nd3-e1\nc1-b2\nc1-a3\nc1-d2\nc1-c2\nc1-b1\nc1-d1\n") != true) {
		printf("test: failed test_moves_069\n");
		return false;
	}
	
	chess_boardSet("15 B\nkb.nq\nR.r..\n..pNp\n..PPP\np...K\nQ....\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-a5\nb6-c6\nb6-b5\nd6-b5\ne6-e5\ne6-d5\nc5-c6\nc5-b5\nc5-a5\nc5-d5\nc5-e5\nc4-d3\ne4-d3\n") != true) {
		printf("test: failed test_moves_070\n");
		return false;
	}
	
	chess_boardSet("21 W\nk....\nprPnp\n..N..\np..P.\n..PQK\n..R..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nd3-d4\nc2-c3\nd2-d1\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-e1\ne2-e3\ne2-e1\ne2-d1\nc1-b1\nc1-a1\nc1-d1\nc1-e1\n") != true) {
		printf("test: failed test_moves_071\n");
		return false;
	}
	
	chess_boardSet("19 W\nk....\npp...\n..rqp\n.nQP.\nP....\n...BK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-c4\nc3-b3\nc3-c2\nc3-c1\nc3-b4\nc3-a5\nc3-d4\nc3-b2\nc3-a1\nc3-d2\nd3-c4\nd3-e4\na2-a3\na2-b3\nd1-c2\nd1-b3\nd1-e2\nd1-d2\nd1-c1\ne1-e2\ne1-d2\n") != true) {
		printf("test: failed test_moves_072\n");
		return false;
	}
	
	chess_boardSet("15 W\n.r...\np..pp\nkb...\np.PP.\nP.Q.P\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-c4\nc3-b4\nd3-d4\nc2-b2\nc2-d2\nc2-c1\nc2-b3\nc2-a4\nc2-b1\nc2-d1\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_073\n");
		return false;
	}
	
	chess_boardSet("14 W\nkq..r\n...b.\n..npP\nP....\nP.Q..\nRN..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-e5\ne4-d5\na3-a4\nc2-c3\nc2-c4\nc2-b2\nc2-d2\nc2-e2\nc2-c1\nc2-b3\nc2-a4\nc2-d3\nc2-d1\nb1-d2\nb1-c3\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_074\n");
		return false;
	}
	
	chess_boardSet("20 W\n..rN.\n.pk..\npP.p.\nP.P..\n..P.b\n.R.K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-b5\nd6-c4\nd6-e4\nb4-c5\nc3-c4\nc3-d4\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nd1-d2\nd1-c1\nd1-e1\nd1-e2\n") != true) {
		printf("test: failed test_moves_075\n");
		return false;
	}
	
	chess_boardSet("20 B\n.k.r.\nNbqpp\n....n\nB...P\nP..PK\n.....\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-a5\nd6-c6\nd6-e6\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nb5-d3\nb5-e2\nb5-b4\nc5-c6\nc5-c4\nc5-c3\nc5-c2\nc5-c1\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nd5-d4\ne4-c3\ne4-d2\n") != true) {
		printf("test: failed test_moves_076\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq...\n.P..p\npP..b\nN.P..\nP..Bn\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-a5\nb6-c5\nb6-d4\nb6-e3\ne4-d5\ne4-c6\ne4-d3\ne4-c2\ne4-b1\ne4-d4\ne4-e3\ne2-c3\ne2-d4\ne2-c1\n") != true) {
		printf("test: failed test_moves_077\n");
		return false;
	}
	
	chess_boardSet("13 B\nk..r.\nRPq.p\n.ppp.\n.PPPb\n...BP\n.N.QK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nd6-c6\nd6-b6\nd6-e6\nd6-d5\nc5-c6\nc5-b5\nc5-d5\nc5-b6\ne5-e4\nb4-c3\nc4-b3\nc4-d3\nd4-c3\ne3-d2\ne3-e4\n") != true) {
		printf("test: failed test_moves_078\n");
		return false;
	}
	
	chess_boardSet("14 W\nkbr..\nq.p.P\n.pNp.\npP.Q.\nPnPP.\nR..BK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-e6\nc4-a5\nc4-b6\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nd3-d4\nd3-c3\nd3-e3\nd3-e4\nd3-e2\nc2-c3\na1-b1\na1-c1\nd1-e2\nd1-c1\ne1-e2\n") != true) {
		printf("test: failed test_moves_079\n");
		return false;
	}
	
	chess_boardSet("21 W\n.kr..\n..bKp\n..Q..\nPq...\n.PP..\nRB...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-d6\nd5-c5\nd5-e5\nd5-d4\nd5-c6\nd5-e6\nd5-e4\nc4-c5\nc4-b4\nc4-a4\nc4-d4\nc4-e4\nc4-c3\nc4-b5\nc4-a6\nc4-b3\nc4-d3\nc4-e2\na3-a4\nc2-c3\nc2-b3\na1-a2\nb1-a2\nb1-c1\n") != true) {
		printf("test: failed test_moves_080\n");
		return false;
	}
	
	chess_boardSet("20 W\n.k.r.\np.p.p\n.qb.P\nP.p..\npP...\n...RK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-a4\na3-b4\nb2-b3\nb2-c3\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nd1-d6\nd1-c1\nd1-b1\nd1-a1\ne1-e2\ne1-d2\n") != true) {
		printf("test: failed test_moves_081\n");
		return false;
	}
	
	chess_boardSet("12 W\nkb...\n.pPr.\nq..pp\npNPP.\nPBQ.P\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b6\nb3-a5\nb3-d4\nb3-d2\nb3-c1\nc3-c4\nc3-d4\nd3-e4\nb2-a3\nb2-c1\nb2-b1\nc2-d2\nc2-c1\nc2-b1\nc2-d1\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_moves_082\n");
		return false;
	}
	
	chess_boardSet("12 B\nk...r\n..q..\n..npb\n.p..B\nP.Q.P\n.RK..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\ne6-d6\ne6-c6\ne6-b6\ne6-e5\nc5-c6\nc5-b5\nc5-a5\nc5-d5\nc5-e5\nc5-b6\nc5-d6\nc5-b4\nc5-a3\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nd4-d3\nd4-e3\ne4-d5\ne4-c6\ne4-d3\ne4-c2\ne4-e5\nb3-b2\nb3-a2\nb3-c2\n") != true) {
		printf("test: failed test_moves_083\n");
		return false;
	}
	
	chess_boardSet("11 B\n.qr..\npkppp\n..P..\np..PP\nPBPQ.\n..R.K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nc6-d6\nc6-e6\na5-a4\nb5-b4\nb5-a6\nb5-a4\nb5-c4\nd5-d4\nd5-c4\ne5-e4\na3-b2\n") != true) {
		printf("test: failed test_moves_084\n");
		return false;
	}
	
	chess_boardSet("15 B\n.k.n.\n..Q..\np...r\nN.ppq\nPP..P\nRB..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nb6-c5\nd6-b5\nd6-c4\ne4-e5\ne4-e6\ne4-d4\ne4-c4\ne4-b4\nc3-c2\nc3-b2\nd3-d2\nd3-e2\ne3-e2\ne3-d4\ne3-c5\ne3-d2\ne3-c1\n") != true) {
		printf("test: failed test_moves_085\n");
		return false;
	}
	
	chess_boardSet("17 W\nknb..\npq..r\nQR...\np.P.B\nP..PP\n....K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-a5\na4-a3\na4-b5\na4-b3\na4-c2\na4-d1\nb4-b5\nb4-c4\nb4-d4\nb4-e4\nb4-b3\nb4-b2\nb4-b1\nc3-c4\ne3-d4\ne3-c5\ne3-b6\ne3-e4\ne3-d3\nd2-d3\ne1-d1\n") != true) {
		printf("test: failed test_moves_086\n");
		return false;
	}
	
	chess_boardSet("14 B\nk..n.\nPq..Q\np.pp.\n..PpP\nRPKB.\n.N...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nd6-e4\nb5-b6\nb5-a5\nb5-c5\nb5-d5\nb5-e5\nb5-b4\nb5-b3\nb5-b2\nb5-c6\na4-a3\nd4-c3\nd4-e3\nd3-c2\n") != true) {
		printf("test: failed test_moves_087\n");
		return false;
	}
	
	chess_boardSet("15 B\n..b.r\nk..P.\npqp..\nPK..Q\n.P..P\nRN.B.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b5\nc6-d5\nc6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\ne6-e4\ne6-e3\na5-a6\na5-b5\na5-b6\na4-b3\nb4-b5\nb4-b6\nb4-b3\nb4-c5\nb4-d6\nb4-a3\nb4-c3\nb4-d2\nb4-e1\nc4-c3\nc4-b3\n") != true) {
		printf("test: failed test_moves_088\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..nr\np.p.p\n...P.\nP.B..\n..q.K\n.R...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nd6-b5\nd6-c4\nd6-e4\na5-a4\nc5-c4\nc5-d4\ne5-e4\ne5-d4\nc2-c3\nc2-b2\nc2-a2\nc2-d2\nc2-e2\nc2-c1\nc2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b1\nc2-d1\n") != true) {
		printf("test: failed test_moves_089\n");
		return false;
	}
	
	chess_boardSet("19 B\nk.b.r\n..pp.\nP....\nq.PQ.\nP....\nR..K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b5\nc6-a4\nc6-b6\nc6-d6\ne6-d6\ne6-e5\ne6-e4\ne6-e3\ne6-e2\ne6-e1\nc5-c4\nd5-d4\na3-a4\na3-b3\na3-c3\na3-a2\na3-b4\na3-b2\na3-c1\n") != true) {
		printf("test: failed test_moves_090\n");
		return false;
	}
	
	chess_boardSet("18 W\nk.q.r\n...pp\n.pQ..\n.b..P\n.RPP.\n..B.K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-c6\nc4-b4\nc4-d4\nc4-e4\nc4-c3\nc4-b5\nc4-a6\nc4-d5\nc4-b3\nc4-d3\nc4-e2\ne3-e4\nb2-b3\nb2-a2\nb2-b1\nc2-c3\nc2-b3\nd2-d3\nc1-b1\nc1-d1\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_moves_091\n");
		return false;
	}
	
	chess_boardSet("16 B\n...r.\n.kp.p\npp.P.\nP.Q..\n.P.n.\nRB..K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c6\nd6-b6\nd6-a6\nd6-e6\nd6-d5\nd6-d4\nb5-b6\nb5-a5\nb5-a6\nb5-c6\nb5-c4\nc5-c4\nc5-d4\ne5-e4\ne5-d4\nb4-b3\nb4-a3\nb4-c3\nd2-b3\nd2-c4\nd2-e4\nd2-b1\n") != true) {
		printf("test: failed test_moves_092\n");
		return false;
	}
	
	chess_boardSet("20 W\n.....\np.rpp\nk.p..\n.RPb.\n.B..P\n..K..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-b5\nb3-b6\nb3-a3\nb2-a3\nb2-a1\nb2-a2\nb2-c2\nb2-b1\ne2-e3\ne2-d3\nc1-c2\nc1-b1\nc1-d1\nc1-d2\n") != true) {
		printf("test: failed test_moves_093\n");
		return false;
	}
	
	chess_boardSet("17 W\n.q.nr\n.p...\npkPP.\nbPq.K\nP....\n...Q.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b5\nd4-d5\nb3-a4\ne3-e4\ne3-d3\ne3-e2\ne3-d2\nd1-d2\nd1-d3\nd1-c1\nd1-b1\nd1-a1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_moves_094\n");
		return false;
	}
	
	chess_boardSet("16 B\n.k..r\n.p.q.\nnp.pb\n..N.P\nP.P.K\nRQ...\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-a5\nb6-c5\ne6-d6\ne6-c6\ne6-e5\nd5-d6\nd5-c5\nd5-e5\nd5-c6\nd5-c4\nd5-b3\nd5-a2\na4-c5\na4-c3\na4-b2\nb4-b3\nb4-c3\nd4-d3\nd4-c3\nd4-e3\ne4-d3\ne4-c2\ne4-e5\n") != true) {
		printf("test: failed test_moves_095\n");
		return false;
	}
	
	chess_boardSet("12 W\nk.b.r\n...qp\np.n..\npP.Q.\nNB.PP\nR...K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-a4\nb3-c4\nd3-d4\nd3-d5\nd3-c3\nd3-e3\nd3-c4\nd3-e4\nd3-c2\nd3-b1\na2-c3\na2-b4\na2-c1\nb2-a3\nb2-c3\nb2-d4\nb2-e5\nb2-c1\nb2-c2\nb2-b1\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d1\n") != true) {
		printf("test: failed test_moves_096\n");
		return false;
	}
	
	chess_boardSet("12 B\n..bnr\npq...\nkPpp.\n..P..\nPp.PP\n..B.K\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-d5\nc6-e4\nc6-b6\nc6-c5\nd6-e4\ne6-e5\ne6-e4\ne6-e3\ne6-e2\na5-b4\nb5-b6\nb5-c5\nb5-d5\nb5-e5\nb5-b4\nb5-a6\na4-b4\na4-a3\na4-b3\nd4-d3\nd4-c3\nb2-b1\nb2-c1\n") != true) {
		printf("test: failed test_moves_097\n");
		return false;
	}
	
	chess_boardSet("18 B\nkb..r\npq..p\n.P.p.\n...P.\nPRp.P\n.N.QK\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-c5\nb6-c6\ne6-d6\ne6-c6\na5-a4\na5-b4\nb5-c5\nb5-d5\nb5-b4\nb5-c6\nb5-a4\nb5-c4\nb5-d3\ne5-e4\nc2-c1\nc2-b1\nc2-d1\n") != true) {
		printf("test: failed test_moves_098\n");
		return false;
	}
	
	chess_boardSet("18 W\n..bn.\n..kr.\npB..p\n..p.P\nPR.p.\n...K.\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a5\nb4-c5\nb4-a3\nb4-c3\nb4-b5\nb4-c4\nb4-b3\na2-a3\nb2-b3\nb2-c2\nb2-d2\nb2-b1\nd1-d2\nd1-c1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_moves_099\n");
		return false;
	}
	
	chess_boardSet("20 W\n.kq..\np..p.\nbp.pN\nnP.P.\n...PK\n..R..\n");
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-c5\ne4-d6\ne4-c3\nb3-a4\ne2-e3\ne2-e1\ne2-d1\nc1-c2\nc1-c3\nc1-c4\nc1-c5\nc1-c6\nc1-b1\nc1-a1\nc1-d1\nc1-e1\n") != true) {
		printf("test: failed test_moves_100\n");
		return false;
	}
	
	return true;
}

bool test_move() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_move("c2-c3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 B\nkqbnr\nppppp\n.....\n..P..\nPP.PP\nRNBQK\n") != 0) {
		printf("test: failed test_move_001\n");
		return false;
	}
	
	chess_boardSet("15 B\nk..nr\np..p.\n..q..\nbp..P\nPB.QP\nR..K.\n");
	chess_move("a5-a4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk..nr\n...p.\np.q..\nbp..P\nPB.QP\nR..K.\n") != 0) {
		printf("test: failed test_move_002\n");
		return false;
	}
	
	chess_boardSet("16 W\nk.bqr\np.p.p\nP..pn\nNp.PP\n..P..\nRBKQ.\n");
	chess_move("d1-e2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk.bqr\np.p.p\nP..pn\nNp.PP\n..P.Q\nRBK..\n") != 0) {
		printf("test: failed test_move_003\n");
		return false;
	}
	
	chess_boardSet("17 W\nBb.r.\n....P\nR...n\n.p...\n.kp.P\n.N.K.\n");
	chess_move("a6-d3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.b.r.\n....P\nR...n\n.p.B.\n.kp.P\n.N.K.\n") != 0) {
		printf("test: failed test_move_004\n");
		return false;
	}
	
	chess_boardSet("18 B\nk.bnN\n...q.\nPpppp\nP.PPP\n...QK\nRB...\n");
	chess_move("d6-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk.b.N\n.n.q.\nPpppp\nP.PPP\n...QK\nRB...\n") != 0) {
		printf("test: failed test_move_005\n");
		return false;
	}
	
	chess_boardSet("15 B\n..Qb.\nq.k.r\n...pp\n.p...\nP.PB.\nRN..K\n");
	chess_move("d6-d5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n..Q..\nq.kbr\n...pp\n.p...\nP.PB.\nRN..K\n") != 0) {
		printf("test: failed test_move_006\n");
		return false;
	}
	
	chess_boardSet("17 B\n..kb.\np...p\n.p.q.\nP....\nQPP.P\nRB..K\n");
	chess_move("b4-b3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n..kb.\np...p\n...q.\nPp...\nQPP.P\nRB..K\n") != 0) {
		printf("test: failed test_move_007\n");
		return false;
	}
	
	chess_boardSet("11 B\nkBr.n\n.p.bp\n.ppP.\nP..Q.\n..P.P\nRN..K\n");
	chess_move("c6-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkB..n\n.prbp\n.ppP.\nP..Q.\n..P.P\nRN..K\n") != 0) {
		printf("test: failed test_move_008\n");
		return false;
	}
	
	chess_boardSet("14 W\n..r..\npkq.Q\nB.p.P\np.P.P\nPP...\n..RK.\n");
	chess_move("a4-c2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..r..\npkq.Q\n..p.P\np.P.P\nPPB..\n..RK.\n") != 0) {
		printf("test: failed test_move_009\n");
		return false;
	}
	
	chess_boardSet("19 W\n.kbr.\n...pp\nppp.P\nQPP..\n.nR.K\n....B\n");
	chess_move("e1-d1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.kbr.\n...pp\nppp.P\nQPP..\n.nR.K\n...B.\n") != 0) {
		printf("test: failed test_move_010\n");
		return false;
	}
	
	chess_boardSet("19 W\nb....\np.p..\nPpkn.\n.P.Pr\n.RQBK\n.....\n");
	chess_move("c2-c1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nb....\np.p..\nPpkn.\n.P.Pr\n.R.BK\n..Q..\n") != 0) {
		printf("test: failed test_move_011\n");
		return false;
	}
	
	chess_boardSet("21 W\n.k..r\nb....\n..Q.p\n.pP.P\n...PK\n.BR..\n");
	chess_move("c4-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n.k..r\nb.Q..\n....p\n.pP.P\n...PK\n.BR..\n") != 0) {
		printf("test: failed test_move_012\n");
		return false;
	}
	
	chess_boardSet("15 W\n.q...\nk..Q.\np.P..\n.....\npP.P.\nRNBK.\n");
	chess_move("d5-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n.q...\nkQ...\np.P..\n.....\npP.P.\nRNBK.\n") != 0) {
		printf("test: failed test_move_013\n");
		return false;
	}
	
	chess_boardSet("20 B\n.....\n.k...\n..ppp\n.P.K.\n.P...\n..B..\n");
	chess_move("b5-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.....\n.....\n.kppp\n.P.K.\n.P...\n..B..\n") != 0) {
		printf("test: failed test_move_014\n");
		return false;
	}
	
	chess_boardSet("14 B\nk....\n.p.r.\n.p.bP\nP.p..\nRPPKP\n..B..\n");
	chess_move("d4-e5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk....\n.p.rb\n.p..P\nP.p..\nRPPKP\n..B..\n") != 0) {
		printf("test: failed test_move_015\n");
		return false;
	}
	
	chess_boardSet("13 W\n.qbr.\npkppp\nPp...\n.P..P\nB.RPn\n.N..K\n");
	chess_move("a2-b2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.qbr.\npkppp\nPp...\n.P..P\n.BRPn\n.N..K\n") != 0) {
		printf("test: failed test_move_016\n");
		return false;
	}
	
	chess_boardSet("19 B\n.k..r\n....Q\np.pb.\nP.K.P\n...q.\n..B..\n");
	chess_move("b6-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n....r\n..k.Q\np.pb.\nP.K.P\n...q.\n..B..\n") != 0) {
		printf("test: failed test_move_017\n");
		return false;
	}
	
	chess_boardSet("15 W\nk..qb\n....P\n.p..Q\nn...p\n.PK.P\nRN...\n");
	chess_move("e4-c4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk..qb\n....P\n.pQ..\nn...p\n.PK.P\nRN...\n") != 0) {
		printf("test: failed test_move_018\n");
		return false;
	}
	
	chess_boardSet("15 W\nk...r\n.pqPp\nP.p.n\nNbP..\nP..P.\n.B.RK\n");
	chess_move("d2-d3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk...r\n.pqPp\nP.p.n\nNbPP.\nP....\n.B.RK\n") != 0) {
		printf("test: failed test_move_019\n");
		return false;
	}
	
	chess_boardSet("20 W\nkqb..\np....\n...p.\nP.NPr\n...P.\nR.K.Q\n");
	chess_move("c3-b1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nkqb..\np....\n...p.\nP..Pr\n...P.\nRNK.Q\n") != 0) {
		printf("test: failed test_move_020\n");
		return false;
	}
	
	chess_boardSet("13 W\nk.b.r\n.p.pp\npP.q.\n.....\nP...n\n.RB.K\n");
	chess_move("c1-b2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.b.r\n.p.pp\npP.q.\n.....\nPB..n\n.R..K\n") != 0) {
		printf("test: failed test_move_021\n");
		return false;
	}
	
	chess_boardSet("19 B\n..r..\nk...p\nPpRp.\n..nP.\nPPBKP\n.....\n");
	chess_move("c6-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.....\nk.r.p\nPpRp.\n..nP.\nPPBKP\n.....\n") != 0) {
		printf("test: failed test_move_022\n");
		return false;
	}
	
	chess_boardSet("15 B\nk.qnr\n.....\nNb..p\nP.ppP\n..PP.\n.R.QK\n");
	chess_move("b4-a3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk.qnr\n.....\nN...p\nb.ppP\n..PP.\n.R.QK\n") != 0) {
		printf("test: failed test_move_023\n");
		return false;
	}
	
	chess_boardSet("19 W\nk.br.\n.....\n...P.\nq.p.p\nPR...\nB..QK\n");
	chess_move("d1-c2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk.br.\n.....\n...P.\nq.p.p\nPRQ..\nB...K\n") != 0) {
		printf("test: failed test_move_024\n");
		return false;
	}
	
	chess_boardSet("16 W\nkq.br\n.p.p.\n..n..\n..p.P\nP..P.\nRQ.K.\n");
	chess_move("b1-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nkq.br\n.p.p.\n.Qn..\n..p.P\nP..P.\nR..K.\n") != 0) {
		printf("test: failed test_move_025\n");
		return false;
	}
	
	chess_boardSet("20 W\nk....\n.qb..\np.P.p\nP..p.\n...K.\n...Rn\n");
	chess_move("d1-c1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk....\n.qb..\np.P.p\nP..p.\n...K.\n..R.n\n") != 0) {
		printf("test: failed test_move_026\n");
		return false;
	}
	
	chess_boardSet("17 B\n.kb.r\n..B..\np..pq\nP..P.\n..PKP\n.NR..\n");
	chess_move("e4-d5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.kb.r\n..Bq.\np..p.\nP..P.\n..PKP\n.NR..\n") != 0) {
		printf("test: failed test_move_027\n");
		return false;
	}
	
	chess_boardSet("18 B\nk..r.\nb..p.\np...N\nPB.Pp\nRP..P\n....K\n");
	chess_move("d6-b6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nkr...\nb..p.\np...N\nPB.Pp\nRP..P\n....K\n") != 0) {
		printf("test: failed test_move_028\n");
		return false;
	}
	
	chess_boardSet("15 B\n...b.\nkqpQp\n....N\nP....\nR.P.P\n..BQK\n");
	chess_move("a5-a6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk..b.\n.qpQp\n....N\nP....\nR.P.P\n..BQK\n") != 0) {
		printf("test: failed test_move_029\n");
		return false;
	}
	
	chess_boardSet("20 W\n..qn.\n..p..\nkp.p.\nPK.PB\n..P..\nRN.Q.\n");
	chess_move("e3-d2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..qn.\n..p..\nkp.p.\nPK.P.\n..PB.\nRN.Q.\n") != 0) {
		printf("test: failed test_move_030\n");
		return false;
	}
	
	chess_boardSet("18 W\n.b..r\n.pqnp\nk...P\np.pP.\nP.P.K\nR....\n");
	chess_move("e2-e3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n.b..r\n.pqnp\nk...P\np.pPK\nP.P..\nR....\n") != 0) {
		printf("test: failed test_move_031\n");
		return false;
	}
	
	chess_boardSet("18 B\nQ....\npk..p\n.P.K.\nP....\n.n.p.\nR.B..\n");
	chess_move("a5-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nQ....\n.k..p\n.p.K.\nP....\n.n.p.\nR.B..\n") != 0) {
		printf("test: failed test_move_032\n");
		return false;
	}
	
	chess_boardSet("17 W\n..br.\nk....\nq.pP.\np.N..\nPQP.P\nRB..K\n");
	chess_move("e1-d2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n..br.\nk....\nq.pP.\np.N..\nPQPKP\nRB...\n") != 0) {
		printf("test: failed test_move_033\n");
		return false;
	}
	
	chess_boardSet("12 W\nq..nQ\np.pbp\nk.P..\n.....\nPB.PQ\nR.K..\n");
	chess_move("e6-d5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nq..n.\np.pQp\nk.P..\n.....\nPB.PQ\nR.K..\n") != 0) {
		printf("test: failed test_move_034\n");
		return false;
	}
	
	chess_boardSet("13 W\n.kqbr\n.p.pp\n.npN.\np.PK.\n...P.\nR.BQ.\n");
	chess_move("a1-a2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.kqbr\n.p.pp\n.npN.\np.PK.\nR..P.\n..BQ.\n") != 0) {
		printf("test: failed test_move_035\n");
		return false;
	}
	
	chess_boardSet("20 B\n...nr\npkb..\n..Q.p\nN..K.\nB..P.\nR....\n");
	chess_move("c5-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n...nr\npk...\n.bQ.p\nN..K.\nB..P.\nR....\n") != 0) {
		printf("test: failed test_move_036\n");
		return false;
	}
	
	chess_boardSet("20 B\n.Q..r\n.P.pp\np.kP.\np....\nP.P..\nRNK..\n");
	chess_move("c4-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.Q..r\n.Pkpp\np..P.\np....\nP.P..\nRNK..\n") != 0) {
		printf("test: failed test_move_037\n");
		return false;
	}
	
	chess_boardSet("16 B\n...r.\nqPpP.\np...P\nPB...\n..Kk.\nR....\n");
	chess_move("d2-e1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...r.\nqPpP.\np...P\nPB...\n..K..\nR...k\n") != 0) {
		printf("test: failed test_move_038\n");
		return false;
	}
	
	chess_boardSet("15 B\nk...r\n.ppqp\np..QP\nnP...\n...Pb\nRNB.K\n");
	chess_move("a6-b6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.k..r\n.ppqp\np..QP\nnP...\n...Pb\nRNB.K\n") != 0) {
		printf("test: failed test_move_039\n");
		return false;
	}
	
	chess_boardSet("13 B\n.qb.r\nkQpp.\n..N.p\nP.nPP\n.B..K\nR....\n");
	chess_move("c3-a4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.qb.r\nkQpp.\nn.N.p\nP..PP\n.B..K\nR....\n") != 0) {
		printf("test: failed test_move_040\n");
		return false;
	}
	
	chess_boardSet("12 W\n.B.nr\npk..p\n..p..\n....P\nPbPP.\nR.QK.\n");
	chess_move("c1-b1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.B.nr\npk..p\n..p..\n....P\nPbPP.\nRQ.K.\n") != 0) {
		printf("test: failed test_move_041\n");
		return false;
	}
	
	chess_boardSet("12 B\n.N.br\n.pp.p\n.....\nkPnKP\n..PP.\n.RB.Q\n");
	chess_move("a3-a2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.N.br\n.pp.p\n.....\n.PnKP\nk.PP.\n.RB.Q\n") != 0) {
		printf("test: failed test_move_042\n");
		return false;
	}
	
	chess_boardSet("14 W\n..b..\nkqpp.\np..Br\n.nPp.\nRp.N.\n...K.\n");
	chess_move("a2-a4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..b..\nkqpp.\nR..Br\n.nPp.\n.p.N.\n...K.\n") != 0) {
		printf("test: failed test_move_043\n");
		return false;
	}
	
	chess_boardSet("21 W\nk....\npq.B.\n..pN.\n..P.P\n.PR..\n....K\n");
	chess_move("b2-b3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\nk....\npq.B.\n..pN.\n.PP.P\n..R..\n....K\n") != 0) {
		printf("test: failed test_move_044\n");
		return false;
	}
	
	chess_boardSet("19 W\n.q..r\n.kp..\n..Qpb\nN.p.P\nn.B..\n.R..K\n");
	chess_move("b1-b3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.q..r\n.kp..\n..Qpb\nNRp.P\nn.B..\n....K\n") != 0) {
		printf("test: failed test_move_045\n");
		return false;
	}
	
	chess_boardSet("16 W\nQ.q.b\nk.P.r\n.p...\nB.P.p\n...P.\nRN..K\n");
	chess_move("a3-a4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nQ.q.b\nk.P.r\nBp...\n..P.p\n...P.\nRN..K\n") != 0) {
		printf("test: failed test_move_046\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..nr\n.p...\n..p.P\nPNp..\nQ...b\nRq..K\n");
	chess_move("b3-c1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk..nr\n.p...\n..p.P\nP.p..\nQ...b\nRqN.K\n") != 0) {
		printf("test: failed test_move_047\n");
		return false;
	}
	
	chess_boardSet("12 W\nkqbr.\nppP..\nNB...\n...Pp\nP.P.P\n.R.QK\n");
	chess_move("b1-c1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkqbr.\nppP..\nNB...\n...Pp\nP.P.P\n..RQK\n") != 0) {
		printf("test: failed test_move_048\n");
		return false;
	}
	
	chess_boardSet("17 W\nkqbr.\n.p...\n.P.pn\np..Pp\nPB...\nRK.Q.\n");
	chess_move("d1-b3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nkqbr.\n.p...\n.P.pn\npQ.Pp\nPB...\nRK...\n") != 0) {
		printf("test: failed test_move_049\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..nr\nPN..p\n..p..\n...p.\n..PBK\n.R.Q.\n");
	chess_move("b1-b2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk..nr\nPN..p\n..p..\n...p.\n.RPBK\n...Q.\n") != 0) {
		printf("test: failed test_move_050\n");
		return false;
	}
	
	chess_boardSet("17 W\n.....\npb.pr\nPk.p.\np.pK.\n.PPQ.\n.RB..\n");
	chess_move("d3-c3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.....\npb.pr\nPk.p.\np.K..\n.PPQ.\n.RB..\n") != 0) {
		printf("test: failed test_move_051\n");
		return false;
	}
	
	chess_boardSet("13 B\nk..n.\npp...\nP.p.P\n..B.P\n.PPq.\n.R.QK\n");
	chess_move("d2-e3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..n.\npp...\nP.p.P\n..B.q\n.PP..\n.R.QK\n") != 0) {
		printf("test: failed test_move_052\n");
		return false;
	}
	
	chess_boardSet("17 B\n.k.r.\n.....\n.q..p\nQ.P.P\nPP.P.\nR.B.K\n");
	chess_move("b4-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.k.r.\n..q..\n....p\nQ.P.P\nPP.P.\nR.B.K\n") != 0) {
		printf("test: failed test_move_053\n");
		return false;
	}
	
	chess_boardSet("13 B\nk..n.\nq...r\np.ppp\n.Pb..\nP.P.P\nRNB.K\n");
	chess_move("a4-a3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..n.\nq...r\n..ppp\npPb..\nP.P.P\nRNB.K\n") != 0) {
		printf("test: failed test_move_054\n");
		return false;
	}
	
	chess_boardSet("13 W\n...br\np.Q.p\nk..pN\n....P\nRPp..\n..BqK\n");
	chess_move("c5-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n...br\npQ..p\nk..pN\n....P\nRPp..\n..BqK\n") != 0) {
		printf("test: failed test_move_055\n");
		return false;
	}
	
	chess_boardSet("15 B\nk.b.r\n.p.pp\np..Pn\nP.p.B\n..PKP\n.q...\n");
	chess_move("c6-b6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkb..r\n.p.pp\np..Pn\nP.p.B\n..PKP\n.q...\n") != 0) {
		printf("test: failed test_move_056\n");
		return false;
	}
	
	chess_boardSet("11 B\n.q.nr\nk.p.p\nP...b\n...P.\n.BPP.\n..Q.K\n");
	chess_move("e4-c6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.qbnr\nk.p.p\nP....\n...P.\n.BPP.\n..Q.K\n") != 0) {
		printf("test: failed test_move_057\n");
		return false;
	}
	
	chess_boardSet("14 W\nk....\nb..pr\nP.p.p\n.B..P\nP.Qq.\n.RK..\n");
	chess_move("c2-c4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk....\nb..pr\nP.Q.p\n.B..P\nP..q.\n.RK..\n") != 0) {
		printf("test: failed test_move_058\n");
		return false;
	}
	
	chess_boardSet("13 W\nk...r\n.n..q\npPb.p\n..P.P\nP.PQK\n.RB..\n");
	chess_move("e2-d1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk...r\n.n..q\npPb.p\n..P.P\nP.PQ.\n.RBK.\n") != 0) {
		printf("test: failed test_move_059\n");
		return false;
	}
	
	chess_boardSet("14 W\nq.bnr\np..pp\n..p.P\n.PNP.\n..PK.\nk....\n");
	chess_move("d2-e1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nq.bnr\np..pp\n..p.P\n.PNP.\n..P..\nk...K\n") != 0) {
		printf("test: failed test_move_060\n");
		return false;
	}
	
	chess_boardSet("15 W\nkn.b.\n.pp..\np.NP.\nqBPpr\n.....\n.R.QK\n");
	chess_move("d1-d3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkn.b.\n.pp..\np.NP.\nqBPQr\n.....\n.R..K\n") != 0) {
		printf("test: failed test_move_061\n");
		return false;
	}
	
	chess_boardSet("13 B\n..b.r\nk.Q.p\np.q.p\n..PK.\nP.B..\nRN...\n");
	chess_move("c4-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n..b.r\nk.Q.p\npq..p\n..PK.\nP.B..\nRN...\n") != 0) {
		printf("test: failed test_move_062\n");
		return false;
	}
	
	chess_boardSet("11 B\n..bnr\nk.p..\n.p.Pp\n.q..P\nQ..K.\nRN...\n");
	chess_move("e6-e5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..bn.\nk.p.r\n.p.Pp\n.q..P\nQ..K.\nRN...\n") != 0) {
		printf("test: failed test_move_063\n");
		return false;
	}
	
	chess_boardSet("18 B\n....Q\n..kp.\n.p..p\n..B..\nP.Q.K\nRq...\n");
	chess_move("c5-b6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.k..Q\n...p.\n.p..p\n..B..\nP.Q.K\nRq...\n") != 0) {
		printf("test: failed test_move_064\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kB.r\n.....\nQp..p\n....n\nP.PPP\n...RK\n");
	chess_move("d2-e3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.kB.r\n.....\nQp..p\n....P\nP.P.P\n...RK\n") != 0) {
		printf("test: failed test_move_065\n");
		return false;
	}
	
	chess_boardSet("19 B\nkq...\nppp.p\nn.NrP\nP..Kp\n.....\n..R.B\n");
	chess_move("d4-d6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nkq.r.\nppp.p\nn.N.P\nP..Kp\n.....\n..R.B\n") != 0) {
		printf("test: failed test_move_066\n");
		return false;
	}
	
	chess_boardSet("20 B\n.kr..\n..pBp\n....P\np.p.P\nP.P..\nK...R\n");
	chess_move("b6-a6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk.r..\n..pBp\n....P\np.p.P\nP.P..\nK...R\n") != 0) {
		printf("test: failed test_move_067\n");
		return false;
	}
	
	chess_boardSet("16 W\n.q.r.\n..k.p\np.pp.\nN.Pb.\nRnQKP\n...B.\n");
	chess_move("d2-c1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.q.r.\n..k.p\np.pp.\nN.Pb.\nRnQ.P\n..KB.\n") != 0) {
		printf("test: failed test_move_068\n");
		return false;
	}
	
	chess_boardSet("19 B\nkq.r.\npnpb.\nR..p.\n.PPp.\n..QKP\n.....\n");
	chess_move("d6-c6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nkqr..\npnpb.\nR..p.\n.PPp.\n..QKP\n.....\n") != 0) {
		printf("test: failed test_move_069\n");
		return false;
	}
	
	chess_boardSet("18 W\nq.b..\n..p..\nPk...\n...Pr\nP.NKQ\n..R..\n");
	chess_move("a2-a3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nq.b..\n..p..\nPk...\nP..Pr\n..NKQ\n..R..\n") != 0) {
		printf("test: failed test_move_070\n");
		return false;
	}
	
	chess_boardSet("15 W\nkq.b.\n.B...\n.Q.r.\n..PPp\nPp.KP\nR....\n");
	chess_move("c3-c4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkq.b.\n.B...\n.QPr.\n...Pp\nPp.KP\nR....\n") != 0) {
		printf("test: failed test_move_071\n");
		return false;
	}
	
	chess_boardSet("21 W\n....r\npkpq.\nb..Pp\n..PP.\nRP.n.\nQ..K.\n");
	chess_move("d3-e4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n....r\npkpq.\nb..PP\n..P..\nRP.n.\nQ..K.\n") != 0) {
		printf("test: failed test_move_072\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq.nr\n...p.\nQp.b.\nP..PP\nRP...\n.NBK.\n");
	chess_move("d4-e5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkq.nr\n...pb\nQp...\nP..PP\nRP...\n.NBK.\n") != 0) {
		printf("test: failed test_move_073\n");
		return false;
	}
	
	chess_boardSet("18 W\n.Qb.r\nk.Bp.\np....\n...pP\nP....\nR...K\n");
	chess_move("b6-a5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n..b.r\nQ.Bp.\np....\n...pP\nP....\nR...K\n") != 0) {
		printf("test: failed test_move_074\n");
		return false;
	}
	
	chess_boardSet("16 B\nkq.br\np.p..\nP...p\n.pN..\nB..pK\nR....\n");
	chess_move("b6-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk..br\npqp..\nP...p\n.pN..\nB..pK\nR....\n") != 0) {
		printf("test: failed test_move_075\n");
		return false;
	}
	
	chess_boardSet("11 B\nq.b.r\n.kpp.\n.p..p\n.PP.P\nPQ.P.\n...RK\n");
	chess_move("a6-a2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..b.r\n.kpp.\n.p..p\n.PP.P\nqQ.P.\n...RK\n") != 0) {
		printf("test: failed test_move_076\n");
		return false;
	}
	
	chess_boardSet("16 W\n.....\n.kn.p\nrp...\nQPp..\nP.PPP\n.R..K\n");
	chess_move("a3-b2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.....\n.kn.p\nrp...\n.Pp..\nPQPPP\n.R..K\n") != 0) {
		printf("test: failed test_move_077\n");
		return false;
	}
	
	chess_boardSet("18 B\n...r.\nkp..p\np....\n..P.q\nP..P.\n.N.RK\n");
	chess_move("d6-d5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.....\nkp.rp\np....\n..P.q\nP..P.\n.N.RK\n") != 0) {
		printf("test: failed test_move_078\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..r.\npq...\n.pPpb\n..p..\nPB..P\nR..QK\n");
	chess_move("e4-d3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk..r.\npq...\n.pPp.\n..pb.\nPB..P\nR..QK\n") != 0) {
		printf("test: failed test_move_079\n");
		return false;
	}
	
	chess_boardSet("12 B\n.q.nr\nk.p.p\n..P.b\nNP.Pp\nP...K\nR.B.Q\n");
	chess_move("e4-d4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.q.nr\nk.p.p\n..Pb.\nNP.Pp\nP...K\nR.B.Q\n") != 0) {
		printf("test: failed test_move_080\n");
		return false;
	}
	
	chess_boardSet("19 W\n.N.nr\n.q.b.\n.ppp.\nP..K.\nP.k..\nR.BQ.\n");
	chess_move("a3-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.N.nr\n.q.b.\n.Ppp.\n...K.\nP.k..\nR.BQ.\n") != 0) {
		printf("test: failed test_move_081\n");
		return false;
	}
	
	chess_boardSet("11 B\n.Q.qr\nk...p\nppppP\nPP...\n..PK.\nRNBQ.\n");
	chess_move("d6-d5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.Q..r\nk..qp\nppppP\nPP...\n..PK.\nRNBQ.\n") != 0) {
		printf("test: failed test_move_082\n");
		return false;
	}
	
	chess_boardSet("19 B\nq...r\nkb..p\nBPp..\nPPKPp\n.....\nRNQ..\n");
	chess_move("b5-a4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nq...r\nk...p\nbPp..\nPPKPp\n.....\nRNQ..\n") != 0) {
		printf("test: failed test_move_083\n");
		return false;
	}
	
	chess_boardSet("17 W\n.qbNr\n..p..\npk...\nPQ.p.\nRP.K.\n..B..\n");
	chess_move("d2-e1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.qbNr\n..p..\npk...\nPQ.p.\nRP...\n..B.K\n") != 0) {
		printf("test: failed test_move_084\n");
		return false;
	}
	
	chess_boardSet("20 W\nkq...\n.pp.p\n....B\np..r.\nP.PQP\nR..K.\n");
	chess_move("d2-b4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nkq...\n.pp.p\n.Q..B\np..r.\nP.P.P\nR..K.\n") != 0) {
		printf("test: failed test_move_085\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq.nr\n....p\np..pb\nP.p.P\n.P.N.\nR.BK.\n");
	chess_move("d6-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkq..r\n.n..p\np..pb\nP.p.P\n.P.N.\nR.BK.\n") != 0) {
		printf("test: failed test_move_086\n");
		return false;
	}
	
	chess_boardSet("13 B\n.k..r\np.pbp\n..n..\n.q..P\n..PPK\nR.BQ.\n");
	chess_move("e6-c6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.kr..\np.pbp\n..n..\n.q..P\n..PPK\nR.BQ.\n") != 0) {
		printf("test: failed test_move_087\n");
		return false;
	}
	
	chess_boardSet("16 W\n..bn.\npk.pr\nQ.p..\n..P.p\nq..PP\n.B.K.\n");
	chess_move("d2-e3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n..bn.\npk.pr\nQ.p..\n..P.P\nq...P\n.B.K.\n") != 0) {
		printf("test: failed test_move_088\n");
		return false;
	}
	
	chess_boardSet("17 W\nkR...\n...b.\np..pp\nB.pP.\nq.P.K\n..Q..\n");
	chess_move("c1-d1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nkR...\n...b.\np..pp\nB.pP.\nq.P.K\n...Q.\n") != 0) {
		printf("test: failed test_move_089\n");
		return false;
	}
	
	chess_boardSet("17 W\nkr...\nqPp.p\nB.bpP\n.....\n....K\nRQ...\n");
	chess_move("b1-b2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nkr...\nqPp.p\nB.bpP\n.....\n.Q..K\nR....\n") != 0) {
		printf("test: failed test_move_090\n");
		return false;
	}
	
	chess_boardSet("13 B\nk..r.\nR.pbp\n.q.p.\n..NPP\n.PpB.\n..Q.K\n");
	chess_move("b4-b6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nkq.r.\nR.pbp\n...p.\n..NPP\n.PpB.\n..Q.K\n") != 0) {
		printf("test: failed test_move_091\n");
		return false;
	}
	
	chess_boardSet("16 B\nk.bnr\n.....\np.P.p\nPqN.P\n...P.\nR.Q.K\n");
	chess_move("b3-b2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk.bnr\n.....\np.P.p\nP.N.P\n.q.P.\nR.Q.K\n") != 0) {
		printf("test: failed test_move_092\n");
		return false;
	}
	
	chess_boardSet("18 W\n..Qbr\n..ppp\nk..q.\np.Pn.\nP.RP.\nB..K.\n");
	chess_move("c6-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n...br\n..Qpp\nk..q.\np.Pn.\nP.RP.\nB..K.\n") != 0) {
		printf("test: failed test_move_093\n");
		return false;
	}
	
	chess_boardSet("14 B\n.kq..\np..Pr\n..p.N\nP....\nRp.B.\n...bK\n");
	chess_move("d1-c2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.kq..\np..Pr\n..p.N\nP....\nRpbB.\n....K\n") != 0) {
		printf("test: failed test_move_094\n");
		return false;
	}
	
	chess_boardSet("17 B\n.k..r\np..Pb\nP...p\n..Q.N\n..p..\n.RB.K\n");
	chess_move("b6-c6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n..k.r\np..Pb\nP...p\n..Q.N\n..p..\n.RB.K\n") != 0) {
		printf("test: failed test_move_095\n");
		return false;
	}
	
	chess_boardSet("12 B\nkqb.r\n....p\np.n.Q\n...PP\nPPP..\nRB.K.\n");
	chess_move("b6-e3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk.b.r\n....p\np.n.Q\n...Pq\nPPP..\nRB.K.\n") != 0) {
		printf("test: failed test_move_096\n");
		return false;
	}
	
	chess_boardSet("16 B\nk....\n.PpNp\nq..pP\n.P.Q.\n...P.\nRB..K\n");
	chess_move("a4-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk....\n.qpNp\n...pP\n.P.Q.\n...P.\nRB..K\n") != 0) {
		printf("test: failed test_move_097\n");
		return false;
	}
	
	chess_boardSet("21 W\n...rb\n..p..\n.kp.p\nN.P.P\nP..PK\n...B.\n");
	chess_move("a3-c4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n...rb\n..p..\n.kN.p\n..P.P\nP..PK\n...B.\n") != 0) {
		printf("test: failed test_move_098\n");
		return false;
	}
	
	chess_boardSet("14 W\n.b.r.\n.NPpp\nk.n..\n.BP..\nP..PP\nR..K.\n");
	chess_move("b3-c2\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.b.r.\n.NPpp\nk.n..\n..P..\nP.BPP\nR..K.\n") != 0) {
		printf("test: failed test_move_099\n");
		return false;
	}
	
	chess_boardSet("14 W\nkq..r\np...p\nRpPpB\n.....\n.P..b\n.N..K\n");
	chess_move("c4-c5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nkq..r\np.P.p\nRp.pB\n.....\n.P..b\n.N..K\n") != 0) {
		printf("test: failed test_move_100\n");
		return false;
	}
	
	return true;
}

bool test_undo() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_move("b1-a3\n");
	chess_move("d5-d4\n");
	chess_move("d2-d3\n");
	chess_move("a5-a4\n");
	chess_move("c1-e3\n");
	chess_move("c5-c4\n");
	chess_move("e3-e4\n");
	chess_move("b6-c5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 B\nkqbnr\nppppp\n.....\nN....\nPPPPP\nR.BQK\n") != 0) {
		printf("test: failed test_undo_001\n");
		return false;
	}
	
	chess_boardSet("17 B\nr....\n..k.p\n.pQ.Q\n....n\nPp.P.\n.RBK.\n");
	chess_move("c5-d5\n");
	chess_move("e4-c2\n");
	chess_move("b4-b3\n");
	chess_move("c4-b5\n");
	chess_move("e5-e4\n");
	chess_move("d2-d3\n");
	chess_move("b3-c2\n");
	chess_move("d3-d4\n");
	chess_move("c2-d1\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nr....\n...kp\n.pQ..\n....n\nPpQP.\n.RBK.\n") != 0) {
		printf("test: failed test_undo_002\n");
		return false;
	}
	
	chess_boardSet("12 W\n..b.r\nkq.p.\nQ.N..\n..p.p\nPBP.P\n.R.K.\n");
	chess_move("b2-c1\n");
	chess_move("b5-b3\n");
	chess_move("a4-b4\n");
	chess_move("b3-a4\n");
	chess_move("b4-b2\n");
	chess_move("a4-a2\n");
	chess_move("c4-b6\n");
	chess_move("a5-a6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n..b.r\nkq.p.\nQ.N..\n..p.p\nP.P.P\n.RBK.\n") != 0) {
		printf("test: failed test_undo_003\n");
		return false;
	}
	
	chess_boardSet("13 W\nkq.r.\n..Q.p\np...b\nP..pP\n..PP.\nR.B.K\n");
	chess_move("c5-b5\n");
	chess_move("e4-d4\n");
	chess_move("c1-b1\n");
	chess_move("b6-a5\n");
	chess_move("e3-e4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nkq.r.\n.Q..p\np...b\nP..pP\n..PP.\nR.B.K\n") != 0) {
		printf("test: failed test_undo_004\n");
		return false;
	}
	
	chess_boardSet("15 B\n.q.b.\npk.pr\nn.p.p\npPPPP\nP...Q\nR.K..\n");
	chess_move("d5-d4\n");
	chess_move("e2-d2\n");
	chess_move("e5-c5\n");
	chess_move("d3-c4\n");
	chess_move("c5-c6\n");
	chess_move("c4-c5\n");
	chess_move("d4-e3\n");
	chess_move("d2-e2\n");
	chess_move("d6-e6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.q.b.\npk..r\nn.ppp\npPPPP\nP..Q.\nR.K..\n") != 0) {
		printf("test: failed test_undo_005\n");
		return false;
	}
	
	chess_boardSet("14 B\n.r...\npk.bp\n..ppn\n..PP.\nPPQ.K\nRB...\n");
	chess_move("b5-b4\n");
	chess_move("e2-e1\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.r...\npk.bp\n..ppn\n..PP.\nPPQ.K\nRB...\n") != 0) {
		printf("test: failed test_undo_006\n");
		return false;
	}
	
	chess_boardSet("20 B\nkn.qr\n.....\nB.pNP\n.....\n.pb.Q\n....K\n");
	chess_move("c2-e4\n");
	chess_move("e2-d2\n");
	chess_move("e4-d5\n");
	chess_move("d2-b4\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\nkn.qr\n.....\nB.pNb\n.....\n.p.Q.\n....K\n") != 0) {
		printf("test: failed test_undo_007\n");
		return false;
	}
	
	chess_boardSet("19 W\nkbr..\np..p.\n..qpp\n..Q.P\npnP..\n..B.K\n");
	chess_move("c1-d2\n");
	chess_move("c4-c5\n");
	chess_move("d2-d1\n");
	chess_move("a6-b5\n");
	chess_move("c3-d4\n");
	chess_move("c5-c2\n");
	chess_move("d4-e5\n");
	chess_move("b6-d4\n");
	chess_move("d1-c1\n");
	chess_move("c2-b3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nkbr..\np..p.\n..qpp\n..Q.P\npnPB.\n....K\n") != 0) {
		printf("test: failed test_undo_008\n");
		return false;
	}
	
	chess_boardSet("13 B\nkqb..\n.Pp..\n...pr\nPn...\n..PPP\nRNQ.K\n");
	chess_move("c6-d5\n");
	chess_move("c1-b2\n");
	chess_move("d5-c6\n");
	chess_move("b5-a6\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nkq...\n.Ppb.\n...pr\nPn...\n.QPPP\nRN..K\n") != 0) {
		printf("test: failed test_undo_009\n");
		return false;
	}
	
	chess_boardSet("20 W\n..qn.\n.N..B\np.pbp\nPk..P\n..pPK\n.RQ..\n");
	chess_move("d2-d3\n");
	chess_move("b3-a2\n");
	chess_move("b1-a1\n");
	chess_move("c6-d5\n");
	chess_move("c1-b2\n");
	chess_move("a2-a3\n");
	chess_move("e5-e6\n");
	chess_move("a3-b4\n");
	chess_move("e3-d4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n..qn.\n.N..B\np.pbp\nPk..P\n..pPK\n.RQ..\n") != 0) {
		printf("test: failed test_undo_010\n");
		return false;
	}
	
	chess_boardSet("15 B\n.kbQ.\n.n...\n.p..p\npP..P\nPBP.K\n..R..\n");
	chess_move("b5-d4\n");
	chess_move("b2-c3\n");
	chess_move("d4-e6\n");
	chess_move("c3-e1\n");
	chess_move("c6-a4\n");
	chess_move("d6-d1\n");
	chess_move("a4-a5\n");
	chess_move("d1-d5\n");
	chess_move("b6-c6\n");
	chess_move("d5-c4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.kbQ.\n.....\n.p.np\npP..P\nPBP.K\n..R..\n") != 0) {
		printf("test: failed test_undo_011\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..rb\n.qp.p\n.p.pn\n.P...\nP.PP.\nRNK..\n");
	chess_move("c2-c3\n");
	chess_move("e6-d5\n");
	chess_move("b1-a3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..rb\n.qp.p\n.p.pn\n.P...\nP.PP.\nRNK..\n") != 0) {
		printf("test: failed test_undo_012\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kb.r\npp..B\n..npq\nPQ...\n.P.K.\nRN...\n");
	chess_move("b3-b5\n");
	chess_move("c6-c5\n");
	chess_move("e5-d5\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.k..r\npQb.B\n..npq\nP....\n.P.K.\nRN...\n") != 0) {
		printf("test: failed test_undo_013\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..qr\n..R.p\n....P\n..pP.\n.P..K\n.nBb.\n");
	chess_move("d6-c6\n");
	chess_move("c5-a5\n");
	chess_move("d1-c2\n");
	chess_move("e2-d2\n");
	chess_move("c6-c5\n");
	chess_move("d2-d1\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk..qr\n..R.p\n....P\n..pP.\n.P..K\n.nBb.\n") != 0) {
		printf("test: failed test_undo_014\n");
		return false;
	}
	
	chess_boardSet("11 B\nk.b.r\nqnp..\nPp..p\n..BP.\nR.P.P\n...QK\n");
	chess_move("b4-b3\n");
	chess_move("e1-d2\n");
	chess_move("a5-b6\n");
	chess_move("d1-a1\n");
	chess_move("b6-a5\n");
	chess_move("a1-c1\n");
	chess_move("c6-b6\n");
	chess_move("c3-b4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.b.r\nqnp..\nP...p\n.pBP.\nR.P.P\n...QK\n") != 0) {
		printf("test: failed test_undo_015\n");
		return false;
	}
	
	chess_boardSet("18 W\nkq..r\np.pQ.\nb.P..\nn...p\nPP..P\n...KR\n");
	chess_move("d1-c2\n");
	chess_move("b6-b2\n");
	chess_move("d5-d2\n");
	chess_move("e6-c6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nkq..r\np.pQ.\nb.P..\nn...p\nPP..P\n...KR\n") != 0) {
		printf("test: failed test_undo_016\n");
		return false;
	}
	
	chess_boardSet("14 B\n...nr\nk.qp.\nbpN..\n.RpBp\nP.PK.\n...Q.\n");
	chess_move("a5-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n...nr\n.kqp.\nbpN..\n.RpBp\nP.PK.\n...Q.\n") != 0) {
		printf("test: failed test_undo_017\n");
		return false;
	}
	
	chess_boardSet("21 W\n.k.rB\npbp.p\n...p.\nn.PP.\npQ...\nR...K\n");
	chess_move("b2-c2\n");
	chess_move("d6-d5\n");
	chess_move("c2-a4\n");
	chess_move("c5-c4\n");
	chess_move("e1-d1\n");
	chess_move("b5-a6\n");
	chess_move("c3-d4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "22 W\n.k..B\npbprp\n...p.\nn.PP.\np.Q..\nR...K\n") != 0) {
		printf("test: failed test_undo_018\n");
		return false;
	}
	
	chess_boardSet("21 W\n....q\npk.Q.\n....n\npPpP.\nPK...\nR....\n");
	chess_move("d5-c4\n");
	chess_move("e4-d6\n");
	chess_move("b3-b4\n");
	chess_move("a5-a4\n");
	chess_move("b2-b1\n");
	chess_move("e6-e1\n");
	chess_move("c4-e4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n....q\npk.Q.\n....n\npPpP.\nPK...\nR....\n") != 0) {
		printf("test: failed test_undo_019\n");
		return false;
	}
	
	chess_boardSet("19 W\nk....\n.p...\np....\nPqbP.\nBP.p.\nRN.QK\n");
	chess_move("b1-c3\n");
	chess_move("b3-d1\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk....\n.p...\np....\nPqNP.\nBP.p.\nR..QK\n") != 0) {
		printf("test: failed test_undo_020\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..qr\nppbpp\n....n\nNPpPK\nPBP.P\n..R.Q\n");
	chess_move("c5-b6\n");
	chess_move("d3-d4\n");
	chess_move("d6-b4\n");
	chess_move("e3-d3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk..qr\nppbpp\n....n\nNPpPK\nPBP.P\n..R.Q\n") != 0) {
		printf("test: failed test_undo_021\n");
		return false;
	}
	
	chess_boardSet("21 W\n...r.\n.p.bP\nkp..B\n....P\n.....\n..NK.\n");
	chess_move("e5-e6\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n...r.\n.p.bP\nkp..B\n....P\n.....\n..NK.\n") != 0) {
		printf("test: failed test_undo_022\n");
		return false;
	}
	
	chess_boardSet("21 W\n.....\npkN..\n.p..q\n.P.rp\nBQ..P\nR...K\n");
	chess_move("b2-c3\n");
	chess_move("d3-d2\n");
	chess_move("c3-c1\n");
	chess_move("d2-c2\n");
	chess_move("c5-a6\n");
	chess_move("c2-c3\n");
	chess_move("a2-a3\n");
	chess_move("e4-d3\n");
	chess_move("a1-b1\n");
	chess_move("d3-d2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "22 W\n.....\npkN..\n.p..q\n.PQ.p\nB..rP\nR...K\n") != 0) {
		printf("test: failed test_undo_023\n");
		return false;
	}
	
	chess_boardSet("15 W\n....r\n.kPqp\np..p.\nPR...\n..pKP\n..B..\n");
	chess_move("d2-e3\n");
	chess_move("b5-c4\n");
	chess_move("b3-b5\n");
	chess_move("c4-b4\n");
	chess_move("c5-c6\n");
	chess_move("e6-c6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n....r\n.kPqp\np..p.\nPR...\n..pKP\n..B..\n") != 0) {
		printf("test: failed test_undo_024\n");
		return false;
	}
	
	chess_boardSet("12 W\nk..n.\n...qr\n..ppp\n..P.P\nP.NPB\nR..QK\n");
	chess_move("c2-b4\n");
	chess_move("a6-b5\n");
	chess_move("b4-c2\n");
	chess_move("b5-b4\n");
	chess_move("d1-c1\n");
	chess_move("b4-a3\n");
	chess_move("c2-b4\n");
	chess_move("d5-c5\n");
	chess_move("b4-c2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk..n.\n...qr\n..ppp\n..P.P\nP.NPB\nR..QK\n") != 0) {
		printf("test: failed test_undo_025\n");
		return false;
	}
	
	chess_boardSet("12 B\n..qnr\n.kp..\n....p\n..Npb\npBQ.P\n....K\n");
	chess_move("c6-b6\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n..qnr\n.kp..\n....p\n..Npb\npBQ.P\n....K\n") != 0) {
		printf("test: failed test_undo_026\n");
		return false;
	}
	
	chess_boardSet("11 B\n..bn.\nkpqp.\n.Kp..\npP.r.\nP.P..\nRB..Q\n");
	chess_move("a5-a4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..bn.\n.pqp.\nkKp..\npP.r.\nP.P..\nRB..Q\n") != 0) {
		printf("test: failed test_undo_027\n");
		return false;
	}
	
	chess_boardSet("14 B\nk.b.r\npp..p\n.....\nPp.nQ\n.....\nRNB.K\n");
	chess_move("d3-c5\n");
	chess_move("e1-d1\n");
	chess_move("c5-a4\n");
	chess_move("c1-c2\n");
	chess_move("c6-d6\n");
	chess_move("c2-e4\n");
	chess_move("d6-b4\n");
	chess_move("e3-d3\n");
	chess_move("a4-c5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.b.r\npp..p\n.....\nPp.nQ\n.....\nRNB.K\n") != 0) {
		printf("test: failed test_undo_028\n");
		return false;
	}
	
	chess_boardSet("16 W\nk..br\n.N.Pp\nPppq.\n...P.\nP.K..\nRnBQ.\n");
	chess_move("c2-b1\n");
	chess_move("d4-a1\n");
	chess_move("b1-a1\n");
	chess_move("a6-a5\n");
	chess_move("b5-a3\n");
	chess_move("a5-a6\n");
	chess_move("c1-e3\n");
	chess_move("a6-a5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk..br\n.N.Pp\nPpp..\n...P.\nP....\nqKBQ.\n") != 0) {
		printf("test: failed test_undo_029\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..nr\np.qNp\nbp..P\n...p.\nPPPP.\n.RBQK\n");
	chess_move("d6-e4\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk...r\np.qNp\nbp..n\n...p.\nPPPP.\n.RBQK\n") != 0) {
		printf("test: failed test_undo_030\n");
		return false;
	}
	
	chess_boardSet("19 B\n.k..r\n.p.pp\n.....\n...p.\nq..P.\nR..K.\n");
	chess_move("a2-a6\n");
	chess_move("a1-b1\n");
	chess_move("b6-c5\n");
	chess_move("d1-e1\n");
	chess_move("a6-a1\n");
	chess_move("e1-d1\n");
	chess_move("a1-a3\n");
	chess_move("d1-c2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nqk..r\n.p.pp\n.....\n...p.\n...P.\n.R.K.\n") != 0) {
		printf("test: failed test_undo_031\n");
		return false;
	}
	
	chess_boardSet("19 W\n..q.r\nkp..p\nPP...\n..pPP\n.bQ..\n.R.K.\n");
	chess_move("b1-a1\n");
	chess_move("c6-d6\n");
	chess_move("c2-c1\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n..q.r\nkp..p\nPP...\n..pPP\n.bQ..\nR..K.\n") != 0) {
		printf("test: failed test_undo_032\n");
		return false;
	}
	
	chess_boardSet("13 B\nq.r..\nk.bP.\npPp.p\n..N..\nRP..P\n.BK.Q\n");
	chess_move("a4-a3\n");
	chess_move("c1-d1\n");
	chess_move("c5-b5\n");
	chess_move("c3-b5\n");
	chess_move("c4-c3\n");
	chess_move("b2-c3\n");
	chess_move("c6-c3\n");
	chess_move("b1-c2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nq.r..\nk.bP.\npPp.p\n..N..\nRP..P\n.BK.Q\n") != 0) {
		printf("test: failed test_undo_033\n");
		return false;
	}
	
	chess_boardSet("12 B\nqb.N.\nk.pp.\npp.Q.\n..P.n\nPPB..\nR...K\n");
	chess_move("a6-e2\n");
	chess_move("c2-d3\n");
	chess_move("e2-b2\n");
	chess_move("d3-e2\n");
	chess_move("b6-b5\n");
	chess_move("e1-d2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.b.N.\nk.pp.\npp.Q.\n..P.n\nPPB.q\nR...K\n") != 0) {
		printf("test: failed test_undo_034\n");
		return false;
	}
	
	chess_boardSet("15 W\nkb.n.\n.p.pB\n.Pp.p\nN...K\nP..q.\nR....\n");
	chess_move("e3-d3\n");
	chess_move("d2-c2\n");
	chess_move("a1-d1\n");
	chess_move("e4-e3\n");
	chess_move("d1-c1\n");
	chess_move("b6-c5\n");
	chess_move("d3-c2\n");
	chess_move("a6-a5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nkb.n.\n.p.pB\n.Pp.p\nN...K\nP..q.\nR....\n") != 0) {
		printf("test: failed test_undo_035\n");
		return false;
	}
	
	chess_boardSet("14 B\n.Qbr.\nk.pp.\np....\nP.pKP\nRPBn.\n.....\n");
	chess_move("d2-e4\n");
	chess_move("c2-b3\n");
	chess_move("a4-b3\n");
	chess_move("d3-c3\n");
	chess_move("c6-b5\n");
	chess_move("c3-d3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.Qbr.\nk.pp.\np...n\nP.pKP\nRPB..\n.....\n") != 0) {
		printf("test: failed test_undo_036\n");
		return false;
	}
	
	chess_boardSet("17 B\n....r\n.kpbp\nnR.p.\nP..P.\n..QNP\n....K\n");
	chess_move("e5-e4\n");
	chess_move("b4-d4\n");
	chess_move("d5-a2\n");
	chess_move("d2-b1\n");
	chess_move("c5-c4\n");
	chess_move("c2-c1\n");
	chess_move("c4-d3\n");
	chess_move("c1-c3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n....r\n.kpb.\nn..Rp\nP..P.\n..QNP\n....K\n") != 0) {
		printf("test: failed test_undo_037\n");
		return false;
	}
	
	chess_boardSet("12 W\n.k.r.\np.p.p\n...pn\nQb..B\n.PPqP\n.RN.K\n");
	chess_move("c1-d3\n");
	chess_move("d2-b4\n");
	chess_move("e3-d2\n");
	chess_move("c5-c4\n");
	chess_move("a3-a4\n");
	chess_move("b3-c2\n");
	chess_move("e2-e3\n");
	chess_move("b4-b5\n");
	chess_move("a4-a3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.k.r.\np.p.p\n.q.pn\nQb.NB\n.PP.P\n.R..K\n") != 0) {
		printf("test: failed test_undo_038\n");
		return false;
	}
	
	chess_boardSet("16 B\n.k...\n..b..\npp..r\nPP.q.\n..RKP\n.N...\n");
	chess_move("d3-c2\n");
	chess_move("d2-d1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.k...\n..b..\npp..r\nPP...\n..q.P\n.N.K.\n") != 0) {
		printf("test: failed test_undo_039\n");
		return false;
	}
	
	chess_boardSet("16 B\n..br.\nk.pP.\np....\nP....\n.q.K.\nRN.n.\n");
	chess_move("b2-b5\n");
	chess_move("d2-d3\n");
	chess_move("b5-b4\n");
	chess_move("d3-c2\n");
	chess_move("b4-c4\n");
	chess_move("b1-d2\n");
	chess_move("c4-a2\n");
	chess_move("c2-b3\n");
	chess_move("a2-a3\n");
	chess_move("b3-b4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n..br.\nkqpP.\np....\nP....\n...K.\nRN.n.\n") != 0) {
		printf("test: failed test_undo_040\n");
		return false;
	}
	
	chess_boardSet("11 B\nk.bnr\np..pp\n.q...\nRQ...\n.PPP.\n..B.K\n");
	chess_move("a6-b6\n");
	chess_move("a3-a4\n");
	chess_move("b4-c5\n");
	chess_move("a4-a2\n");
	chess_move("d6-c4\n");
	chess_move("e1-e2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.kbnr\np..pp\nRq...\n.Q...\n.PPP.\n..B.K\n") != 0) {
		printf("test: failed test_undo_041\n");
		return false;
	}
	
	chess_boardSet("15 B\nk..nr\np...Q\n..q.p\np...B\nPPp.b\n.R..K\n");
	chess_move("e2-d1\n");
	chess_move("e5-c3\n");
	chess_move("a5-a4\n");
	chess_move("e3-c5\n");
	chess_move("c4-b4\n");
	chess_move("c3-b3\n");
	chess_move("b4-c4\n");
	chess_move("c5-d5\n");
	chess_move("c4-c5\n");
	chess_move("b3-c2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk..nr\np....\n..q.p\np.Q.B\nPPp..\n.R.bK\n") != 0) {
		printf("test: failed test_undo_042\n");
		return false;
	}
	
	chess_boardSet("13 B\nkq.br\npp..p\n..p.P\n..PpK\nPB...\nRN..Q\n");
	chess_move("d6-c6\n");
	chess_move("b2-c2\n");
	chess_move("b6-e3\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nkqb.r\npp..p\n..p.P\n..PpK\nPB...\nRN..Q\n") != 0) {
		printf("test: failed test_undo_043\n");
		return false;
	}
	
	chess_boardSet("21 W\nk....\nPqp.p\n..R.P\npB.rK\nP..pP\n..Q..\n");
	chess_move("c1-b2\n");
	chess_move("d2-d1\n");
	chess_move("b2-d2\n");
	chess_move("d3-d5\n");
	chess_move("d2-d5\n");
	chess_move("b5-a5\n");
	chess_move("c4-c2\n");
	chess_move("d1-d3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "22 W\nk....\nPqp.p\n..R.P\npB.rK\nPQ..P\n...q.\n") != 0) {
		printf("test: failed test_undo_044\n");
		return false;
	}
	
	chess_boardSet("15 W\nk...r\np...p\nQbnq.\n.q..P\nP..B.\n.R..K\n");
	chess_move("d2-e2\n");
	chess_move("a6-b5\n");
	chess_move("b1-a1\n");
	chess_move("d4-e4\n");
	chess_move("e2-d3\n");
	chess_move("e6-c6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk...r\np...p\nQbnq.\n.q..P\nP..B.\n.R..K\n") != 0) {
		printf("test: failed test_undo_045\n");
		return false;
	}
	
	chess_boardSet("17 W\n...bq\n.kQ.P\n....p\np..K.\n.BPP.\n...R.\n");
	chess_move("b2-b1\n");
	chess_move("e6-e5\n");
	chess_move("d3-e2\n");
	chess_move("a3-a2\n");
	chess_move("c5-c4\n");
	chess_move("e5-b2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n...bq\n.kQ.P\n....p\np..K.\n..PP.\n.B.R.\n") != 0) {
		printf("test: failed test_undo_046\n");
		return false;
	}
	
	chess_boardSet("14 W\n..r..\npkp.p\n.....\nN...B\nbPP.Q\n..R.K\n");
	chess_move("e3-e4\n");
	chess_move("c6-a6\n");
	chess_move("a3-b1\n");
	chess_move("b5-b4\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nr....\npkp.p\n....B\nN....\nbPP.Q\n..R.K\n") != 0) {
		printf("test: failed test_undo_047\n");
		return false;
	}
	
	chess_boardSet("16 W\nk.qn.\np...r\n.Bbp.\n.PpPp\nP.PKQ\nR....\n");
	chess_move("a1-b1\n");
	chess_move("c6-b6\n");
	chess_move("b1-d1\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkq.n.\np...r\n.Bbp.\n.PpPp\nP.PKQ\n.R...\n") != 0) {
		printf("test: failed test_undo_048\n");
		return false;
	}
	
	chess_boardSet("19 W\n.k.N.\n....r\n.P..P\n.BP.Q\n.p..P\nR...K\n");
	chess_move("a1-c1\n");
	chess_move("b2-c1\n");
	chess_move("b3-d5\n");
	chess_move("b6-b5\n");
	chess_move("e3-c1\n");
	chess_move("b5-a4\n");
	chess_move("d5-c5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.k.N.\n....r\n.P..P\n.BP.Q\n.p..P\nR...K\n") != 0) {
		printf("test: failed test_undo_049\n");
		return false;
	}
	
	chess_boardSet("15 W\nkN.r.\np....\nb.p.p\n.BP.P\n.p.Q.\n.R..K\n");
	chess_move("e1-e2\n");
	chess_move("d6-d3\n");
	chess_move("b6-d5\n");
	chess_move("c4-b3\n");
	chess_move("b1-c1\n");
	chess_move("d3-e3\n");
	chess_move("d2-e1\n");
	chess_move("b2-c1\n");
	chess_move("e2-d3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkN...\np....\nb.p.p\n.BPrP\n.p.QK\n.R...\n") != 0) {
		printf("test: failed test_undo_050\n");
		return false;
	}
	
	chess_boardSet("21 W\nk...r\n.B..P\np.b.q\n..p..\nP.P.P\n..R.K\n");
	chess_move("b5-c5\n");
	chess_move("e4-d3\n");
	chess_move("c5-e3\n");
	chess_move("d3-d6\n");
	chess_move("c1-b1\n");
	chess_move("c4-d4\n");
	chess_move("b1-b6\n");
	chess_move("d4-b6\n");
	chess_move("e1-d1\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk...r\n.B..P\np.b.q\n..p..\nP.P.P\n..R.K\n") != 0) {
		printf("test: failed test_undo_051\n");
		return false;
	}
	
	chess_boardSet("16 B\nk.b.r\n.n.pP\nNP..P\n.....\nRPp..\n..B.K\n");
	chess_move("b5-a3\n");
	chess_move("b2-b3\n");
	chess_move("d5-d4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk.b.r\n.n.pP\nNP..P\n.....\nRPp..\n..B.K\n") != 0) {
		printf("test: failed test_undo_052\n");
		return false;
	}
	
	chess_boardSet("21 W\nk....\n...q.\n..pPr\n...Pn\npP..K\nR....\n");
	chess_move("a1-e1\n");
	chess_move("d5-a5\n");
	chess_move("e2-d2\n");
	chess_move("e4-d4\n");
	chess_move("b2-b3\n");
	chess_move("a5-c3\n");
	chess_move("e1-e2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk....\n...q.\n..pPr\n...Pn\npP..K\nR....\n") != 0) {
		printf("test: failed test_undo_053\n");
		return false;
	}
	
	chess_boardSet("11 B\n..bnr\nq..p.\n.kpPp\nN...B\nR.PQP\n....K\n");
	chess_move("c6-b6\n");
	chess_move("c2-c3\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.b.nr\nq..p.\n.kpPp\nN.P.B\nR..QP\n....K\n") != 0) {
		printf("test: failed test_undo_054\n");
		return false;
	}
	
	chess_boardSet("11 B\nk.qbr\np.p..\n..P..\nN.ppB\nPpQKP\nR....\n");
	chess_move("a6-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..qbr\npkp..\n..P..\nN.ppB\nPpQKP\nR....\n") != 0) {
		printf("test: failed test_undo_055\n");
		return false;
	}
	
	chess_boardSet("17 W\n...nr\npk...\np..pp\n..P..\n.P.qP\nb.BK.\n");
	chess_move("b2-b3\n");
	chess_move("d2-e3\n");
	chess_move("d1-d2\n");
	chess_move("b5-c6\n");
	chess_move("c3-c4\n");
	chess_move("e3-d2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...nr\npk...\np..pp\n..P..\n.P.qP\nb.BK.\n") != 0) {
		printf("test: failed test_undo_056\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.br.\n...Qp\n..p..\n.PnP.\nP....\nRB.K.\n");
	chess_move("d6-e6\n");
	chess_move("d5-e5\n");
	chess_move("c3-d5\n");
	chess_move("b1-c2\n");
	chess_move("c6-b6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.b.r\n....Q\n..p..\n.PnP.\nP....\nRB.K.\n") != 0) {
		printf("test: failed test_undo_057\n");
		return false;
	}
	
	chess_boardSet("14 W\nk.qn.\np.pPr\n.p...\n.PpQB\nP...P\nR...K\n");
	chess_move("d3-a6\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nQ.qn.\np.pPr\n.p...\n.Pp.B\nP...P\nR...K\n") != 0) {
		printf("test: failed test_undo_058\n");
		return false;
	}
	
	chess_boardSet("13 W\n...br\n.pqNp\npk.pn\nP....\n.PP.P\n.RBQK\n");
	chess_move("d5-e3\n");
	chess_move("c5-c4\n");
	chess_move("e1-d2\n");
	chess_move("b4-c3\n");
	chess_move("b2-c3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n...br\n.p..p\npkqpn\nP...N\n.PP.P\n.RBQK\n") != 0) {
		printf("test: failed test_undo_059\n");
		return false;
	}
	
	chess_boardSet("13 W\n.k...\n.bqpr\nQ....\nnp..p\nP...P\nRN.BK\n");
	chess_move("b1-c3\n");
	chess_move("b5-a4\n");
	chess_move("a1-c1\n");
	chess_move("a4-a5\n");
	chess_move("c1-b1\n");
	chess_move("a3-c4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.k...\n.bqpr\nQ....\nnp..p\nP...P\nRN.BK\n") != 0) {
		printf("test: failed test_undo_060\n");
		return false;
	}
	
	chess_boardSet("12 B\n...nr\nk.pbp\npQ...\nPP...\n.R..q\n.NB.K\n");
	chess_move("e2-a6\n");
	chess_move("c1-e3\n");
	chess_move("d5-d4\n");
	chess_move("b4-b6\n");
	chess_move("a6-e2\n");
	chess_move("e3-d2\n");
	chess_move("e2-d1\n");
	chess_move("b6-b4\n");
	chess_move("d4-c3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nq..nr\nk.pbp\npQ...\nPP..B\n.R...\n.N..K\n") != 0) {
		printf("test: failed test_undo_061\n");
		return false;
	}
	
	chess_boardSet("12 B\n.q..r\nkbppB\n.p...\npP..n\nP.P.P\nRN..K\n");
	chess_move("c5-c4\n");
	chess_move("b1-c3\n");
	chess_move("e3-d1\n");
	chess_move("c3-d1\n");
	chess_move("b6-c5\n");
	chess_move("e1-d2\n");
	chess_move("b5-a4\n");
	chess_move("d1-c3\n");
	chess_move("a4-c6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.q..r\nkb.pB\n.pp..\npP..n\nP.P.P\nRN..K\n") != 0) {
		printf("test: failed test_undo_062\n");
		return false;
	}
	
	chess_boardSet("14 B\nk..br\n....p\n.qpP.\n.PRPB\np...P\nQ...K\n");
	chess_move("d6-c6\n");
	chess_move("e3-c1\n");
	chess_move("c6-a4\n");
	chess_move("e1-d2\n");
	chess_move("b4-b5\n");
	chess_move("d2-e1\n");
	chess_move("c4-b3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk.b.r\n....p\n.qpP.\n.PRP.\np...P\nQ.B.K\n") != 0) {
		printf("test: failed test_undo_063\n");
		return false;
	}
	
	chess_boardSet("19 W\n...nr\nb.k..\nPp..p\n..P.p\nBR.p.\n....K\n");
	chess_move("a2-a3\n");
	chess_move("b4-a3\n");
	chess_move("e1-e2\n");
	chess_move("e6-e5\n");
	chess_move("e2-e3\n");
	chess_move("a3-b2\n");
	chess_move("c3-c4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n...nr\nb.k..\nPp..p\nB.P.p\n.R.p.\n....K\n") != 0) {
		printf("test: failed test_undo_064\n");
		return false;
	}
	
	chess_boardSet("13 B\nkq.Nr\n..p..\n.b..p\n.P..P\nPp.Q.\n.RB.K\n");
	chess_move("b2-c1\n");
	chess_move("d2-c2\n");
	chess_move("a6-a5\n");
	chess_move("c2-e2\n");
	chess_move("c1-e3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nkq.Nr\n..p..\n.b..p\n.P..P\nP..Q.\n.Rq.K\n") != 0) {
		printf("test: failed test_undo_065\n");
		return false;
	}
	
	chess_boardSet("18 B\nkn..r\nP.p..\n.pbQP\nP..p.\n...P.\nR...K\n");
	chess_move("b4-a3\n");
	chess_move("a5-b6\n");
	chess_move("c4-d5\n");
	chess_move("b6-c6\n");
	chess_move("d5-c4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nkQ..r\n..p..\n..bQP\np..p.\n...P.\nR...K\n") != 0) {
		printf("test: failed test_undo_066\n");
		return false;
	}
	
	chess_boardSet("15 W\nk....\n..p.p\nq....\nP....\nP.bKP\n.RB..\n");
	chess_move("c1-d1\n");
	chess_move("a6-b5\n");
	chess_move("d2-e1\n");
	chess_move("c2-b3\n");
	chess_move("d1-d2\n");
	chess_move("b3-c3\n");
	chess_move("b1-b5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.....\n.kp.p\nq....\nP....\nP.bKP\n.R.B.\n") != 0) {
		printf("test: failed test_undo_067\n");
		return false;
	}
	
	chess_boardSet("12 B\nk.bnr\n..q..\nppNP.\nP....\n.P...\nR.qQK\n");
	chess_move("d6-e4\n");
	chess_move("e1-e2\n");
	chess_move("c1-e3\n");
	chess_move("e2-e3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk.bnr\n..q..\nppNP.\nP....\n.P...\nR.qQK\n") != 0) {
		printf("test: failed test_undo_068\n");
		return false;
	}
	
	chess_boardSet("17 W\n...b.\np.p..\nk..pq\nR..Q.\n.BP.r\n....K\n");
	chess_move("b2-c1\n");
	chess_move("e4-d5\n");
	chess_move("a3-c3\n");
	chess_move("a4-a3\n");
	chess_move("c3-c4\n");
	chess_move("d5-e5\n");
	chess_move("c1-b2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...b.\np.p..\nk..pq\nR..Q.\n.BP.r\n....K\n") != 0) {
		printf("test: failed test_undo_069\n");
		return false;
	}
	
	chess_boardSet("18 W\n..br.\nkPp..\np.P.p\nP...Q\nq...p\n..BK.\n");
	chess_move("e3-d2\n");
	chess_move("c6-d5\n");
	chess_move("d1-c2\n");
	chess_move("d6-c6\n");
	chess_move("d2-d5\n");
	chess_move("a2-b1\n");
	chess_move("c2-d3\n");
	chess_move("b1-d3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n..br.\nkPp..\np.P.p\nP...Q\nq...p\n..BK.\n") != 0) {
		printf("test: failed test_undo_070\n");
		return false;
	}
	
	chess_boardSet("20 B\nk.b..\n...pp\nQP..N\n...P.\n.Pr..\n....K\n");
	chess_move("d5-e4\n");
	chess_move("b2-b3\n");
	chess_move("c2-e2\n");
	chess_move("a4-a6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk.b..\n....p\nQP..p\n...P.\n.Pr..\n....K\n") != 0) {
		printf("test: failed test_undo_071\n");
		return false;
	}
	
	chess_boardSet("15 W\nk.r..\np.p..\nbqpPp\nPp.Q.\n.PP.P\nRB..K\n");
	chess_move("e1-d1\n");
	chess_move("b4-b5\n");
	chess_move("d1-c1\n");
	chess_move("e4-d3\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk.r..\npqp..\nb.pPp\nPp.Q.\n.PP.P\nRB.K.\n") != 0) {
		printf("test: failed test_undo_072\n");
		return false;
	}
	
	chess_boardSet("14 B\n.kb.r\np...p\nPQpp.\nN.nPq\n.P...\nR.BK.\n");
	chess_move("c3-b5\n");
	chess_move("b4-c3\n");
	chess_move("e3-d3\n");
	chess_move("c3-a5\n");
	chess_move("b5-a3\n");
	chess_move("a5-d2\n");
	chess_move("d3-b3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.kb.r\npn..p\nPQpp.\nN..Pq\n.P...\nR.BK.\n") != 0) {
		printf("test: failed test_undo_073\n");
		return false;
	}
	
	chess_boardSet("13 W\nk.b.r\n..pPp\n.pn..\npPP..\nP.B.P\n..RQK\n");
	chess_move("c1-b1\n");
	chess_move("a6-b6\n");
	chess_move("d1-c1\n");
	chess_move("c4-d6\n");
	chess_move("c1-b2\n");
	chess_move("e5-e4\n");
	chess_move("b1-d1\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.kb.r\n..pPp\n.pn..\npPP..\nP.B.P\n.R.QK\n") != 0) {
		printf("test: failed test_undo_074\n");
		return false;
	}
	
	chess_boardSet("12 B\nkqb..\npKp..\nPp...\n.P...\n..P.p\nR.Br.\n");
	chess_move("d1-d5\n");
	chess_move("c1-b1\n");
	chess_move("b6-b5\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkqb..\npKp..\nPp...\n.P...\n..P.p\nR.Br.\n") != 0) {
		printf("test: failed test_undo_075\n");
		return false;
	}
	
	chess_boardSet("19 W\n...Q.\nkp...\n.....\n..P.p\nP..P.\nRr..K\n");
	chess_move("d6-b4\n");
	chess_move("b1-e1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.....\nkp...\n.Q...\n..P.p\nP..P.\nR...r\n") != 0) {
		printf("test: failed test_undo_076\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..nr\np..p.\n..pPB\n....P\nP....\n.NRqK\n");
	chess_move("d1-e1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk..nr\np..p.\n..pPB\n....P\nP....\n.NR.q\n") != 0) {
		printf("test: failed test_undo_077\n");
		return false;
	}
	
	chess_boardSet("12 W\n.qb.r\nBQ..p\nk.p.p\npP...\nP.P.K\nRN...\n");
	chess_move("b5-d5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.qb.r\nB..Qp\nk.p.p\npP...\nP.P.K\nRN...\n") != 0) {
		printf("test: failed test_undo_078\n");
		return false;
	}
	
	chess_boardSet("15 B\nk.qnr\n...p.\nbp..p\npPP.P\nPB...\nRNQK.\n");
	chess_move("a4-b3\n");
	chess_move("d1-c2\n");
	chess_move("b3-a2\n");
	chess_move("c1-e1\n");
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk.qnr\n...p.\n.p..p\npbP.P\nPBK..\nRNQ..\n") != 0) {
		printf("test: failed test_undo_079\n");
		return false;
	}
	
	chess_boardSet("11 B\n.b.nr\nkp.pp\npPp..\nP.Q..\n..PBq\nRN.K.\n");
	chess_move("e2-d2\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n.b.nr\nkp.pp\npPp..\nP.Q..\n..PBq\nRN.K.\n") != 0) {
		printf("test: failed test_undo_080\n");
		return false;
	}
	
	chess_boardSet("20 W\nk...b\nB.p..\nP.p.p\n....P\n..P..\nR..rK\n");
	chess_move("a1-d1\n");
	chess_move("a6-b5\n");
	chess_move("e1-e2\n");
	chess_move("b5-a4\n");
	chess_move("a5-d2\n");
	chess_move("a4-a5\n");
	chess_move("d2-c3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n....b\nBkp..\nP.p.p\n....P\n..P..\n...RK\n") != 0) {
		printf("test: failed test_undo_081\n");
		return false;
	}
	
	chess_boardSet("13 W\nk..r.\n....p\nN..p.\nP.q..\nbBPPP\nR..QK\n");
	chess_move("d2-d3\n");
	chess_move("c3-c2\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk..r.\n....p\nN..p.\nP.qP.\nbBP.P\nR..QK\n") != 0) {
		printf("test: failed test_undo_082\n");
		return false;
	}
	
	chess_boardSet("14 B\nk..B.\n.q...\nPQ.pp\n....P\nP.NP.\nR...K\n");
	chess_move("b5-e2\n");
	chess_move("b4-b5\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk..B.\n.....\nPQ.pp\n....P\nP.NPq\nR...K\n") != 0) {
		printf("test: failed test_undo_083\n");
		return false;
	}
	
	chess_boardSet("15 B\n.N..r\nk.b..\n..n.p\np..PP\np.PKQ\n....R\n");
	chess_move("c4-e3\n");
	chess_move("e2-e3\n");
	chess_move("e6-e5\n");
	chess_move("d2-c1\n");
	chess_move("c5-b6\n");
	chess_move("e3-d4\n");
	chess_move("b6-d4\n");
	chess_move("e1-d1\n");
	chess_move("a5-b5\n");
	chess_move("d3-e4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n.N..r\nk.b..\n..n.p\np..PP\np.PKQ\n....R\n") != 0) {
		printf("test: failed test_undo_084\n");
		return false;
	}
	
	chess_boardSet("20 W\nkqr..\n.ppbp\n..nP.\npR...\nP....\nB..K.\n");
	chess_move("d1-c2\n");
	chess_move("c4-d2\n");
	chess_move("c2-d2\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nkqr..\n.ppbp\n...P.\npR...\nP.Kn.\nB....\n") != 0) {
		printf("test: failed test_undo_085\n");
		return false;
	}
	
	chess_boardSet("20 W\nq.Qr.\n....p\n..n..\n.k...\nP...P\n....K\n");
	chess_move("e2-e3\n");
	chess_move("a6-a5\n");
	chess_move("c6-b5\n");
	chess_move("a5-c3\n");
	chess_move("e1-d2\n");
	chess_move("c4-b2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n..Qr.\nq...p\n..n..\n.k..P\nP....\n....K\n") != 0) {
		printf("test: failed test_undo_086\n");
		return false;
	}
	
	chess_boardSet("13 W\n.kbNr\n...p.\np..p.\nP....\nqn..P\nR...K\n");
	chess_move("e1-d2\n");
	chess_move("c6-b5\n");
	chess_move("a1-b1\n");
	chess_move("a2-a1\n");
	chess_move("d6-c4\n");
	chess_move("b5-a5\n");
	chess_move("d2-e1\n");
	chess_move("b2-d1\n");
	chess_move("c4-d6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.kbNr\n...p.\np..p.\nP....\nqn..P\nR...K\n") != 0) {
		printf("test: failed test_undo_087\n");
		return false;
	}
	
	chess_boardSet("17 W\n..r..\nkPpqp\n..ppb\np....\nP.KQP\nRNB..\n");
	chess_move("d2-b4\n");
	chess_move("c6-b6\n");
	chess_move("b4-a4\n");
	chess_move("d4-d3\n");
	chess_move("c2-c3\n");
	chess_move("a5-b5\n");
	chess_move("c3-d2\n");
	chess_move("c4-c3\n");
	chess_move("a4-d1\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.r...\nkPpqp\n.Qppb\np....\nP.K.P\nRNB..\n") != 0) {
		printf("test: failed test_undo_088\n");
		return false;
	}
	
	chess_boardSet("11 B\n..bN.\np.p.r\nkpqp.\n.P.PP\nP.PK.\n.R.BQ\n");
	chess_move("c4-d5\n");
	chess_move("d6-e4\n");
	chess_move("c5-c4\n");
	chess_move("e3-d4\n");
	chess_move("a4-b3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n..bN.\np.p.r\nkpqp.\n.P.PP\nP.PK.\n.R.BQ\n") != 0) {
		printf("test: failed test_undo_089\n");
		return false;
	}
	
	chess_boardSet("14 B\nk.b.r\npp.qp\n.P.B.\n..Np.\nP..Q.\n..R.K\n");
	chess_move("c6-d6\n");
	chess_move("d2-b2\n");
	chess_move("d6-c5\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk..br\npp.qp\n.P.B.\n..Np.\nPQ...\n..R.K\n") != 0) {
		printf("test: failed test_undo_090\n");
		return false;
	}
	
	chess_boardSet("15 B\nk....\n..bN.\np.p..\nP...p\n.P.qP\nR.B.K\n");
	chess_move("d2-d1\n");
	chess_move("e1-d1\n");
	chess_move("c5-d4\n");
	chess_move("d5-e3\n");
	chess_move("d4-d3\n");
	chess_move("e2-d3\n");
	chess_move("c4-d3\n");
	chess_move("d1-c2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk....\n..bN.\np.p..\nP...p\n.P..P\nR.BqK\n") != 0) {
		printf("test: failed test_undo_091\n");
		return false;
	}
	
	chess_boardSet("17 W\n....r\nk.p.P\np...n\nNP.P.\nR.q..\n...KQ\n");
	chess_move("a3-b1\n");
	chess_move("c2-b2\n");
	chess_move("a2-a1\n");
	chess_move("a5-a6\n");
	chess_move("b3-b4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n....r\nk.p.P\np...n\n.P.P.\nR.q..\n.N.KQ\n") != 0) {
		printf("test: failed test_undo_092\n");
		return false;
	}
	
	chess_boardSet("14 B\nk.b.r\np....\n.ppQp\nPPN..\nR...P\n....K\n");
	chess_move("a6-b5\n");
	chess_move("c3-e4\n");
	chess_move("c4-c3\n");
	chess_move("a2-b2\n");
	chess_move("e6-e4\n");
	chess_move("e1-d2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.b.r\np....\n.ppQp\nPPN..\nR...P\n....K\n") != 0) {
		printf("test: failed test_undo_093\n");
		return false;
	}
	
	chess_boardSet("16 W\n.b.nr\n.pqNp\n.Pp..\n...Pk\nPBPQP\nR...K\n");
	chess_move("b2-a3\n");
	chess_move("c5-d4\n");
	chess_move("a3-a4\n");
	chess_move("e3-e2\n");
	chess_move("d5-e3\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.b.nr\n.p.Np\n.Ppq.\nB..Pk\nP.PQP\nR...K\n") != 0) {
		printf("test: failed test_undo_094\n");
		return false;
	}
	
	chess_boardSet("14 B\nk....\nbp.N.\n....n\n.P.Pp\n..P.Q\n...RK\n");
	chess_move("e4-c3\n");
	chess_move("d1-d2\n");
	chess_move("a5-b6\n");
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk....\nbp.N.\n.....\n.PnPp\n..PRQ\n....K\n") != 0) {
		printf("test: failed test_undo_095\n");
		return false;
	}
	
	chess_boardSet("15 W\nk...r\nqPp.p\n..Pp.\n.p..P\n..bQ.\nRN..K\n");
	chess_move("e1-d1\n");
	chess_move("a5-b5\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk...r\n.qp.p\n..Pp.\n.p..P\n..bQ.\nRN.K.\n") != 0) {
		printf("test: failed test_undo_096\n");
		return false;
	}
	
	chess_boardSet("21 W\nk....\n..Q..\np..P.\np...p\nPP..B\nR..bK\n");
	chess_move("e2-d2\n");
	chess_move("a6-a5\n");
	chess_move("e1-e2\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk....\n..Q..\np..P.\np...p\nPP..B\nR..bK\n") != 0) {
		printf("test: failed test_undo_097\n");
		return false;
	}
	
	chess_boardSet("14 W\nk..nb\npp..r\n...qp\nPPNpP\nQB.P.\nR..K.\n");
	chess_move("a2-b1\n");
	chess_move("d4-e3\n");
	chess_move("d2-e3\n");
	chess_move("e6-b3\n");
	chess_move("c3-a2\n");
	chess_move("e5-c5\n");
	chess_move("b2-c2\n");
	chess_move("b3-a2\n");
	chess_move("b1-c1\n");
	chess_move("a2-e6\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk..nb\npp..r\n....p\nPPNpq\n.B.P.\nRQ.K.\n") != 0) {
		printf("test: failed test_undo_098\n");
		return false;
	}
	
	chess_boardSet("12 B\n.k..r\n...p.\nppn.p\n.PQ.K\nPBPN.\n..R..\n");
	chess_move("e6-d6\n");
	chess_move("c1-e1\n");
	chess_move("a4-b3\n");
	chess_move("c3-b4\n");
	chess_move("b6-c6\n");
	chess_move("b4-b3\n");
	chess_move("c6-c5\n");
	chess_move("b3-a4\n");
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_undo();
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.k.r.\n...p.\nppn.p\n.PQ.K\nPBPN.\n..R..\n") != 0) {
		printf("test: failed test_undo_099\n");
		return false;
	}
	
	chess_boardSet("15 W\nkbr..\n..p..\npq.pp\nP.PPP\n.PK..\nRnB..\n");
	chess_move("c2-d1\n");
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkbr..\n..p..\npq.pp\nP.PPP\n.P...\nRnBK.\n") != 0) {
		printf("test: failed test_undo_100\n");
		return false;
	}
	
	return true;
}

int test_movesCount(int* intBuffer, char* charBuffer, int intCount) {
	int intEqual = 0;
	
	for (int intFor1 = 0; intFor1 < intCount; intFor1 += 1) {
		for (int intFor2 = intFor1 + 1; intFor2 < intCount; intFor2 += 1) {
			if (strcmp(&charBuffer[intFor1 * 1024], &charBuffer[intFor2 * 1024]) == 0) {
				intEqual += 1;
			}
		}
	}
	
	return intEqual;
}

bool test_movesShuffled() {
	int intBuffer[100] = { };
	char charBuffer[100 * 1024] = { };
	
	chess_reset();
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a2-a3\nb2-b3\nc2-c3\nd2-d3\ne2-e3\nb1-a3\nb1-c3\n") != true) {
			printf("test: failed test_movesShuffled_001\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 7) {
		printf("test: failed test_movesShuffled_001\n");
		return false;
	}
	
	chess_boardSet("21 W\n...nr\nkqb.K\n..PB.\np...Q\nR.P..\n.N...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "e5-d6\ne5-e6\ne5-d5\ne5-e4\nc4-b5\nd4-c5\nd4-c3\nd4-b2\nd4-a1\nd4-d5\nd4-e4\nd4-d3\ne3-e4\ne3-d3\ne3-c3\ne3-b3\ne3-a3\ne3-d2\ne3-c1\ne3-e2\ne3-e1\na2-a3\na2-b2\na2-a1\nc2-c3\nb1-a3\nb1-c3\nb1-d2\n") != true) {
			printf("test: failed test_movesShuffled_002\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 28) {
		printf("test: failed test_movesShuffled_002\n");
		return false;
	}
	
	chess_boardSet("18 B\n..qr.\n.kp..\nNRP..\np..Pp\npBPQP\n....K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-a6\nc6-d5\nc6-e4\nd6-e6\nd6-d5\nd6-d4\nd6-d3\nb5-a6\nb5-b6\nb5-a5\nb5-a4\nb5-b4\nb5-c4\nc5-b4\na3-b2\ne3-d2\na2-a1\n") != true) {
			printf("test: failed test_movesShuffled_003\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_003\n");
		return false;
	}
	
	chess_boardSet("14 W\n..q.r\nk.p.p\n.pP.P\n...Q.\np..P.\nR...K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d3-d4\nd3-d5\nd3-d6\nd3-c3\nd3-b3\nd3-a3\nd3-e3\nd3-c2\nd3-b1\nd3-e2\na1-a2\na1-b1\na1-c1\na1-d1\ne1-e2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_004\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_004\n");
		return false;
	}
	
	chess_boardSet("11 B\nk.bn.\n.....\nQqp.r\np.PpP\n.P...\nRNB.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\na6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-b6\nc6-c5\nd6-b5\nb4-a5\nb4-b5\nb4-b6\nb4-c5\nb4-a4\nb4-b3\nb4-b2\nb4-c3\ne4-e5\ne4-e6\ne4-d4\ne4-e3\na3-a2\na3-b2\nd3-d2\n") != true) {
			printf("test: failed test_movesShuffled_005\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 24) {
		printf("test: failed test_movesShuffled_005\n");
		return false;
	}
	
	chess_boardSet("12 B\n.kb.r\nB.p.p\nN..p.\n.P.Pn\n.P..P\n...QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-a5\nb6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-d6\ne6-d6\nc5-c4\ne5-e4\ne3-d5\ne3-c4\ne3-c2\ne3-d1\n") != true) {
			printf("test: failed test_movesShuffled_006\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_006\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.q.r\n..p.P\npPPP.\n.....\n.....\n.bBnK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\na6-b5\nc6-b6\nc6-d6\nc6-b5\nc6-d5\nc6-e4\ne6-d6\ne6-e5\nc5-b4\nc5-d4\na4-a3\nb1-a2\nb1-c2\nb1-d3\nb1-e4\nb1-b2\nb1-a1\nd1-c3\nd1-e3\nd1-b2\n") != true) {
			printf("test: failed test_movesShuffled_007\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_007\n");
		return false;
	}
	
	chess_boardSet("17 W\nk.n..\np...p\nPp...\n..PP.\nq...P\nR..QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c3-c4\nc3-b4\nd3-d4\ne2-e3\na1-a2\na1-b1\na1-c1\nd1-c2\nd1-b3\nd1-d2\nd1-c1\nd1-b1\ne1-d2\n") != true) {
			printf("test: failed test_movesShuffled_008\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 13) {
		printf("test: failed test_movesShuffled_008\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..qr\np.p.b\nPpN.p\n....P\nR.P.n\n....K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\nd6-c6\nd6-b6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nd6-d1\ne5-d4\ne5-c3\ne5-b2\ne5-a1\ne5-d5\nb4-b3\ne2-d4\ne2-c3\ne2-c1\n") != true) {
			printf("test: failed test_movesShuffled_009\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_009\n");
		return false;
	}
	
	chess_boardSet("11 B\n.kb.r\n.n.p.\nP.pPp\nPPN.q\n...BP\n.R.QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-a5\nb6-c5\nc6-d6\nc6-c5\ne6-d6\ne6-e5\nb5-d6\nb5-d4\nb5-a3\nb5-c3\nc4-b3\ne3-d4\ne3-d3\ne3-c3\ne3-d2\ne3-e2\n") != true) {
			printf("test: failed test_movesShuffled_010\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 17) {
		printf("test: failed test_movesShuffled_010\n");
		return false;
	}
	
	chess_boardSet("16 B\n.k.nr\np...p\n.P..b\nPP...\n..QPB\nRN..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-b5\nb6-c5\nd6-b5\nd6-c4\na5-a4\na5-b4\ne4-d5\ne4-c6\ne4-d3\ne4-c2\ne4-d4\ne4-e3\n") != true) {
			printf("test: failed test_movesShuffled_011\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 14) {
		printf("test: failed test_movesShuffled_011\n");
		return false;
	}
	
	chess_boardSet("16 B\n..qnr\n.kp..\n.....\n.P.K.\n.....\nR..N.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-a6\nc6-d5\nc6-e4\nd6-c4\nd6-e4\ne6-e5\ne6-e4\ne6-e3\ne6-e2\ne6-e1\nb5-a6\nb5-b6\nb5-a5\nb5-a4\nb5-b4\nb5-c4\nc5-c4\n") != true) {
			printf("test: failed test_movesShuffled_012\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_012\n");
		return false;
	}
	
	chess_boardSet("14 W\n.q.br\np..p.\nn.k.p\n.pP.P\nP.P..\nRB.QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a2-a3\na2-b3\nc2-b3\nb1-b2\nb1-c1\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nd1-e2\nd1-c1\ne1-d2\ne1-e2\n") != true) {
			printf("test: failed test_movesShuffled_013\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 13) {
		printf("test: failed test_movesShuffled_013\n");
		return false;
	}
	
	chess_boardSet("11 B\nkQ..r\nppp..\n...n.\nBPPPp\nR...p\n.N..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\ne6-d6\ne6-c6\ne6-b6\ne6-e5\ne6-e4\na5-a4\nb5-b4\nc5-c4\nd4-c6\nd4-b3\nd4-c2\n") != true) {
			printf("test: failed test_movesShuffled_014\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 12) {
		printf("test: failed test_movesShuffled_014\n");
		return false;
	}
	
	chess_boardSet("16 W\nk.b.r\n.n..P\nP.p.K\npB...\n.P.P.\n.N...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a4-a5\na4-b5\ne4-d5\ne4-d4\ne4-d3\ne4-e3\nb3-c4\nb3-a2\nb3-c2\nb3-d1\nb3-b4\nb3-c3\nb2-a3\nd2-d3\nb1-a3\nb1-c3\n") != true) {
			printf("test: failed test_movesShuffled_015\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_015\n");
		return false;
	}
	
	chess_boardSet("13 W\n.q.br\n.pppp\n.P..K\nk..P.\n.R..P\n.NB..\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b4-c5\ne4-d5\ne4-e5\ne4-d4\ne4-e3\nd3-d4\nb2-b3\nb2-a2\nb2-c2\nb2-d2\ne2-e3\nb1-a3\nb1-c3\nb1-d2\nc1-d2\nc1-e3\nc1-c2\nc1-d1\n") != true) {
			printf("test: failed test_movesShuffled_016\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_016\n");
		return false;
	}
	
	chess_boardSet("15 W\n.k.nr\n...Np\n.Q...\npP...\nP.p.q\n.R..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d5-b6\nd5-c3\nd5-e3\nb4-a5\nb4-b5\nb4-b6\nb4-c5\nb4-d6\nb4-a4\nb4-c4\nb4-d4\nb4-e4\nb4-a3\nb4-c3\nb4-d2\nb1-b2\nb1-a1\nb1-c1\nb1-d1\ne1-d2\ne1-e2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_017\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_017\n");
		return false;
	}
	
	chess_boardSet("19 W\nk.qn.\nP.p.r\n.pP.p\n..b.P\n..BPK\n.....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b1\nc2-d1\nc2-b2\nc2-c1\nd2-d3\nd2-c3\ne2-d3\ne2-d1\ne2-e1\n") != true) {
			printf("test: failed test_movesShuffled_018\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 13) {
		printf("test: failed test_movesShuffled_018\n");
		return false;
	}
	
	chess_boardSet("17 B\nr....\n.pkbP\np.P..\n.....\nP...P\n..QRK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-c6\na6-d6\na6-e6\na6-a5\nb5-b4\nb5-c4\nc5-b6\nc5-c6\nc5-d6\nc5-b4\nc5-c4\nc5-d4\nd5-c6\nd5-e6\nd5-c4\nd5-e4\nd5-d6\nd5-d4\na4-a3\n") != true) {
			printf("test: failed test_movesShuffled_019\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 20) {
		printf("test: failed test_movesShuffled_019\n");
		return false;
	}
	
	chess_boardSet("12 B\nk..br\np.p.p\nNP..n\n..qP.\n.Pp.P\nRQBK.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\nd6-c6\nd6-d5\na5-b4\nc5-c4\nc5-b4\ne4-d2\nc3-b4\nc3-c4\nc3-d4\nc3-b3\nc3-a3\nc3-d3\nc3-b2\nc3-d2\nc3-e1\nc2-b1\nc2-d1\n") != true) {
			printf("test: failed test_movesShuffled_020\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_020\n");
		return false;
	}
	
	chess_boardSet("12 W\nk..r.\npqp.p\nP.Qp.\nNp...\n...P.\nRB..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a4-b5\nc4-b5\nc4-c5\nc4-d5\nc4-e6\nc4-b4\nc4-d4\nc4-b3\nc4-c3\nc4-c2\nc4-c1\nc4-d3\nc4-e2\na3-b5\na3-c2\nd2-d3\na1-a2\nb1-a2\nb1-c2\nb1-d3\nb1-e4\nb1-b2\nb1-c1\ne1-e2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_021\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 25) {
		printf("test: failed test_movesShuffled_021\n");
		return false;
	}
	
	chess_boardSet("12 B\nk...r\npPppb\nNp...\n..B.p\nP.PPP\n.R.QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-b6\nc5-c4\nd5-d4\ne5-d6\ne5-d4\ne5-c3\ne5-e4\nb4-b3\nb4-c3\ne3-d2\n") != true) {
			printf("test: failed test_movesShuffled_022\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 14) {
		printf("test: failed test_movesShuffled_022\n");
		return false;
	}
	
	chess_boardSet("11 B\nk.b.r\n.ppNp\n...qP\n.....\nRBPP.\n...QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\nc6-d5\nc6-b6\nc6-d6\ne6-d6\nb5-b4\nc5-c4\nd4-d5\nd4-c4\nd4-b4\nd4-a4\nd4-e4\nd4-c3\nd4-b2\nd4-d3\nd4-d2\nd4-e3\n") != true) {
			printf("test: failed test_movesShuffled_023\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_023\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kbr.\np..pp\n..Ppn\np..PB\nPP..K\n.R..Q\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c4-c5\nc4-d5\nd3-e4\ne3-d4\ne3-d2\ne3-c1\nb2-b3\nb2-a3\ne2-d2\ne2-d1\nb1-a1\nb1-c1\nb1-d1\ne1-d2\ne1-c3\ne1-b4\ne1-a5\ne1-d1\ne1-c1\n") != true) {
			printf("test: failed test_movesShuffled_024\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_024\n");
		return false;
	}
	
	chess_boardSet("15 W\n....r\nk...p\n.q.pp\np.Q.P\nR..P.\n...K.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c3-b4\nc3-c4\nc3-c5\nc3-c6\nc3-d4\nc3-b3\nc3-a3\nc3-d3\nc3-b2\nc3-a1\nc3-c2\nc3-c1\ne3-d4\na2-a3\na2-b2\na2-c2\na2-a1\nd2-d3\nd1-c2\nd1-e2\nd1-c1\nd1-e1\n") != true) {
			printf("test: failed test_movesShuffled_025\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_025\n");
		return false;
	}
	
	chess_boardSet("14 B\n.q..r\nk.bpQ\n.B...\n...pP\nPP...\n.R..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-d6\nb6-b5\nb6-b4\ne6-d6\ne6-c6\ne6-e5\na5-a6\na5-b5\na5-a4\na5-b4\nc5-d6\nc5-b4\nc5-d4\nc5-e3\nc5-c6\nc5-b5\nc5-c4\nd5-d4\nd3-d2\n") != true) {
			printf("test: failed test_movesShuffled_026\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 21) {
		printf("test: failed test_movesShuffled_026\n");
		return false;
	}
	
	chess_boardSet("18 B\n.b..r\np.p.Q\nk..P.\n.PN.P\nR...q\n..B.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-b5\ne6-d6\ne6-c6\ne6-e5\nc5-c4\nc5-d4\na4-b5\na4-b4\na4-a3\na4-b3\ne2-d3\ne2-c4\ne2-b5\ne2-a6\ne2-e3\ne2-d2\ne2-c2\ne2-b2\ne2-a2\ne2-d1\ne2-e1\n") != true) {
			printf("test: failed test_movesShuffled_027\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_027\n");
		return false;
	}
	
	chess_boardSet("15 W\nk..Qr\n...p.\np.nNp\nP....\nR.PQP\nq...K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d6-c6\nd6-b6\nd6-a6\nd6-e6\nd6-c5\nd6-b4\nd6-d5\nd6-e5\nd4-c6\nd4-e6\nd4-b5\nd4-b3\na2-b2\na2-a1\nc2-c3\nd2-c3\nd2-b4\nd2-a5\nd2-d3\nd2-e3\nd2-c1\nd2-d1\ne2-e3\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_028\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 24) {
		printf("test: failed test_movesShuffled_028\n");
		return false;
	}
	
	chess_boardSet("14 W\n..Qnr\nk....\n...p.\n....P\nP.qBP\n.R..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-a6\nc6-d6\nc6-b5\nc6-a4\nc6-c5\nc6-c4\nc6-c3\nc6-c2\nc6-d5\nc6-e4\ne3-e4\ne3-d4\na2-a3\nd2-c3\nd2-b4\nd2-a5\nd2-c1\nd2-d3\nd2-d1\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-b6\nb1-a1\nb1-c1\nb1-d1\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_029\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 29) {
		printf("test: failed test_movesShuffled_029\n");
		return false;
	}
	
	chess_boardSet("16 W\nk..b.\npnBp.\nQ...p\n...q.\nN.PP.\n....K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c5-b6\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-c6\nc5-c4\na4-a5\na4-b5\na4-b4\na4-c4\na4-d4\na4-e4\na4-a3\na4-b3\na2-b4\na2-c3\na2-c1\nc2-c3\nc2-d3\ne1-e2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_030\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_030\n");
		return false;
	}
	
	chess_boardSet("18 W\n...nr\nkb..p\n.....\n...Q.\n...PP\nqB..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d3-c4\nd3-b5\nd3-d4\nd3-d5\nd3-d6\nd3-e4\nd3-c3\nd3-b3\nd3-a3\nd3-e3\nd3-c2\ne2-e3\nb1-a2\nb1-c2\nb1-b2\nb1-c1\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_031\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 17) {
		printf("test: failed test_movesShuffled_031\n");
		return false;
	}
	
	chess_boardSet("16 W\nk...r\nR.pbB\nq..p.\n.KPPp\n....P\nQ.n..\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a5-a6\na5-b5\na5-c5\na5-a4\ne5-d6\ne5-d4\ne5-e4\nb3-a4\nb3-b4\nb3-c4\nb3-a3\nb3-a2\nb3-b2\nb3-c2\nc3-c4\nc3-d4\na1-a2\na1-a3\na1-a4\na1-b2\na1-b1\na1-c1\n") != true) {
			printf("test: failed test_movesShuffled_032\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_032\n");
		return false;
	}
	
	chess_boardSet("15 B\n..qr.\npkp..\n.P.pp\np.P.P\nb.BK.\n.Q...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-a6\nc6-d5\nd6-e6\nd6-d5\na5-a4\na5-b4\nb5-a6\nb5-b6\nb5-a4\nb5-b4\nb5-c4\nc5-c4\nc5-b4\nd4-d3\nd4-c3\nd4-e3\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\na2-b2\na2-a1\n") != true) {
			printf("test: failed test_movesShuffled_033\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 24) {
		printf("test: failed test_movesShuffled_033\n");
		return false;
	}
	
	chess_boardSet("18 B\nkn..r\np.p.b\nP...p\n...PP\n..q.K\nB.R..\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b5\nb6-d5\nb6-a4\nb6-c4\ne6-d6\ne6-c6\nc5-c4\ne5-d6\ne5-d4\ne5-c3\ne5-b2\ne5-a1\ne5-d5\ne4-d3\nc2-b3\nc2-a4\nc2-c3\nc2-c4\nc2-d3\nc2-b2\nc2-a2\nc2-d2\nc2-e2\nc2-b1\nc2-c1\nc2-d1\n") != true) {
			printf("test: failed test_movesShuffled_034\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 26) {
		printf("test: failed test_movesShuffled_034\n");
		return false;
	}
	
	chess_boardSet("17 B\nq.b.r\n.ppPp\npk...\nn...p\n.PPKN\n...RQ\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\nc6-d5\nc6-b6\nc6-d6\ne6-d6\nc5-c4\ne5-e4\nb4-a5\nb4-c4\nb4-b3\nb4-c3\na3-c4\na3-c2\na3-b1\ne3-d2\n") != true) {
			printf("test: failed test_movesShuffled_035\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_035\n");
		return false;
	}
	
	chess_boardSet("18 W\nq..r.\n....p\nkQ...\nnBPPP\nbP...\n.R..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b4-a5\nb4-b5\nb4-b6\nb4-c5\nb4-d6\nb4-a4\nb4-c4\nb4-d4\nb4-e4\nb4-a3\nb3-a4\nb3-c4\nb3-d5\nb3-e6\nb3-a2\nb3-c2\nb3-d1\nc3-c4\nd3-d4\ne3-e4\nb2-a3\nb1-a1\nb1-c1\nb1-d1\ne1-d2\ne1-e2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_036\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 27) {
		printf("test: failed test_movesShuffled_036\n");
		return false;
	}
	
	chess_boardSet("18 B\n.q.r.\n.kpPp\npQ...\nP.b..\n...pP\n..RK.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-a5\nd6-c6\nd6-e6\nd6-d5\nb5-a6\nb5-c6\nb5-a5\nb5-b4\nb5-c4\nc5-c4\nc5-b4\ne5-e4\nc3-b4\nc3-d4\nc3-b2\nc3-a1\nc3-c4\nc3-b3\nc3-d3\nc3-c2\nd2-c1\n") != true) {
			printf("test: failed test_movesShuffled_037\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_037\n");
		return false;
	}
	
	chess_boardSet("21 W\n..r..\nkp..p\npPp.B\nP..K.\n.....\nRN..b\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b4-a5\ne4-d5\ne4-c6\ne4-d4\ne4-e3\nd3-c4\nd3-d4\nd3-c3\nd3-e3\nd3-c2\nd3-d2\nd3-e2\na1-a2\nb1-c3\nb1-d2\n") != true) {
			printf("test: failed test_movesShuffled_038\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_038\n");
		return false;
	}
	
	chess_boardSet("17 B\n....r\n.k..q\n.pppp\n.B.PP\n...K.\nRN...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "e6-d6\ne6-c6\ne6-b6\ne6-a6\nb5-a6\nb5-b6\nb5-c6\nb5-a5\nb5-c5\nb5-a4\ne5-d6\ne5-d5\ne5-c5\nc4-c3\nc4-b3\nc4-d3\nd4-e3\ne4-d3\n") != true) {
			printf("test: failed test_movesShuffled_039\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_039\n");
		return false;
	}
	
	chess_boardSet("11 B\n.qb.r\np.pp.\nPpk..\n.P..p\nR.PPP\nB..QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-b5\nc6-b5\nc6-a4\nc6-d6\ne6-d6\ne6-e5\ne6-e4\nd5-d4\nc4-b5\nc4-d4\nc4-b3\nc4-c3\nc4-d3\ne3-d2\n") != true) {
			printf("test: failed test_movesShuffled_040\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_040\n");
		return false;
	}
	
	chess_boardSet("17 W\n.kr..\np.p..\nq.Pb.\n..P.p\n..NKP\n.....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c3-d4\nc2-b4\nc2-d4\nc2-a3\nc2-e3\nc2-a1\nc2-e1\nd2-d3\nd2-e3\nd2-c1\nd2-d1\nd2-e1\n") != true) {
			printf("test: failed test_movesShuffled_041\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 12) {
		printf("test: failed test_movesShuffled_041\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..br\n...pp\nN.qR.\npQ..B\nPPP.P\n....K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\na6-b5\nd6-c5\nd6-b4\nd6-c6\ne5-e4\ne5-d4\nc4-b5\nc4-c5\nc4-c6\nc4-b4\nc4-a4\nc4-d4\nc4-b3\nc4-c3\nc4-c2\nc4-d3\nc4-e2\na3-b2\n") != true) {
			printf("test: failed test_movesShuffled_042\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 20) {
		printf("test: failed test_movesShuffled_042\n");
		return false;
	}
	
	chess_boardSet("20 W\n...r.\nk....\npR.pB\nP..Pq\n..P..\n.b.NK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b4-b5\nb4-b6\nb4-a4\nb4-c4\nb4-d4\nb4-b3\nb4-b2\nb4-b1\ne4-d5\ne4-c6\ne4-e5\nc2-c3\nd1-c3\nd1-e3\nd1-b2\ne1-d2\ne1-e2\n") != true) {
			printf("test: failed test_movesShuffled_043\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 17) {
		printf("test: failed test_movesShuffled_043\n");
		return false;
	}
	
	chess_boardSet("13 W\n.nb.r\n.kqp.\np.p..\nPP..Q\n..P.P\nR..K.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b3-b4\nb3-a4\nb3-c4\ne3-d4\ne3-c5\ne3-e4\ne3-e5\ne3-e6\ne3-d3\ne3-c3\ne3-d2\ne3-c1\nc2-c3\na1-a2\na1-b1\na1-c1\nd1-d2\nd1-c1\nd1-e1\n") != true) {
			printf("test: failed test_movesShuffled_044\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_044\n");
		return false;
	}
	
	chess_boardSet("13 B\n..b.r\nPk...\nBPn.p\n..p.P\n.....\nRN..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-d5\nc6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\nb5-a6\nb5-b6\nb5-a5\nb5-c5\nb5-a4\nb5-b4\nc4-b6\nc4-d6\nc4-a5\nc4-e5\nc4-a3\nc4-e3\nc4-b2\nc4-d2\nc3-c2\n") != true) {
			printf("test: failed test_movesShuffled_045\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 21) {
		printf("test: failed test_movesShuffled_045\n");
		return false;
	}
	
	chess_boardSet("15 B\nk.b.r\np.N.p\n.q..P\n..P..\n.P.pK\n..RB.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-b6\nc6-d6\ne6-d6\na5-a4\nb4-b5\nb4-b6\nb4-c5\nb4-a4\nb4-c4\nb4-d4\nb4-e4\nb4-a3\nb4-b3\nb4-b2\nb4-c3\nd2-c1\n") != true) {
			printf("test: failed test_movesShuffled_046\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_046\n");
		return false;
	}
	
	chess_boardSet("21 W\nkr..b\n.Qp.p\npp.pP\n.....\n..P..\n...K.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b5-a6\nb5-b6\nb5-c6\nb5-a5\nb5-c5\nb5-a4\nb5-b4\nb5-c4\nb5-d3\nb5-e2\nc2-c3\nd1-d2\nd1-e2\nd1-c1\nd1-e1\n") != true) {
			printf("test: failed test_movesShuffled_047\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_047\n");
		return false;
	}
	
	chess_boardSet("20 B\n...b.\nq.pp.\npkp..\nP.P.P\n..BK.\nRQ...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d6-e5\nd6-c6\nd6-e6\na5-a6\na5-b6\na5-b5\nd5-d4\nb4-b5\nb4-a3\nb4-b3\nb4-c3\n") != true) {
			printf("test: failed test_movesShuffled_048\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 11) {
		printf("test: failed test_movesShuffled_048\n");
		return false;
	}
	
	chess_boardSet("17 B\nk..q.\nPpp.r\n.p.qp\n....P\nb....\n.BK..\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\nd6-c6\nd6-b6\nd6-e6\nd6-d5\nc5-c4\ne5-e6\ne5-d5\nb4-b3\nd4-d5\nd4-c4\nd4-c3\nd4-b2\nd4-a1\nd4-d3\nd4-d2\nd4-d1\nd4-e3\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\na2-a3\na2-b2\na2-a1\n") != true) {
			printf("test: failed test_movesShuffled_049\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 27) {
		printf("test: failed test_movesShuffled_049\n");
		return false;
	}
	
	chess_boardSet("20 B\nk...r\npP...\nP..B.\nR.N..\n...PP\nb.Q.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-b6\ne6-e5\ne6-e4\ne6-e3\ne6-e2\na1-b2\na1-c3\na1-a2\na1-b1\n") != true) {
			printf("test: failed test_movesShuffled_050\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 13) {
		printf("test: failed test_movesShuffled_050\n");
		return false;
	}
	
	chess_boardSet("16 B\n...nB\npk.p.\nr.pb.\n..K..\nP..PP\nRN...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d6-e4\nb5-a6\nb5-b6\nb5-c6\nb5-c5\nb5-b4\na4-b4\na4-a3\na4-a2\nd4-c5\nd4-b6\nd4-e5\nd4-c3\nd4-e3\nd4-e4\nd4-d3\n") != true) {
			printf("test: failed test_movesShuffled_051\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_051\n");
		return false;
	}
	
	chess_boardSet("12 B\nkq.br\np....\np..Pp\nN.n..\nPP.PP\n..R.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b5\nb6-c6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-c5\nb6-d4\nd6-c5\nd6-b4\nd6-a3\nd6-e5\nd6-c6\nd6-d5\ne6-e5\ne4-e3\nc3-b5\nc3-d5\nc3-a2\nc3-e2\nc3-b1\nc3-d1\n") != true) {
			printf("test: failed test_movesShuffled_052\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_052\n");
		return false;
	}
	
	chess_boardSet("15 B\n..Qnr\npk...\n...pp\n.....\nPR.qP\n..B.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d6-c4\ne6-e5\na5-a4\nb5-a6\nb5-b6\nb5-c6\nb5-c5\nb5-a4\nb5-b4\nb5-c4\nd4-d3\ne4-e3\nd2-c3\nd2-b4\nd2-d3\nd2-e3\nd2-c2\nd2-b2\nd2-e2\nd2-c1\nd2-d1\nd2-e1\n") != true) {
			printf("test: failed test_movesShuffled_053\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_053\n");
		return false;
	}
	
	chess_boardSet("18 B\nk...q\np...p\n....R\n...pN\n..rP.\n...QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-b6\ne6-d5\ne6-c4\ne6-b3\ne6-a2\na5-a4\nc2-c3\nc2-c4\nc2-c5\nc2-c6\nc2-b2\nc2-a2\nc2-d2\nc2-c1\n") != true) {
			printf("test: failed test_movesShuffled_054\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_054\n");
		return false;
	}
	
	chess_boardSet("14 W\nq..n.\npkp..\nbpr..\n..N.P\nPB..K\nR...Q\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c3-b5\nc3-d5\nc3-a4\nc3-e4\nc3-b1\nc3-d1\ne3-e4\na2-a3\nb2-a3\nb2-c1\nb2-b3\nb2-c2\nb2-b1\ne2-d3\ne2-d2\ne2-d1\na1-b1\na1-c1\na1-d1\ne1-d2\ne1-d1\ne1-c1\ne1-b1\n") != true) {
			printf("test: failed test_movesShuffled_055\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_055\n");
		return false;
	}
	
	chess_boardSet("15 W\n...r.\np.pk.\n...Pp\nB.p..\nPQ..P\nR..bK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d4-c5\na3-b4\na3-c5\na3-a4\na3-b3\nb2-b3\nb2-b4\nb2-b5\nb2-b6\nb2-c3\nb2-c2\nb2-d2\nb2-b1\nb2-c1\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_056\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 20) {
		printf("test: failed test_movesShuffled_056\n");
		return false;
	}
	
	chess_boardSet("17 W\nk.r..\np.p.p\nb....\n.PqPK\nP..nQ\n.R...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b3-b4\nb3-a4\nd3-d4\ne3-d4\ne3-e4\ne3-d2\na2-a3\ne2-d2\ne2-d1\ne2-e1\nb1-b2\nb1-a1\nb1-c1\nb1-d1\nb1-e1\n") != true) {
			printf("test: failed test_movesShuffled_057\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_057\n");
		return false;
	}
	
	chess_boardSet("15 W\nk...r\npP.pp\n....n\nP....\n.PP.Q\n.RbK.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b5-b6\nb5-a6\na3-a4\nb2-b3\nc2-c3\ne2-d3\ne2-c4\ne2-e3\ne2-e4\ne2-d2\ne2-e1\nb1-a1\nb1-c1\nd1-d2\nd1-c1\nd1-e1\n") != true) {
			printf("test: failed test_movesShuffled_058\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_058\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kb..\nn.P.r\npp..P\nPQ..P\n.B..K\nRN...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c5-b6\na3-b4\nb3-a4\nb3-b4\nb3-c4\nb3-d5\nb3-e6\nb3-c3\nb3-d3\nb3-a2\nb3-c2\nb3-d1\nb2-c3\nb2-d4\nb2-e5\nb2-c1\nb2-a2\nb2-c2\ne2-d3\ne2-d2\ne2-d1\ne2-e1\na1-a2\nb1-c3\nb1-d2\n") != true) {
			printf("test: failed test_movesShuffled_059\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 25) {
		printf("test: failed test_movesShuffled_059\n");
		return false;
	}
	
	chess_boardSet("13 B\n.bq.r\npkQ.p\n...PP\nN..P.\nPP..K\n.RB..\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-c5\nb6-a6\nc6-d6\nc6-c5\nc6-d5\nc6-e4\ne6-d6\na5-a4\nb5-a6\nb5-c5\nb5-a4\nb5-b4\nb5-c4\ne5-d4\n") != true) {
			printf("test: failed test_movesShuffled_060\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 14) {
		printf("test: failed test_movesShuffled_060\n");
		return false;
	}
	
	chess_boardSet("12 W\nk.qnQ\n..pb.\npp..P\n.....\nPPP.P\nRNB.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "e6-d6\ne6-d5\ne6-e5\ne4-e5\ne4-d5\na2-a3\nb2-b3\nc2-c3\ne2-e3\nb1-a3\nb1-c3\nb1-d2\nc1-d2\nc1-e3\nc1-d1\ne1-d2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_061\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 17) {
		printf("test: failed test_movesShuffled_061\n");
		return false;
	}
	
	chess_boardSet("15 W\n.k.q.\nb.Ppp\n.p..P\np.PPK\nP...n\nRB...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c5-c6\nc5-b6\nc5-d6\ne4-d5\nc3-c4\nc3-b4\nd3-d4\ne3-d4\ne3-d2\ne3-e2\nb1-c2\nb1-b2\nb1-c1\n") != true) {
			printf("test: failed test_movesShuffled_062\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 13) {
		printf("test: failed test_movesShuffled_062\n");
		return false;
	}
	
	chess_boardSet("15 W\n.r...\n.np.p\nk.N.P\n.pPp.\nP..P.\n.R..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c4-b6\nc4-d6\nc4-a5\nc4-e5\nc4-a3\nc4-e3\nc4-b2\na2-a3\na2-b3\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\ne1-e2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_063\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_063\n");
		return false;
	}
	
	chess_boardSet("13 B\nk..nr\nbq...\npp..p\nPPpP.\nRBQ.P\n....K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\nd6-c4\ne6-e5\na5-b6\nb5-b6\nb5-c6\nb5-c5\nb5-d5\nb5-e5\nb5-c4\nb5-d3\na4-b3\nb4-a3\ne4-e3\ne4-d3\nc3-b2\n") != true) {
			printf("test: failed test_movesShuffled_064\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_064\n");
		return false;
	}
	
	chess_boardSet("15 W\n.qb..\nkpP.r\np...N\nP...p\nB.P.P\nRnQ.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c5-b6\ne4-d6\ne4-c3\ne4-d2\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\na2-b2\nc2-c3\na1-b1\nc1-b2\nc1-d2\nc1-e3\nc1-b1\nc1-d1\ne1-d2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_065\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_065\n");
		return false;
	}
	
	chess_boardSet("21 W\n.....\n.kp..\np.PPn\nP....\n.B.Kr\nR...Q\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c4-b5\nd4-d5\nd4-c5\nb2-c3\nb2-c1\nb2-b3\nb2-a2\nb2-c2\nb2-b1\nd2-c3\nd2-d3\nd2-e3\nd2-c2\nd2-e2\nd2-c1\nd2-d1\na1-a2\na1-b1\na1-c1\na1-d1\ne1-e2\ne1-d1\ne1-c1\ne1-b1\n") != true) {
			printf("test: failed test_movesShuffled_066\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 24) {
		printf("test: failed test_movesShuffled_066\n");
		return false;
	}
	
	chess_boardSet("15 W\n.b.nr\nk....\n..p.p\nP.NpP\n.P.P.\nR..BK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a3-a4\nc3-b5\nc3-d5\nc3-a4\nc3-e4\nc3-a2\nc3-e2\nc3-b1\nb2-b3\na1-a2\na1-b1\na1-c1\nd1-c2\nd1-b3\nd1-a4\nd1-e2\nd1-c1\ne1-e2\n") != true) {
			printf("test: failed test_movesShuffled_067\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_067\n");
		return false;
	}
	
	chess_boardSet("12 W\n.k.b.\nPq..n\n..p.r\nQ..p.\nPP.PP\nRBK..\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a5-a6\na5-b6\na3-a4\na3-b4\na3-c5\na3-d6\na3-b3\na3-c3\na3-d3\nb2-b3\ne2-e3\ne2-d3\nb1-c2\nb1-d3\nc1-c2\nc1-d1\n") != true) {
			printf("test: failed test_movesShuffled_068\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_068\n");
		return false;
	}
	
	chess_boardSet("19 W\n....r\n.kpp.\nR...N\n.Pq.P\n..P.K\n...B.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a4-a5\na4-a6\na4-b4\na4-c4\na4-d4\na4-a3\na4-a2\na4-a1\ne4-d6\ne4-c5\ne4-c3\ne4-d2\nb3-b4\ne2-d3\ne2-d2\ne2-e1\nd1-d2\nd1-c1\nd1-e1\n") != true) {
			printf("test: failed test_movesShuffled_069\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_069\n");
		return false;
	}
	
	chess_boardSet("18 W\nk..br\np..p.\nPPpq.\n..P.P\n...K.\n.....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b4-b5\nb4-a5\nc3-d4\ne3-e4\ne3-d4\nd2-d3\nd2-c2\nd2-e2\nd2-c1\nd2-d1\nd2-e1\n") != true) {
			printf("test: failed test_movesShuffled_070\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 11) {
		printf("test: failed test_movesShuffled_070\n");
		return false;
	}
	
	chess_boardSet("20 B\n.b..r\n.k..p\npB..p\nn.R.q\n...P.\nQ...K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a5\nb6-c5\nb6-d4\nb6-a6\nb6-c6\ne6-d6\ne6-c6\nb5-a6\nb5-c6\nb5-a5\nb5-c5\nb5-b4\nb5-c4\na3-c4\na3-c2\na3-b1\ne3-d4\ne3-c5\ne3-d3\ne3-c3\ne3-d2\ne3-e2\ne3-e1\n") != true) {
			printf("test: failed test_movesShuffled_071\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_071\n");
		return false;
	}
	
	chess_boardSet("19 B\n..k..\nr....\n.ppPp\n...PP\n.B..K\nR....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-d6\nc6-b5\nc6-c5\nc6-d5\na5-a6\na5-b5\na5-c5\na5-d5\na5-e5\na5-a4\na5-a3\na5-a2\na5-a1\nb4-b3\nc4-c3\nc4-d3\ne4-d3\n") != true) {
			printf("test: failed test_movesShuffled_072\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_072\n");
		return false;
	}
	
	chess_boardSet("19 B\n..r..\n.kp..\nbp.pp\n....P\n.BP.Q\n.R..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-a6\nc6-d6\nc6-e6\nb5-a6\nb5-b6\nb5-a5\nb5-c4\nc5-c4\na4-b3\na4-c2\na4-a5\na4-a3\nb4-b3\nd4-d3\nd4-e3\n") != true) {
			printf("test: failed test_movesShuffled_073\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_073\n");
		return false;
	}
	
	chess_boardSet("15 W\nk...r\npb...\n.Pq..\nN.Pp.\nR.B.K\n.Q...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b4-a5\na3-b5\na3-c4\na2-b2\na2-a1\nc2-b3\nc2-a4\nc2-d3\nc2-d1\nc2-b2\nc2-d2\nc2-c1\ne2-d3\ne2-e3\ne2-d2\ne2-d1\ne2-e1\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\nb1-e1\n") != true) {
			printf("test: failed test_movesShuffled_074\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_074\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.b..\np...n\n.qp.r\n...Q.\nPP..P\n..RBK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-b6\nc6-d6\nc6-c5\na5-a4\ne5-d3\nb4-b5\nb4-b6\nb4-c5\nb4-d6\nb4-a4\nb4-a3\nb4-b3\nb4-b2\nb4-c3\nb4-d2\nb4-e1\nc4-c3\nc4-d3\ne4-d4\ne4-e3\ne4-e2\n") != true) {
			printf("test: failed test_movesShuffled_075\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 26) {
		printf("test: failed test_movesShuffled_075\n");
		return false;
	}
	
	chess_boardSet("19 B\n.k.n.\n....r\n..Bpp\nP..K.\n....P\nRN...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-a5\nb6-b5\nb6-c5\nd6-b5\nd6-c4\ne5-e6\ne5-d5\ne5-c5\ne5-b5\ne5-a5\ne4-e3\ne4-d3\n") != true) {
			printf("test: failed test_movesShuffled_076\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 14) {
		printf("test: failed test_movesShuffled_076\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq..r\npn.p.\n.p.Pp\n.p..P\nP.PN.\nRB..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-c6\nb6-d6\nb6-c5\nb6-d4\ne6-d6\ne6-c6\ne6-e5\na5-a4\nb5-d6\nb5-d4\nb5-a3\nb5-c3\nb3-b2\nb3-a2\nb3-c2\n") != true) {
			printf("test: failed test_movesShuffled_077\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_077\n");
		return false;
	}
	
	chess_boardSet("17 B\nk.b.r\n.p...\np.n..\n...p.\nNPq.P\nR.B.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-a5\nc6-d5\nc6-e4\nc6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\ne6-e4\ne6-e3\ne6-e2\nb5-b4\na4-a3\nc4-b6\nc4-d6\nc4-a5\nc4-e5\nc4-a3\nc4-e3\nc4-b2\nc4-d2\nd3-d2\nd3-e2\nc2-b3\nc2-c3\nc2-b2\nc2-d2\nc2-e2\nc2-b1\nc2-c1\nc2-d1\n") != true) {
			printf("test: failed test_movesShuffled_078\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 32) {
		printf("test: failed test_movesShuffled_078\n");
		return false;
	}
	
	chess_boardSet("14 B\n.q..r\n.k..p\nP.p.p\nbpQBK\nRPP..\n.N...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-d6\nb6-a5\nb6-c5\nb6-d4\nb6-e3\ne6-d6\ne6-c6\nb5-a6\nb5-c6\nb5-a5\nb5-c5\nb5-a4\nb5-b4\nc4-d3\ne4-d3\na3-b4\na3-c5\na3-d6\na3-b2\nb3-a2\nb3-c2\n") != true) {
			printf("test: failed test_movesShuffled_079\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_079\n");
		return false;
	}
	
	chess_boardSet("15 B\nkq.nr\n.p..p\n.p.P.\n..Pb.\nP..B.\nRNQK.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-a5\nb6-c6\nb6-a5\nb6-c5\nb6-d4\nd6-c4\nd6-e4\ne5-e4\ne5-d4\nb4-b3\nb4-c3\nd3-c4\nd3-e4\nd3-c2\nd3-b1\nd3-e2\nd3-e3\n") != true) {
			printf("test: failed test_movesShuffled_080\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 17) {
		printf("test: failed test_movesShuffled_080\n");
		return false;
	}
	
	chess_boardSet("16 B\n.....\npk..p\nqbp.n\nRP...\n..prP\n.NQ.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b5-a6\nb5-b6\nb5-c6\nb5-c5\na4-a3\na4-b3\nb4-c5\nb4-d6\nb4-a3\nb4-c3\nc4-c3\nc4-b3\ne4-d6\ne4-c5\ne4-c3\nc2-b1\nd2-d3\nd2-d4\nd2-d5\nd2-d6\nd2-e2\nd2-d1\n") != true) {
			printf("test: failed test_movesShuffled_081\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 22) {
		printf("test: failed test_movesShuffled_081\n");
		return false;
	}
	
	chess_boardSet("21 W\n..kr.\nn.pbp\nP..q.\nP.P.p\n..B..\nQ.RK.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c3-c4\nc3-d4\nc2-b3\nc2-d3\nc2-e4\nc2-b1\nc2-b2\nc2-d2\na1-a2\na1-b2\na1-b1\nc1-b1\nd1-d2\nd1-e2\nd1-e1\n") != true) {
			printf("test: failed test_movesShuffled_082\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_082\n");
		return false;
	}
	
	chess_boardSet("12 B\n..bn.\n.p.qr\n.kppp\n.PPPP\nP..BK\nR....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-c5\nd5-e6\nd5-c5\ne5-e6\nb4-a5\nb4-c5\nb4-a4\nb4-a3\nb4-b3\nb4-c3\nc4-b3\nc4-d3\nd4-c3\nd4-e3\ne4-d3\n") != true) {
			printf("test: failed test_movesShuffled_083\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_083\n");
		return false;
	}
	
	chess_boardSet("11 B\nk....\npq.r.\n.pppb\nP..P.\nP.PB.\nRN..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na5-a4\nb5-b6\nb5-c6\nb5-c5\nb5-a4\nd5-d6\nd5-c5\nd5-e5\nb4-b3\nb4-a3\nc4-c3\nc4-d3\ne4-d3\ne4-e5\ne4-e3\n") != true) {
			printf("test: failed test_movesShuffled_084\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_084\n");
		return false;
	}
	
	chess_boardSet("13 B\nbkqr.\n..ppp\n.....\n.p..P\nP....\nRB.QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b5\na6-c4\na6-d3\na6-e2\na6-a5\nb6-a5\nb6-b5\nc6-b5\nc6-a4\nd6-e6\nc5-c4\nd5-d4\ne5-e4\nb3-b2\nb3-a2\n") != true) {
			printf("test: failed test_movesShuffled_085\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_085\n");
		return false;
	}
	
	chess_boardSet("14 W\nkb..r\n..pp.\n.p.n.\n.q.pQ\nP..KP\nRN...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "e3-d4\ne3-e4\ne3-e5\ne3-e6\ne3-d3\na2-a3\na2-b3\nd2-c3\nd2-d3\nd2-c2\nd2-c1\nd2-d1\nd2-e1\ne2-d3\nb1-a3\nb1-c3\n") != true) {
			printf("test: failed test_movesShuffled_086\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 16) {
		printf("test: failed test_movesShuffled_086\n");
		return false;
	}
	
	chess_boardSet("11 B\nkqb.r\nP.p..\n...p.\nn.PPp\n.B..P\nR.Q.K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-a5\na6-b5\nb6-a5\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-d6\ne6-d6\ne6-e5\ne6-e4\nc5-c4\nd4-c3\na3-b5\na3-c4\na3-c2\na3-b1\n") != true) {
			printf("test: failed test_movesShuffled_087\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 21) {
		printf("test: failed test_movesShuffled_087\n");
		return false;
	}
	
	chess_boardSet("12 B\n..bnr\n.kpPp\nRp..P\n.p.K.\n..QP.\n.q...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-d5\nc6-b6\nd6-c4\nd6-e4\nb5-a6\nb5-b6\nb5-a5\nb5-a4\nb5-c4\nc5-c4\nb3-b2\nb3-c2\nb1-a2\nb1-b2\nb1-c2\nb1-a1\nb1-c1\nb1-d1\nb1-e1\n") != true) {
			printf("test: failed test_movesShuffled_088\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_088\n");
		return false;
	}
	
	chess_boardSet("21 W\nk.q.r\n.....\nppbpp\n....P\n..B..\nR..QK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "e3-d4\nc2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b1\nc2-c3\nc2-b2\nc2-d2\nc2-c1\na1-a2\na1-a3\na1-a4\na1-b1\na1-c1\nd1-d2\nd1-d3\nd1-d4\nd1-e2\nd1-c1\nd1-b1\ne1-d2\ne1-e2\n") != true) {
			printf("test: failed test_movesShuffled_089\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_089\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..rq\nn.p.p\n.p..b\nN.PPp\nP..KP\n..RQ.\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\nd6-c6\nd6-b6\nd6-d5\nd6-d4\nd6-d3\ne6-d5\ne6-c4\ne6-b3\ne6-a2\na5-c6\na5-c4\na5-b3\nc5-c4\nb4-b3\nb4-a3\nb4-c3\ne4-d5\ne4-c6\ne4-d3\ne4-d4\ne3-d2\n") != true) {
			printf("test: failed test_movesShuffled_090\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_090\n");
		return false;
	}
	
	chess_boardSet("11 B\nkb.nr\n.p..p\nP..p.\nPB.q.\n...NP\nR...K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-a5\nb6-a5\nb6-c5\nb6-c6\nd6-c4\nd6-e4\nb5-b4\nb5-a4\ne5-e4\nd3-c4\nd3-e4\nd3-c3\nd3-b3\nd3-e3\nd3-c2\nd3-b1\nd3-d2\nd3-e2\n") != true) {
			printf("test: failed test_movesShuffled_091\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 18) {
		printf("test: failed test_movesShuffled_091\n");
		return false;
	}
	
	chess_boardSet("13 B\nk...r\np...p\n..qpn\nP..PP\nRpQK.\n.....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-b6\na5-a4\nc4-b5\nc4-c5\nc4-c6\nc4-d5\nc4-b4\nc4-a4\nc4-b3\nc4-a2\nc4-c3\nc4-c2\nc4-d3\nd4-e3\ne4-d6\ne4-c5\ne4-c3\ne4-d2\nb2-b1\n") != true) {
			printf("test: failed test_movesShuffled_092\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 23) {
		printf("test: failed test_movesShuffled_092\n");
		return false;
	}
	
	chess_boardSet("20 W\nbQ...\nk..p.\n.p.P.\npp..n\nP..KP\nRB...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-c6\nb6-d6\nb6-e6\nb6-a5\nb6-b5\nb6-b4\nb6-c5\na2-b3\nd2-c3\nd2-d3\nd2-e3\nd2-c2\nd2-c1\nd2-d1\nd2-e1\nb1-c2\nb1-d3\nb1-e4\nb1-b2\nb1-c1\n") != true) {
			printf("test: failed test_movesShuffled_093\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 21) {
		printf("test: failed test_movesShuffled_093\n");
		return false;
	}
	
	chess_boardSet("12 B\n.qr..\n.k..p\np.p.P\nPP.p.\nBP.P.\nRQ..K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "b6-a6\nb6-a5\nb6-c5\nb6-d4\nb6-e3\nc6-d6\nc6-e6\nc6-c5\nb5-a6\nb5-a5\nb5-c5\nb5-b4\na4-b3\nc4-c3\nc4-b3\n") != true) {
			printf("test: failed test_movesShuffled_094\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 15) {
		printf("test: failed test_movesShuffled_094\n");
		return false;
	}
	
	chess_boardSet("20 B\n..r..\nkb.np\nP.pq.\n.P...\nRB.P.\n...NK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-c5\na5-a6\na5-b6\na5-a4\na5-b4\nb5-a6\nb5-a4\nb5-b6\nb5-c5\nb5-b4\nd5-b6\nd5-b4\nd5-c3\nd5-e3\ne5-e4\nc4-c3\nc4-b3\nd4-c5\nd4-b6\nd4-e4\nd4-c3\nd4-b2\nd4-d3\nd4-d2\nd4-e3\n") != true) {
			printf("test: failed test_movesShuffled_095\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 29) {
		printf("test: failed test_movesShuffled_095\n");
		return false;
	}
	
	chess_boardSet("14 B\nkr...\n.qpb.\nPpP..\nn....\nB.P.P\n..RQK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "a6-a5\nb6-c6\nb6-d6\nb6-e6\nb5-c6\nb5-a5\nb5-a4\nb5-c4\nd5-c6\nd5-e6\nd5-c4\nd5-e4\nd5-d6\nd5-e5\nd5-d4\nb4-b3\na3-c4\na3-c2\na3-b1\n") != true) {
			printf("test: failed test_movesShuffled_096\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_096\n");
		return false;
	}
	
	chess_boardSet("17 W\n.kqr.\n.pb..\n.pPpp\nP..Q.\n.RP.K\n.....\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c4-b5\na3-a4\na3-b4\nd3-d4\nd3-e4\nd3-c3\nd3-b3\nd3-e3\nd3-d2\nd3-d1\nb2-b3\nb2-b4\nb2-a2\nb2-b1\nc2-c3\ne2-e3\ne2-d2\ne2-d1\ne2-e1\n") != true) {
			printf("test: failed test_movesShuffled_097\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 19) {
		printf("test: failed test_movesShuffled_097\n");
		return false;
	}
	
	chess_boardSet("14 B\n...br\n.p.pp\n.k..n\n..PP.\nP..KQ\n.R...\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "d6-c5\nd6-c6\nd5-d4\nb4-a5\nb4-c5\nb4-a4\nb4-c4\nb4-a3\nb4-b3\nb4-c3\ne4-c5\ne4-c3\ne4-d2\n") != true) {
			printf("test: failed test_movesShuffled_098\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 13) {
		printf("test: failed test_movesShuffled_098\n");
		return false;
	}
	
	chess_boardSet("20 W\nkq..r\n.pQ..\n...p.\nR..P.\n...NP\n...bK\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c5-b6\nc5-c6\nc5-d6\nc5-b5\nc5-d5\nc5-e5\nc5-b4\nc5-c4\nc5-c3\nc5-c2\nc5-c1\nc5-d4\na3-a4\na3-a5\na3-a6\na3-b3\na3-c3\na3-a2\na3-a1\nd2-c4\nd2-e4\nd2-b3\nd2-b1\ne2-e3\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_099\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 25) {
		printf("test: failed test_movesShuffled_099\n");
		return false;
	}
	
	chess_boardSet("20 W\nk.b..\nq.Nr.\npQ.Pp\nP.B..\nR.P.P\n....K\n");
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
		if (test_movesCompare(intBuffer[intFor1], &charBuffer[intFor1 * 1024], "c5-a6\nc5-e6\nc5-a4\nc5-e4\nc5-b3\nc5-d3\nb4-a5\nb4-b5\nb4-b6\nb4-a4\nb4-c4\nb4-b3\nb4-b2\nb4-b1\nc3-b2\nc3-a1\nc3-d2\nc3-c4\nc3-b3\nc3-d3\na2-b2\na2-a1\ne2-e3\ne1-d2\ne1-d1\n") != true) {
			printf("test: failed test_movesShuffled_100\n");
			return false;
		}
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 25) {
		printf("test: failed test_movesShuffled_100\n");
		return false;
	}
		
	return true;
}

bool test_movesOrder(int intMoves, char* charMoves) {
	int intEval[256] = { };
	
	for (int intFor1 = 0; intFor1 < intMoves; intFor1 += 1) {
		char charMove[16] = { };
		
		charMove[0] = charMoves[(intFor1 * 6) + 0];
		charMove[1] = charMoves[(intFor1 * 6) + 1];
		charMove[2] = '-';
		charMove[3] = charMoves[(intFor1 * 6) + 3];
		charMove[4] = charMoves[(intFor1 * 6) + 4];
		charMove[5] = '\n';
		charMove[6] = '\0';
		
		chess_move(&charMove[0]);
		intEval[intFor1] = chess_eval();
		chess_undo();
	}
	
	for (int intFor1 = 0; intFor1 < intMoves - 1; intFor1 += 1) {
		if (intEval[intFor1] > intEval[intFor1 + 1]) {
			return false;
		}
	}
	
	return true;
}

bool test_movesEvaluated() {
	int intBuffer = 0;
	char charBuffer[1024] = { };
	
	chess_reset();
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-a3\nb2-b3\nc2-c3\nd2-d3\ne2-e3\nb1-a3\nb1-c3\n") != true) {
		printf("test: failed test_movesEvaluated_001\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_001\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kqnr\n..ppp\np..P.\nP.NbP\n...K.\n.RB..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-c5\nd4-e5\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nc3-a2\nc3-e2\nc3-d1\ne3-e4\nd2-d3\nd2-c2\nd2-e2\nd2-d1\nd2-e1\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-b6\nb1-a1\nc1-b2\nc1-c2\nc1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_002\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_002\n");
		return false;
	}
	
	chess_boardSet("12 W\nk..b.\n...pr\nppP..\nP.NQ.\nRnP.P\n....K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-d5\na3-b4\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nc3-b1\nc3-d1\nd3-d4\nd3-d5\nd3-e3\nd3-d2\nd3-d1\nd3-e4\na2-b2\na2-a1\ne2-e3\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_003\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_003\n");
		return false;
	}
	
	chess_boardSet("19 W\n.kr..\np.p.p\nP..p.\nRn...\n.PQ.q\n..N.K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-b3\na3-a2\na3-a1\nc2-c3\nc2-c4\nc2-c5\nc2-d2\nc2-e2\nc2-b3\nc2-d3\nc2-e4\nc2-b1\nc2-d1\nc1-a2\nc1-b3\nc1-e2\nc1-d3\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_004\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_004\n");
		return false;
	}
	
	chess_boardSet("13 W\n.b.nr\nqpkpp\n..Q..\n.pP..\n.R.PP\n.NBK.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b4\nc4-a4\nc4-d4\nc4-e4\nc4-b5\nc4-d5\nc4-b3\nc4-d3\nb2-b3\nb2-a2\nb2-c2\nd2-d3\ne2-e3\nb1-a3\nc1-c2\nd1-e1\nd1-c2\n") != true) {
		printf("test: failed test_movesEvaluated_005\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_005\n");
		return false;
	}
	
	chess_boardSet("12 B\n.k.nr\n.P.Pp\n....q\nN...P\nPB.P.\nbR..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nb6-c5\nd6-b5\nd6-c4\ne4-d4\ne4-c4\ne4-b4\ne4-a4\ne4-e3\ne4-d5\ne4-d3\ne4-c2\ne4-b1\na1-b2\n") != true) {
		printf("test: failed test_movesEvaluated_006\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_006\n");
		return false;
	}
	
	chess_boardSet("20 W\n....r\np.q.p\nPpk.b\n.P..p\nR.PNP\n.Q.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-c4\na2-a3\na2-b2\na2-a1\nc2-c3\nd2-c4\nd2-e4\nb1-b2\nb1-a1\nb1-c1\nd1-c1\nd1-e1\n") != true) {
		printf("test: failed test_movesEvaluated_007\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_007\n");
		return false;
	}
	
	chess_boardSet("15 B\nkr...\np...p\nq..p.\nPPnPb\n.Q.BP\nRN..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b5\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-b4\nb6-b3\ne5-e4\na4-b4\na4-c4\na4-a3\na4-b5\na4-c6\na4-b3\nc3-b5\nc3-e4\nc3-d5\nc3-a2\nc3-b1\nc3-e2\nc3-d1\ne3-d2\ne3-e4\n") != true) {
		printf("test: failed test_movesEvaluated_008\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_008\n");
		return false;
	}
	
	chess_boardSet("17 B\nk.bnQ\n.p...\n....p\nB.NqK\nP.P..\n...R.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nc6-d5\nc6-b6\nc6-c5\nd6-c4\nb5-b4\nd3-d4\nd3-d5\nd3-c3\nd3-e3\nd3-d2\nd3-d1\nd3-c4\nd3-c2\nd3-e2\n") != true) {
		printf("test: failed test_movesEvaluated_009\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_009\n");
		return false;
	}
	
	chess_boardSet("17 W\nk..br\n..p.p\np....\nPBN.P\n...KP\nR..q.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-a4\nb3-c4\nb3-d5\nb3-e6\nb3-a2\nb3-c2\nb3-d1\nb3-b4\nb3-b2\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nc3-a2\nc3-b1\nc3-d1\ne3-e4\nd2-d3\nd2-c2\nd2-d1\nd2-c1\nd2-e1\na1-a2\na1-b1\na1-c1\na1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_010\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_010\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq..r\n..b.p\np.ppP\n....P\npPP.B\n.RQK.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-d6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-a5\ne6-d6\ne6-c6\nc5-d6\nc5-b4\nc5-a3\nc5-c6\nc5-b5\nc5-d5\na4-a3\nc4-c3\nd4-d3\nd4-e3\na2-a1\na2-b1\n") != true) {
		printf("test: failed test_movesEvaluated_011\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_011\n");
		return false;
	}
	
	chess_boardSet("14 B\nq.br.\n..pp.\nkp..p\n.PB.K\nP..P.\n.R.Q.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\na6-c4\na6-d3\na6-e2\nc6-b5\nc6-b6\nd6-e6\nc5-c4\nd5-d4\na4-a5\na4-a3\na4-b5\na4-b3\nb4-c3\n") != true) {
		printf("test: failed test_movesEvaluated_012\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_012\n");
		return false;
	}
	
	chess_boardSet("15 B\nk.b.r\n..nNp\nqKp..\nP....\n..P.P\nRB...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b5\nc6-d5\nc6-b6\nc6-d6\ne6-d6\nc5-b3\nc5-e4\nc5-d3\ne5-e4\na4-a5\na4-b4\na4-a3\na4-b5\na4-b3\na4-c2\nc4-c3\n") != true) {
		printf("test: failed test_movesEvaluated_013\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_013\n");
		return false;
	}
	
	chess_boardSet("17 W\n.B..r\n.nk.p\nP.p.p\np...P\nP..P.\n.R..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a5\nb6-c5\nb6-a6\nb6-c6\na4-a5\na4-b5\nd2-d3\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-a1\nb1-c1\nb1-d1\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_014\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_014\n");
		return false;
	}
	
	chess_boardSet("16 B\nk.r..\n.NqPp\n..p..\n.pP.P\nQn..K\nR....\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b6\nc6-d6\nc6-e6\nc5-b5\nc5-d5\nc5-b6\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\ne5-e4\nb3-a2\nb2-a4\nb2-d3\nb2-d1\n") != true) {
		printf("test: failed test_movesEvaluated_015\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_015\n");
		return false;
	}
	
	chess_boardSet("21 W\n...br\n.kpnp\nR..qP\nPP...\n...PK\n...Q.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-a5\na4-a6\na4-b4\na4-c4\na4-d4\ne4-d5\nb3-b4\nd2-d3\ne2-e3\ne2-e1\ne2-d3\nd1-c1\nd1-b1\nd1-a1\nd1-e1\nd1-c2\n") != true) {
		printf("test: failed test_movesEvaluated_016\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_016\n");
		return false;
	}
	
	chess_boardSet("16 W\n..b.r\nk...p\n...P.\n.P.B.\n.P..P\n.R..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d5\nd4-e5\nb3-b4\nd3-c4\nd3-b5\nd3-a6\nd3-e4\nd3-c2\nd3-c3\nd3-e3\nd3-d2\ne2-e3\nb1-a1\nb1-c1\nb1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_017\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_017\n");
		return false;
	}
	
	chess_boardSet("12 W\nk...r\nq.ppp\n.bn.P\nPp.P.\n.....\nRNBK.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-d5\na3-a4\na3-b4\nd3-d4\nd3-c4\na1-a2\nb1-d2\nb1-c3\nc1-b2\nc1-d2\nc1-e3\nc1-c2\nd1-d2\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_018\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_018\n");
		return false;
	}
	
	chess_boardSet("13 W\nk..b.\n.Q...\npp...\n..p.r\nP.p.P\nR...K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-b6\nb5-a5\nb5-c5\nb5-d5\nb5-e5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nb5-d3\na2-a3\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_019\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_019\n");
		return false;
	}
	
	chess_boardSet("17 B\nkb...\npQ..r\n..n..\nP.p.K\n....P\nR....\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b5\nb6-c5\nb6-d4\nb6-e3\nb6-c6\na5-a4\ne5-e6\ne5-d5\ne5-c5\ne5-b5\ne5-e4\ne5-e3\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nc3-c2\n") != true) {
		printf("test: failed test_movesEvaluated_020\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_020\n");
		return false;
	}
	
	chess_boardSet("14 B\nk...r\np.p.p\n...N.\n.PpbP\nPQKB.\n.R...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-b6\na5-a4\nc5-c4\nc5-d4\ne5-e4\ne5-d4\nc3-b2\nc3-d2\nd3-c4\nd3-b5\nd3-e4\nd3-c2\nd3-e2\n") != true) {
		printf("test: failed test_movesEvaluated_021\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_021\n");
		return false;
	}
	
	chess_boardSet("13 B\n.k..r\np.ppp\nbP.P.\n.PP.B\n....P\n.R.QK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\ne6-d6\ne6-c6\na5-b4\nc5-c4\nc5-b4\nc5-d4\ne5-e4\ne5-d4\na4-b5\na4-c6\na4-b3\na4-a3\n") != true) {
		printf("test: failed test_movesEvaluated_022\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_022\n");
		return false;
	}
	
	chess_boardSet("16 W\n...nr\nkpq.p\np.p.P\nN.QB.\nPP...\nR..K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-c4\na3-b5\na3-c2\na3-b1\nc3-c4\nc3-b3\nc3-c2\nc3-c1\nc3-b4\nc3-a5\nc3-d4\nc3-e5\nc3-d2\nc3-e1\nd3-c4\nd3-c2\nd3-b1\nd3-e2\nd3-d4\nd3-e3\nd3-d2\nb2-b3\na1-b1\na1-c1\nd1-d2\nd1-c1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_023\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_023\n");
		return false;
	}
	
	chess_boardSet("17 B\n.k...\n.n...\n...pr\nR....\n...KP\n.....\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-a5\nb6-c5\nb5-d6\nb5-a3\nb5-c3\nd4-d3\ne4-e5\ne4-e6\ne4-e3\ne4-e2\n") != true) {
		printf("test: failed test_movesEvaluated_024\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_024\n");
		return false;
	}
	
	chess_boardSet("13 B\nkq.nr\n.pN..\n..Bp.\n.....\np..PK\nRQ...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-a5\nb6-c5\nd6-c4\nd6-e4\ne6-e5\ne6-e4\ne6-e3\ne6-e2\nb5-b4\nb5-c4\nd4-d3\na2-b1\n") != true) {
		printf("test: failed test_movesEvaluated_025\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_025\n");
		return false;
	}
	
	chess_boardSet("14 B\n...br\npkppP\n.....\nP.K.P\nP.P..\nR.Q.B\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-e5\nd6-c6\ne6-e5\na5-a4\nb5-b6\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nc5-c4\nd5-d4\n") != true) {
		printf("test: failed test_movesEvaluated_026\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_026\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..r.\np.pp.\nP...p\np..QP\nP.P..\nRqB.K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nd6-c6\nd6-b6\nd6-e6\nc5-c4\nd5-d4\ne4-d3\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-b6\nb1-a1\nb1-c1\nb1-a2\nb1-c2\n") != true) {
		printf("test: failed test_movesEvaluated_027\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_027\n");
		return false;
	}
	
	chess_boardSet("17 W\nq.r..\np.ppb\nP.k..\nN.P.P\nR..Kp\n..B..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-c4\na3-b5\na3-c2\na3-b1\ne3-e4\na2-b2\na2-c2\na2-a1\nd2-d3\nd2-c2\nd2-e2\nd2-d1\nd2-e1\nc1-b2\nc1-c2\nc1-b1\nc1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_028\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_028\n");
		return false;
	}
	
	chess_boardSet("16 W\nk...r\n..b.p\n.Q...\n.qP.P\nPp...\nRB.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b5\nb4-b6\nb4-a4\nb4-c4\nb4-d4\nb4-e4\nb4-b3\nb4-a5\nb4-c5\nb4-a3\nc3-c4\ne3-e4\na2-a3\na2-b3\nb1-c2\nb1-d3\nb1-e4\nb1-c1\nd1-d2\nd1-c1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_029\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_029\n");
		return false;
	}
	
	chess_boardSet("14 W\n.k.br\n..P.p\n.Q..P\nq.p..\nPp..P\nR...K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b6\nc5-d6\nb4-b5\nb4-b6\nb4-a4\nb4-c4\nb4-d4\nb4-b3\nb4-b2\nb4-a5\nb4-a3\nb4-c3\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_030\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_030\n");
		return false;
	}
	
	chess_boardSet("12 W\nk..b.\npq..r\n.B..p\nP.PpP\n...P.\n...RK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a5\nb4-c5\nb4-d6\nb4-a4\nb4-c4\nb4-b3\na3-a4\nc3-c4\nd1-c1\nd1-b1\nd1-a1\ne1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_031\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_031\n");
		return false;
	}
	
	chess_boardSet("19 B\nr..nN\np...p\nk...b\n.R.Q.\n..pK.\n.B...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-c6\nd6-b5\nd6-c4\na4-b4\na4-a3\na4-b5\na4-b3\ne4-d5\ne4-c6\ne4-d3\ne4-d4\ne4-e3\nc2-c1\nc2-b1\n") != true) {
		printf("test: failed test_movesEvaluated_032\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_032\n");
		return false;
	}
	
	chess_boardSet("13 W\nq..n.\n..ppr\nQ..P.\nk.P.B\nbP..P\nR...K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-a5\na4-a6\na4-b4\na4-c4\na4-a3\na4-b5\na4-c6\na4-b3\na4-c2\na4-d1\nd4-c5\nd4-e5\nc3-c4\ne3-d2\ne3-c1\ne3-e4\ne3-d3\nb2-b3\nb2-a3\na1-a2\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_033\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_033\n");
		return false;
	}
	
	chess_boardSet("14 W\n.k.br\nq...p\nppPnp\n.....\nPBP.P\nRN.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\na2-a3\nb2-a3\nb2-c3\nb2-d4\nb2-c1\nb2-b3\nc2-c3\ne2-e3\nb1-a3\nb1-d2\nb1-c3\nd1-d2\nd1-c1\nd1-e1\n") != true) {
		printf("test: failed test_movesEvaluated_034\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_034\n");
		return false;
	}
	
	chess_boardSet("12 B\n...nr\nkp.p.\n.p..p\n.PNPb\n..P..\n.B.QK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c4\ne6-e5\na5-a6\na5-a4\na5-b6\nd5-d4\nb4-c3\ne4-d3\ne3-d4\ne3-c5\ne3-b6\ne3-d2\ne3-c1\ne3-e2\n") != true) {
		printf("test: failed test_movesEvaluated_035\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_035\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq.br\n..Npp\npp...\nP....\n.PPPP\n.nBQK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-b5\nb6-a5\nb6-c5\nd6-c5\nd6-c6\nd5-d4\ne5-e4\nb4-b3\nb4-a3\nb1-a3\nb1-d2\nb1-c3\n") != true) {
		printf("test: failed test_movesEvaluated_036\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_036\n");
		return false;
	}
	
	chess_boardSet("19 B\nq...b\n.k..p\nPPQ..\n...P.\n...P.\nR..BK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-c6\na6-d6\na6-a5\na6-a4\ne6-d5\ne6-c4\ne6-d6\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nb5-c6\nb5-a4\nb5-c4\ne5-e4\n") != true) {
		printf("test: failed test_movesEvaluated_037\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_037\n");
		return false;
	}
	
	chess_boardSet("13 W\n.k...\np.prb\nqp.pP\n.P..p\n.NPQP\n.RB.K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-d5\nb3-a4\nb2-a4\nb2-d3\nb2-c4\nb2-d1\nc2-c3\nd2-d3\nd2-d4\nd2-d1\nd2-c3\nd2-b4\nd2-e3\nb1-a1\nc1-d1\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_038\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_038\n");
		return false;
	}
	
	chess_boardSet("19 B\n....r\npk.q.\nP.Qb.\n.PppP\n...P.\nR...K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e6-d6\ne6-c6\ne6-b6\ne6-a6\ne6-e5\ne6-e4\ne6-e3\nb5-b6\nb5-c5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nd5-d6\nd5-c5\nd5-e5\nd5-c6\nd5-c4\nd5-e4\nd4-c5\nd4-b6\nd4-e5\nd4-e3\nd4-e4\nc3-c2\nc3-d2\n") != true) {
		printf("test: failed test_movesEvaluated_039\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_039\n");
		return false;
	}
	
	chess_boardSet("18 B\nk...r\n..Pqp\n...p.\n.pPBp\n..Q..\n.N..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\ne6-d6\ne6-c6\ne6-b6\nd5-d6\nd5-c5\nd5-c6\nd5-c4\nd5-e4\ne5-e4\nd4-c3\nb3-b2\nb3-c2\ne3-e2\n") != true) {
		printf("test: failed test_movesEvaluated_040\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_040\n");
		return false;
	}
	
	chess_boardSet("17 W\nk....\nqpb.r\n.K..p\n.pB.P\nP.P..\n.R...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b5\nb4-a4\nb4-c4\nb4-b3\nb4-a5\nb4-c5\nb4-a3\nc3-d4\nc3-e5\nc3-b2\nc3-a1\nc3-d2\nc3-e1\nc3-c4\nc3-d3\na2-a3\na2-b3\nc2-b3\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\nb1-e1\n") != true) {
		printf("test: failed test_movesEvaluated_041\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_041\n");
		return false;
	}
	
	chess_boardSet("19 B\nkqr..\n.np.p\n.B.b.\n.p.P.\n....N\nQ...K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-a5\nc6-d6\nc6-e6\nb5-d6\nb5-a3\nb5-c3\nc5-c4\nc5-b4\ne5-e4\nd4-c3\nd4-b2\nd4-a1\nd4-e3\nd4-d5\nd4-c4\nd4-e4\nb3-b2\n") != true) {
		printf("test: failed test_movesEvaluated_042\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_042\n");
		return false;
	}
	
	chess_boardSet("14 B\n..b.r\n.k..p\np...N\n.PP.p\nP..KP\n....R\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-d5\nc6-e4\nc6-b6\nc6-d6\nc6-c5\ne6-d6\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nb5-a6\nb5-c4\na4-a3\na4-b3\ne3-d2\n") != true) {
		printf("test: failed test_movesEvaluated_043\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_043\n");
		return false;
	}
	
	chess_boardSet("17 B\n.b...\n...p.\nkpn.r\n...Q.\n.....\n.R.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a5\nb6-c5\nb6-d4\nb6-e3\nb6-a6\nb6-c6\nb6-b5\nd5-d4\na4-a5\na4-a3\na4-b5\na4-b3\nb4-b3\nc4-a5\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nc4-d2\ne4-e5\ne4-e6\ne4-d4\ne4-e3\ne4-e2\ne4-e1\n") != true) {
		printf("test: failed test_movesEvaluated_044\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_044\n");
		return false;
	}
	
	chess_boardSet("13 B\n.kRbr\n...pp\npPq.n\n...pP\nP..K.\n.Q...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nb6-c5\nd6-c5\nd6-b4\nd5-d4\na4-a3\nc4-c5\nc4-c6\nc4-b4\nc4-d4\nc4-c3\nc4-c2\nc4-c1\nc4-b5\nc4-a6\nc4-b3\nc4-a2\ne4-c5\ne4-c3\ne4-d2\n") != true) {
		printf("test: failed test_movesEvaluated_045\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_045\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kq..\n.p...\np.Pp.\nP..p.\nRP.Kr\n.....\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b5\na2-a1\nb2-b3\nd2-d3\nd2-c2\nd2-e2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\n") != true) {
		printf("test: failed test_movesEvaluated_046\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_046\n");
		return false;
	}
	
	chess_boardSet("18 W\n...r.\nkb.pP\nK.p..\n.P..P\nP....\n..B..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-e6\ne5-d6\na4-a5\na4-b4\na4-a3\na4-b5\nb3-b4\nb3-c4\ne3-e4\na2-a3\nc1-b2\nc1-a3\nc1-d2\nc1-c2\nc1-b1\nc1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_047\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_047\n");
		return false;
	}
	
	chess_boardSet("18 W\nq...r\np..pp\nbkp..\nP.PPP\npP..Q\nKN...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-b4\nc3-b4\nd3-d4\nd3-c4\ne3-e4\nb2-b3\ne2-d2\ne2-c2\ne2-e1\ne2-d1\na1-a2\nb1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_048\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_048\n");
		return false;
	}
	
	chess_boardSet("19 B\n....q\n.k...\nP.p.P\nRp..p\n..PK.\nBN..Q\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e6-d6\ne6-c6\ne6-b6\ne6-a6\ne6-e5\ne6-e4\ne6-d5\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nc4-c3\nb3-b2\nb3-c2\ne3-e2\ne3-d2\n") != true) {
		printf("test: failed test_movesEvaluated_049\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_049\n");
		return false;
	}
	
	chess_boardSet("12 W\nkqb.r\nBpp..\n.....\nN..pp\nP.Pn.\nR...K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-b6\na5-b4\na5-c3\na5-d2\na5-a4\na3-c4\na3-b5\na3-b1\nc2-c3\nc2-d3\na1-b1\na1-c1\na1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_050\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_050\n");
		return false;
	}
	
	chess_boardSet("18 W\n.k.nr\n...p.\np...p\nQ.Pq.\n.R.P.\n.B..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-a4\na3-b3\na3-a2\na3-a1\na3-b4\na3-c5\na3-d6\nc3-c4\nb2-b3\nb2-b4\nb2-b5\nb2-b6\nb2-a2\nb2-c2\nb1-a2\nb1-c2\nb1-d3\nb1-a1\nb1-c1\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_051\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_051\n");
		return false;
	}
	
	chess_boardSet("18 B\nkrn..\n.p...\np...p\nR.PPQ\nb.P..\n....K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nc6-a5\nc6-b4\nc6-e5\nc6-d4\nb5-b4\ne4-d3\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\na2-b2\na2-a1\n") != true) {
		printf("test: failed test_movesEvaluated_052\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_052\n");
		return false;
	}
	
	chess_boardSet("21 W\n..kr.\n.bpP.\n.P..p\npp..P\nP..BP\n....K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-c6\nb4-c5\na2-b3\nd2-c3\nd2-c1\nd2-d3\nd2-c2\nd2-d1\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_053\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_053\n");
		return false;
	}
	
	chess_boardSet("18 W\nkq...\np....\nP.ppr\n.bBP.\n..K..\n...Q.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-b4\nc3-a5\nc3-d4\nc3-b2\nc3-a1\nc3-d2\nc3-e1\nd3-c4\nd3-e4\nc2-b2\nc2-d2\nc2-c1\nc2-b3\nc2-b1\nd1-d2\nd1-c1\nd1-b1\nd1-a1\nd1-e1\nd1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_054\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_054\n");
		return false;
	}
	
	chess_boardSet("17 B\nkQ.r.\n..Qpp\npp...\n..q.P\n.....\nRn..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nd6-c6\nd6-b6\nd6-e6\nd5-d4\ne5-e4\na4-a3\nb4-b3\nc3-c4\nc3-c5\nc3-b3\nc3-a3\nc3-d3\nc3-e3\nc3-c2\nc3-c1\nc3-d4\nc3-b2\nc3-a1\nc3-d2\nc3-e1\nb1-a3\nb1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_055\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_055\n");
		return false;
	}
	
	chess_boardSet("16 B\nk....\n.p.rp\n.PPq.\nN.p.P\n..RPb\n....K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nb5-c4\nd5-d6\nd5-c5\ne5-e4\nd4-c4\nd4-e4\nd4-d3\nd4-d2\nd4-c5\nd4-b6\nd4-e3\nc3-d2\ne2-d3\ne2-c4\ne2-d1\n") != true) {
		printf("test: failed test_movesEvaluated_056\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_056\n");
		return false;
	}
	
	chess_boardSet("14 B\nk..rb\nppN.P\n...K.\n.q..Q\nP....\nR.B..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\nd6-c6\nd6-b6\nd6-d5\nd6-d4\ne6-d5\ne6-c4\na5-a4\nb5-b4\nb3-b4\nb3-a3\nb3-c3\nb3-d3\nb3-e3\nb3-b2\nb3-b1\nb3-a4\nb3-c4\nb3-d5\nb3-a2\nb3-c2\nb3-d1\n") != true) {
		printf("test: failed test_movesEvaluated_057\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_057\n");
		return false;
	}
	
	chess_boardSet("19 W\nR....\n.kpb.\np.p..\nP.P.p\n..P.B\n..K..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-c6\na6-d6\na6-e6\na6-a5\na6-a4\ne2-d3\ne2-c4\ne2-d1\ne2-d2\ne2-e1\nc1-b1\nc1-d1\nc1-b2\nc1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_058\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_058\n");
		return false;
	}
	
	chess_boardSet("18 B\n..qb.\n.k...\np.p.N\nPpPR.\n....B\n...Kr\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-c5\nc6-d5\nc6-e4\nd6-c5\nd6-b4\nd6-a3\nd6-e5\nd6-e6\nd6-d5\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nb5-a6\nc4-d3\nb3-b2\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_059\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_059\n");
		return false;
	}
	
	chess_boardSet("17 B\n.qbn.\nkpN..\nP....\n.Ppp.\nR..Pr\n.B.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c5\nc6-d5\nc6-e4\nd6-c4\nd6-e4\na5-a6\na5-a4\na5-b4\nb5-b4\nb5-a4\nc3-c2\nc3-d2\ne2-e3\ne2-e4\ne2-e5\ne2-e6\ne2-d2\ne2-e1\n") != true) {
		printf("test: failed test_movesEvaluated_060\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_060\n");
		return false;
	}
	
	chess_boardSet("21 W\n..k..\nPn...\n...p.\n...QP\nR...P\nBN..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a6\nd3-d4\nd3-c3\nd3-b3\nd3-a3\nd3-d2\nd3-d1\nd3-c4\nd3-b5\nd3-e4\nd3-c2\ne3-e4\ne3-d4\na2-a3\na2-a4\na2-b2\na2-c2\na2-d2\na1-b2\na1-c3\na1-d4\nb1-a3\nb1-d2\nb1-c3\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_061\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_061\n");
		return false;
	}
	
	chess_boardSet("18 W\n.k...\n.nr..\nbNPQ.\n.....\nPP..K\nR.B..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a6\nb4-d5\nb4-c6\nb4-d3\nb4-c2\nc4-b5\nd4-d5\nd4-d6\nd4-e4\nd4-d3\nd4-d2\nd4-d1\nd4-c5\nd4-e5\nd4-c3\nd4-e3\na2-a3\nb2-b3\ne2-e3\ne2-d2\ne2-e1\ne2-d3\ne2-d1\na1-b1\nc1-d2\nc1-e3\nc1-c2\nc1-b1\nc1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_062\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_062\n");
		return false;
	}
	
	chess_boardSet("12 B\nk....\nppqr.\n...Kp\nn.p..\nPP..P\n.RBQ.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na5-a4\nb5-b4\nc5-c6\nc5-c4\nc5-b6\nc5-d6\nc5-b4\nc5-d4\nd5-d6\nd5-e5\nd5-d4\ne4-e3\na3-c4\na3-c2\na3-b1\nc3-c2\nc3-b2\n") != true) {
		printf("test: failed test_movesEvaluated_063\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_063\n");
		return false;
	}
	
	chess_boardSet("18 W\n.q..b\n....r\n.kpQp\n.P...\nP.P.K\nRNB..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d5\nd4-d6\nd4-c4\nd4-e4\nd4-d3\nd4-d2\nd4-d1\nd4-c5\nd4-b6\nd4-e5\nd4-c3\nd4-b2\nd4-e3\nb3-c4\na2-a3\nc2-c3\ne2-e3\ne2-d2\ne2-e1\ne2-d3\ne2-d1\nb1-a3\nb1-d2\nb1-c3\nc1-b2\nc1-a3\nc1-d2\nc1-e3\nc1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_064\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_064\n");
		return false;
	}
	
	chess_boardSet("19 B\nk...r\n..p..\n.p...\npPnPK\nP....\nRN..q\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\ne6-d6\ne6-c6\ne6-b6\ne6-e5\ne6-e4\ne6-e3\nc5-c4\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nc3-a2\nc3-b1\nc3-e2\nc3-d1\ne1-e2\ne1-e3\ne1-d1\ne1-c1\ne1-b1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_065\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_065\n");
		return false;
	}
	
	chess_boardSet("12 B\nkq.r.\np..b.\n..pp.\n...P.\nPp.K.\n.RBQ.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b5\nb6-c6\nb6-b5\nb6-b4\nb6-b3\nb6-c5\nd6-c6\nd6-e6\na5-a4\nd5-c6\nd5-e6\nd5-e4\nd5-c5\nd5-e5\nc4-c3\nc4-d3\nb2-c1\n") != true) {
		printf("test: failed test_movesEvaluated_066\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_066\n");
		return false;
	}
	
	chess_boardSet("12 W\n.kNr.\npp.p.\n..P.p\nq..pP\nP..Q.\nR.B.K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-a5\nc6-b4\nc6-e5\nc6-d4\nc4-c5\nc4-b5\nc4-d5\nd2-d3\nd2-c2\nd2-b2\nd2-e2\nd2-d1\nd2-c3\nd2-b4\nd2-a5\na1-b1\nc1-b2\nc1-a3\nc1-c2\nc1-b1\nc1-d1\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_067\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_067\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kqr.\n..pp.\nppQbp\nPP..P\nR....\n.N.BK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b4\nc4-d4\nc4-c3\nc4-c2\nc4-c1\nc4-b5\nc4-a6\nc4-d5\nc4-d3\nc4-e2\na3-b4\nb3-a4\ne3-d4\na2-b2\na2-c2\na2-d2\na2-e2\na2-a1\nb1-d2\nb1-c3\nd1-c2\nd1-e2\nd1-d2\nd1-c1\ne1-e2\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_068\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_068\n");
		return false;
	}
	
	chess_boardSet("15 B\nkR..r\np...p\nn....\n.....\nP..qP\n.N.BK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-b6\ne5-e4\na4-c5\na4-b6\na4-c3\na4-b2\nd2-d3\nd2-d4\nd2-d5\nd2-d6\nd2-c2\nd2-b2\nd2-a2\nd2-e2\nd2-d1\nd2-c3\nd2-b4\nd2-e3\nd2-c1\nd2-e1\n") != true) {
		printf("test: failed test_movesEvaluated_069\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_069\n");
		return false;
	}
	
	chess_boardSet("13 B\nQkbr.\n..ppp\np....\nR...P\n..P.K\n.qB..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-b5\nb6-a5\nc6-b5\nd6-e6\nc5-c4\nd5-d4\ne5-e4\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-a1\nb1-c1\nb1-a2\nb1-c2\n") != true) {
		printf("test: failed test_movesEvaluated_070\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_070\n");
		return false;
	}
	
	chess_boardSet("21 W\n.k...\n..p.r\n.N.nK\np....\nBpPp.\n....Q\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a6\nb4-d5\nb4-c6\nb4-d3\ne4-e5\ne4-d4\ne4-e3\ne4-d5\ne4-d3\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\na2-a1\nc2-c3\ne1-e2\ne1-e3\ne1-d1\ne1-c1\ne1-b1\ne1-a1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_071\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_071\n");
		return false;
	}
	
	chess_boardSet("14 B\n.qbnr\n.pQ.B\n..P..\nPPk..\nN..Pp\n...RK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-a5\nb6-c5\nc6-d5\nc6-e4\nd6-c4\nd6-e4\ne6-e5\nb5-b4\nb5-c4\nc3-c4\nc3-b3\nc3-d3\nc3-c2\nc3-b4\nc3-d4\nc3-b2\nc3-d2\ne2-d1\n") != true) {
		printf("test: failed test_movesEvaluated_072\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_072\n");
		return false;
	}
	
	chess_boardSet("20 B\n.....\nrk.Rq\nP.p.n\nP.N.P\n....K\n..Q..\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a6\na5-a4\nb5-b6\nb5-c5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\ne5-e6\ne5-d5\ne5-d6\ne5-d4\ne5-c3\ne4-c5\ne4-d6\ne4-c3\ne4-d2\n") != true) {
		printf("test: failed test_movesEvaluated_073\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_073\n");
		return false;
	}
	
	chess_boardSet("13 W\nkq.r.\nppp.p\n..n.P\nR.PP.\n..P..\nb.BQK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-a4\na3-a5\na3-b3\na3-a2\na3-a1\nd3-d4\nd3-c4\nc1-b2\nc1-d2\nc1-e3\nc1-b1\nd1-d2\nd1-e2\ne1-e2\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_074\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_074\n");
		return false;
	}
	
	chess_boardSet("14 B\n..qnQ\nkpb..\np..B.\n..P..\nPP..P\nRN..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d5\nc6-e4\nd6-c4\nd6-e4\na5-a6\na5-b6\na5-b4\nb5-b4\nc5-b6\nc5-b4\nc5-a3\nc5-d4\nc5-d5\nc5-c4\na4-a3\n") != true) {
		printf("test: failed test_movesEvaluated_075\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_075\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.q.r\nNpp.p\n...p.\n...b.\n.PnP.\n.RBK.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nc6-b6\nc6-d6\nc6-d5\nc6-e4\ne6-d6\nb5-b4\nc5-c4\ne5-e4\nd3-c4\nd3-e4\nd3-e2\nd3-c3\nd3-e3\nc2-a3\nc2-b4\nc2-e3\nc2-a1\nc2-e1\n") != true) {
		printf("test: failed test_movesEvaluated_076\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_076\n");
		return false;
	}
	
	chess_boardSet("12 W\nkq.r.\n..pbp\np.P.n\nPpP.P\n...B.\nRQ..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-d5\nd2-c1\nd2-d3\nd2-c2\nd2-e2\nd2-d1\na1-a2\nb1-b2\nb1-b3\nb1-c1\nb1-d1\nb1-a2\nb1-c2\nb1-d3\nb1-e4\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_077\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_077\n");
		return false;
	}
	
	chess_boardSet("14 W\nk.q.r\n.n..p\n..Pp.\n..P..\nPP..P\nR.B.K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b5\nc3-d4\na2-a3\nb2-b3\ne2-e3\na1-b1\nc1-d2\nc1-e3\nc1-c2\nc1-b1\nc1-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_078\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_078\n");
		return false;
	}
	
	chess_boardSet("19 W\n.q..r\nkp...\n..p.b\n.QPp.\nPP.KP\nRN...\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-b5\nb3-a3\nb3-a4\nb3-c4\nb3-c2\nb3-d1\na2-a3\nd2-d3\nd2-c2\nd2-d1\nd2-e3\nd2-c1\nd2-e1\ne2-e3\ne2-d3\nb1-a3\n") != true) {
		printf("test: failed test_movesEvaluated_079\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_079\n");
		return false;
	}
	
	chess_boardSet("18 B\n.qb.r\n.kQpp\np.pn.\nPp..P\nR.P..\n.B.NK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-a5\nb6-c5\nc6-d6\ne6-d6\nb5-a5\nb5-c5\nb5-b4\nb5-a6\ne5-e4\nc4-c3\nd4-c2\nd4-e2\nb3-b2\nb3-a2\nb3-c2\n") != true) {
		printf("test: failed test_movesEvaluated_080\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_080\n");
		return false;
	}
	
	chess_boardSet("14 W\n.kr..\npp...\n.B..p\nPqpPP\n..P..\n.R..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a5\nb4-c5\nb4-d6\nb4-c3\nb4-a4\nb4-c4\na3-a4\nd3-d4\nd3-e4\nc2-b3\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_081\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_081\n");
		return false;
	}
	
	chess_boardSet("19 B\n..r..\nQk...\n.b.pp\nn.pPP\n...P.\n.R.BK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-c5\nc6-c4\nb5-b6\nb5-a5\nb5-c5\nb5-a6\nb5-a4\nb5-c4\nb4-a5\nb4-c5\nb4-d6\nb4-a4\nb4-c4\nb4-b3\nd4-e3\ne4-d3\na3-c4\na3-c2\na3-b1\nc3-c2\nc3-d2\n") != true) {
		printf("test: failed test_movesEvaluated_082\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_082\n");
		return false;
	}
	
	chess_boardSet("13 B\nk.b.r\np...N\n.B.P.\n...P.\nP..P.\nq..QK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\na5-a4\na5-b4\na1-a2\na1-b1\na1-c1\na1-d1\na1-b2\na1-c3\na1-d4\n") != true) {
		printf("test: failed test_movesEvaluated_083\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_083\n");
		return false;
	}
	
	chess_boardSet("19 B\n....r\np.p.N\nk..bp\nPqPpP\n.PK..\n...BR\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e6-d6\ne6-c6\ne6-b6\ne6-a6\ne6-e5\nc5-c4\na4-b4\na4-a3\na4-b5\nd4-e5\nd4-c3\nd4-e3\nd4-d5\nd4-c4\nb3-b4\nb3-b5\nb3-b6\nb3-a3\nb3-c3\nb3-b2\nb3-c4\nb3-d5\nb3-a2\nb3-c2\nd3-d2\nd3-c2\n") != true) {
		printf("test: failed test_movesEvaluated_084\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_084\n");
		return false;
	}
	
	chess_boardSet("16 B\n...n.\nkb...\np.p..\nP....\nR.P.P\nQN.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-e4\na5-a6\na5-b6\na5-b4\nb5-a6\nb5-c6\nb5-b6\nb5-c5\nb5-b4\nc4-c3\n") != true) {
		printf("test: failed test_movesEvaluated_085\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_085\n");
		return false;
	}
	
	chess_boardSet("13 W\nk.q.r\nn.bpp\n...PP\npNp..\nP.PK.\nR.BQ.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-c5\nd4-e5\ne4-d5\nb3-a5\nb3-c5\nd2-d3\nd2-e2\nd2-c3\nd2-e3\nd2-e1\na1-b1\nc1-b2\nc1-a3\nc1-b1\nd1-e1\nd1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_086\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_086\n");
		return false;
	}
	
	chess_boardSet("19 B\n....r\npBb.Q\nk..p.\nPn.P.\np.K..\n.....\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e6-d6\ne6-c6\ne6-b6\ne6-a6\ne6-e5\nc5-b6\nc5-d6\nc5-b4\nc5-a3\nc5-c6\nc5-d5\nc5-c4\na4-b4\na4-a3\na4-b5\nb3-a1\nb3-d2\nb3-c1\na2-a1\n") != true) {
		printf("test: failed test_movesEvaluated_087\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_087\n");
		return false;
	}
	
	chess_boardSet("19 B\nk...B\nq.p.p\n.p..P\nPp...\nR.PnK\n...Q.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\na5-b5\na5-a4\na5-a3\na5-b6\nc5-c4\nb4-a3\nb3-b2\nb3-a2\nb3-c2\nd2-c4\nd2-e4\nd2-b1\n") != true) {
		printf("test: failed test_movesEvaluated_088\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_088\n");
		return false;
	}
	
	chess_boardSet("12 B\n.b..r\n..p.p\nk..q.\nP..PN\nRP..P\n...BK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a5\nb6-a6\nb6-c6\nb6-b5\ne6-d6\ne6-c6\nc5-c4\ne5-e4\na4-a5\na4-b4\na4-a3\na4-b5\na4-b3\nd4-d5\nd4-d6\nd4-c4\nd4-b4\nd4-e4\nd4-d3\nd4-c3\nd4-b2\nd4-e3\n") != true) {
		printf("test: failed test_movesEvaluated_089\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_089\n");
		return false;
	}
	
	chess_boardSet("12 B\nk.q.r\n.pp..\np..pp\nP.nP.\n.B..P\nR..QK\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nc6-b6\nc6-d6\nc6-d5\ne6-d6\ne6-e5\nb5-b4\nc5-c4\ne4-e3\ne4-d3\nc3-d5\nc3-a2\nc3-b1\nc3-e2\nc3-d1\n") != true) {
		printf("test: failed test_movesEvaluated_090\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_090\n");
		return false;
	}
	
	chess_boardSet("19 W\n....r\n.kq.p\nBb.pP\n.R...\nP.P.Q\n....K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-b5\na4-a5\na4-a3\nb3-b4\nb3-a3\nb3-c3\nb3-d3\nb3-e3\nb3-b2\nb3-b1\na2-a3\nc2-c3\ne2-e3\ne2-d2\ne2-d3\ne2-c4\ne2-b5\ne2-d1\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_091\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_091\n");
		return false;
	}
	
	chess_boardSet("13 W\nk...r\npb.qp\n.....\npPP.p\nP..P.\n.RB.K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nc3-c4\nd2-d3\nd2-e3\nb1-b2\nb1-a1\nc1-b2\nc1-a3\nc1-c2\nc1-d1\ne1-e2\ne1-d1\n") != true) {
		printf("test: failed test_movesEvaluated_092\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_092\n");
		return false;
	}
	
	chess_boardSet("15 W\nkq.bN\n.B...\n...pp\nPp.P.\nn.P.K\n..qQ.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e6-c5\ne6-d4\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nb5-a5\nb5-c5\nb5-b4\na3-a4\nd3-e4\nc2-c3\nc2-b3\ne2-e3\ne2-d2\ne2-e1\nd1-d2\nd1-c1\nd1-e1\n") != true) {
		printf("test: failed test_movesEvaluated_093\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_093\n");
		return false;
	}
	
	chess_boardSet("20 W\nk..q.\n.pQ..\nP..Bb\n.p..q\nr....\n....K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b5\nc5-d5\nc5-e5\nc5-c4\nc5-c3\nc5-c2\nc5-c1\nc5-b6\nc5-d6\nc5-b4\nc5-a3\na4-a5\na4-b5\nd4-e5\nd4-c3\nd4-b2\nd4-a1\nd4-e3\nd4-d5\nd4-c4\nd4-d3\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		printf("test: failed test_movesEvaluated_094\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_094\n");
		return false;
	}
	
	chess_boardSet("18 B\n...nr\npk.p.\n..P.p\nP....\n.P.KQ\n..bR.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c4\ne6-e5\na5-a4\nb5-b6\nb5-c5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nd5-d4\nd5-c4\ne4-e3\nc1-b2\nc1-d2\nc1-c2\nc1-b1\n") != true) {
		printf("test: failed test_movesEvaluated_095\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_095\n");
		return false;
	}
	
	chess_boardSet("11 B\nk..n.\npPbpr\nP.p..\n.Qqp.\n.P..P\nRN.K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nd6-b5\nd6-e4\nc5-b6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-c6\nd5-d4\ne5-e6\ne5-e4\ne5-e3\ne5-e2\nc4-b3\nc3-b3\nc3-c2\nc3-c1\nc3-b4\nc3-d4\nc3-b2\nc3-d2\nc3-e1\nd3-d2\nd3-e2\n") != true) {
		printf("test: failed test_movesEvaluated_096\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_096\n");
		return false;
	}
	
	chess_boardSet("21 W\nk..r.\np....\n.p.p.\n.Pq..\n...NP\nKB..Q\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-c4\nd2-e4\ne2-e3\na1-a2\na1-b2\nb1-a2\nb1-c2\nb1-d3\nb1-e4\nb1-b2\nb1-c1\ne1-d1\ne1-c1\n") != true) {
		printf("test: failed test_movesEvaluated_097\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_097\n");
		return false;
	}
	
	chess_boardSet("13 B\nkr...\nRp.qP\n..p..\n..KQ.\n.PPP.\n.N.B.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-d6\nb6-e6\nb5-b4\nd5-d6\nd5-c5\nd5-e5\nd5-d4\nd5-d3\nd5-c6\nd5-e6\nd5-e4\nc4-d3\n") != true) {
		printf("test: failed test_movesEvaluated_098\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_098\n");
		return false;
	}
	
	chess_boardSet("21 W\n.Q...\nk....\np...p\nB.NQP\nnp...\nR..K.\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-a5\nb6-c5\nb6-d4\na3-b4\na3-c5\na3-d6\na3-b2\na3-b3\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nc3-a2\nc3-b1\nc3-e2\nd3-d4\nd3-d5\nd3-d6\nd3-d2\nd3-c4\nd3-b5\nd3-a6\nd3-e4\nd3-c2\nd3-b1\nd3-e2\na1-a2\na1-b1\na1-c1\nd1-d2\nd1-c1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		printf("test: failed test_movesEvaluated_099\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_099\n");
		return false;
	}
	
	chess_boardSet("15 B\nk...r\n..p.p\nP..pn\nQ.PBP\nP....\nRN..K\n");
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\ne6-d6\ne6-c6\ne6-b6\nc5-c4\nd4-c3\nd4-e3\ne4-d6\ne4-c3\ne4-d2\n") != true) {
		printf("test: failed test_movesEvaluated_100\n");
		return false;
	}
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		printf("test: failed test_movesEvaluated_100\n");
		return false;
	}
	
	return true;
}

int test_moveCount(char* charBuffer, int intCount) {
	int intEqual = 0;
	char charEqual[100 * 1024] = { };
	
	intEqual = 0;
	charEqual[0] = '\0';
	
	for (int intFor1 = 0; intFor1 < intCount; intFor1 += 1) {
		if (strstr(charEqual, &charBuffer[intFor1 * 1024]) == NULL) {
			intEqual += 1;
			strcat(charEqual, &charBuffer[intFor1 * 1024]);
		}
	}
	
	return intEqual;
}

bool test_moveRandom() {
	char charBuffer[100 * 1024] = { };
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_reset();
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a2-a3\nb2-b3\nc2-c3\nd2-d3\ne2-e3\nb1-a3\nb1-c3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_001\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n") != 0) {
			printf("test: failed test_moveRandom_001\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 3) {
		printf("test: failed test_moveRandom_001\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\nk..n.\n...B.\nPp.P.\nR....\n.....\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nd6-b5\nd6-c4\nd6-e4\nb4-b3\nb4-a3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_002\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 B\nk..n.\n...B.\nPp.P.\nR....\n.....\n....K\n") != 0) {
			printf("test: failed test_moveRandom_002\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		printf("test: failed test_moveRandom_002\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nkb.r.\np.ppp\n....B\npP.Q.\nPP..n\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b5\nb6-c6\nb6-b5\nd6-c6\nd6-e6\na5-a4\nc5-c4\nd5-d4\nd5-e4\na3-b2\ne2-d4\ne2-c3\ne2-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_003\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 B\nkb.r.\np.ppp\n....B\npP.Q.\nPP..n\nR...K\n") != 0) {
			printf("test: failed test_moveRandom_003\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		printf("test: failed test_moveRandom_003\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nkq.br\nQpp..\np....\nP..pn\n.P.NK\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-a5\nb6-c6\nb6-a5\nd6-e5\nd6-c6\nd6-d5\ne6-e5\ne6-e4\nb5-b4\nc5-c4\nd3-e2\ne3-d5\ne3-c4\ne3-c2\ne3-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_004\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "11 B\nkq.br\nQpp..\np....\nP..pn\n.P.NK\nR.B..\n") != 0) {
			printf("test: failed test_moveRandom_004\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_004\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nk..nr\n....p\n...q.\n..PpP\nPBP..\n.R.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nd6-b5\nd6-c4\nd6-e4\ne5-e4\nd4-c5\nd4-b6\nd4-d5\nd4-c4\nd4-b4\nd4-a4\nd4-e4\nd4-c3\nd4-e3\nd3-d2\nd3-c2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_005\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\nk..nr\n....p\n...q.\n..PpP\nPBP..\n.R.QK\n") != 0) {
			printf("test: failed test_moveRandom_005\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_005\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nkr...\nbpqpp\n..p..\n.p.PP\nPQB..\nNn..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-c6\nb6-d6\nb6-e6\na5-b4\na5-c3\na5-d2\na5-e1\na5-a4\nb5-b4\nc5-c6\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nd5-d4\ne5-e4\nc4-c3\nc4-d3\nb3-a2\nb3-c2\nb1-a3\nb1-c3\nb1-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_006\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 B\nkr...\nbpqpp\n..p..\n.p.PP\nPQB..\nNn..K\n") != 0) {
			printf("test: failed test_moveRandom_006\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 20) {
		printf("test: failed test_moveRandom_006\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\nq..r.\nkpp.Q\nP....\n.....\nb...P\nRB.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-c6\nd6-c6\nd6-b6\nd6-e6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nd6-d1\na5-b6\na5-a4\na5-b4\nb5-b4\nb5-a4\nc5-c4\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\na2-a3\na2-b2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_007\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 B\nq..r.\nkpp.Q\nP....\n.....\nb...P\nRB.K.\n") != 0) {
			printf("test: failed test_moveRandom_007\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 19) {
		printf("test: failed test_moveRandom_007\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\nkr...\npb...\n..nPp\nPp...\nR..K.\n.B.Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d4-d5\na3-a4\na2-b2\na2-c2\na2-a1\nd2-c3\nd2-d3\nd2-e3\nd2-c2\nd2-e2\nd2-c1\nd2-e1\nb1-c2\nb1-d3\nb1-e4\nb1-b2\nb1-a1\nb1-c1\nd1-c2\nd1-b3\nd1-e2\nd1-c1\nd1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_008\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 W\nkr...\npb...\n..nPp\nPp...\nR..K.\n.B.Q.\n") != 0) {
			printf("test: failed test_moveRandom_008\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 19) {
		printf("test: failed test_moveRandom_008\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\nQ..kr\n.np.p\n.....\n.....\n.p.q.\n..B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-c6\na6-d6\na6-a5\na6-a4\na6-a3\na6-a2\na6-a1\na6-b5\nc1-b2\nc1-d2\nc1-c2\nc1-b1\nc1-d1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_009\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 W\nQ..kr\n.np.p\n.....\n.....\n.p.q.\n..B.K\n") != 0) {
			printf("test: failed test_moveRandom_009\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_009\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n...br\nk.p..\npp..q\n.P...\nPBPpP\n.R.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b3-a4\na2-a3\nb2-a3\nb2-c3\nb2-d4\nb2-e5\nb2-a1\nb2-c1\nc2-c3\ne2-e3\nb1-a1\nb1-c1\nd1-d2\nd1-c1\ne1-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_010\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 W\n...br\nk.p..\npp..q\n.P...\nPBPpP\n.R.QK\n") != 0) {
			printf("test: failed test_moveRandom_010\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_010\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nk....\npP.pr\n..bPp\np.Bp.\nP.q.K\nRQ...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-b5\na5-a4\ne5-e6\nc4-b5\nc4-b3\nc4-a2\nc4-c5\nc4-b4\ne4-e3\nd3-d2\nd3-e2\nc2-b3\nc2-a4\nc2-c3\nc2-b2\nc2-a2\nc2-d2\nc2-e2\nc2-b1\nc2-c1\nc2-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_011\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\nk....\npP.pr\n..bPp\np.Bp.\nP.q.K\nRQ...\n") != 0) {
			printf("test: failed test_moveRandom_011\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 18) {
		printf("test: failed test_moveRandom_011\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n.....\nkpp.r\n..P.B\nq...P\nPp...\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c4-b5\ne4-d5\ne4-c6\ne4-d3\ne4-c2\ne4-b1\ne4-d4\na1-b1\na1-c1\na1-d1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_012\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\n.....\nkpp.r\n..P.B\nq...P\nPp...\nR...K\n") != 0) {
			printf("test: failed test_moveRandom_012\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		printf("test: failed test_moveRandom_012\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\n..b..\nkp.rp\np.p..\n.BPP.\n..PKp\nRN.Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b6\nc6-d6\nc6-c5\na5-a6\na5-b6\na5-b4\nb5-b4\nd5-d6\nd5-c5\nd5-d4\nd5-d3\ne5-e4\na4-a3\na4-b3\nc4-b3\nc4-d3\ne2-e1\ne2-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_013\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 B\n..b..\nkp.rp\np.p..\n.BPP.\n..PKp\nRN.Q.\n") != 0) {
			printf("test: failed test_moveRandom_013\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_013\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\nk....\npprqp\n..NPb\n.....\nPpP..\nRB.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c4-b6\nc4-d6\nc4-a5\nc4-e5\nc4-a3\nc4-e3\nc4-b2\nc4-d2\nd4-c5\nd4-e5\na2-a3\nc2-c3\nb1-c1\nd1-d2\nd1-d3\nd1-e2\nd1-c1\ne1-d2\ne1-e2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_014\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 W\nk....\npprqp\n..NPb\n.....\nPpP..\nRB.QK\n") != 0) {
			printf("test: failed test_moveRandom_014\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 15) {
		printf("test: failed test_moveRandom_014\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nkqr..\n..p..\nPp.pP\nP.pK.\n..P.Q\n.nR..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-a5\na6-b5\nb6-a5\nb6-b5\nc6-d6\nc6-e6\nc5-c4\nb4-b3\nb4-a3\nb1-a3\nb1-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_015\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 B\nkqr..\n..p..\nPp.pP\nP.pK.\n..P.Q\n.nR..\n") != 0) {
			printf("test: failed test_moveRandom_015\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_015\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\nq..bN\n.p...\nk.pp.\n.Q.P.\nP.P.P\nR..K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-c6\na6-a5\nd6-c5\nd6-b4\nd6-a3\nd6-e5\nd6-c6\nd6-d5\nb5-b4\na4-a5\na4-b4\na4-a3\na4-b3\nc4-c3\nc4-b3\nc4-d3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_016\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\nq..bN\n.p...\nk.pp.\n.Q.P.\nP.P.P\nR..K.\n") != 0) {
			printf("test: failed test_moveRandom_016\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_016\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\n..k.r\n..P.p\n.....\n..P.P\n...Pp\n.n..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c3-c4\ne3-e4\nd2-d3\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_017\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 W\n..k.r\n..P.p\n.....\n..P.P\n...Pp\n.n..K\n") != 0) {
			printf("test: failed test_moveRandom_017\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 1) {
		printf("test: failed test_moveRandom_017\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\nk...q\n..pbK\np.Pr.\np..P.\n.P.B.\nR...Q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e5-d6\ne5-e6\ne5-d5\ne5-d4\ne5-e4\nc4-d5\nb2-b3\nb2-a3\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-c1\nd2-c2\nd2-e2\nd2-d1\na1-a2\na1-a3\na1-b1\na1-c1\na1-d1\ne1-e2\ne1-e3\ne1-e4\ne1-d1\ne1-c1\ne1-b1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_018\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 W\nk...q\n..pbK\np.Pr.\np..P.\n.P.B.\nR...Q\n") != 0) {
			printf("test: failed test_moveRandom_018\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 23) {
		printf("test: failed test_moveRandom_018\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\nk.b.r\n...pp\np....\nBPq.P\nPnPK.\nR.Q..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nc6-b5\nc6-b6\nc6-d6\nc6-c5\ne6-d6\nd5-d4\ne5-e4\na4-b3\nc3-b4\nc3-a5\nc3-c4\nc3-c5\nc3-d4\nc3-b3\nc3-d3\nc3-e3\nc3-c2\nc3-d2\nb2-c4\nb2-d3\nb2-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_019\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\nk.b.r\n...pp\np....\nBPq.P\nPnPK.\nR.Q..\n") != 0) {
			printf("test: failed test_moveRandom_019\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 20) {
		printf("test: failed test_moveRandom_019\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n.N.br\n.ppq.\nk....\np.PpB\nP.P.K\nR..Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-e5\nd6-c6\ne6-e5\ne6-e4\ne6-e3\nb5-b4\nc5-c4\nd5-c6\nd5-e5\nd5-c4\nd5-b3\nd5-a2\nd5-d4\nd5-e4\na4-a5\na4-b4\na4-b3\nd3-d2\nd3-c2\nd3-e2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_020\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\n.N.br\n.ppq.\nk....\np.PpB\nP.P.K\nR..Q.\n") != 0) {
			printf("test: failed test_moveRandom_020\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_020\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n..b.r\n.k..p\np.pp.\n.....\nPK.q.\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a2-a3\nb2-a3\nb2-b3\nb2-c3\nb2-c2\nb2-b1\nb2-c1\na1-b1\na1-c1\na1-d1\na1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_021\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\n..b.r\n.k..p\np.pp.\n.....\nPK.q.\nR....\n") != 0) {
			printf("test: failed test_moveRandom_021\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_021\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\nkq...\npnp..\n...pr\np..b.\n.PP..\n..RK.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b2-b3\nb2-a3\nc2-c3\nc2-d3\nc1-b1\nc1-a1\nd1-d2\nd1-e2\nd1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_022\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 W\nkq...\npnp..\n...pr\np..b.\n.PP..\n..RK.\n") != 0) {
			printf("test: failed test_moveRandom_022\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		printf("test: failed test_moveRandom_022\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n.kb.r\np.p..\npqN..\n.B.Pp\n.RPKQ\n.....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-b5\nc6-b5\nc6-d5\nc6-e4\nc6-d6\ne6-d6\ne6-e5\ne6-e4\na4-a3\na4-b3\nb4-b5\nb4-c4\nb4-a3\nb4-b3\nb4-c3\nb4-d2\ne3-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_023\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 B\n.kb.r\np.p..\npqN..\n.B.Pp\n.RPKQ\n.....\n") != 0) {
			printf("test: failed test_moveRandom_023\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_023\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n.b...\n.kp..\n.QPp.\nN...r\nPPB.K\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b4-a5\nb4-b5\nb4-c5\nb4-a4\nb4-b3\nb4-c3\nb4-d2\nb4-e1\nc4-b5\na3-b5\na3-b1\nb2-b3\nc2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b1\nc2-d1\nc2-c3\nc2-d2\nc2-c1\ne2-d3\ne2-e3\ne2-d2\ne2-d1\ne2-e1\na1-b1\na1-c1\na1-d1\na1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_024\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\n.b...\n.kp..\n.QPp.\nN...r\nPPB.K\nR....\n") != 0) {
			printf("test: failed test_moveRandom_024\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 26) {
		printf("test: failed test_moveRandom_024\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\n.q..b\nkp..r\n..ppP\nP.NQP\nn....\n..B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-c6\nb6-d6\nb6-c5\ne6-d5\ne6-d6\na5-a6\na5-a4\na5-b4\nb5-b4\ne5-d5\ne5-c5\ne5-e4\nc4-d3\nd4-c3\nd4-e3\na2-b4\na2-c3\na2-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_025\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 B\n.q..b\nkp..r\n..ppP\nP.NQP\nn....\n..B.K\n") != 0) {
			printf("test: failed test_moveRandom_025\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 15) {
		printf("test: failed test_moveRandom_025\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n..qnr\n.kb..\np.p.P\nP.P..\nRP.N.\n...KB\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b6\nc6-a6\nc6-d5\nc6-e4\nd6-e4\ne6-e5\ne6-e4\nb5-a6\nb5-b6\nb5-a5\nb5-b4\nc5-b6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-d5\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_026\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\n..qnr\n.kb..\np.p.P\nP.P..\nRP.N.\n...KB\n") != 0) {
			printf("test: failed test_moveRandom_026\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_026\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\nkqb.r\n.pp.p\n.....\npPPPn\n.....\nRB.KQ\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-a5\nb6-a5\nc6-d5\nc6-e4\nc6-d6\ne6-d6\nb5-b4\nc5-c4\ne5-e4\na3-a2\ne3-d5\ne3-c4\ne3-c2\ne3-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_027\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\nkqb.r\n.pp.p\n.....\npPPPn\n.....\nRB.KQ\n") != 0) {
			printf("test: failed test_moveRandom_027\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 10) {
		printf("test: failed test_moveRandom_027\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\n.nbr.\npp.p.\n...kp\nP.P.P\n.R...\n.N..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a3-a4\nc3-c4\nc3-d4\ne3-d4\nb2-b3\nb2-b4\nb2-b5\nb2-a2\nb2-c2\nb2-d2\nb2-e2\nb1-d2\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_028\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 W\n.nbr.\npp.p.\n...kp\nP.P.P\n.R...\n.N..K\n") != 0) {
			printf("test: failed test_moveRandom_028\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_028\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n.kb.r\n.p.pn\nRN.Kp\nB.p..\n....P\n.....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-a5\nb6-c5\nc6-d6\nc6-c5\ne6-d6\nb5-a4\ne5-c4\ne5-d3\ne4-e3\nc3-c2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_029\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\n.kb.r\n.p.pn\nRN.Kp\nB.p..\n....P\n.....\n") != 0) {
			printf("test: failed test_moveRandom_029\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_029\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\n..bnr\n..P.q\npP..P\nPK.kp\n.B.NP\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b5\nc6-d5\nc6-e4\nc6-b6\nd6-b5\nd6-c4\nd6-e4\ne5-d5\ne5-c5\ne5-d4\ne5-c3\ne5-b2\ne5-e4\na4-b3\nd3-c4\nd3-d4\nd3-e4\nd3-c3\nd3-c2\nd3-d2\nd3-e2\ne3-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_030\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 B\n..bnr\n..P.q\npP..P\nPK.kp\n.B.NP\nR....\n") != 0) {
			printf("test: failed test_moveRandom_030\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 18) {
		printf("test: failed test_moveRandom_030\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nkqbNr\n.n..p\np.p..\np..Pp\n.PPQ.\nR.B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-b5\nd6-c4\nd6-e4\nd3-d4\nd3-c4\nb2-b3\nb2-a3\nc2-c3\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-e2\nd2-d1\na1-a2\na1-a3\na1-b1\nc1-b1\nc1-d1\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_031\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\nkqbNr\n.n..p\np.p..\np..Pp\n.PPQ.\nR.B.K\n") != 0) {
			printf("test: failed test_moveRandom_031\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 17) {
		printf("test: failed test_moveRandom_031\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nkb.nr\n.p...\np.p.p\nQPP..\nP..Bp\nRN.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-a5\nb6-a5\nb6-c5\nb6-d4\nb6-e3\nb6-c6\ne6-e5\nb5-b4\na4-b3\nc4-b3\ne4-e3\ne2-e1\ne2-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_032\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 B\nkb.nr\n.p...\np.p.p\nQPP..\nP..Bp\nRN.K.\n") != 0) {
			printf("test: failed test_moveRandom_032\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		printf("test: failed test_moveRandom_032\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 W\n.kbn.\n....r\npP.qp\nP.p.P\nR..PK\nB..Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b4-b5\ne3-d4\na2-b2\na2-c2\nd2-d3\nd2-c3\ne2-d3\ne2-e1\na1-b2\na1-c3\na1-b1\nd1-c2\nd1-b3\nd1-a4\nd1-c1\nd1-b1\nd1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_033\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 W\n.kbn.\n....r\npP.qp\nP.p.P\nR..PK\nB..Q.\n") != 0) {
			printf("test: failed test_moveRandom_033\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_033\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\nk..r.\n.P..p\np..p.\nb.q..\nBQ.NP\nR..nK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b5-b6\nb5-a6\na2-b3\na2-c4\na2-d5\na2-e6\na2-b1\nb2-a3\nb2-b3\nb2-b4\nb2-c3\nb2-c2\nb2-b1\nb2-c1\nd2-c4\nd2-e4\nd2-b3\nd2-b1\ne2-e3\na1-b1\na1-c1\na1-d1\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_034\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 W\nk..r.\n.P..p\np..p.\nb.q..\nBQ.NP\nR..nK\n") != 0) {
			printf("test: failed test_moveRandom_034\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 19) {
		printf("test: failed test_moveRandom_034\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("21 W\nk.b.r\nNP...\np....\n.P..p\nR.PnP\n..K..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a5-c6\na5-c4\nb5-b6\nb5-a6\nb5-c6\nb3-b4\nb3-a4\na2-a3\na2-a4\na2-b2\na2-a1\nc2-c3\nc1-b2\nc1-d2\nc1-b1\nc1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_035\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "21 W\nk.b.r\nNP...\np....\n.P..p\nR.PnP\n..K..\n") != 0) {
			printf("test: failed test_moveRandom_035\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_035\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\nk....\npqp.r\n.pP..\n.b.P.\nPR.pP\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c4-b5\nd3-d4\na2-a3\na2-b3\nb2-b3\nb2-c2\nb2-d2\nb2-b1\ne2-e3\ne1-d2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_036\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 W\nk....\npqp.r\n.pP..\n.b.P.\nPR.pP\n....K\n") != 0) {
			printf("test: failed test_moveRandom_036\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_036\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\n.qbr.\nk..pp\n..p..\npp..P\n.P.B.\nRK...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e3-e4\nb2-a3\nd2-c3\nd2-b4\nd2-a5\nd2-c1\nd2-e1\nd2-d3\nd2-c2\nd2-e2\nd2-d1\na1-a2\na1-a3\nb1-a2\nb1-c2\nb1-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_037\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 W\n.qbr.\nk..pp\n..p..\npp..P\n.P.B.\nRK...\n") != 0) {
			printf("test: failed test_moveRandom_037\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_037\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nk.b.r\n.Q...\n..ppP\nqnN..\nR.P..\n...BK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nc6-b5\nc6-d5\nc6-e4\nc6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\ne6-e4\nd4-d3\nd4-c3\na3-a4\na3-a5\na3-b4\na3-c5\na3-d6\na3-a2\na3-b2\na3-c1\nb3-a5\nb3-c5\nb3-d2\nb3-a1\nb3-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_038\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\nk.b.r\n.Q...\n..ppP\nqnN..\nR.P..\n...BK\n") != 0) {
			printf("test: failed test_moveRandom_038\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 23) {
		printf("test: failed test_moveRandom_038\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\n..knN\np.r..\nqpp.p\n.P...\nP.PP.\nRB.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e6-c5\ne6-d4\nb3-a4\nb3-c4\na2-a3\nc2-c3\nd2-d3\nb1-b2\nb1-c1\nd1-e2\nd1-c1\ne1-e2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_039\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\n..knN\np.r..\nqpp.p\n.P...\nP.PP.\nRB.QK\n") != 0) {
			printf("test: failed test_moveRandom_039\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		printf("test: failed test_moveRandom_039\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\n.k.q.\n.p..b\np..pK\n..Pp.\nPP..P\nR.BQ.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-c6\nb6-a5\nb6-c5\nd6-c6\nd6-e6\nd6-c5\nd6-b4\nd6-a3\nd6-d5\nb5-b4\ne5-e6\ne5-d5\na4-a3\nd4-c3\nd3-d2\nd3-e2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_040\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 B\n.k.q.\n.p..b\np..pK\n..Pp.\nPP..P\nR.BQ.\n") != 0) {
			printf("test: failed test_moveRandom_040\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_040\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nk.qNr\np....\n.p.Pp\n.P...\n..PB.\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-b5\nc6-b6\nc6-d6\nc6-b5\nc6-a4\nc6-c5\nc6-c4\nc6-c3\nc6-c2\nc6-d5\ne6-d6\ne6-e5\na5-a4\ne4-e3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_041\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 B\nk.qNr\np....\n.p.Pp\n.P...\n..PB.\nR...K\n") != 0) {
			printf("test: failed test_moveRandom_041\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_041\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\n....r\nk..b.\n..pp.\npPpKN\nP...P\nR.Q..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e6-d6\ne6-c6\ne6-b6\ne6-a6\ne6-e5\ne6-e4\ne6-e3\na5-a6\na5-b6\na5-b5\na5-a4\na5-b4\nd5-c6\nd5-e4\nd5-d6\nd5-c5\nd5-e5\nc4-b3\nc4-d3\nd4-e3\nc3-c2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_042\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\n....r\nk..b.\n..pp.\npPpKN\nP...P\nR.Q..\n") != 0) {
			printf("test: failed test_moveRandom_042\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 17) {
		printf("test: failed test_moveRandom_042\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nk.b..\np.q.B\npP..r\nn.Pp.\n....P\nRN.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-b5\nc6-b5\nc6-d5\nc6-b6\nc6-d6\na5-b4\nc5-b6\nc5-d6\nc5-b5\nc5-d5\nc5-e5\nc5-b4\nc5-c4\nc5-c3\nc5-d4\nc5-e3\ne4-e5\ne4-d4\ne4-c4\ne4-b4\ne4-e3\ne4-e2\na3-b5\na3-c4\na3-c2\na3-b1\nd3-d2\nd3-e2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_043\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "11 B\nk.b..\np.q.B\npP..r\nn.Pp.\n....P\nRN.QK\n") != 0) {
			printf("test: failed test_moveRandom_043\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 25) {
		printf("test: failed test_moveRandom_043\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\n.b..r\npk...\n.....\nP.PqQ\n.P..P\n..R.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a3-a4\nc3-c4\ne3-d4\ne3-c5\ne3-b6\ne3-e4\ne3-e5\ne3-e6\ne3-d3\ne3-d2\nb2-b3\ne2-d3\nc1-c2\nc1-b1\nc1-a1\nc1-d1\ne1-d2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_044\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 W\n.b..r\npk...\n.....\nP.PqQ\n.P..P\n..R.K\n") != 0) {
			printf("test: failed test_moveRandom_044\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_044\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n.kbNr\n.q..p\npP.p.\n.P.P.\n..PQP\n.n..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-b5\nd6-c4\nd6-e4\nb3-a4\nc2-c3\nd2-c3\nd2-e3\nd2-c1\nd2-d1\ne2-e3\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_045\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 W\n.kbNr\n.q..p\npP.p.\n.P.P.\n..PQP\n.n..K\n") != 0) {
			printf("test: failed test_moveRandom_045\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_045\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\n.qbnr\nkp.N.\n..pp.\np...P\nPPp.Q\nRB..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-c5\nc6-d5\nc6-c5\nd6-e4\ne6-e5\ne6-e4\ne6-e3\na5-a6\na5-a4\na5-b4\nb5-b4\nc4-c3\nd4-d3\nd4-e3\na3-b2\nc2-c1\nc2-b1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_046\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "11 B\n.qbnr\nkp.N.\n..pp.\np...P\nPPp.Q\nRB..K\n") != 0) {
			printf("test: failed test_moveRandom_046\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_046\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\nk..nr\nb...p\nPNpp.\nP....\n..PPP\n.RBQK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b4-a6\nb4-c6\nb4-d5\nb4-d3\nb4-a2\nc2-c3\nd2-d3\ne2-e3\nb1-b2\nb1-b3\nb1-a1\nc1-b2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_047\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\nk..nr\nb...p\nPNpp.\nP....\n..PPP\n.RBQK\n") != 0) {
			printf("test: failed test_moveRandom_047\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		printf("test: failed test_moveRandom_047\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n..q.r\n.p.bp\npkp.n\nPP.PP\n.RBPK\n...Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a3-b4\nb3-a4\nb3-c4\nd3-d4\nd3-c4\nd3-e4\nb2-a2\nb2-b1\nc2-b1\nc2-c3\nc2-c1\ne2-e1\nd1-c1\nd1-b1\nd1-a1\nd1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_048\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 W\n..q.r\n.p.bp\npkp.n\nPP.PP\n.RBPK\n...Q.\n") != 0) {
			printf("test: failed test_moveRandom_048\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_048\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\n..b.r\nk..p.\nNp.np\nPP..p\n..PKP\nRQ...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b5\nc6-a4\nc6-b6\nc6-d6\nc6-c5\ne6-d6\ne6-e5\na5-a6\na5-b6\na5-b5\na5-a4\nb4-a3\nd4-b5\nd4-b3\nd4-c2\nd4-e2\ne3-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_049\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "11 B\n..b.r\nk..p.\nNp.np\nPP..p\n..PKP\nRQ...\n") != 0) {
			printf("test: failed test_moveRandom_049\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_049\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nknqbr\n..pp.\n.p..P\nBpPp.\nP..P.\nRN..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e4-e5\ne4-d5\na3-b4\na3-b2\na3-c1\na3-a4\nc3-c4\nc3-b4\na2-b3\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_050\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\nknqbr\n..pp.\n.p..P\nBpPp.\nP..P.\nRN..K\n") != 0) {
			printf("test: failed test_moveRandom_050\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_050\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\n..q.r\npkPNp\n.....\nPP..Q\nR..b.\n..B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d5-b6\nd5-b4\nd5-c3\na3-a4\nb3-b4\ne3-d4\ne3-e4\ne3-e5\ne3-d3\ne3-c3\ne3-d2\ne3-e2\na2-b2\na2-c2\na2-d2\na2-a1\nc1-b2\nc1-d2\nc1-c2\nc1-b1\nc1-d1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_051\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\n..q.r\npkPNp\n.....\nPP..Q\nR..b.\n..B.K\n") != 0) {
			printf("test: failed test_moveRandom_051\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 20) {
		printf("test: failed test_moveRandom_051\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\nb..N.\nk.qp.\npPpPp\n..P..\n.P.BP\n..RQK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-b5\nd6-c4\nd6-e4\nb4-b5\nb4-a5\nb4-c5\nd4-c5\nb2-b3\nd2-e3\nd2-d3\nd2-c2\ne2-e3\nc1-c2\nc1-b1\nc1-a1\nd1-c2\nd1-b3\nd1-a4\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_052\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 W\nb..N.\nk.qp.\npPpPp\n..P..\n.P.BP\n..RQK\n") != 0) {
			printf("test: failed test_moveRandom_052\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_052\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\nbk.n.\np.pP.\n.....\n.P...\n.PNB.\nq...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b3-b4\nc2-b4\nc2-d4\nc2-a3\nc2-e3\nc2-a1\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-c1\nd2-d3\nd2-e2\nd2-d1\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_053\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 W\nbk.n.\np.pP.\n.....\n.P...\n.PNB.\nq...K\n") != 0) {
			printf("test: failed test_moveRandom_053\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_053\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\n.k.r.\n.Pp.p\npP.Pb\nP...P\n..N..\nR.BQK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-c6\nb6-a5\nb6-b5\nd6-c6\nd6-e6\nd6-d5\nd6-d4\nc5-c4\nc5-b4\nc5-d4\ne5-d4\ne4-d5\ne4-c6\ne4-d3\ne4-c2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_054\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 B\n.k.r.\n.Pp.p\npP.Pb\nP...P\n..N..\nR.BQK\n") != 0) {
			printf("test: failed test_moveRandom_054\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_054\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nq...r\nk..bp\np.ppn\nP.PP.\nRB..P\n.NQ.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c3-d4\nd3-c4\nd3-e4\na2-a1\nb2-a1\nb2-b3\nb2-c2\ne2-e3\nb1-d2\nc1-c2\nc1-d2\nc1-e3\nc1-d1\ne1-d2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_055\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\nq...r\nk..bp\np.ppn\nP.PP.\nRB..P\n.NQ.K\n") != 0) {
			printf("test: failed test_moveRandom_055\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_055\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\n...Br\np.R..\n.k..p\nNP.pP\n.q.PK\n...Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e6-d6\ne6-e5\na5-a4\nb4-b5\nb4-c5\nb4-a4\nb4-c4\nb4-a3\nb4-b3\nb4-c3\nd3-e2\nb2-a3\nb2-b3\nb2-c3\nb2-d4\nb2-e5\nb2-a2\nb2-c2\nb2-d2\nb2-a1\nb2-b1\nb2-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_056\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 B\n...Br\np.R..\n.k..p\nNP.pP\n.q.PK\n...Q.\n") != 0) {
			printf("test: failed test_moveRandom_056\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 18) {
		printf("test: failed test_moveRandom_056\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nk..nr\npqp..\nPP.pb\n...Pp\n.BPKP\nR..Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\nd6-c4\ne6-e5\na5-b4\nb5-b6\nb5-c6\nb5-a4\nb5-b4\nb5-c4\nb5-d3\nc5-c4\nc5-b4\ne4-d5\ne4-c6\ne4-d3\ne4-e5\ne3-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_057\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "11 B\nk..nr\npqp..\nPP.pb\n...Pp\n.BPKP\nR..Q.\n") != 0) {
			printf("test: failed test_moveRandom_057\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_057\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\n.....\nQnk.r\n.P..p\n...P.\nP...P\nRB.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b5-d6\nb5-d4\nb5-a3\nb5-c3\nc5-b6\nc5-c6\nc5-d6\nc5-d5\nc5-b4\nc5-c4\nc5-d4\ne5-e6\ne5-d5\ne4-e3\ne4-d3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_058\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\n.....\nQnk.r\n.P..p\n...P.\nP...P\nRB.K.\n") != 0) {
			printf("test: failed test_moveRandom_058\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_058\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\n...nr\npkp..\nP....\n.p.p.\n.B.KQ\n...R.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-c4\nd6-e4\ne6-e5\ne6-e4\ne6-e3\ne6-e2\nb5-a6\nb5-b6\nb5-c6\nb5-a4\nb5-b4\nb5-c4\nc5-c4\nd3-e2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_059\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 B\n...nr\npkp..\nP....\n.p.p.\n.B.KQ\n...R.\n") != 0) {
			printf("test: failed test_moveRandom_059\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 10) {
		printf("test: failed test_moveRandom_059\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nk...r\n.p..p\np.K.b\nq..QB\nNPP..\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\ne6-d6\ne6-c6\ne6-b6\nb5-b4\nb5-c4\ne4-d5\ne4-c6\ne4-d3\ne4-d4\na3-b4\na3-c5\na3-d6\na3-b3\na3-c3\na3-d3\na3-a2\na3-b2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_060\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\nk...r\n.p..p\np.K.b\nq..QB\nNPP..\nR....\n") != 0) {
			printf("test: failed test_moveRandom_060\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 15) {
		printf("test: failed test_moveRandom_060\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nqQr..\n..p.p\n...p.\n.QB..\nk.KNP\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-a4\na6-a3\na6-b5\na6-c4\na6-d3\na6-e2\nc6-b6\nc6-d6\nc6-e6\nc5-c4\ne5-e4\nd4-d3\nd4-c3\na2-a3\na2-b3\na2-b2\na2-a1\na2-b1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_061\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 B\nqQr..\n..p.p\n...p.\n.QB..\nk.KNP\nR....\n") != 0) {
			printf("test: failed test_moveRandom_061\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_061\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\n..qb.\np....\nnkNPp\nPp..p\n....P\nR.QK.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b6\nc6-a6\nc6-b5\nc6-c5\nc6-c4\nc6-d5\nd6-c5\nd6-e5\nd6-e6\nd6-d5\na4-b6\na4-c5\na4-c3\na4-b2\nb4-b5\nb4-c5\nb4-c4\nb4-a3\nb4-c3\nb3-b2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_062\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 B\n..qb.\np....\nnkNPp\nPp..p\n....P\nR.QK.\n") != 0) {
			printf("test: failed test_moveRandom_062\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_062\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\n.qr..\npk..p\nPp..b\nP.p.P\n.BpP.\nR.Q.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a4-b5\na3-b4\nb2-c3\nb2-b3\nb2-a2\nb2-b1\nd2-d3\nd2-c3\na1-a2\na1-b1\nc1-c2\nc1-b1\nc1-d1\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_063\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\n.qr..\npk..p\nPp..b\nP.p.P\n.BpP.\nR.Q.K\n") != 0) {
			printf("test: failed test_moveRandom_063\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_063\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n.b.r.\nk.p..\npp..Q\nPP..P\n.RPNP\n...BK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e4-d5\ne4-c6\ne4-e5\ne4-e6\ne4-d4\ne4-c4\ne4-b4\ne4-d3\na3-b4\nb3-a4\nb2-a2\nb2-b1\nc2-c3\nd2-c4\nd2-b1\nd1-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_064\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 W\n.b.r.\nk.p..\npp..Q\nPP..P\n.RPNP\n...BK\n") != 0) {
			printf("test: failed test_moveRandom_064\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_064\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\nk....\n.....\np....\nP.P.B\nb..nP\nRN..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c3-c4\ne3-d4\ne3-c5\ne3-b6\ne3-d2\ne3-e4\ne3-d3\na1-a2\nb1-d2\ne1-d2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_065\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 W\nk....\n.....\np....\nP.P.B\nb..nP\nRN..K\n") != 0) {
			printf("test: failed test_moveRandom_065\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_065\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\n.kn.r\npb.Q.\n..P.N\n.PP.p\n.q..P\n..BK.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-c5\nc6-e5\nc6-b4\nc6-d4\ne6-d6\ne6-e5\ne6-e4\na5-a4\nb5-a6\nb5-a4\nb5-c4\nb5-c5\nb5-b4\nb2-a3\nb2-b3\nb2-c3\nb2-a2\nb2-c2\nb2-d2\nb2-e2\nb2-a1\nb2-b1\nb2-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_066\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 B\n.kn.r\npb.Q.\n..P.N\n.PP.p\n.q..P\n..BK.\n") != 0) {
			printf("test: failed test_moveRandom_066\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 20) {
		printf("test: failed test_moveRandom_066\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\nk....\n....p\n.Pr.P\np.p..\nRbP..\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b4-b5\na2-a3\na2-b2\na2-a1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_067\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\nk....\n....p\n.Pr.P\np.p..\nRbP..\n....K\n") != 0) {
			printf("test: failed test_moveRandom_067\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 3) {
		printf("test: failed test_moveRandom_067\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n..Q..\nnk.p.\n.p...\nNp..p\nP...P\nRQ.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-b5\nc6-c5\nc6-c4\nc6-c3\nc6-c2\nc6-c1\nc6-d5\na3-b5\na3-c4\na3-c2\na2-b3\nb1-b2\nb1-b3\nb1-c2\nb1-d3\nb1-e4\nb1-c1\nd1-c2\nd1-d2\nd1-c1\nd1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_068\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\n..Q..\nnk.p.\n.p...\nNp..p\nP...P\nRQ.K.\n") != 0) {
			printf("test: failed test_moveRandom_068\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 21) {
		printf("test: failed test_moveRandom_068\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\n.q.n.\nk..p.\nppPr.\nN.P.p\nRBQ.P\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-c6\nb6-b5\nb6-c5\nd6-b5\nd6-c4\nd6-e4\na5-a6\na5-b5\nd5-c4\nb4-b3\nb4-a3\nb4-c3\nd4-c4\nd4-e4\nd4-d3\nd4-d2\nd4-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_069\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\n.q.n.\nk..p.\nppPr.\nN.P.p\nRBQ.P\n....K\n") != 0) {
			printf("test: failed test_moveRandom_069\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_069\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nk..br\n..q..\npPp.p\nP.p..\nB..nP\nRN.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nd6-e5\nd6-c6\nd6-d5\ne6-e5\nc5-b6\nc5-c6\nc5-b5\nc5-a5\nc5-d5\nc5-e5\nc5-b4\nc5-d4\nc5-e3\ne4-e3\nc3-c2\nd2-b3\nd2-b1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_070\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "11 B\nk..br\n..q..\npPp.p\nP.p..\nB..nP\nRN.K.\n") != 0) {
			printf("test: failed test_moveRandom_070\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_070\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n.....\nP..pp\n..k..\n..p.n\npRP..\n..BQK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d5-d4\ne5-e4\nc4-b5\nc4-c5\nc4-b4\nc4-d4\nc4-b3\nc4-d3\nc3-b2\ne3-c2\ne3-d1\na2-a1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_071\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 B\n.....\nP..pp\n..k..\n..p.n\npRP..\n..BQK\n") != 0) {
			printf("test: failed test_moveRandom_071\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		printf("test: failed test_moveRandom_071\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\nk.b..\n.Qpp.\n....r\nn...P\n...K.\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nc6-b5\nc6-b6\nc6-d6\nc5-c4\nd5-d4\ne4-e5\ne4-e6\ne4-d4\ne4-c4\ne4-b4\ne4-a4\ne4-e3\na3-b5\na3-c4\na3-c2\na3-b1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_072\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 B\nk.b..\n.Qpp.\n....r\nn...P\n...K.\nR....\n") != 0) {
			printf("test: failed test_moveRandom_072\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 15) {
		printf("test: failed test_moveRandom_072\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nk....\npqbr.\n.pPpQ\n.B.P.\nP.P.P\nRn.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na5-a4\nb5-b6\nb5-c6\nb5-a4\nb5-c4\nc5-b6\nc5-d6\nc5-c6\nd5-d6\nd5-e5\nb1-a3\nb1-c3\nb1-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_073\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\nk....\npqbr.\n.pPpQ\n.B.P.\nP.P.P\nRn.K.\n") != 0) {
			printf("test: failed test_moveRandom_073\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 10) {
		printf("test: failed test_moveRandom_073\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\n..qr.\n.b...\nk.pp.\npPNPP\n..P..\nRQK..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b6\nc6-a6\nc6-c5\nc6-d5\nc6-e4\nd6-e6\nd6-d5\nb5-a6\nb5-b6\nb5-a5\nb5-c5\nb5-b4\na4-a5\na4-b4\na4-b3\nc4-b3\nc4-d3\nd4-c3\nd4-e3\na3-a2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_074\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 B\n..qr.\n.b...\nk.pp.\npPNPP\n..P..\nRQK..\n") != 0) {
			printf("test: failed test_moveRandom_074\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_074\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 B\n....r\nRkq..\n.pbPp\nBPn..\n...P.\n.N.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e6-d6\ne6-c6\ne6-b6\ne6-a6\ne6-e5\nb5-a6\nb5-b6\nb5-c6\nb5-a5\nb5-a4\nc5-b6\nc5-c6\nc5-d6\nc5-d5\nc5-e5\nc5-d4\nb4-a3\nc4-d5\nc4-b3\nc4-d3\nc4-e2\ne4-e3\nc3-d5\nc3-a4\nc3-a2\nc3-e2\nc3-b1\nc3-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_075\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 B\n....r\nRkq..\n.pbPp\nBPn..\n...P.\n.N.QK\n") != 0) {
			printf("test: failed test_moveRandom_075\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 24) {
		printf("test: failed test_moveRandom_075\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\n.Rbr.\n.k..p\np.p.P\nP..Q.\nn.PB.\n.N.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-d5\nc6-e4\nc6-c5\nd6-e6\nd6-d5\nd6-d4\nd6-d3\nb5-a6\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nc4-c3\nc4-d3\na2-b4\na2-c3\na2-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_076\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 B\n.Rbr.\n.k..p\np.p.P\nP..Q.\nn.PB.\n.N.K.\n") != 0) {
			printf("test: failed test_moveRandom_076\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_076\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\n...nr\n...bq\nkPp.p\nP...p\n...P.\nRNBKQ\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b4-b5\nd2-d3\nd2-e3\na1-a2\nb1-c3\nc1-b2\nc1-c2\nd1-c2\nd1-e2\ne1-e2\ne1-e3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_077\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\n...nr\n...bq\nkPp.p\nP...p\n...P.\nRNBKQ\n") != 0) {
			printf("test: failed test_moveRandom_077\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		printf("test: failed test_moveRandom_077\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 W\nk..nr\n....p\nqpP.b\nNp.BP\nP..Q.\n.R..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c4-c5\na3-b5\na3-c2\nd3-e4\nd3-c2\nd3-e2\nd3-d4\nd3-c3\na2-b3\nd2-c3\nd2-b4\nd2-c2\nd2-b2\nd2-e2\nd2-c1\nd2-d1\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_078\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 W\nk..nr\n....p\nqpP.b\nNp.BP\nP..Q.\n.R..K\n") != 0) {
			printf("test: failed test_moveRandom_078\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 19) {
		printf("test: failed test_moveRandom_078\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\n....B\np.k.p\nP...n\npp..Q\n..P.p\n.N.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e6-d5\ne6-c4\ne6-b3\ne6-d6\ne3-d4\ne3-c5\ne3-e4\ne3-d3\ne3-c3\ne3-b3\ne3-d2\ne3-c1\ne3-e2\nc2-c3\nc2-b3\nb1-a3\nb1-c3\nb1-d2\nd1-d2\nd1-e2\nd1-c1\nd1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_079\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 W\n....B\np.k.p\nP...n\npp..Q\n..P.p\n.N.K.\n") != 0) {
			printf("test: failed test_moveRandom_079\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 18) {
		printf("test: failed test_moveRandom_079\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n...Qr\nq.p.N\n..k..\n.b..P\nP...K\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e6-d6\ne6-e5\na5-a6\na5-b6\na5-b5\na5-a4\na5-a3\na5-a2\na5-b4\na5-c3\na5-d2\na5-e1\nc4-b5\nc4-d5\nc4-b4\nc4-d4\nc4-c3\nc4-d3\nb3-a4\nb3-a2\nb3-c2\nb3-d1\nb3-b4\nb3-a3\nb3-c3\nb3-b2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_080\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "16 B\n...Qr\nq.p.N\n..k..\n.b..P\nP...K\nR.B..\n") != 0) {
			printf("test: failed test_moveRandom_080\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 22) {
		printf("test: failed test_moveRandom_080\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n.kqr.\n.nQ..\n.P...\nR..p.\n.PPpK\n..B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-a6\nb6-a5\nb6-c5\nc6-c5\nc6-d5\nc6-e4\nd6-e6\nd6-d5\nd6-d4\nb5-d4\nb5-a3\nb5-c3\nd3-c2\nd3-e2\nd2-d1\nd2-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_081\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 B\n.kqr.\n.nQ..\n.P...\nR..p.\n.PPpK\n..B..\n") != 0) {
			printf("test: failed test_moveRandom_081\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_081\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\n..bnr\n.p...\n..ppp\n.Bq.P\n.k.PQ\nRK...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b3-a4\nb3-c4\nb3-a2\nb3-c2\nb3-d1\nb3-b4\nb3-a3\ne3-d4\nd2-d3\nd2-c3\ne2-d3\ne2-c4\ne2-d1\ne2-e1\na1-a2\na1-a3\na1-a4\na1-a5\na1-a6\nb1-a2\nb1-b2\nb1-c2\nb1-c1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_082\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\n..bnr\n.p...\n..ppp\n.Bq.P\n.k.PQ\nRK...\n") != 0) {
			printf("test: failed test_moveRandom_082\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 19) {
		printf("test: failed test_moveRandom_082\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\n.k.r.\n.n...\nQp.Pp\n.Pp..\nP..Nq\nR.B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a4-a5\na4-a6\na4-b5\na4-b4\na4-a3\nd4-d5\na2-a3\nd2-c4\nd2-e4\nd2-b1\na1-b1\nc1-b2\nc1-a3\nc1-c2\nc1-b1\nc1-d1\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_083\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 W\n.k.r.\n.n...\nQp.Pp\n.Pp..\nP..Nq\nR.B.K\n") != 0) {
			printf("test: failed test_moveRandom_083\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 14) {
		printf("test: failed test_moveRandom_083\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nkQ.nr\n.Bq..\n....p\n..bpP\nPP.p.\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a6-b6\na6-a5\na6-b5\nd6-b5\nd6-c4\ne6-e5\nc5-b6\nc5-c6\nc5-b5\nc5-d5\nc5-e5\nc5-b4\nc5-a3\nc5-c4\nc5-d4\nc5-e3\nc3-b4\nc3-a5\nc3-d4\nc3-e5\nc3-b2\nc3-c4\nc3-b3\nc3-c2\nd2-d1\nd2-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_084\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 B\nkQ.nr\n.Bq..\n....p\n..bpP\nPP.p.\nR...K\n") != 0) {
			printf("test: failed test_moveRandom_084\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 22) {
		printf("test: failed test_moveRandom_084\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\nkb.r.\npqpp.\nn....\n.Q.p.\nPPK..\n.R...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-c6\nd6-c6\nd6-e6\nb5-c6\nb5-b4\nb5-b3\nb5-c4\nc5-c4\nd5-d4\na4-c3\na4-b2\nd3-d2\nd3-c2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_085\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "13 B\nkb.r.\npqpp.\nn....\n.Q.p.\nPPK..\n.R...\n") != 0) {
			printf("test: failed test_moveRandom_085\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		printf("test: failed test_moveRandom_085\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\nkr...\n..Q..\npPp..\nN.b.P\nR..P.\n..BnK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c5-b6\nc5-c6\nc5-d6\nc5-b5\nc5-a5\nc5-d5\nc5-e5\nc5-c4\nc5-d4\nb4-b5\na3-b5\na3-c4\na3-c2\na3-b1\ne3-e4\na2-b2\na2-c2\na2-a1\nd2-d3\nd2-c3\nc1-b2\nc1-c2\nc1-b1\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_086\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\nkr...\n..Q..\npPp..\nN.b.P\nR..P.\n..BnK\n") != 0) {
			printf("test: failed test_moveRandom_086\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 21) {
		printf("test: failed test_moveRandom_086\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\n.kb.r\n..ppp\n...q.\n.Bn..\nPP.PP\nRN..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b3-a4\nb3-c4\nb3-d5\nb3-c2\nb3-d1\nb3-b4\nb3-a3\na2-a3\nb2-c3\nd2-d3\nd2-c3\ne2-e3\nb1-a3\nb1-c3\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_087\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\n.kb.r\n..ppp\n...q.\n.Bn..\nPP.PP\nRN..K\n") != 0) {
			printf("test: failed test_moveRandom_087\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_087\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 B\n..br.\nk..pp\nRqp..\n.PPPP\n....K\n....Q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c6-b5\nc6-a4\nc6-b6\nc6-c5\nd6-e6\na5-a6\na5-b6\na5-b5\na5-a4\nd5-d4\ne5-e4\nb4-b5\nb4-b6\nb4-c5\nb4-a4\nb4-a3\nb4-b3\nb4-c3\nc4-b3\nc4-d3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_088\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 B\n..br.\nk..pp\nRqp..\n.PPPP\n....K\n....Q\n") != 0) {
			printf("test: failed test_moveRandom_088\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_088\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n.k.NQ\n..p..\n.....\n.Pp..\nq..KP\n.RB..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-b5\nd6-c4\nd6-e4\ne6-d5\ne6-c4\ne6-e5\ne6-e4\ne6-e3\nb3-b4\nd2-c3\nd2-d3\nd2-e3\nd2-c2\nd2-d1\nd2-e1\ne2-e3\nb1-b2\nb1-a1\nc1-b2\nc1-a3\nc1-c2\nc1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_089\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\n.k.NQ\n..p..\n.....\n.Pp..\nq..KP\n.RB..\n") != 0) {
			printf("test: failed test_moveRandom_089\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 18) {
		printf("test: failed test_moveRandom_089\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nk..b.\np...p\n..P.n\nP....\n..P.P\nqRB.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c4-c5\na3-a4\nc2-c3\ne2-e3\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-b6\nb1-a1\nc1-b2\nc1-d2\nc1-e3\nc1-d1\ne1-d2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_090\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\nk..b.\np...p\n..P.n\nP....\n..P.P\nqRB.K\n") != 0) {
			printf("test: failed test_moveRandom_090\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_090\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nkn..r\npqb.p\nBp...\nPP.pP\nRQ...\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b6-d5\nb6-a4\nb6-c4\ne6-d6\ne6-c6\nb5-c6\nb5-a4\nb5-c4\nc5-d6\nc5-d4\nc5-e3\nc5-c6\nc5-d5\nc5-c4\ne5-e4\nb4-a3\nd3-d2\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_091\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "18 B\nkn..r\npqb.p\nBp...\nPP.pP\nRQ...\n....K\n") != 0) {
			printf("test: failed test_moveRandom_091\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 13) {
		printf("test: failed test_moveRandom_091\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\n...nr\n.k.pP\np.p..\nRPb.Q\n..P.P\n..B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e5-d6\na3-a4\na3-a2\na3-a1\nb3-b4\nb3-a4\nb3-c4\ne3-d4\ne3-c5\ne3-b6\ne3-e4\ne3-d3\ne3-c3\ne3-d2\nc1-b2\nc1-d2\nc1-b1\nc1-d1\ne1-d2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_092\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\n...nr\n.k.pP\np.p..\nRPb.Q\n..P.P\n..B.K\n") != 0) {
			printf("test: failed test_moveRandom_092\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_092\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 W\nr....\n..p.p\npkpQP\n.P...\nP...q\nRB..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d4-c5\nd4-d5\nd4-d6\nd4-e5\nd4-c4\nd4-c3\nd4-b2\nd4-d3\nd4-d2\nd4-d1\nd4-e3\nb3-a4\nb3-c4\na2-a3\nb1-c2\nb1-d3\nb1-b2\nb1-c1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_093\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "15 W\nr....\n..p.p\npkpQP\n.P...\nP...q\nRB..K\n") != 0) {
			printf("test: failed test_moveRandom_093\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 17) {
		printf("test: failed test_moveRandom_093\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("21 W\n...Br\n..p..\nk..N.\n..P.q\n....K\n.R...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("d6-c5\nd6-e5\nd6-c6\nd6-d5\nd4-c6\nd4-e6\nd4-b5\nd4-b3\nd4-c2\nc3-c4\ne2-d3\ne2-e3\ne2-d2\ne2-d1\ne2-e1\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-b6\nb1-a1\nb1-c1\nb1-d1\nb1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_094\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "21 W\n...Br\n..p..\nk..N.\n..P.q\n....K\n.R...\n") != 0) {
			printf("test: failed test_moveRandom_094\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 20) {
		printf("test: failed test_moveRandom_094\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nk...r\n..qpp\nbP...\nP.NPP\n...nK\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b4-b5\nb4-c5\nc3-b5\nc3-d5\nc3-a4\nc3-e4\nc3-a2\nc3-b1\nc3-d1\nd3-d4\ne3-e4\ne2-d2\ne2-d1\ne2-e1\na1-a2\na1-b1\na1-c1\na1-d1\na1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_095\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "12 W\nk...r\n..qpp\nbP...\nP.NPP\n...nK\nR....\n") != 0) {
			printf("test: failed test_moveRandom_095\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 15) {
		printf("test: failed test_moveRandom_095\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\n....r\n.kb.P\np.q.P\n.P...\n.P...\nR.BKQ\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("b3-b4\nb3-a4\nb3-c4\na1-a2\na1-a3\na1-a4\na1-b1\nc1-d2\nc1-e3\nc1-c2\nc1-b1\nd1-c2\nd1-d2\nd1-e2\ne1-d2\ne1-c3\ne1-b4\ne1-a5\ne1-e2\ne1-e3\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_096\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "19 W\n....r\n.kb.P\np.q.P\n.P...\n.P...\nR.BKQ\n") != 0) {
			printf("test: failed test_moveRandom_096\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 16) {
		printf("test: failed test_moveRandom_096\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\n.q..r\n.p.pp\nkbn..\nP.P.Q\n.B...\n.R..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a3-b4\nc3-b4\ne3-d4\ne3-c5\ne3-b6\ne3-e4\ne3-e5\ne3-d3\ne3-d2\ne3-c1\ne3-e2\nb2-a1\nb2-c1\nb2-b3\nb2-a2\nb2-c2\nb1-a1\nb1-c1\nb1-d1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_097\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\n.q..r\n.p.pp\nkbn..\nP.P.Q\n.B...\n.R..K\n") != 0) {
			printf("test: failed test_moveRandom_097\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 18) {
		printf("test: failed test_moveRandom_097\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n.q...\n.b..r\n..ppP\n..k.P\nP...K\nRBQ..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("e3-d4\na2-a3\ne2-d3\ne2-d2\ne2-d1\ne2-e1\nb1-c2\nb1-d3\nb1-b2\nc1-b2\nc1-a3\nc1-c2\nc1-c3\nc1-d2\nc1-d1\nc1-e1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_098\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "20 W\n.q...\n.b..r\n..ppP\n..k.P\nP...K\nRBQ..\n") != 0) {
			printf("test: failed test_moveRandom_098\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_098\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\nk....\nprb..\n.pB.p\nRPKP.\n.....\n....q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("c4-b5\nc4-d5\nc4-e6\nc4-d4\na3-a4\na3-a5\na3-a2\na3-a1\nc3-b4\nc3-d4\nc3-b2\nc3-c2\nc3-d2\nd3-d4\nd3-e4\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_099\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "17 W\nk....\nprb..\n.pB.p\nRPKP.\n.....\n....q\n") != 0) {
			printf("test: failed test_moveRandom_099\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 11) {
		printf("test: failed test_moveRandom_099\n");
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\nkqr..\np..p.\n..p.p\nPpK.P\n.P...\nRNB.Q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
		if (strstr("a3-a4\nc3-b4\nc3-c4\nc3-d4\nc3-b3\nc3-d3\nc3-c2\nc3-d2\na1-a2\nb1-d2\nc1-d2\nc1-c2\nc1-d1\ne1-d2\ne1-e2\ne1-d1\n", &charBuffer[intFor1 * 1024]) == NULL) {
			printf("test: failed test_moveRandom_100\n");
			return false;
		}
		chess_undo();
		chess_boardGet(&charBuffer[(intFor1 * 1024) + 256]);
		if (strcmp(&charBuffer[(intFor1 * 1024) + 256], "14 W\nkqr..\np..p.\n..p.p\nPpK.P\n.P...\nRNB.Q\n") != 0) {
			printf("test: failed test_moveRandom_100\n");
			return false;
		}
	}
	if (test_moveCount(charBuffer, 100) < 12) {
		printf("test: failed test_moveRandom_100\n");
		return false;
	}
	
	return true;
}

bool test_moveGreedy() {
	char charBuffer[1024] = { };
	
	int intWon = 0;
	int intLost = 0;
	
	for (int intFor1 = 0; intFor1 < 50; intFor1 += 1) {
		chess_reset();
		
		do {
			chess_moveGreedy(charBuffer);
			
			if (chess_winner() != '?') {
				break;
			}
			
			chess_moveRandom(charBuffer);
			
			if (chess_winner() != '?') {
				break;
			}
		} while (true);
		
		if (chess_winner() == 'W') {
			intWon += 1;
			
		} else if (chess_winner() == 'B') {
			intLost += 1;
			
		}
	}
	
	for (int intFor1 = 0; intFor1 < 50; intFor1 += 1) {
		chess_reset();
		
		do {
			chess_moveRandom(charBuffer);
			
			if (chess_winner() != '?') {
				break;
			}
			
			chess_moveGreedy(charBuffer);
			
			if (chess_winner() != '?') {
				break;
			}
		} while (true);
		
		if (chess_winner() == 'B') {
			intWon += 1;
			
		} else if (chess_winner() == 'W') {
			intLost += 1;
			
		}
	}
	
	if (intWon < 90) {
		printf("test: failed test_moveGreedy_001\n");
		return false;
		
	} else if (intLost > 10) {
		printf("test: failed test_moveGreedy_002\n");
		return false;
		
	}
	
	return true;
}

bool test_moveNegamax() {
	char charBuffer[1024] = { };
	
	int intWon = 0;
	int intLost = 0;
	
	for (int intFor1 = 0; intFor1 < 50; intFor1 += 1) {
		chess_reset();
		
		do {
			chess_moveNegamax(charBuffer, 2, INT_MAX);
			
			if (chess_winner() != '?') {
				break;
			}
			
			chess_moveGreedy(charBuffer);
			
			if (chess_winner() != '?') {
				break;
			}
		} while (true);
		
		if (chess_winner() == 'W') {
			intWon += 1;
			
		} else if (chess_winner() == 'B') {
			intLost += 1;
			
		}
	}
	
	for (int intFor1 = 0; intFor1 < 50; intFor1 += 1) {
		chess_reset();
		
		do {
			chess_moveGreedy(charBuffer);
			
			if (chess_winner() != '?') {
				break;
			}
			
			chess_moveNegamax(charBuffer, 2, INT_MAX);
			
			if (chess_winner() != '?') {
				break;
			}
		} while (true);
		
		if (chess_winner() == 'B') {
			intWon += 1;
			
		} else if (chess_winner() == 'W') {
			intLost += 1;
			
		}
	}
	
	if (intWon < 90) {
		printf("test: failed test_moveNegamax_001\n");
		return false;
		
	} else if (intLost > 10) {
		printf("test: failed test_moveNegamax_002\n");
		return false;
		
	}
	
	return true;
}

int test_moveCarbide(char* charLeft, char* charRight, int intNumber) {
	int KYTFCNLP = 0;
	
	goto BXKXHLJM;
	
	COGDVSWY: return +1;
	BXKXHLJM: KYTFCNLP = 0; goto JKEYAEJQ;
	XLMCXJWT: if (charLeft[KYTFCNLP] == '\0') { goto NASBRQUN; } goto VGIMYUXH;
	JKEYAEJQ: if (KYTFCNLP >= intNumber) { goto NASBRQUN; } goto DIEFCQWO;
	UIXYAWHT: if (charLeft[KYTFCNLP] < charRight[KYTFCNLP]) { goto MEGIZILJ; } goto XLMCXJWT;
	MEGIZILJ: return -1;
	VGIMYUXH: KYTFCNLP += 1; goto JKEYAEJQ;
	DIEFCQWO: if (charLeft[KYTFCNLP] > charRight[KYTFCNLP]) { goto COGDVSWY; } goto UIXYAWHT;
	NASBRQUN: return 0;
}

int test_moveMercury(int intDepth, int LJZIZRKJ, int WFDHFQQM) {
	int DFITOYVB = 0;
	int charWinner = 0;
	int JZBGAKVE = 0;
	char FTBCHIOX[1024] = { };
	int CLTHIZKI = 0;
	int BLDEPFZO = 0;
	char OAMDWYOT[16] = { };
	
	goto JCOUVXZR;
	
	LZBRQTOK: OAMDWYOT[5] = '\n'; goto YJKYDHPL;
	QSHOYIFH: FTBCHIOX[0] = '\0'; goto IFJEZWGV;
	VAAWCCBN: if (charWinner == 'B') { goto PKYMTJNQ; } goto DRWVCZNJ;
	VYJQYGJD: if (intDepth == 0) { goto PKYMTJNQ; } goto VAAWCCBN;
	AVYTSRYO: LJZIZRKJ = maximum(BLDEPFZO, LJZIZRKJ); goto LZBLDIYM;
	RXDBMSZJ: BLDEPFZO = -test_moveMercury(intDepth - 1, -WFDHFQQM, -LJZIZRKJ); goto VOVLFWOU;
	DRWVCZNJ: if (charWinner == 'W') { goto PKYMTJNQ; } goto NBNXXOND;
	NBNXXOND: if (charWinner == '=') { goto BWKAMJQH; } goto QSHOYIFH;
	PKYMTJNQ: return chess_eval();
	MRWQYYLR: if (DFITOYVB >= JZBGAKVE) { goto QFROESLG; } goto FWQFJPLR;
	YJKYDHPL: OAMDWYOT[6] = '\0'; goto YRMEACPH;
	LZBLDIYM: CLTHIZKI = maximum(BLDEPFZO, CLTHIZKI); goto SIXRBFUS;
	BWKAMJQH: return 0;
	VOVLFWOU: chess_undo(); goto AVYTSRYO;
	YTDKLRXK: OAMDWYOT[3] = FTBCHIOX[(DFITOYVB * 6) + 3]; goto EYDIVOZU;
	KJSDWSLV: DFITOYVB = 0; goto MRWQYYLR;
	IHPYJDZF: CLTHIZKI = INT_MIN + SHRT_MAX; goto WJMGOVFH;
	JCOUVXZR: charWinner = chess_winner(); goto VYJQYGJD;
	FWQFJPLR: OAMDWYOT[0] = FTBCHIOX[(DFITOYVB * 6) + 0]; goto QDKXUQOZ;
	EYDIVOZU: OAMDWYOT[4] = FTBCHIOX[(DFITOYVB * 6) + 4]; goto LZBRQTOK;
	QDKXUQOZ: OAMDWYOT[1] = FTBCHIOX[(DFITOYVB * 6) + 1]; goto IJQPNPLZ;
	IFJEZWGV: JZBGAKVE = chess_movesEvaluated(FTBCHIOX); goto IHPYJDZF;
	IJQPNPLZ: OAMDWYOT[2] = '-'; goto YTDKLRXK;
	YRMEACPH: chess_move(&OAMDWYOT[0]); goto RXDBMSZJ;
	GUFDENZO: DFITOYVB += 1; goto MRWQYYLR;
	SIXRBFUS: if (BLDEPFZO >= WFDHFQQM) { goto QFROESLG; } goto GUFDENZO;
	WJMGOVFH: BLDEPFZO = 0; goto KJSDWSLV;
	QFROESLG: return CLTHIZKI;
}

bool test_moveTungsten(int intDepth) {
	int SMAHPXNE = 0;
	int RGVQCMLO = 0;
	char IGXNKOGV[1024] = { };
	int WWECWKRY = 0;
	int XNCHZVHV = 0;
	int ASPSOHUE = 0;
	int YRUUDTBL = 0;
	int VTBYDVIU = 0;
	char AYCERPWB[1024] = { };
	char MPOOYDFF[16] = { };
	
	goto ZIJZRSCO;
	
	OXKIAHWL: XNCHZVHV = INT_MAX - SHRT_MAX; goto WMMEZPDC;
	AWCSJQZL: chess_move(&MPOOYDFF[0]); goto APFTHYYX;
	LXNQWXLB: AYCERPWB[(VTBYDVIU * 6) + 2] = IGXNKOGV[(SMAHPXNE * 6) + 2]; goto RGFFLUBF;
	OLNCWHKW: if (SMAHPXNE >= VTBYDVIU) { goto HQFUXFKV; } goto FAPMMAUI;
	RGFFLUBF: AYCERPWB[(VTBYDVIU * 6) + 3] = IGXNKOGV[(SMAHPXNE * 6) + 3]; goto EVXGKZLR;
	HLJRLMST: SMAHPXNE += 1; goto OLNCWHKW;
	FAPMMAUI: if (test_moveCarbide(&AYCERPWB[SMAHPXNE * 6], MPOOYDFF, 6) == 0) { goto EBMITSWA; } goto HLJRLMST;
	APFTHYYX: YRUUDTBL = -test_moveMercury(intDepth - 1, -XNCHZVHV, -WWECWKRY); goto WMCLVLXM;
	VFRMRMFW: chess_moveAlphabeta(MPOOYDFF, intDepth, INT_MAX); goto LEUANSQH;
	WIDYWXOA: AYCERPWB[(VTBYDVIU * 6) + 5] = IGXNKOGV[(SMAHPXNE * 6) + 5]; goto EIELQEEL;
	KDEPROZG: if (YRUUDTBL == ASPSOHUE) { goto TTYDEPKU; } goto IWLLTIXP;
	ATSSMAFO: MPOOYDFF[5] = '\n'; goto JZKHEHSQ;
	TDVMZOZE: MPOOYDFF[0] = IGXNKOGV[(SMAHPXNE * 6) + 0]; goto OREWGHDI;
	RAFDJUDT: VTBYDVIU = 0; goto GXSCRSUN;
	PSYXCSAL: ASPSOHUE = maximum(YRUUDTBL, ASPSOHUE); goto MIEXBDZU;
	HQFUXFKV: return false;
	PPRDNDUK: WWECWKRY = INT_MIN + SHRT_MAX; goto OXKIAHWL;
	LEUANSQH: SMAHPXNE = 0; goto OLNCWHKW;
	VPVRPINT: if (SMAHPXNE >= RGVQCMLO) { goto ATDQCZWD; } goto TDVMZOZE;
	WMMEZPDC: ASPSOHUE = INT_MIN + SHRT_MAX; goto NMXPXKFY;
	KPPFXIMN: MPOOYDFF[3] = IGXNKOGV[(SMAHPXNE * 6) + 3]; goto VQHUMWSY;
	OREWGHDI: MPOOYDFF[1] = IGXNKOGV[(SMAHPXNE * 6) + 1]; goto NWGDJHPL;
	EIELQEEL: AYCERPWB[(VTBYDVIU * 6) + 6] = '\0'; goto JSRAFEVB;
	WMCLVLXM: chess_undo(); goto PNLKNIOM;
	PNLKNIOM: if (YRUUDTBL > ASPSOHUE) { ASPSOHUE = YRUUDTBL; VTBYDVIU = 0; } goto KDEPROZG;
	JZKHEHSQ: MPOOYDFF[6] = '\0'; goto AWCSJQZL;
	EVXGKZLR: AYCERPWB[(VTBYDVIU * 6) + 4] = IGXNKOGV[(SMAHPXNE * 6) + 4]; goto WIDYWXOA;
	ZIJZRSCO: IGXNKOGV[0] = '\0'; goto WDNAZNGU;
	NMXPXKFY: YRUUDTBL = 0; goto RAFDJUDT;
	MIEXBDZU: SMAHPXNE += 1; goto VPVRPINT;
	TTYDEPKU: AYCERPWB[(VTBYDVIU * 6) + 0] = IGXNKOGV[(SMAHPXNE * 6) + 0]; goto SCTEIKXU;
	JSRAFEVB: VTBYDVIU += 1; goto IWLLTIXP;
	VQHUMWSY: MPOOYDFF[4] = IGXNKOGV[(SMAHPXNE * 6) + 4]; goto ATSSMAFO;
	SCTEIKXU: AYCERPWB[(VTBYDVIU * 6) + 1] = IGXNKOGV[(SMAHPXNE * 6) + 1]; goto LXNQWXLB;
	ATDQCZWD: MPOOYDFF[0] = '\0'; goto VFRMRMFW;
	IWLLTIXP: WWECWKRY = maximum(YRUUDTBL, WWECWKRY); goto PSYXCSAL;
	NWGDJHPL: MPOOYDFF[2] = '-'; goto KPPFXIMN;
	GXSCRSUN: SMAHPXNE = 0; goto VPVRPINT;
	WDNAZNGU: RGVQCMLO = chess_movesEvaluated(IGXNKOGV); goto PPRDNDUK;
	EBMITSWA: return true;
}

bool test_moveAlphabeta() {
	chess_reset();
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_001\n");
		return false;
	}
	
	chess_boardSet("16 W\nb....\n.k..p\nq.p..\n.p...\n.P.NP\nRB..K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_002\n");
		return false;
	}
	
	chess_boardSet("14 W\n.q.nr\np.Qb.\nB.kPp\nP..p.\n.P.NP\nR..K.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_003\n");
		return false;
	}
	
	chess_boardSet("13 B\n.k..b\nqQp..\npP.p.\nB.N.K\nP.PnP\n..R..\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_004\n");
		return false;
	}
	
	chess_boardSet("12 B\nkq.br\n..p.p\nnppp.\n...PP\nP.PK.\nRNQ..\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_005\n");
		return false;
	}
	
	chess_boardSet("13 W\n.k.nr\n..Pp.\np....\n..P.Q\npBP..\nR..K.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_006\n");
		return false;
	}
	
	chess_boardSet("18 B\nk.b.r\n..q..\n.p..p\nP..Pp\n..PNK\nR....\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_007\n");
		return false;
	}
	
	chess_boardSet("15 B\n..Q.r\n.bk.p\npq...\n.P.K.\nP.Pn.\n..RQ.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_008\n");
		return false;
	}
	
	chess_boardSet("13 B\n..Nn.\n.Q...\n....p\n.kp.P\nPBP.K\nR....\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_009\n");
		return false;
	}
	
	chess_boardSet("16 B\nk..nr\n....b\n.....\nN.pp.\nP..Pq\nR.K..\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_010\n");
		return false;
	}
	
	chess_boardSet("21 W\nk.bn.\n.p.Q.\n.P.p.\nN.p.r\nP....\nB...K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_011\n");
		return false;
	}
	
	chess_boardSet("17 W\n.....\nqb.pr\n...P.\n....Q\nkpK.P\nRNB..\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_012\n");
		return false;
	}
	
	chess_boardSet("13 W\n.q.br\nkBp..\n...p.\n...P.\nP.PN.\nR.Q.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_013\n");
		return false;
	}
	
	chess_boardSet("11 B\n....r\npkppp\n.b..n\n.PPPP\nPN...\nR.BQK\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_014\n");
		return false;
	}
	
	chess_boardSet("17 B\n....r\n...pq\nkp...\n.b.pP\nRB.P.\n.N.K.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_015\n");
		return false;
	}
	
	chess_boardSet("12 W\nk..b.\n.p.p.\np.n.r\nPpPPq\n....P\nRQB.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_016\n");
		return false;
	}
	
	chess_boardSet("20 W\n.k..q\nR...p\n.p..n\n.PP..\n.....\n.N..K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_017\n");
		return false;
	}
	
	chess_boardSet("19 W\n.....\nk.p.p\n....P\nqpprB\n.PP..\n..K..\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_018\n");
		return false;
	}
	
	chess_boardSet("19 W\nk..r.\n.....\nP.b.p\n.np.p\nP.p.K\nRB.Q.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_019\n");
		return false;
	}
	
	chess_boardSet("15 W\n...br\n.p.kp\n.P.pP\nN....\nPPQ..\nR.B.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_020\n");
		return false;
	}
	
	chess_boardSet("18 W\nkb.nr\n..pp.\nq.Q.p\n....P\n..PP.\n..B.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_021\n");
		return false;
	}
	
	chess_boardSet("18 B\n...kr\nB.p..\nq...p\nnPpPP\n.....\nRN..K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_022\n");
		return false;
	}
	
	chess_boardSet("18 W\n...nr\n..p..\n.bp.p\nPk..P\n.RQP.\nq...K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_023\n");
		return false;
	}
	
	chess_boardSet("12 B\n.k.r.\np.pp.\nB.P.p\nP...P\n...P.\nRN.K.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_024\n");
		return false;
	}
	
	chess_boardSet("16 B\n...Nr\n..bpq\nk...p\nPBp.P\n..P..\nRnQ.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_025\n");
		return false;
	}
	
	chess_boardSet("16 W\n....r\npk.pp\nN.q..\n.Pp..\nPQ.BK\nR....\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_026\n");
		return false;
	}
	
	chess_boardSet("11 B\nk.q.r\npn.p.\nbPN.p\n.PpP.\n.BP.P\nR.Q.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_027\n");
		return false;
	}
	
	chess_boardSet("15 W\nb..nr\n..kPp\n.pp..\nPNP..\nP..P.\n.RB.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_028\n");
		return false;
	}
	
	chess_boardSet("16 B\nk.b.r\nqn..p\n.pPpP\nNP.P.\n...BK\n.R...\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_029\n");
		return false;
	}
	
	chess_boardSet("14 W\nk.bn.\nKr...\np..Qp\n....q\nP....\nR.B..\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_030\n");
		return false;
	}
	
	chess_boardSet("19 B\n...nr\n...pB\nP.k.p\nq.P..\n...QP\n..R.K\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_031\n");
		return false;
	}
	
	chess_boardSet("14 W\nq.b.r\nkpPpp\np.PP.\n...pP\nP..B.\nRN.K.\n");
	if (test_moveTungsten(1) != true) {
		printf("test: failed test_test_moveAlphabeta_032\n");
		return false;
	}
	
	chess_boardSet("18 B\nk..qr\n..p.p\n.....\nR.nP.\n.p.QP\n....K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_033\n");
		return false;
	}
	
	chess_boardSet("19 B\nk.Qnr\nbp..p\np...p\n...p.\n...P.\nR...K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_034\n");
		return false;
	}
	
	chess_boardSet("20 W\n..q.r\n.kb..\np..pp\n.QBPP\nPn.K.\nR....\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_035\n");
		return false;
	}
	
	chess_boardSet("14 B\n.k.r.\npnp.p\nN....\nRp..q\n.PPP.\n.B..K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_036\n");
		return false;
	}
	
	chess_boardSet("11 B\nkq.r.\np...p\n.ppp.\n.PPPP\nP.Q..\n..R.K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_037\n");
		return false;
	}
	
	chess_boardSet("15 B\n...br\n..B.p\nkqp..\nP.N..\n...PP\n....K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_038\n");
		return false;
	}
	
	chess_boardSet("14 B\nk..b.\n.Pr..\nBP..p\n..P.P\n..QP.\n.R..K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_039\n");
		return false;
	}
	
	chess_boardSet("16 W\n...N.\n....r\npbpP.\n.k...\nPQK..\nRB...\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_040\n");
		return false;
	}
	
	chess_boardSet("18 W\n.k..Q\n.Q..p\nppn.p\nP.P.q\n..P..\nR...K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_041\n");
		return false;
	}
	
	chess_boardSet("14 B\n.k.r.\n..bNp\n..p.Q\np.P..\n.P.PK\n.RB..\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_042\n");
		return false;
	}
	
	chess_boardSet("19 B\n.kq.r\n..p.p\n..PBP\n.Q..p\n..P..\n...K.\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_043\n");
		return false;
	}
	
	chess_boardSet("16 W\nkb.n.\n.p..r\npP..p\n.....\nPK..P\n...N.\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_044\n");
		return false;
	}
	
	chess_boardSet("17 B\n.k..r\npqK.p\n....P\n.P...\nR..P.\n..Q..\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_045\n");
		return false;
	}
	
	chess_boardSet("17 B\n.k...\np...r\nBpp..\nNP.q.\nPRPKP\n..Q..\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_046\n");
		return false;
	}
	
	chess_boardSet("19 B\n.n.bk\np...r\nP..PB\n....Q\n....P\n..R.K\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_047\n");
		return false;
	}
	
	chess_boardSet("18 W\n.k.n.\n...p.\np.b.r\nPp.Pq\n.PB.P\nR..K.\n");
	if (test_moveTungsten(2) != true) {
		printf("test: failed test_test_moveAlphabeta_048\n");
		return false;
	}
	
	chess_boardSet("13 B\n..br.\npk.Q.\nn.pPp\n..q..\n..PP.\nR..BK\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_049\n");
		return false;
	}
	
	chess_boardSet("13 B\nkB.n.\nb...r\n.pp.P\nN....\nPQ..P\nR..K.\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_050\n");
		return false;
	}
	
	chess_boardSet("17 W\nk...r\n.....\n.Pp..\n.....\nnPN.P\nR...K\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_051\n");
		return false;
	}
	
	chess_boardSet("13 W\n..b..\nk.pr.\n.qnPK\nNpPP.\nP....\nR...Q\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_052\n");
		return false;
	}
	
	chess_boardSet("14 W\n..br.\nqp.p.\nN.kp.\np..P.\nP...P\nR..nK\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_053\n");
		return false;
	}
	
	chess_boardSet("12 W\n..bnr\n....p\nkp..p\nP.p..\nRP.P.\n.N.K.\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_054\n");
		return false;
	}
	
	chess_boardSet("14 B\nk.br.\np.P.n\n...pp\nPB...\n.q.PP\nRKN..\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_055\n");
		return false;
	}
	
	chess_boardSet("15 W\n..br.\nqp...\npkpp.\n.PB.P\n..P.Q\n.nR.K\n");
	if (test_moveTungsten(3) != true) {
		printf("test: failed test_test_moveAlphabeta_056\n");
		return false;
	}
	
	chess_boardSet("18 B\nk..rQ\n.pqb.\nP.n..\n.Bp.P\n..p.K\n.R...\n");
	if (test_moveTungsten(4) != true) {
		printf("test: failed test_test_moveAlphabeta_057\n");
		return false;
	}
	
	chess_boardSet("12 W\nkqrN.\np..pp\nQ....\n..p.P\nbP...\n.RB.K\n");
	if (test_moveTungsten(4) != true) {
		printf("test: failed test_test_moveAlphabeta_058\n");
		return false;
	}
	
	chess_boardSet("15 B\n...nr\npk..P\n..pb.\n.PK..\n.PP.P\n..RBQ\n");
	if (test_moveTungsten(4) != true) {
		printf("test: failed test_test_moveAlphabeta_059\n");
		return false;
	}
	
	chess_boardSet("13 B\n..bnr\nk.p.P\npp...\nR...P\n.PQPN\n..B.K\n");
	if (test_moveTungsten(4) != true) {
		printf("test: failed test_test_moveAlphabeta_060\n");
		return false;
	}
	
	return true;
}
