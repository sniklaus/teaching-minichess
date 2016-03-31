#include "main.h"

bool test_board() {
	char charBuffer[1024] = { };
	
	chess_reset();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n.Qbq.\np.p.r\np.B.p\n..p..\nP..PP\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.Qbq.\np.p.r\np.B.p\n..p..\nP..PP\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nkqr..\np.p..\nB.bPP\n..Q..\nPP.KP\nR....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkqr..\np.p..\nB.bPP\n..Q..\nPP.KP\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nQ.r..\np....\n....b\n.p..p\nPPB.P\n.R.qK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nQ.r..\np....\n....b\n.p..p\nPPB.P\n.R.qK\n") != 0) {
		return false;
	}
	
	chess_boardSet("9 B\nQ...r\npqp..\nbpP.p\nB...P\nP.PP.\nRN..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "9 B\nQ...r\npqp..\nbpP.p\nB...P\nP.PP.\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nkq...\np..p.\n...p.\nP.n..\nR.b..\n.B..r\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkq...\np..p.\n...p.\nP.n..\nR.b..\n.B..r\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nQ..n.\np..P.\n...rB\nP.q.b\n.P..P\n..RqK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nQ..n.\np..P.\n...rB\nP.q.b\n.P..P\n..RqK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk.Bnr\n...p.\np.p.p\nP.P..\n....P\nRN..q\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.Bnr\n...p.\np.p.p\nP.P..\n....P\nRN..q\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk..nr\np..p.\n....p\nb.pP.\nP...K\nRQ...\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk..nr\np..p.\n....p\nb.pP.\nP...K\nRQ...\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk....\n.QpB.\n.pn.r\n..pPp\nP...P\nRNQ.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk....\n.QpB.\n.pn.r\n..pPp\nP...P\nRNQ.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk..r.\npqnbp\n..P..\nB.PpP\nP..P.\nRQ..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk..r.\npqnbp\n..P..\nB.PpP\nP..P.\nRQ..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.b.n.\nk..p.\npBp.r\nP.P.p\n.R.PP\n..N.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.b.n.\nk..p.\npBp.r\nP.P.p\n.R.PP\n..N.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n...nr\n...b.\nk.p.p\nB.PqP\n...P.\n.Q..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n...nr\n...b.\nk.p.p\nB.PqP\n...P.\n.Q..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("10 W\nk...r\n.b.pp\np..Pn\nP...P\n..P.N\nRB.Qq\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "10 W\nk...r\n.b.pp\np..Pn\nP...P\n..P.N\nRB.Qq\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n.q...\nnQpb.\np...p\nP.r.p\n.PK.N\nR.B..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.q...\nnQpb.\np...p\nP.r.p\n.PK.N\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkqbnr\n..p..\npp...\nP.P.p\n.P.pK\n.RBQ.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nkqbnr\n..p..\npp...\nP.P.p\n.P.pK\n.RBQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 W\nk..br\npN.pp\n..p..\nP....\n....q\nnRBQ.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 W\nk..br\npN.pp\n..p..\nP....\n....q\nnRBQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkqbn.\np..r.\nRB.P.\n....p\n..PP.\n.N.QK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkqbn.\np..r.\nRB.P.\n....p\n..PP.\n.N.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nk..qr\n..PPp\n.....\n.p.p.\nP...K\n.RB..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk..qr\n..PPp\n.....\n.p.p.\nP...K\n.RB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk.r..\np..p.\nBN...\nPPbpn\nR.P.P\n.....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk.r..\np..p.\nBN...\nPPbpn\nR.P.P\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nk..N.\nr....\np..pK\nPpP..\nR.P.Q\n..B..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk..N.\nr....\np..pK\nPpP..\nR.P.Q\n..B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk....\npN..p\nb.r.p\n.pPQp\n.PB..\nR....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk....\npN..p\nb.r.p\n.pPQp\n.PB..\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkqbr.\n.p...\npp.pp\nN.BP.\n..P.P\nR.Q.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkqbr.\n.p...\npp.pp\nN.BP.\n..P.P\nR.Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("5 B\n.q.nr\n.Nbpp\np.p..\n.....\nPPPPP\n.RBQK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "5 B\n.q.nr\n.Nbpp\np.p..\n.....\nPPPPP\n.RBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk..br\npp..p\n....P\nPpNp.\nR.BQP\n....K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk..br\npp..p\n....P\nPpNp.\nR.BQP\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("6 B\nQqbnr\np.pp.\n....p\np...P\nPPPP.\nR.B.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "6 B\nQqbnr\np.pp.\n....p\np...P\nPPPP.\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.q..r\n..p.p\nRpnp.\n.kPP.\n...BP\n.N..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.q..r\n..p.p\nRpnp.\n.kPP.\n...BP\n.N..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkr...\np.p..\n.qP.p\n.NPB.\nP...P\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nkr...\np.p..\n.qP.p\n.NPB.\nP...P\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n...r.\n..pQ.\npk..p\n.B...\n.P.pP\nR..n.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n...r.\n..pQ.\npk..p\n.B...\n.P.pP\nR..n.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n.qb.r\n.p...\npPP.p\nPQ..P\n...n.\nRB..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.qb.r\n.p...\npPP.p\nPQ..P\n...n.\nRB..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nk..nK\np..b.\nr.qP.\nPPPp.\n.....\nRBQ..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk..nK\np..b.\nr.qP.\nPPPp.\n.....\nRBQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk.r..\n...qp\n.p.KP\npbQ.P\n.PP..\nR.BN.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk.r..\n...qp\n.p.KP\npbQ.P\n.PP..\nR.BN.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkq.br\n.pp.p\npP..P\nR..p.\nn.PPK\n.NBQ.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkq.br\n.pp.p\npP..P\nR..p.\nn.PPK\n.NBQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n..kN.\n.p.p.\npP...\nB.Ppb\nP...K\nR....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n..kN.\n.p.p.\npP...\nB.Ppb\nP...K\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk...r\nqp.pp\n..p.n\n.PP.b\nP.BPP\nR.K..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk...r\nqp.pp\n..p.n\n.PP.b\nP.BPP\nR.K..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n...nr\n.k...\npppqp\n....P\nPp.PK\nR.B.Q\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n...nr\n.k...\npppqp\n....P\nPp.PK\nR.B.Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk..r.\np....\np.p.p\nq.P.P\n.R.P.\n.NBnK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..r.\np....\np.p.p\nq.P.P\n.R.P.\n.NBnK\n") != 0) {
		return false;
	}
	
	chess_boardSet("4 B\nQqbnr\n..ppp\n.p...\n..P..\nPP.PP\nRNB.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "4 B\nQqbnr\n..ppp\n.p...\n..P..\nPP.PP\nRNB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk..b.\n.nQ.r\np.N..\nPp...\nRPP.P\n....K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk..b.\n.nQ.r\np.N..\nPp...\nRPP.P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n...qr\np...p\n..kb.\n..pP.\nP..PP\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n...qr\np...p\n..kb.\n..pP.\nP..PP\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nk...Q\n.Ppp.\nB...r\n..p..\nR...p\n.N..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk...Q\n.Ppp.\nB...r\n..p..\nR...p\n.N..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n...nr\nqk..p\np....\nNQ...\nPPPbP\nR.KB.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n...nr\nqk..p\np....\nNQ...\nPPPbP\nR.KB.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.r...\npk.Pq\n.pP.n\n.....\nPP...\n..R.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.r...\npk.Pq\n.pP.n\n.....\nPP...\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("9 W\nkq.nr\n...bp\n.p.p.\n...PB\nP...Q\nRN.q.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "9 W\nkq.nr\n...bp\n.p.p.\n...PB\nP...Q\nRN.q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk..qr\np...p\nP.pPn\nR....\n.pP.P\n....K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk..qr\np...p\nP.pPn\nR....\n.pP.P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nkN.nr\n.....\n.p..p\np..KP\np.PP.\nR.B..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nkN.nr\n.....\n.p..p\np..KP\np.PP.\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nqk..r\n.n.p.\nP..Pp\n...b.\n..PK.\nRNB.Q\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nqk..r\n.n.p.\nP..Pp\n...b.\n..PK.\nRNB.Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("6 W\nk.br.\npp.pp\n..p.n\n...qP\nPPPP.\nRNBQ.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "6 W\nk.br.\npp.pp\n..p.n\n...qP\nPPPP.\nRNBQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nk....\np...r\n..R.n\n.pbP.\n.BQ.P\n.N..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk....\np...r\n..R.n\n.pbP.\n.BQ.P\n.N..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nq....\n.kp..\np..b.\n..KPr\nPP.Q.\nR..N.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nq....\n.kp..\np..b.\n..KPr\nPP.Q.\nR..N.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.k.Nr\n.....\n...Bp\n.Rp..\nP.bP.\nQ..qK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.k.Nr\n.....\n...Bp\n.Rp..\nP.bP.\nQ..qK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n...b.\n...p.\npqPp.\npQ...\nR..Nr\n....K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n...b.\n...p.\npqPp.\npQ...\nR..Nr\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkb.nr\n....p\npp.P.\n.q..P\nP.P.Q\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nkb.nr\n....p\npp.P.\n.q..P\nP.P.Q\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk....\npq..r\nP.n.p\n.pp..\n.PPKP\n.R..Q\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk....\npq..r\nP.n.p\n.pp..\n.PPKP\n.R..Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nq...r\np..bp\n..kpP\np.P..\n...QP\nRNB.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nq...r\np..bp\n..kpP\np.P..\n...QP\nRNB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.qbr.\n..ppp\n.p...\n.pPPP\nRn.BK\n.N..Q\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.qbr.\n..ppp\n.p...\n.pPPP\nRn.BK\n.N..Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n..q.r\npPQ.p\n...pP\nP..P.\nR..b.\n...nK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n..q.r\npPQ.p\n...pP\nP..P.\nR..b.\n...nK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nk...r\np..b.\n.q.p.\n..p.P\nPpQ..\nRB...\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk...r\np..b.\n.q.p.\n..p.P\nPpQ..\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n.Qk..\npnp..\np..p.\n.....\n....P\n....K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.Qk..\npnp..\np..p.\n.....\n....P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..knr\np...p\nPp..N\n.Bpp.\n.P.QP\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n..knr\np...p\nPp..N\n.Bpp.\n.P.QP\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.q.nr\nk.Q..\np.p.p\nP....\n..P.P\n.B..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.q.nr\nk.Q..\np.p.p\nP....\n..P.P\n.B..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n.kr..\n..p.p\n.p...\nPpp.b\nR.PQK\n.....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n.kr..\n..p.p\n.p...\nPpp.b\nR.PQK\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nQ..br\n.qp.p\n..Pp.\np..P.\nRB..P\n.N..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nQ..br\n.qp.p\n..Pp.\np..P.\nRB..P\n.N..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("7 B\nQbqnr\np.p.p\n...p.\nP.p.P\n.PPP.\nRB.K.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "7 B\nQbqnr\np.p.p\n...p.\nP.p.P\n.PPP.\nRB.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n..r..\n..k..\nB...K\nNP...\n....P\n....R\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..r..\n..k..\nB...K\nNP...\n....P\n....R\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\n.kq..\np.p.r\nPbn..\nN..pP\n..qP.\n...K.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.kq..\np.p.r\nPbn..\nN..pP\n..qP.\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk.r..\npp...\n.b..p\nRPPpq\n...PQ\n.NB.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.r..\npp...\n.b..p\nRPPpq\n...PQ\n.NB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk...r\npp..p\n....n\n.q..P\nP.KbB\n....R\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk...r\npp..p\n....n\n.q..P\nP.KbB\n....R\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n...nb\nkp...\np...r\nN.P.K\np....\nRB...\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...nb\nkp...\np...r\nN.P.K\np....\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkqb.r\n....p\n..Pp.\np...P\n..PNK\nR...B\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkqb.r\n....p\n..Pp.\np...P\n..PNK\nR...B\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n.kqnr\nQp...\np...p\nPp.PP\n.BP..\n..R.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.kqnr\nQp...\np...p\nPp.PP\n.BP..\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 W\nkq.nr\n.p...\n.bppp\nP.PPP\n..p.Q\nRNB..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 W\nkq.nr\n.p...\n.bppp\nP.PPP\n..p.Q\nRNB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n.k...\n.p..Q\n...BP\n.q...\n....n\nqN..K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.k...\n.p..Q\n...BP\n.q...\n....n\nqN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk....\n.pb.r\n....p\np...N\nPQPPP\n.RBQK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk....\n.pb.r\n....p\np...N\nPQPPP\n.RBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("7 W\nkq.nr\np..bp\n.p...\n.Pp.P\nP.PP.\nRNBQ.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "7 W\nkq.nr\np..bp\n.p...\n.Pp.P\nP.PP.\nRNBQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n..k..\np....\nPp.br\nRQP..\n..P.P\n...K.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n..k..\np....\nPp.br\nRQP..\n..P.P\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nq..r.\nk.bpp\np....\n.PNP.\nP.P..\nRBQK.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nq..r.\nk.bpp\np....\n.PNP.\nP.P..\nRBQK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n..r..\np.pqp\n.Pk.b\n...P.\n.PQKB\nR....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n..r..\np.pqp\n.Pk.b\n...P.\n.PQKB\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n..r..\nkq.Pp\nPp.b.\n.PB..\n.RPK.\nQ....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n..r..\nkq.Pp\nPp.b.\n.PB..\n.RPK.\nQ....\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nkq.r.\n.p.bp\np.QpP\nPPB.n\n..P..\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkq.r.\n.p.bp\np.QpP\nPPB.n\n..P..\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n.b..r\nP.qpp\np.P..\nB.nP.\nP.N.P\nR..QK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n.b..r\nP.qpp\np.P..\nB.nP.\nP.N.P\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n....r\n..Qpp\n.P..q\n.....\npR..P\n...kK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n....r\n..Qpp\n.P..q\n.....\npR..P\n...kK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n..b..\npkq..\n.p...\n.P.pN\n.BPP.\n..RQK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n..b..\npkq..\n.p...\n.P.pN\n.BPP.\n..RQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkb...\npr...\nPp.p.\n..PPK\n...Q.\nRB...\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkb...\npr...\nPp.p.\n..PPK\n...Q.\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.kb.Q\n.qp.r\np...p\nPPK..\nRB..P\n.....\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.kb.Q\n.qp.r\np...p\nPPK..\nRB..P\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("7 B\nq.bnr\nQp.p.\n...pp\np....\nPPP.P\nRNB.K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "7 B\nq.bnr\nQp.p.\n...pp\np....\nPPP.P\nRNB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\nr....\nq.p.p\n...b.\nN.QPB\nk...P\nnR.K.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nr....\nq.p.p\n...b.\nN.QPB\nk...P\nnR.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk.B.r\np....\n....p\nbQp.P\n.nqP.\nR..K.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk.B.r\np....\n....p\nbQp.P\n.nqP.\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n.nb.r\n..p..\npQ..p\np.k.q\nPPPK.\nR.B..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n.nb.r\n..p..\npQ..p\np.k.q\nPPPK.\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..bnr\nP...p\nk.p..\nQBPp.\nP..P.\n..Rq.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n..bnr\nP...p\nk.p..\nQBPp.\nP..P.\n..Rq.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n..q.r\nk.p..\nN..pp\nPp.pn\nRP..K\n...Q.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n..q.r\nk.p..\nN..pp\nPp.pn\nRP..K\n...Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk..br\nq.p.p\nB.p..\nN.P..\n.P.PP\nR.K..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..br\nq.p.p\nB.p..\nN.P..\n.P.PP\nR.K..\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk..nr\n.BbNp\np....\n.Pq.P\nP..P.\nR..QK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk..nr\n.BbNp\np....\n.Pq.P\nP..P.\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkq..r\n.pp.p\np..pb\nPPKP.\nR.Q.P\n.N..n\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq..r\n.pp.p\np..pb\nPPKP.\nR.Q.P\n.N..n\n") != 0) {
		return false;
	}
	
	chess_boardSet("5 W\nk.bnr\npp.p.\n..p.p\nNP...\nP.PP.\nRB.Qq\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "5 W\nk.bnr\npp.p.\n..p.p\nNP...\nP.PP.\nRB.Qq\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nqkb.r\n.p..p\nppn.N\n....P\nP.PPp\nR.Q..\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nqkb.r\n.p..p\nppn.N\n....P\nP.PPp\nR.Q..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n...N.\npP.br\n..pP.\n...R.\n.PBpP\n...QK\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n...N.\npP.br\n..pP.\n...R.\n.PBpP\n...QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("10 B\n.q.nr\n.Pp.p\n.p.p.\nN..B.\nPPbPP\nR...K\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "10 B\n.q.nr\n.Pp.p\n.p.p.\nN..B.\nPPbPP\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n.k..r\nQ.b.P\np.nP.\n....P\nP..N.\nR..K.\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n.k..r\nQ.b.P\np.nP.\n....P\nP..N.\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk.b.r\nppq.p\n..p.n\n....P\nPPBQ.\nRN...\n");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk.b.r\nppq.p\n..p.n\n....P\nPPBQ.\nRN...\n") != 0) {
		return false;
	}
	
	return true;
}

bool test_winner() {
	chess_reset();
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("16 W\n..br.\n.n..p\nk..p.\nR.p..\n..PP.\n.NB.K\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("11 B\n.q..r\nkpbpp\np..P.\nnB...\nR.PNP\n...QK\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("13 B\n..kNr\np.p.p\n..np.\nP.bP.\n.PK.P\nR.BQ.\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("15 W\nkq..r\n.pp.p\np..Q.\nnPP..\nR.bN.\n...BK\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("14 B\n.kbQr\n.P...\n...P.\nq....\n...BP\n.q.K.\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("11 B\n.qQn.\n.Np.r\np...p\nk.P.P\nPP...\nR..BK\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("11 B\n.k.n.\np.pp.\n..b.r\n..PPp\n.B.NP\nR..KQ\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("13 B\nk..n.\np.b.p\n.pqN.\n...P.\n..PBP\n.R.QK\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("14 W\n.r...\nkqPp.\n..p.p\n..p.Q\nP.P.P\nR.B.K\n");
	
	if (chess_winner() != '?') {
		return false;
	}
	
	chess_boardSet("17 B\n.Q.r.\np....\np...p\nq....\nP...K\nR..B.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\nk..b.\n....p\n....P\n...P.\nrK...\nqR...\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("25 W\nq..b.\np...p\n.k..P\nnQp..\nPR...\n.....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("39 B\n...r.\nR.b..\n.....\nNKp..\n.....\n.Q...\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\n....b\n.....\nkp..p\n....P\n..K..\n..Nr.\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("23 W\n.kb..\n..P..\np...p\nP.p.P\n...r.\nR....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\nQ....\n.k...\np....\nQ....\n..pnK\n....R\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("36 B\n..Q..\n....P\n.....\np..K.\np....\nq....\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("20 W\nk....\np.pp.\n..P..\nnP...\n.P..N\n...Qq\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("17 B\n...br\nq.pN.\nBpP.p\n....P\nq..P.\nR...K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("12 W\nk..br\np..pp\n..p..\np.BPP\nR.P..\n....q\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("26 W\nk....\nq.r..\np...n\nN.pp.\nP....\nRB...\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("31 B\n.....\nqrB..\nP.ppp\nR..pP\n.....\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("10 B\n.bq.r\npN.p.\n.p..p\nPPPP.\n...B.\nR..QK\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("18 W\n..bnr\npq.P.\n.kpPp\n...qP\nP....\n.N.RB\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("17 B\n....r\n...Bp\npPp..\nN..qp\np..K.\nR.Q..\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("7 W\nkqbr.\np.ppp\n.p...\nN..P.\n.PPnP\n.RBQ.\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\n.....\nQ..k.\n..p..\n..P..\n....K\n.N...\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("21 W\nk...r\n....p\np.p..\nB.P.P\nP....\n....R\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("9 B\n.Q.nr\n...bp\nP....\n.p..P\n.pP.P\nRNB.K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("31 W\n.....\np.Rqr\nk..b.\n...Qp\n..P..\n...n.\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("25 B\n..qQ.\n.r...\np....\n.BPPp\nP....\nR...K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\nQ....\n.....\n.....\n....k\n.....\n...K.\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("28 B\n....b\nR....\n.....\n.....\nq...P\nq...K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("27 B\n..bNr\n..p..\n...P.\nP...P\n..K.q\n.....\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("14 W\n.qr..\npkp.b\n.pN.p\n.PpPP\nPBP..\n.R..Q\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\nk....\nq....\n.....\n.K...\n.....\n....q\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("10 B\nB...r\np...p\n.P...\nQP..q\nP..Pb\nRN..K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("29 B\nB.Q..\n....p\np..rP\nP....\n.q...\nR...K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("15 B\n.q...\nnB..r\n....p\nP.p.p\n...N.\n.q.K.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\n...q.\n.....\nk..bP\np..p.\nB..K.\n.....\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("27 W\n.k...\n.N...\n..q..\n.BQ..\nnP...\n.R...\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("21 W\nk.b.r\n.....\n..qpn\n..q.P\np....\n.N.BQ\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("29 W\n..r..\nkRpbp\n...pn\n...B.\n.....\n....q\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\nk...r\np....\n.....\n..K..\n.PB..\n.....\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("23 B\n....Q\n.qP..\np....\nP..Pp\n.B...\nRN.K.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("32 W\n.k...\n..rb.\n.....\n.....\n....q\n..q.R\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("4 B\nR.bnr\n.qppp\n.p...\n..N..\n.PPPP\n..BQK\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("17 B\n...qr\nQ.p.P\np...B\n.b..P\nPP..K\n..R..\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("22 W\nkqbnQ\n.p...\n.P...\nP...B\n....p\n.R..q\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\n.....\n.....\n.....\n..kK.\np....\nQ....\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("39 B\n....r\n..K..\n.....\n.....\n...p.\n.....\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("31 W\nrk...\np..P.\n...pR\n.....\n.BPP.\n....Q\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("27 B\n.....\nr...R\np....\nP...P\n.p...\n..K..\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("37 B\n.R...\n.....\n....p\n.B..P\n..K..\n.....\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("15 B\n...qr\np...p\nP.PpP\n..n..\n.Q...\nRB..K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\n.k...\np.K..\n.....\n.....\n..p.q\n.....\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("41 W\nn..r.\nk...K\nb.q..\n.....\n.....\nq.B..\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("18 B\nQ..N.\np....\n.pr..\nP.p.P\nRKb.P\nB..n.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("17 W\nkb..r\nR.q.p\n.p.P.\n.PPPn\n.PN.B\n.....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("6 B\n.qbnr\npP...\n.p.pp\nP....\n..PPP\nRNBQK\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("21 B\nB....\nP....\np...b\nPpn..\n..P..\n..R.K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("8 W\nkq.nr\np...p\n..p.b\nNpPP.\nPP.pQ\nR.B..\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("18 B\n.Q...\np.q..\nP.pp.\np.K..\n.RP..\n.NB..\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\nQ..k.\n.....\n....p\n...Q.\n..q.P\n....K\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("31 B\n.....\n.....\n.PP..\nR...B\n.Q...\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("28 B\n..b..\n.R.K.\np.p.p\nP....\n.....\n.....\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("27 B\n.r...\n.....\nP..pp\nR...P\n...P.\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("9 B\n.Q.br\n...pp\np..Pn\nq.N..\nPPP.P\nR.BK.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("30 W\n.b...\n.....\n....k\nPNp..\n....P\n.....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("13 B\nq.b.r\n.Pp.p\np..pP\nP...K\n..P.P\n.RBQ.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("12 B\n...nr\nRbppp\n.....\n..QP.\n.P..P\n..B.K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("13 B\nB...r\np..p.\n....n\n.P.P.\nP..b.\n.R..K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("26 B\n.....\n..p.p\nQ...r\n...P.\nP...P\nKn...\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("30 B\n.....\np...p\nP.Q.q\n...Q.\n.R...\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("5 W\nkqb.r\nppp..\n...pp\n..NP.\nPPPnP\nRB.Q.\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("23 B\n..qr.\n..P..\nQ...p\nN..bP\nPR...\nB...K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("21 W\n...kr\n....B\n...Nb\np..P.\nPRppP\n.....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("39 W\n.k...\n.....\n.p..R\n..q..\n....q\n.....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("32 B\n.....\n...P.\nQ.rKb\n..q.P\np....\n.....\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("38 W\n.....\nP..Q.\nB..r.\n...pP\n.p.k.\n.R...\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\n...n.\n.p.p.\n.P.kb\nPR..N\n....P\n....K\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("25 W\nkb.nr\n.....\npQ...\nP...p\nR.P.P\n.....\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\n.....\n.k...\n.qr..\n.....\n..p..\n.R...\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("14 W\n.k...\np.Prp\nR..PN\n.p.P.\n..P..\n.B.Qb\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\n.....\nkqp..\n...r.\n.p..p\n.Kn..\n.....\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("34 B\n.....\n.....\np...Q\nP....\nB....\n...K.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("12 W\nk.bnr\n.pp.p\np.Pp.\nN..PP\nPPQ..\n.R..q\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("41 W\n.....\np....\nkq...\n.....\n...K.\n.....\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("31 W\n.....\nkr..p\np...p\nq...p\nP.q..\n....R\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("30 B\n.r.Q.\n.N...\np..R.\n..P.Q\nP....\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("11 B\n..bnr\nQpPpp\n..p..\nRB.q.\n.PP..\n.N..K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("23 B\n.q...\n.Nb..\n.....\nPQp.p\nRPP.K\n..B..\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("41 W\n..Q..\n..k..\np....\nP.r..\nq...P\n.B..K\n");
	
	if (chess_winner() != '=') {
		return false;
	}
	
	chess_boardSet("28 B\n.....\np..rq\nN....\n.PB.p\n...nP\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("7 B\n..bnr\np..pp\nPp...\n..Nq.\nP..PP\nR.BQK\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("30 B\n.N...\n..P.Q\n...B.\nPp..P\n.....\n....K\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("20 B\n..r..\n.Q...\n....P\n.qPP.\nPN...\nR.BK.\n");
	
	if (chess_winner() != 'W') {
		return false;
	}
	
	chess_boardSet("19 W\nk...r\nppp..\n.P..p\nPbR.P\n..Pq.\n.Q...\n");
	
	if (chess_winner() != 'B') {
		return false;
	}
	
	chess_boardSet("21 W\n.k..r\n....Q\nPpN.P\n.....\nP.P.n\n.R...\n");
	
	if (chess_winner() != 'B') {
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
		return false;
		
	} else if (chess_isEnemy('q') != true) {
		return false;
		
	} else if (chess_isEnemy('b') != true) {
		return false;
		
	} else if (chess_isEnemy('n') != true) {
		return false;
		
	} else if (chess_isEnemy('r') != true) {
		return false;
		
	} else if (chess_isEnemy('p') != true) {
		return false;
		
	} else if (chess_isEnemy('K') != false) {
		return false;
		
	} else if (chess_isEnemy('Q') != false) {
		return false;
		
	} else if (chess_isEnemy('B') != false) {
		return false;
		
	} else if (chess_isEnemy('N') != false) {
		return false;
		
	} else if (chess_isEnemy('R') != false) {
		return false;
		
	} else if (chess_isEnemy('P') != false) {
		return false;
		
	} else if (chess_isEnemy('.') != false) {
		return false;
		
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_isEnemy('k') != false) {
		return false;
		
	} else if (chess_isEnemy('q') != false) {
		return false;
		
	} else if (chess_isEnemy('b') != false) {
		return false;
		
	} else if (chess_isEnemy('n') != false) {
		return false;
		
	} else if (chess_isEnemy('r') != false) {
		return false;
		
	} else if (chess_isEnemy('p') != false) {
		return false;
		
	} else if (chess_isEnemy('K') != true) {
		return false;
		
	} else if (chess_isEnemy('Q') != true) {
		return false;
		
	} else if (chess_isEnemy('B') != true) {
		return false;
		
	} else if (chess_isEnemy('N') != true) {
		return false;
		
	} else if (chess_isEnemy('R') != true) {
		return false;
		
	} else if (chess_isEnemy('P') != true) {
		return false;
		
	} else if (chess_isEnemy('.') != false) {
		return false;
		
	}
	
	return true;
}

bool test_isOwn() {
	chess_reset();
	
	if (chess_isOwn('k') != false) {
		return false;
		
	} else if (chess_isOwn('q') != false) {
		return false;
		
	} else if (chess_isOwn('b') != false) {
		return false;
		
	} else if (chess_isOwn('n') != false) {
		return false;
		
	} else if (chess_isOwn('r') != false) {
		return false;
		
	} else if (chess_isOwn('p') != false) {
		return false;
		
	} else if (chess_isOwn('K') != true) {
		return false;
		
	} else if (chess_isOwn('Q') != true) {
		return false;
		
	} else if (chess_isOwn('B') != true) {
		return false;
		
	} else if (chess_isOwn('N') != true) {
		return false;
		
	} else if (chess_isOwn('R') != true) {
		return false;
		
	} else if (chess_isOwn('P') != true) {
		return false;
		
	} else if (chess_isOwn('.') != false) {
		return false;
		
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_isOwn('k') != true) {
		return false;
		
	} else if (chess_isOwn('q') != true) {
		return false;
		
	} else if (chess_isOwn('b') != true) {
		return false;
		
	} else if (chess_isOwn('n') != true) {
		return false;
		
	} else if (chess_isOwn('r') != true) {
		return false;
		
	} else if (chess_isOwn('p') != true) {
		return false;
		
	} else if (chess_isOwn('K') != false) {
		return false;
		
	} else if (chess_isOwn('Q') != false) {
		return false;
		
	} else if (chess_isOwn('B') != false) {
		return false;
		
	} else if (chess_isOwn('N') != false) {
		return false;
		
	} else if (chess_isOwn('R') != false) {
		return false;
		
	} else if (chess_isOwn('P') != false) {
		return false;
		
	} else if (chess_isOwn('.') != false) {
		return false;
		
	}
	
	return true;
}

bool test_isNothing() {
	chess_reset();
	
	if (chess_isNothing('k') != false) {
		return false;
		
	} else if (chess_isNothing('q') != false) {
		return false;
		
	} else if (chess_isNothing('b') != false) {
		return false;
		
	} else if (chess_isNothing('n') != false) {
		return false;
		
	} else if (chess_isNothing('r') != false) {
		return false;
		
	} else if (chess_isNothing('p') != false) {
		return false;
		
	} else if (chess_isNothing('K') != false) {
		return false;
		
	} else if (chess_isNothing('Q') != false) {
		return false;
		
	} else if (chess_isNothing('B') != false) {
		return false;
		
	} else if (chess_isNothing('N') != false) {
		return false;
		
	} else if (chess_isNothing('R') != false) {
		return false;
		
	} else if (chess_isNothing('P') != false) {
		return false;
		
	} else if (chess_isNothing('.') != true) {
		return false;
		
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_isNothing('k') != false) {
		return false;
		
	} else if (chess_isNothing('q') != false) {
		return false;
		
	} else if (chess_isNothing('b') != false) {
		return false;
		
	} else if (chess_isNothing('n') != false) {
		return false;
		
	} else if (chess_isNothing('r') != false) {
		return false;
		
	} else if (chess_isNothing('p') != false) {
		return false;
		
	} else if (chess_isNothing('K') != false) {
		return false;
		
	} else if (chess_isNothing('Q') != false) {
		return false;
		
	} else if (chess_isNothing('B') != false) {
		return false;
		
	} else if (chess_isNothing('N') != false) {
		return false;
		
	} else if (chess_isNothing('R') != false) {
		return false;
		
	} else if (chess_isNothing('P') != false) {
		return false;
		
	} else if (chess_isNothing('.') != true) {
		return false;
		
	}
	
	return true;
}

bool test_eval() {
	chess_reset();
	
	if (chess_eval() != 0) {
		return false;
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_eval() != 0) {
		return false;
	}
	
	chess_boardSet("1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n");
	
	if (chess_eval() >= 0) {
		return false;
	}
	
	chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n");
	
	if (chess_eval() <= 0) {
		return false;
	}
	
	chess_boardSet("1 W\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_eval() <= 0) {
		return false;
	}
	
	chess_boardSet("1 B\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	if (chess_eval() >= 0) {
		return false;
	}
	
	return true;
}

bool test_movesCompare(int intMoves, char* charA, char* charB) {
	if (strlen(charA) != intMoves * 6) {
		return false;
		
	} else if (strlen(charB) != intMoves * 6) {
		return false;
		
	}
	
	int intA[128] = { };
	int intB[128] = { };
	
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
	if (test_movesCompare(intBuffer, charBuffer, "a5-a4\nb5-b4\nc5-c4\nd5-d4\ne5-e4\nb6-a4\nb6-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\n..b.r\n.k.pp\n..pP.\n.q..B\npPRQP\nn..NK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-e2\ne4-e3\ne4-d4\nc5-c4\nc5-c3\nc5-c6\nd5-d4\nd5-c4\nd5-b3\nd5-a2\nd5-c6\nd6-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\n..qn.\np...r\nkpPPb\nP....\n.P.B.\n.R.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c1-b1\nc1-a1\nc1-c2\nc1-c3\nc1-b2\nc1-d2\nd1-b2\nd1-c3\ne2-e1\ne2-d2\ne2-c2\ne2-b2\na3-a4\na3-b2\na3-b4\nb3-b4\nb3-a4\ne3-d2\ne3-d4\ne3-c5\ne3-b6\ne3-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\n.k.B.\nqp.Np\n..p.K\npb..P\nP....\nR..Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d1-c2\nd1-b3\nd1-a4\nd1-e2\nd1-c1\nd1-e1\nd2-b1\nd2-b3\nd2-c4\ne3-e2\ne3-d3\ne3-d4\na5-b4\na6-b6\na6-c6\nd6-d5\nd6-d4\nd6-d3\nd6-c6\nd6-b6\nd6-e6\nd6-c5\nd6-b4\nd6-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.k..r\n....p\npPn.p\nQ.P.b\n.P.B.\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b2\na4-a3\na4-b4\na4-a5\nb5-b4\nd5-e4\nd5-c6\nd5-d4\nd5-c5\nd5-e5\nd5-d6\na6-a5\na6-b6\na6-c6\na6-d6\ne6-e5\ne6-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkqr..\n.ppQ.\n.....\n..PB.\nPp.KP\nRN...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-d1\nd2-c2\nd2-e2\nd2-d3\nd2-c1\nd2-e1\nd2-c3\nd2-b4\nd2-e3\nc4-c3\nd4-c3\nd4-b2\nd4-e3\nd4-c5\nd4-d3\nd4-e4\na5-a4\nd5-c5\nd5-d6\nd5-e4\nd5-c6\nd5-e6\ne5-e4\nb6-a4\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\n.b..r\nk.ppp\npp.qN\nP..PP\nRPPB.\n...QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-b2\ne1-d1\ne1-c1\na2-a1\na2-b2\nc2-c3\nd2-e3\nb3-b4\nb3-a4\nd3-c3\nd3-e3\nd3-d4\nd3-c4\nd3-b5\nd3-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nkrn..\n..pbp\n.P.pP\npP.P.\nR.PQK\n.....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b2\nb3-c2\ne3-d2\na5-a4\na5-b5\na5-a6\nc5-c4\nd5-d6\nd5-c4\nd5-e4\nd5-c6\nd5-e6\ne5-e4\ne5-e6\ne5-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\nk.q.r\np...p\n..pb.\nPPP..\nRNB..\nQ..K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-b2\nc1-b1\nc1-d1\nc1-c2\nc1-b2\nc1-a3\nc1-d2\nc1-e3\ne1-d1\na2-a3\ne2-e3\nc3-b4\nd3-c2\nd3-b1\nd3-c4\nd3-e4\nd3-d2\nd3-e3\nd3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk..nr\n.p..p\npq.P.\nPP.b.\n..PQK\nR.NB.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nd1-c3\nd1-e3\ne2-e3\ne2-d3\na3-b4\nb3-c3\nb3-d3\nb3-b4\nb3-a2\nb3-c2\nb3-a4\nb3-c4\nb3-d5\nd4-c3\nd4-e3\nd4-c5\nd4-e5\nd4-c4\nd4-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\np.pQp\nbkq..\n.P...\nP..np\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-d1\nd2-c2\nd2-e2\nd2-d3\nd2-d4\nd2-d5\nd2-c1\nd2-e1\nd2-c3\nd2-e3\nb4-a3\nb4-c3\na5-a4\na6-b6\na6-c6\na6-d6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n.q.r.\npk.QP\n.....\n....b\npPP.K\nR.B..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-c2\nb1-d3\nd1-c1\nd1-e1\nd1-d2\na2-a3\nb2-c2\nb2-b3\nb2-a1\nb2-c1\nb2-a3\nb2-c3\ne4-d3\ne4-c2\ne4-d5\ne4-c6\ne4-e3\ne4-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\nknqbr\np.P..\n....P\n..N..\n.Pp.Q\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c2-b1\nc2-d1\ne3-e2\nc4-a3\nc4-b2\nc4-d2\nc4-a5\nc4-b6\nc4-d6\nb5-b4\ne5-e4\ne5-d5\ne5-c5\ne5-d4\ne5-c3\ne5-b2\ne5-a1\ne5-d6\na6-a5\na6-a4\na6-a3\na6-a2\na6-b6\na6-c6\na6-d6\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.Q.nr\nbk...\n.P.pp\nN..PP\nR.PK.\n.Q...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-d1\nb1-b2\nb1-a2\nb1-c2\nb1-d3\nb3-a2\na4-c3\na4-b2\nd4-e3\ne4-d3\na5-b5\na5-a6\nc5-c4\nd5-e5\nd5-d6\nd5-c4\nd5-c6\nd5-e6\nb6-b5\nb6-b4\nb6-a6\nb6-c6\nb6-d6\nb6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk...r\n.pq.p\npp..b\nP.p..\nR.BPn\n.Q..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\ne1-d1\ne1-c1\ne1-b1\nc2-c1\nc2-d2\nc2-c3\nc2-b1\nc2-d1\nc2-d3\nc2-e4\nb3-b4\nb3-a4\ne3-d2\ne3-c1\ne3-d4\ne3-c5\ne3-d3\ne3-e4\nc4-d5\ne5-d3\ne5-c6\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\n.k..r\n.p..p\n..ppB\nnp...\nP..QP\nR..K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-a2\nb1-c2\ne1-d1\ne1-c1\nb2-b3\nc3-c4\nd3-d4\na4-c5\na4-b6\nb4-b5\nb4-a5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\n.qbr.\n...N.\npQ..n\nk.PpB\n....P\nR..K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-b2\nb1-b3\nb1-a2\nb1-c2\nb1-d3\nb1-e4\nc1-b2\nc1-d2\nc1-c2\nd1-e1\nd1-d2\ne3-c2\ne3-c4\ne3-d5\na4-b4\na4-a5\na4-b3\na4-b5\nd4-d5\nd4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\n...r.\nk.q.p\np...P\n.p.KN\n.P.pP\n.R.B.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d3\nd4-c4\nd4-d5\nd4-c3\nd4-c5\ne4-c3\ne4-d2\ne4-c5\nb6-a6\nb6-c6\nd6-c5\nd6-b4\nd6-c6\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk..b.\n.q.Nr\np...p\nR..BP\n..PQ.\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nd1-c2\nd1-b3\nd1-a4\nd1-c1\nd1-e1\nb2-b1\nb2-a2\nb2-c2\nb2-d2\nb2-b3\nb2-b4\nb2-b5\nb2-b6\nb2-c1\nb2-c3\nb2-d4\ne2-e1\ne2-d2\ne3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\n...nN\n.....\npk..b\nqpPPP\nR....\n..B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e1-c2\ne1-d3\nc4-c3\nc4-b3\nd4-d3\nd4-e3\na5-a4\na5-b5\na5-c5\na5-d5\na5-e5\na5-a6\nc6-b5\nc6-a4\nc6-d5\nc6-c5\nc6-b6\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\nb...r\nkp.pp\np....\nnP..q\nR.P.Q\n.NKB.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b3\nb4-a3\na5-a4\na5-b5\na5-a6\nc5-c4\ne5-e4\ne5-d5\ne5-e6\ne5-d4\ne5-c3\ne5-b2\nb6-a4\nb6-d5\nb6-c4\nc6-b5\nc6-d5\nd6-d5\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\n..knr\n.p.pp\npbP..\nP.qPP\n.BP.K\nR..Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c1-b1\nc1-c2\nd1-c3\nd1-e3\nb2-c3\nd2-d3\nd2-c3\ne2-e3\nb3-a2\nb3-c2\nb3-a4\nb3-b4\nc4-c3\nc4-b4\nc4-a4\nc4-d4\nc4-c5\nc4-d3\nc4-b5\nc4-d5\nc4-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\n..r..\np.k.p\nn.p.p\np..Pb\nP....\n..R.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d3\nd4-c3\nd4-e3\nc6-c5\nc6-c4\nc6-c3\nc6-b6\nc6-a6\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.k.br\n.N..p\n.qp..\n..PpP\np..KB\nR....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-b2\nb1-a2\nb1-c2\nd1-c2\nd1-c1\nd1-d2\ne2-e3\nb3-b2\nb3-a3\nb3-b4\nb3-b5\nb3-b6\nb3-a2\nb3-c2\nb3-a4\nb3-c4\nd4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.kqnB\n.N..r\npb..p\nP.P..\nR..P.\n..q.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-b2\nb1-a2\nb1-c2\nc1-c2\nc1-c3\nc1-c4\nc1-b2\nc1-d2\nd1-b2\nd1-c3\ne2-e1\ne2-d2\ne2-c2\ne2-b2\nb3-a2\nb3-c2\nb3-a4\nb3-c4\nb3-c3\nb3-b4\ne3-e4\nc6-c5\nc6-c4\nc6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-b5\nc6-a4\nc6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\nkq...\npr.np\n.pP.N\n..p.P\nP..P.\n..RQK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-c2\nc3-b2\nc3-d2\ne3-c2\ne3-d1\ne3-c4\na5-a4\nd5-d4\nd5-c4\nc6-c5\nc6-c4\nc6-b6\nc6-a6\nd6-c5\nd6-b4\nd6-a3\nd6-e5\ne6-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\n.k.nr\np.ppp\nb....\n..P.P\npPQqK\n.B...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c3\ne4-e3\nb5-b4\nc5-d5\nc5-c6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-d6\ne5-d5\ne5-e6\ne5-d4\ne5-d6\nb6-a5\nb6-a6\nb6-c6\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n...n.\n.ppbp\nq..p.\npPkP.\nPRP.P\n.BQ.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d1-c3\nd1-e3\nb2-b3\nc2-c3\nd2-c1\nd2-e1\nd2-c3\nd2-b4\nd2-e3\ne2-e3\na3-a2\na3-a1\na3-b3\na3-c3\na3-b4\na4-b5\nc4-c3\nc4-b4\nc4-d4\nc4-c5\nc4-b3\nc4-b5\nc4-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\nk.b.r\nP.n.p\n..pKp\np..q.\nR.P.B\n.N.Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-d2\nd3-c3\nd3-e3\nd3-d4\nd3-c2\nd3-e2\nd3-c4\nd3-e4\na5-a4\na5-b5\na5-a6\nc5-c4\nc5-d4\ne5-d4\ne5-e4\ne5-d5\ne5-e6\nb6-a4\nb6-d5\nb6-c4\nd6-d5\nd6-d4\nd6-c6\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\n..r..\n.kP.p\np...K\n..p.B\nP..P.\nQ....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c1-b1\nc1-a1\nc1-d1\nc1-e1\nc1-c2\nb2-b1\nb2-a2\nb2-c2\nb2-b3\nb2-a1\nb2-c3\na3-a4\nc4-c5\nc4-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\n....r\nkp..p\n.....\n..B..\nP.P.K\nNRqQ.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-b3\nc4-a2\nc4-d3\nc4-e2\nc4-b5\nc4-d5\nc4-e6\nc4-c3\nc4-b4\nc4-d4\na5-a4\ne5-e4\ne5-d5\ne5-e6\ne5-d4\na6-b4\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-c6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nd6-d1\nd6-c6\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nkqb..\n.....\np.NPp\n.p..P\nBPrPQ\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-a2\nc3-b1\nc3-e2\nc3-d1\nc3-a4\nd3-d2\na5-b4\na5-b6\na5-a4\nd5-d4\ne5-d4\ne5-d6\na6-b6\na6-c6\na6-d6\ne6-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n..b..\nk.p..\nppNp.\nP.K.r\n.Bq..\nRQ...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-a2\nc3-b1\nc3-e2\nc3-d1\nc3-e4\nc3-d5\na4-b3\nc4-b4\nc4-d4\nc4-c5\nc4-b3\nc4-d3\nc4-d5\nb5-c6\nb5-b4\nb5-a5\na6-a5\nb6-c6\nb6-d6\nb6-e6\nb6-a5\nb6-c5\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\n..b..\nk..rp\n..p.P\n.nPq.\nPPQ..\n.RB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e3-d2\na5-a4\na5-b4\nc5-d5\nc5-e5\nc5-b4\nc5-d4\nc5-d6\nb6-a6\nc6-d5\nc6-e4\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\nknqr.\np..Pb\n....P\np.p.Q\nP.P..\nR..BK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-c1\ne4-d4\ne4-c4\ne4-e5\ne4-d3\ne4-c2\ne4-b1\ne4-d5\ne4-c6\na6-b6\na6-c6\nd6-e5\nd6-d5\nd6-c6\ne6-e5\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nk..n.\nr....\nppP.p\nPRbK.\n.....\n..B.Q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-c2\na4-b3\nb4-b3\nb4-c4\nb4-b5\nb4-b6\nd4-d3\nd4-c4\nd4-e4\nd4-d5\nd4-e3\nd4-c5\nd4-e5\nc6-b5\nc6-d5\nc6-e4\nc6-c5\nc6-b6\nc6-d6\ne6-e5\ne6-e4\ne6-e3\ne6-d6\ne6-d5\ne6-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\nk.Nr.\n.n..p\npQpp.\np..q.\n.R...\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nd1-c1\nd1-e1\nd1-d2\nb2-c4\ne2-e3\nc3-c4\na4-a5\na4-b5\nd4-c4\nd4-b4\nd4-e4\nd4-d5\nd4-d6\nd4-e3\nd4-c5\nd4-b6\nd4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n...nr\nkqP.p\np.b..\nPP.PP\n..R..\n.NBK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d1-e3\na2-a1\na2-b1\na2-b3\nb2-b1\nb2-c2\nb2-b3\nb2-b4\nb2-a1\nb2-c1\ne2-e3\na3-b4\nc3-d2\nc3-b4\nc3-d4\nc3-b3\nc3-d3\nc3-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.B..r\nqp...\nPk...\n...pQ\nP.P.P\nRN.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e1-d1\ne1-c1\ne1-b1\ne1-e2\ne1-e3\ne1-e4\na2-a1\na2-a3\na2-b1\nb2-a3\nb3-a3\nb3-c3\nb3-b4\nb3-c2\nb3-a4\nb3-c4\nd4-d5\nd4-c5\nd4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\n.k..r\np..pN\n.....\nB..Pp\n.P...\nRn..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-b2\nb1-c2\ne1-d1\ne1-c1\ne1-e2\na2-a3\nd2-d3\ne4-e5\nb6-a4\nb6-d5\nb6-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk.nr.\n.pbp.\n..Qp.\n..p..\nP..KP\nR....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nc1-a2\nc1-b3\nc1-e2\nd1-e1\nb2-b3\nb2-c3\nc2-b1\nc2-b3\nc2-a4\nd2-c3\nd3-d4\nc4-c5\nc4-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk.r..\np...p\np...P\nP...P\nRqK..\n.Q...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-b5\na5-a6\nc5-c4\nc5-b5\nc5-d5\nc5-c6\nc5-b4\nc5-d4\nc5-d6\nb6-b5\nb6-a6\nb6-c6\nb6-d6\nb6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk..nr\np....\n..ppb\nB...K\nP.P..\nRQ...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-b2\nd1-b2\ne1-e2\na2-a3\nc3-c4\nd3-d4\nd3-e4\ne3-d2\ne3-c1\ne3-d4\ne3-c5\ne3-e2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\n...r.\nk.pB.\nP...P\nR..q.\n.n..P\n.N..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-c1\nd2-e1\nd2-c3\nd2-b4\nd2-a5\nd2-e2\nd2-d3\ne3-e2\na4-b4\na4-c4\na4-d4\na4-a5\na4-a6\ne5-e4\ne5-d4\nb6-d5\nb6-c4\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk.q.r\n.p..n\np.p..\nPPPP.\n...PK\nRBQ..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nc1-b1\nc1-d1\nc1-c2\nc1-d2\nc1-e3\ne1-d1\nb2-b3\ne2-d4\na3-b4\nc3-b4\nc3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\nk..n.\npb.pr\n.qN.P\n.P...\nPP.KP\nR.B.Q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\nd1-c3\nd1-e3\na2-a3\nb2-c1\nb2-a3\nb2-c3\nb2-b1\nb2-c2\nd2-d3\nd2-c3\nd2-e3\ne2-e1\ne2-e3\nb3-a3\nb3-c3\nb3-b4\nb3-c2\nb3-a4\nb3-c4\nb3-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\n.k.bQ\n.nP..\nppN.p\n.P..B\nP.P.P\n.R..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-a2\nb1-c2\nd1-c2\nd1-e2\nd1-c1\nd1-d2\nb2-a4\nb2-d3\nb2-c4\na3-a4\na3-b4\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\n.qb..\nk.Kpr\n.Pn.p\np.Q.P\nP..P.\nRN..B\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c2-c1\nc2-b2\nc2-d2\nc2-c3\nc2-b1\nc2-d1\nc2-d3\nb3-b2\nb3-a2\nc4-c3\nc4-b4\nc4-a4\nc4-d4\nc4-c5\nc4-c6\nc4-d3\nc4-e2\nc4-b5\nd5-d4\nb6-a4\ne6-e5\ne6-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\n..br.\n.kppp\npq.N.\n..PKP\nPP.P.\nRB...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-b2\nd3-c1\nd3-e1\nd3-b4\nd3-c5\nd3-e5\nc4-c3\nc4-b3\nd4-c3\nd4-e3\nd4-c5\nd4-e5\ne4-e3\na5-a4\nb5-b4\nb6-c5\nb6-c6\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk..Nr\nq...p\npp.b.\nP.P..\n..K.P\nq....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-b2\ne1-d1\na2-b2\na2-c2\na2-d2\na2-b1\ne2-e3\nb3-b4\nb3-a4\nb3-c4\nd3-c2\nd3-b1\nd3-c4\nd3-e4\nd3-d2\nd3-c3\nd3-e3\nd3-d4\na6-a5\na6-a4\na6-b6\na6-c6\na6-d6\na6-e6\na6-b5\na6-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk.bnr\n.pqp.\n..p.p\npPP..\nP.B.K\nRNQ..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b3\nb4-c3\nc5-d4\nc5-e3\nc5-d6\nc5-b5\nc5-d5\ne5-e4\ne5-d5\ne5-e6\ne5-d4\ne5-d6\nb6-a4\nb6-d5\nc6-d6\nc6-e6\nc6-b5\nc6-a4\nc6-d5\nc6-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\nk....\n...p.\nN..r.\n.P.Pb\n...B.\n.n.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-c2\na3-b1\na3-c4\na3-b5\nb4-b3\nd5-c4\nd5-b3\nd5-a2\nd5-e4\nd5-c6\nd5-c5\nd5-e5\nd6-c6\nd6-b6\nd6-c5\nd6-e5\ne6-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nq.r..\np..Pp\n.p.P.\n..P.K\n..P..\nkRBQ.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-d1\nd2-c1\nd3-e2\nc4-c3\nc4-b3\ne4-e3\ne4-d4\ne4-e5\ne4-d5\nb6-b5\nb6-b4\nb6-b3\nb6-a6\nc6-b5\nc6-a4\nc6-d5\nd6-d5\nd6-d4\nd6-e6\nd6-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.k..r\npN.P.\nn....\n...q.\nPPp.Q\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b2-d1\nb2-a4\nb2-d3\nb2-c4\nd2-d1\nd2-e1\na5-a4\nb5-b4\ne5-e4\ne5-e3\ne5-e2\ne5-e1\ne5-d5\ne5-c5\ne5-d4\ne5-d6\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\nkb.nr\nP....\n.....\n...pN\nqP.K.\n.RqB.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-b1\ne4-c3\ne4-d2\ne4-c5\nb5-b4\nd5-d4\nd5-c5\nd5-e5\nd5-c4\nd5-c6\nd5-e6\nb6-a6\nb6-c6\nd6-c5\nd6-b4\nd6-a3\nd6-e5\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.k.nr\np.q..\n.R.Bp\np.p..\n..PPP\n.NQK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-b2\nd1-b2\nd1-c3\ne1-e2\na2-a3\na2-b3\nc2-c1\nc2-b2\nc2-d2\nc2-e2\nc2-c3\nc2-b3\nc2-d3\ne3-e4\na4-a5\nc4-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\n...N.\n.r.bp\n..P..\nk...p\n.PP..\nRBQ.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b2-b1\nb2-a2\nb2-c2\nb2-b3\nb2-b4\nb2-b5\nd2-c1\nd2-e1\nd2-c3\nd2-e3\nd2-c2\nd2-d3\ne2-e3\na4-a3\na4-b4\na4-a5\na4-b3\na4-b5\ne4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\nkqr..\npp.P.\n.npPp\nPPB.K\n.Q...\n.....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-c2\nb1-d3\nc1-d1\nc1-e1\nc1-c2\na2-a3\nb3-d2\nb3-a5\nb3-d4\nb3-c5\nc3-b4\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\n...r.\npk.bp\n...Q.\np.PpP\nP...P\nR.Q.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-d2\nd3-c3\nd3-b3\nd3-a3\nd3-e3\nd3-d4\nd3-c2\nd3-b1\nd3-e2\nc4-c3\ne4-e3\ne5-d4\na6-b6\nc6-c5\nc6-b6\nc6-d6\nc6-b5\nc6-a4\nc6-d5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("21 W\n.....\n...rb\n.Ppp.\n.Q...\n..P..\nkB..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b2\nb4-a4\nb4-c4\nb4-d4\nb4-e4\nb4-b5\nb4-a3\nb4-c3\nb4-a5\nc5-c4\nb6-a5\nb6-b5\nb6-c6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nq..nr\n..kp.\n.p...\n.P...\nP..BK\n.....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a4\nd5-c4\nd5-b3\nd5-e4\nd5-c6\nd5-e6\nd5-d4\nd5-c5\nd5-d6\ne5-e4\ne5-e6\ne5-d4\ne5-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n...nr\npb.p.\nPp.Bp\n.P...\nR..kK\n.N.Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-b2\nd3-c2\nd3-b1\nd3-e2\nd3-c4\nd3-b5\nd3-a6\nd3-e4\nd3-c3\nd3-d4\na5-a4\na5-b5\na5-c5\na5-d5\na5-a6\ne5-e4\ne5-d5\ne5-e6\ne5-d4\nb6-a4\nb6-d5\nb6-c4\nd6-d5\nd6-c6\nd6-e6\nd6-c5\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\n...n.\n.....\npkp..\n.qN.K\nq.Q..\n...B.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-a3\nc4-b2\nc4-e3\nc4-d2\nc4-a5\nc4-b6\nc4-e5\ne4-e3\ne4-d4\ne4-e5\ne4-d3\ne4-d5\nc5-b5\nc5-a5\nc5-d5\nc5-e5\nc5-c6\nc5-b4\nc5-d4\nc5-e3\nc5-b6\nd6-e5\nd6-d5\nd6-c6\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\nk.br.\np..Pq\n..P.n\n..p..\nP.PQK\n.RB..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-c1\nc3-c2\na5-a4\nd5-d4\nd5-d3\nd5-d6\nd5-c4\nd5-e4\nd5-e6\ne5-e4\ne5-e6\ne5-d4\ne5-d6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-b1\nb6-a6\nc6-b5\nc6-a4\nc6-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nbq..r\nk...p\np.p..\nP.P..\npPQ.P\n.B..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-b4\nc5-d5\nc5-c6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-d6\ne5-e4\nb6-a5\nb6-a6\nb6-c6\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("21 W\n..knr\np.P.p\n....Q\nP.b..\n..PP.\n...qK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c2-d1\ne3-e2\ne3-d3\ne3-c3\ne3-b3\ne3-a3\ne3-e4\ne3-e5\ne3-d2\ne3-c1\ne3-d4\na4-a3\nd5-d4\nd5-c4\ne6-e5\ne6-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n.bknr\np..pp\np.P..\nP.P.P\n..qP.\n..RBK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-c2\nb1-d3\nb1-e4\nb1-a1\nb1-b2\nc1-c2\nc1-b2\nd1-b2\nd1-c3\nd1-e3\nd2-d3\nd2-c3\ne2-e3\nc5-c4\nc5-b5\nc5-a5\nc5-d5\nc5-c6\nc5-b4\nc5-d4\nc5-e3\nc5-b6\nc5-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nkq...\np.b.p\n.p.K.\nq.p..\nP.PQ.\n....R\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b2\nb1-c1\nb1-d1\nb1-e1\nb1-b2\na2-a3\nc2-d1\nc2-d3\nc2-c1\nc2-b2\nc2-d2\nc2-c3\ne2-e3\ne2-d3\nb3-b4\na4-a3\na4-b4\na4-a5\na4-b5\na4-c6\nc4-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nkq...\n.pp.p\np.P..\nP.bP.\n.R..K\n..Q..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c3-b2\nd4-d3\nb5-b4\nb5-b3\nb5-b2\nb5-a5\nb5-c5\nb5-d5\nb5-b6\ne5-e4\ne5-d5\ne5-e6\ne5-d6\nc6-c5\nc6-c4\nc6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-d5\nc6-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\nq..b.\nkp...\np...r\nP....\nR.pP.\n..NnK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-c1\nd1-c2\nd1-b3\nd1-a4\nd1-e2\nd1-c1\nd1-e1\nd1-d2\na2-b1\na2-b3\nb2-b3\ne3-e2\ne3-e1\ne3-d3\ne3-c3\ne3-b3\ne3-e4\ne3-e5\ne3-e6\nd6-b5\nd6-c4\nd6-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\nk..br\n...p.\npppq.\n.P.p.\nP.PPP\nRNQ.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\na1-b2\nd1-c2\nd1-e2\nd1-c1\ne1-e2\ne1-e3\ne1-e4\ne1-e5\na3-a4\na3-b4\nc3-c4\nc3-b4\nd3-e3\nd3-c2\nd3-b1\nd3-e2\nd3-c4\nd3-b5\nd3-a6\nd3-e4\nd4-c5\nd4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\n....r\n..pPb\npkBR.\nq...n\nP...P\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e1-d1\ne1-c1\ne1-b1\ne1-a1\nc2-d3\ne2-d1\ne2-d3\ne2-e3\nb3-b2\nb3-c3\nb3-b4\nb3-a2\nb3-c4\na4-b4\na4-c4\na4-d4\na4-a5\na4-b5\na4-c6\ne4-c3\ne4-d2\ne4-c5\ne4-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\n...br\nkp.Pp\nN....\nPPq.P\nR....\nB..QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-e1\na3-c2\na3-b1\na3-c4\na3-b5\nb4-b3\ne4-e3\na5-b5\na5-c5\na5-d5\na5-e5\na6-b5\na6-c4\na6-b6\nd6-d5\nd6-d4\nd6-d3\nd6-c6\nd6-b6\nd6-c5\nd6-e5\ne6-e5\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nk...r\nRp...\n..Bbp\n.p...\n..NpP\n...QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-a1\na2-b2\na2-a3\na2-a4\na2-a5\na2-a6\nc3-b2\nc3-d2\nc3-e1\nc3-b4\nc3-d4\nc3-c2\nc3-b3\nc3-c4\nc5-a4\nc5-b3\nc5-e4\nc5-d3\nc5-a6\ne5-e4\nd6-d5\nd6-c6\nd6-b6\nd6-a6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nkq.r.\np...p\nbp...\n.nPp.\n..KBP\n.N...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b2\nb1-c1\nb1-b2\nb1-c2\nb1-d3\nb1-e4\nd1-c1\nd1-e1\nd1-d2\nd1-d3\ne2-e3\na3-b2\na3-c1\na3-a4\nb3-c4\nb4-d3\nb4-c2\nb4-a6\nb4-d5\nb4-c6\nd4-c5\nd4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\nQ..nr\nq..Pp\n.kp..\nPP...\nR..PP\n.N..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d1-b2\nd1-e3\na2-a1\na2-b2\na2-c2\na2-d2\na2-a3\na2-a4\na2-b1\ne2-e3\nb3-b2\nb3-a3\nb3-b4\nb3-c2\nb3-a4\nb3-c4\nc3-c4\nc3-b4\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\n...r.\n.k.pp\n.bp..\n..PQP\n...n.\nR.B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-b3\nd4-d3\nd4-d2\nd4-d5\nd4-c3\nd4-e3\nd4-c5\nd4-b6\nd4-e5\ne4-e3\na6-a5\na6-a4\na6-a3\na6-a2\na6-a1\na6-b6\nc6-b5\nc6-a4\nc6-d5\nc6-c5\nc6-b6\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk...r\n.pqbp\np....\nP.P.p\n..K..\nRN.n.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\ne1-d1\ne1-c1\ne1-b1\nb2-b3\nc2-c1\nc2-c3\nc2-c4\nc2-b1\nc2-d1\nc2-b3\nc2-a4\nc2-d3\nd2-c1\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-d1\nd2-d3\ne2-e3\ne4-e5\nd6-b5\nd6-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\n..kr.\nNp...\n..Kpn\n.....\nP.P..\n.q...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c1-b1\nc1-c2\nc1-d2\nd1-e1\nd1-d2\nb2-b3\nb2-c3\nd3-d4\ne3-c2\ne3-c4\ne3-d5\nb6-b5\nb6-b4\nb6-b3\nb6-a6\nb6-c6\nb6-d6\nb6-e6\nb6-a5\nb6-c5\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.....\n.kqpr\nRPn.p\nN.P.P\n.B..K\n.....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b2-b1\nb2-a2\nb2-b3\nb2-a1\nb2-c1\nb2-a3\nc2-c1\nc2-b1\nc2-d1\nc2-b3\nc2-d3\nc2-e4\nd2-d3\ne2-e1\nc3-a2\nc3-b1\nc3-d1\nc3-a4\nc3-b5\nc3-e4\nc3-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.k.nr\npq.p.\n.Bb.p\n.P.PP\n.R...\n.N.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-c2\ne1-e2\na2-a3\na2-b3\nb2-c2\nb2-b3\nb2-a1\nb2-c1\nb2-a3\nd2-d3\nc3-b4\nc3-d4\nc3-c2\nc3-d3\nc3-c4\ne3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\n..b..\nP...B\n..kq.\n....r\nP.PNP\nR..QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-a1\ne2-d1\ne2-d3\ne2-e1\ne2-d2\ne2-e3\na5-a4\nc5-c4\nd5-b4\nd5-c3\nd5-e3\nd5-b6\na6-b6\na6-c6\nd6-c6\nd6-b6\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nkq.r.\npNp..\np.b.p\n..PpP\n..PP.\nRB.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b2\nb1-c1\nb1-b2\nd1-c1\nd1-e1\nd1-d2\nd1-d3\na3-a4\nc3-b2\nc3-d2\nc3-e1\nc3-b4\nc3-a5\nc3-b3\nc3-d3\nd4-c5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.r...\nkp.bp\nRP.qn\n.....\n.QPP.\n.q..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-a2\na3-a4\na3-a5\na3-a6\nb3-a2\nb5-b4\nb5-a5\nb5-b6\nb5-a4\nb5-c4\nb5-d3\nb5-a6\nb5-c6\nc5-c4\nd5-d4\ne6-e5\ne6-d6\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.kb..\n.pp..\n.q.Pr\nB.PQ.\nPn..K\nRN...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-d2\nd3-c2\na4-b3\na4-b5\na4-a3\na4-b4\nc4-c3\nc4-b3\nd4-e4\nd4-d5\nd4-d6\nd4-c3\nd4-b2\nd4-e3\nd4-c5\ne5-e4\ne5-d5\ne5-e6\ne5-d6\nb6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\nk.b.r\n.npp.\n..R..\n.PPPB\n....Q\n...K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nc1-b1\nc1-d1\ne1-d1\ne1-e2\ne1-e3\ne1-e4\nb2-d1\nb2-a4\nb2-d3\nb2-c4\nd2-d3\nd2-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\nq..nr\n.p...\npPk.p\n.P.P.\n..P.P\nRB.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a3\nb4-c3\nd4-d3\nd4-c3\nd4-e3\nc5-c4\ne5-e4\na6-a5\na6-a4\na6-a3\nb6-a5\nb6-b5\nb6-c6\nd6-d5\nd6-c6\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n..b.r\n.kq.p\np.n..\npPPK.\n...P.\nRNB.Q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c1-d2\nc1-e3\nc1-b1\nc1-d1\ne1-d1\nb2-b1\nb2-a2\nb2-b3\nb2-a1\nc2-d2\nc2-b1\nc2-d1\nc2-b3\nc2-d3\nc2-e4\ne2-e3\na3-b4\nc3-a2\nc3-b1\nc3-d1\nc3-b5\nc3-e4\nc3-d5\na4-a5\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.Qqr.\nk.p..\nQ....\nP.p.p\n...KP\nR....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-b6\nb1-a2\nb1-c2\na3-a2\na3-b3\na3-c3\na3-d3\na3-e3\na3-b2\na3-c1\na3-b4\na3-c5\na3-d6\nd5-d4\nd5-c5\nd5-d6\nd5-c4\nd5-e4\nd5-c6\nd5-e6\na6-a5\na6-b6\na6-c6\na6-d6\na6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\n...b.\nk.pp.\n..Rr.\np..PP\n.BP..\n..K..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d1-e2\nd1-c1\nd1-e1\na2-a1\na2-b2\na2-a3\na2-b1\na2-b3\nd2-c3\nd3-c3\nd3-e3\nd3-d4\na4-a5\na4-b5\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk....\npp..p\n..Q..\n.bpP.\nPP..P\nRNQK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na2-a3\nb2-b3\nb2-c3\ne2-e3\nb4-a3\nb4-c3\nb4-a5\nb4-c5\nb4-d6\nb4-b3\nb4-a4\nc4-c5\nc4-b5\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk.bnr\n.q..p\nR.pBP\n.P.P.\n..P.K\n.N.Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\nc1-d2\nc1-e3\nc1-b1\nc1-c2\nd1-e3\nb2-b1\nb2-a2\nb2-c2\nb2-d2\nb2-b3\nb2-b4\nb2-a3\ne2-d3\nc3-c4\nc3-b4\nc3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\n....r\npq.p.\nk.p..\nb.P.P\nP...K\nRQ...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e1-d1\ne1-c1\ne1-b1\ne1-a1\ne1-e2\ne1-e3\ne1-e4\nb2-b1\nb2-c2\nb2-b3\nb2-b4\nb2-b5\nb2-b6\nb2-a1\nb2-c1\nd2-d3\na3-b3\na3-b4\na4-b3\na4-c2\na4-d1\na4-b5\na4-c6\na4-b4\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\n....r\nk.b.p\nppp.q\nPP..B\n.QpKP\n....R\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e1-d1\ne1-c1\ne1-b1\ne1-a1\na2-a1\na2-b2\na2-b1\nc2-b1\nc2-d1\nc2-d3\nc2-e4\nc2-c1\nc2-b2\nc2-d2\na3-b4\nb3-a4\nc3-c4\nc3-b4\ne3-d3\ne3-e4\ne3-d2\ne3-c1\ne3-d4\nc5-c6\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk..n.\n...r.\np.Bp.\n.Pp..\nP.p.P\nR.Q.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-a2\na1-b2\nd1-b2\nd1-c3\nd1-e3\nd2-c2\nd2-b2\nd2-a2\nd2-e2\na3-a4\na3-b4\nd3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n.q.n.\np.pp.\nPpk..\n..P.P\nPN...\nRQ..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b1-a1\nb1-c1\nb1-b2\nd1-b2\nd1-e3\nd2-d3\nb3-b4\nb3-c4\nc3-d3\nc3-c4\nc3-b2\nc3-b4\nc3-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\n...br\npk.pp\n.P.q.\n.P.P.\n..QKn\nR..B.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-a2\nc5-c4\nc5-c3\nc5-c2\nc5-c1\nc5-b5\nc5-a5\nc5-c6\nc5-b6\nd5-e5\nd5-c4\nd5-e4\nd5-c6\nd5-e6\na6-a5\na6-a4\na6-a3\na6-a2\na6-b6\na6-c6\nd6-e5\nd6-c6\nd6-e6\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nkq.nr\n..ppP\nppN..\n.P..P\nQ....\nb..BK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-a2\na1-b2\nb1-c1\nb1-b2\nb1-a2\nd1-b2\nd1-c3\nd1-e3\ne1-e2\nd2-d3\nd2-c3\na3-a4\na3-b4\na6-b5\na6-c4\na6-d3\na6-e2\na6-b6\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\n.q..r\n.k..b\np....\nB..pP\nRn...\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-b3\na4-c2\na4-d1\na4-b5\na4-b4\ne4-e3\na5-b5\na5-a6\ne6-e5\ne6-d6\ne6-d5\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\nk...b\np.p.p\n..p..\nP.N..\nR.pPQ\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a1-b1\na1-b2\ne1-d2\ne1-d1\na2-a3\ne2-e3\nc5-c6\n") != true) {
		return false;
	}
	
	return true;
}

bool test_move() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_move("b5-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 B\nkqbnr\nppppp\n.....\n.P...\nP.PPP\nRNBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n.....\nPk...\n...R.\nNbPrp\nBQ.nP\n....K\n");
	chess_move("a5-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n.....\nPk...\n...R.\nNbPrp\n.Q.nP\n.B..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkq..r\n.Nb..\np.ppp\n..PP.\nP..KP\nR....\n");
	chess_move("a1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.q..r\n.kb..\np.ppp\n..PP.\nP..KP\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk....\nq.b.p\nppP.P\nBP.r.\nP.p.P\n.RK..\n");
	chess_move("a4-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk....\nq.b.p\npBP.P\n.P.r.\nP.p.P\n.RK..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nk...Q\n.p...\nbp..P\n.B.K.\nP....\nRn...\n");
	chess_move("a1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.k..Q\n.p...\nbp..P\n.B.K.\nP....\nRn...\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nkr..b\n.p...\np.ppq\nPPK..\n..P.n\n..R..\n");
	chess_move("e5-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nkr..b\n.p...\np.ppq\nPPK..\n..P..\n..n..\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.k..r\n.p.qP\n.PN..\n.p.Pp\nPBp.P\n..R.K\n");
	chess_move("c3-d1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.k.Nr\n.p.qP\n.P...\n.p.Pp\nPBp.P\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nqk.rQ\n..pp.\np.b..\n...Qn\nPPPB.\nR..K.\n");
	chess_move("b1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nq..rQ\n.kpp.\np.b..\n...Qn\nPPPB.\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.b..r\np.ppp\n.p..B\nk.P..\nPP.PP\nn..QK\n");
	chess_move("e3-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.b..r\np.ppp\n.p...\nk.P..\nPPBPP\nn..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nB...k\np.P.p\n....P\nb...K\n.....\n..RQ.\n");
	chess_move("a4-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nB...k\np.P.p\n.b..P\n....K\n.....\n..RQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n.kbQ.\n.....\n.....\nq.N.r\n...Pp\n.R..K\n");
	chess_move("c4-d2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n.kbQ.\n...N.\n.....\nq...r\n...Pp\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n.k.r.\nB.bp.\np.p.p\nP....\n..Pqn\nRN..K\n");
	chess_move("c2-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.k.r.\nB..p.\np.p.p\nP...b\n..Pqn\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n..b..\npqppr\nPB.k.\n...Qn\n..P.p\nR...K\n");
	chess_move("c5-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n..b..\npqppr\nPB.k.\n..PQn\n....p\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n....b\n.....\nkpp..\nPPNP.\n...Q.\nRB..K\n");
	chess_move("b4-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n....b\n.....\nPpp..\nP.NP.\n...Q.\nRB..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk...r\nB.q..\npp..p\n....P\nPbP..\nR..K.\n");
	chess_move("a6-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk...r\nB.q..\npp..p\n....P\nPbP..\n..RK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n...Qr\npk.pp\n.....\nb....\n.PP.P\n..RQK\n");
	chess_move("b2-a1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk..Qr\np..pp\n.....\nb....\n.PP.P\n..RQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nq..nr\nkp...\n...pp\nb..K.\n..P.P\nR..Q.\n");
	chess_move("a6-a5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nq..nr\nkp...\n...pp\nb..K.\nR.P.P\n...Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\nkp..q\n.PN.p\nP...b\n.K..p\nR...Q\n");
	chess_move("a6-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n....r\nkp..q\n.PN.p\nP...b\n.K..p\n..R.Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk.q..\np.b.r\nP.pP.\n.....\n.pBK.\nR....\n");
	chess_move("c2-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk.q..\np...r\nPbpP.\n.....\n.pBK.\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nq.b..\nk..pr\nP.pn.\nP.p.p\n..QBP\n.NR.K\n");
	chess_move("a1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.qb..\nk..pr\nP.pn.\nP.p.p\n..QBP\n.NR.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n.....\nq.kbr\npP.pn\nP.pQP\n.BP..\nR...K\n");
	chess_move("d4-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.....\nq.kbr\npPQpn\nP.p.P\n.BP..\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk..br\n.N.pp\nn....\nP...q\n.Q.KP\n...R.\n");
	chess_move("b5-d3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk..br\n.N.pp\nn..Q.\nP...q\n...KP\n...R.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n..qbr\nkppNB\n....p\n....P\nP.pP.\n.R.KQ\n");
	chess_move("b6-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n..qbr\nkppNB\n....p\n....P\nPRpP.\n...KQ\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkq...\np..p.\nbpp..\n.PnPr\nB...P\n.R.QK\n");
	chess_move("a5-a6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkq...\np..p.\nbpp..\n.PnPr\n....P\nBR.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n..b..\npkprB\nP.pPp\n....p\n..P..\n.R.QK\n");
	chess_move("c1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.b...\npkprB\nP.pPp\n....p\n..P..\n.R.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nkb..q\n...rp\nPp.pn\n.pPPQ\n..R.P\n....K\n");
	chess_move("c4-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nkb..q\n...rp\nPP.pn\n.p.PQ\n..R.P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n.Q...\np...Q\n..n.r\n..pP.\nPkPKP\nR....\n");
	chess_move("e2-e1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n.Q..Q\np....\n..n.r\n..pP.\nPkPKP\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkqB.r\npp.bp\nP..p.\n.....\n.RPPP\n..Q.K\n");
	chess_move("e2-e3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkqB.r\npp.b.\nP..pp\n.....\n.RPPP\n..Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkq.br\nppp.p\n..n..\n..PPp\n....Q\n..R.K\n");
	chess_move("e5-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkq.br\nppp.p\n..n..\n..PPp\n.Q...\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n.k.nr\npp.pp\n..P..\nN.p.P\nP.qB.\nQ.R.K\n");
	chess_move("b1-c1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..knr\npp.pp\n..P..\nN.p.P\nP.qB.\nQ.R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n.k..r\n.n..p\n..Pp.\nQ...B\nPP.N.\nRb..K\n");
	chess_move("b5-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.k..r\n.n..p\n..Pp.\nQP..B\nP..N.\nRb..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.k.N.\n...P.\n..bP.\n.p..r\nPP...\nR.B.K\n");
	chess_move("b1-a2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...N.\nk..P.\n..bP.\n.p..r\nPP...\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n...nr\n.p..p\n...P.\nPPkbp\n.RB..\nqNK.Q\n");
	chess_move("a6-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...nr\n.p..p\n...P.\nPPkbp\n.qB..\n.NK.Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.b..r\np.ppp\n.k..K\n..nP.\n.R.P.\nB.Q..\n");
	chess_move("a6-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.b..r\np.ppp\n.k..K\n..nP.\n.R.P.\n.BQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..qr.\nkbp..\n..pp.\n..PpP\nP...K\nRBQ..\n");
	chess_move("b6-d4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..qr.\nkbp..\n..pp.\n..PBP\nP...K\nR.Q..\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n.k..r\n.pp.Q\nPqN..\n..PBP\n...nK\n.....\n");
	chess_move("b3-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.k..r\n.pp.Q\nP.N..\n..PBP\n.q.nK\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk.br.\npRn.p\nP.pN.\n....P\n..PPK\n..BQ.\n");
	chess_move("c2-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk.br.\npR..p\nP.pN.\n.n..P\n..PPK\n..BQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.b.\n.p.Rr\n....n\nN.PqB\nP...P\n....K\n");
	chess_move("e4-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.k.b.\n.p.Rr\n....n\nN.Pq.\nP...P\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.k..r\n.p...\np.n.p\nbqPpP\nPQBKN\n.....\n");
	chess_move("b1-a1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk...r\n.p...\np.n.p\nbqPpP\nPQBKN\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk....\nq....\n.bP.r\np.B.p\nP....\nRN..K\n");
	chess_move("e3-e1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk...r\nq....\n.bP..\np.B.p\nP....\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk..nr\np..p.\n.q.pP\n..pB.\nP..p.\nR.b.K\n");
	chess_move("b3-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkq.nr\np..p.\n...pP\n..pB.\nP..p.\nR.b.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk..nr\n....p\n..pp.\nbQ...\nP..PP\n...BK\n");
	chess_move("a1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n...nr\n.k..p\n..pp.\nbQ...\nP..PP\n...BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nk.b.r\n....q\n..pP.\nBP.Qn\n...P.\nRq..K\n");
	chess_move("e6-e5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk.b.r\n....q\n..pP.\nBP.Qn\n...PK\nRq...\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nkb...\n.pp.r\np....\nP...N\nB..P.\nR.Q.K\n");
	chess_move("b1-a2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk....\nbpp.r\np....\nP...N\nB..P.\nR.Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkq...\n..r.p\nbPn..\npNPpP\nP..P.\n.RBQK\n");
	chess_move("b6-a6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq...\n..r.p\nbPn..\npNPpP\nP..P.\nR.BQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk.q..\n..pBp\nPQ.r.\n...b.\nP.R.P\n...K.\n");
	chess_move("b3-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nkQq..\n..pBp\nP..r.\n...b.\nP.R.P\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.....\nqkpB.\n.p.pr\npP.P.\nPnP..\nR...K\n");
	chess_move("b2-a1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk....\nq.pB.\n.p.pr\npP.P.\nPnP..\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk.br.\nn.ppp\nP....\n.....\n..PKP\nR..q.\n");
	chess_move("a1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.kbr.\nn.ppp\nP....\n.....\n..PKP\nR..q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n...kr\np.b.p\nq....\nP.pP.\n.QpN.\nR.BK.\n");
	chess_move("b5-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n...kr\np.b.p\nq....\nP.pP.\n..pN.\nRQBK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n...n.\nkrq.b\nP..Pp\nP..QP\n..P.B\n..R.K\n");
	chess_move("a3-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n...n.\nkPq.b\n...Pp\nP..QP\n..P.B\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nqk.nr\n.p..p\n.Ppp.\nN....\nR.PPP\n..Q.K\n");
	chess_move("a1-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.k.nr\n.p..p\nqPpp.\nN....\nR.PPP\n..Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n...qr\nB....\n.kQ.b\n.....\nPp..P\nR..K.\n");
	chess_move("d1-c2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n....r\nB.q..\n.kQ.b\n.....\nPp..P\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..bnr\n.k.pp\np.pQ.\nP....\n.PPN.\nR.BK.\n");
	chess_move("c6-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..bnr\n.k.pp\np.pQ.\nP....\n.PPN.\nRB.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n...r.\nkb.pp\np.p..\nQPnBq\nP..P.\n.R..K\n");
	chess_move("d5-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n...r.\nkb.pp\np.p..\nQPnBP\nP....\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n..r..\npbn.p\nQkPK.\n..P..\nP..P.\nRB...\n");
	chess_move("c2-e3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n..r..\npb..p\nQkPKn\n..P..\nP..P.\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nk..r.\n..P..\nppN.p\n....B\nPqP.P\nR...K\n");
	chess_move("a1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...r.\n.kP..\nppN.p\n....B\nPqP.P\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkqb..\np.p.K\n.pPn.\n..B.P\nPP...\nRN..r\n");
	chess_move("c1-e3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkq...\np.p.K\n.pPnb\n..B.P\nPP...\nRN..r\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nq.b.r\n.k.pp\np.P.n\nP..KP\nRP...\n.NB..\n");
	chess_move("b2-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nqkb.r\n...pp\np.P.n\nP..KP\nRP...\n.NB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk.b.r\n.qppp\np.nP.\n...KP\npPP.B\nRNQ..\n");
	chess_move("c6-e6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.b.r\n.qppp\np.nP.\n...KP\npPP.B\nRN..Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..knr\n.pp..\nq..Qp\nP.NP.\nR.P.K\n...B.\n");
	chess_move("d6-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..knr\n.pp..\nq..Qp\nP.NP.\nR.P.K\n..B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.Qq.r\np..pp\n.k..P\np.PQ.\nPP..K\n.RB..\n");
	chess_move("c1-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.Q..r\np..pp\nqk..P\np.PQ.\nPP..K\n.RB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n.q.br\n.kp.p\n.pPp.\npP.PP\nn.Q..\nRN.BK\n");
	chess_move("b6-d5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.q.br\n.kp.p\n.pPp.\npP.PP\nn.QN.\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nkn...\n..p.r\n....p\n..Pp.\nP..PP\n.qB.K\n");
	chess_move("e5-d4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nkn...\n..p.r\n....p\n..PP.\nP..P.\n.qB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n...r.\n.Bk..\n....n\np.P..\n..P..\n..Q.K\n");
	chess_move("d1-a1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nr....\n.Bk..\n....n\np.P..\n..P..\n..Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n.....\nkP...\nnQ..r\nN.PKb\nP..P.\n.RB..\n");
	chess_move("d4-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n.....\nkP...\nnQ..r\nN.P.K\nP..P.\n.RB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk....\n.q...\nP..P.\nP.n..\n.....\nRNB.K\n");
	chess_move("d3-d2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk....\n.q.P.\nP....\nP.n..\n.....\nRNB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.k..r\n..p.p\n.pnPq\nN..P.\nP.B..\nR..QK\n");
	chess_move("e3-d3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.k..r\n..p.p\n.pnq.\nN..P.\nP.B..\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nkN..r\np...p\n..ppP\nq....\n..PPQ\n.RbK.\n");
	chess_move("a1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.k..r\np...p\n..ppP\nq....\n..PPQ\n.RbK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk.q.r\nbp..p\np.np.\nPPPPP\nR....\n....K\n");
	chess_move("b2-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk.q.r\nb...p\nppnp.\nPPPPP\nR....\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkq..r\n.pb.p\nR.ppP\n.....\n.PBPQ\n.N.K.\n");
	chess_move("d3-d4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkq..r\n.pb.p\nR.p.P\n...p.\n.PBPQ\n.N.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.r..\n.qppp\np.P.P\nnP.P.\n.PQ.K\nR.B..\n");
	chess_move("b2-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.r..\n..ppp\np.q.P\nnP.P.\n.PQ.K\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk..b.\n..p.r\np.p.p\nN.Q.P\nP.BP.\nR..K.\n");
	chess_move("a6-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk..b.\n..p.r\np.p.p\nN.Q.P\nP.BP.\n..RK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nk.b..\n.Q.p.\n..p..\n..P..\nPp...\n.RK.r\n");
	chess_move("c6-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk.b..\n.Q.p.\n..p..\n..P..\nPK...\n.R..r\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk..r.\npppNp\nP.P.b\n.....\nRP.KP\n..B.Q\n");
	chess_move("b2-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk..r.\np.pNp\nPpP.b\n.....\nRP.KP\n..B.Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n.q.br\nk...p\nRQ.pn\n.PpPP\n..P..\n.NBK.\n");
	chess_move("d6-d5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.q.br\nk...p\nRQ.pn\n.PpPP\n..PK.\n.NB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk..nr\np...P\n..B..\nN..p.\nRP.K.\n.....\n");
	chess_move("a4-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk..nr\npN..P\n..B..\n...p.\nRP.K.\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk..r.\n..p.B\n....b\nPp..P\n.Q.pK\nRnq..\n");
	chess_move("e2-e1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk..rB\n..p..\n....b\nPp..P\n.Q.pK\nRnq..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk...q\npbp.p\n...rP\n...n.\nP...B\nRN..K\n");
	chess_move("b6-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk...q\npbp.p\n...rP\nN..n.\nP...B\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkb.q.\n.pPp.\np.P..\nNP...\n..P.Q\nR..BK\n");
	chess_move("d1-e1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkb..q\n.pPp.\np.P..\nNP...\n..P.Q\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n...N.\nbk.p.\n.....\n.R..r\n....P\n....K\n");
	chess_move("e4-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n...N.\nbk.p.\n.....\n.Rr..\n....P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk....\nppqbp\nP.p.P\n.RN..\n..Q.K\n..B..\n");
	chess_move("c2-c1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.q..\npp.bp\nP.p.P\n.RN..\n..Q.K\n..B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n...nr\nkp..p\npq..K\n..P..\nP.Q..\n....R\n");
	chess_move("b3-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n...nr\nkp..p\np...K\n.qP..\nP.Q..\n....R\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n..b..\n.qkp.\nppp..\n..P..\nPPR.Q\n..B.K\n");
	chess_move("b2-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.qb..\n..kp.\nppp..\n..P..\nPPR.Q\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkb.n.\n.Q...\n.Pp..\n..P.p\n..R.P\n.q..K\n");
	chess_move("b2-c1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nkbQn.\n.....\n.Pp..\n..P.p\n..R.P\n.q..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.k.nr\n..bp.\npPpq.\nP....\n..K..\nNR.B.\n");
	chess_move("b6-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.k.nr\n..bp.\npPpq.\nP....\n.RK..\nN..B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nk.qrB\n.p...\n.N.pn\nP..PP\n.bP.K\n.R.Q.\n");
	chess_move("c1-d2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk..rB\n.p.q.\n.N.pn\nP..PP\n.bP.K\n.R.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n.k.r.\n.bn.Q\n.p.P.\n.PBP.\nP....\nR...K\n");
	chess_move("c2-a1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nnk.r.\n.b..Q\n.p.P.\n.PBP.\nP....\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk.bnr\nq....\nNp.pp\nPP.P.\n..PBP\nR..QK\n");
	chess_move("a4-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.bnr\nq....\nNP.pp\n.P.P.\n..PBP\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nq...r\nkpp.p\n...b.\nPPp.P\nR.PP.\n.Q.K.\n");
	chess_move("c2-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nq...r\nkp..p\n..pb.\nPPp.P\nR.PP.\n.Q.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.bNr\n...p.\npp...\n..PP.\nPP...\nR.BKQ\n");
	chess_move("e1-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.bN.\n...p.\npp...\n..PPr\nPP...\nR.BKQ\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk.bnr\n.p.pp\nQPN..\n..PqP\nP....\nR.BK.\n");
	chess_move("c3-d1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.bNr\n.p.pp\nQP...\n..PqP\nP....\nR.BK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\nk.b..\np...p\nN..q.\nPP.KP\n..R..\n.B...\n");
	chess_move("d4-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\nk.b..\np...p\nN..q.\nPPK.P\n..R..\n.B...\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk.r..\npQp.b\n.pPpp\nNB.Rq\nPP.KP\n.....\n");
	chess_move("b4-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.r..\npQp.b\nBpPpp\nN..Rq\nPP.KP\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nqb..r\n.kpp.\np.P..\npP.pK\n..QP.\n.N...\n");
	chess_move("e1-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nqb...\n.kpp.\np.P..\npP.pr\n..QP.\n.N...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nqk..r\npb..p\nQ.ppB\nP.PPP\nRP...\n....K\n");
	chess_move("d3-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nqk..r\npb..p\nQ.p.B\nP.PPp\nRP...\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk.q..\np.N.r\n.p..P\nnP.b.\nP.Q.P\nR.B.K\n");
	chess_move("c5-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk.q..\np.N.r\n.pQ.P\nnP.b.\nP...P\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.q.r\n...b.\npp.Qn\n.P..B\n....P\nRN..K\n");
	chess_move("a1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..q.r\n.k.b.\npp.Qn\n.P..B\n....P\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.....\nknQ..\n.q..b\nP.P..\n.rB..\n.R..K\n");
	chess_move("b5-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.....\nknQ..\n.q..b\nP.P..\n..B..\n.r..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n.q.r.\n.k..p\np.p.P\nPPpQb\n..P.P\nR...K\n");
	chess_move("b2-c2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.q.r.\n..k.p\np.p.P\nPPpQb\n..P.P\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n..kbr\n...pp\np.pP.\n.N..P\nP.B.K\nR....\n");
	chess_move("d1-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n..k.r\n...pp\np.pP.\nbN..P\nP.B.K\nR....\n") != 0) {
		return false;
	}
	
	return true;
}

bool test_undo() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_move("d5-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nk....\np..r.\nb.p.p\nP..PP\n.qP.B\nR...K\n");
	chess_move("e5-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk....\np..r.\nb.p.p\nP..PP\n.qP.B\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.b.nr\nk.N..\n.Ppqp\n.P...\nB.PPp\nRQ..K\n");
	chess_move("e6-e5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.b.nr\nk.N..\n.Ppqp\n.P...\nB.PPp\nRQ..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n..qnr\nbk...\nQppp.\nP.P.B\nR..PP\n.N..K\n");
	chess_move("b3-a4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n..qnr\nbk...\nQppp.\nP.P.B\nR..PP\n.N..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n...br\nQ.k.p\n.....\n.....\nPp.Pp\n...RK\n");
	chess_move("c2-c1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n...br\nQ.k.p\n.....\n.....\nPp.Pp\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk..nb\np....\nPp..p\n..pKP\n..P..\nq..B.\n");
	chess_move("d6-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk..nb\np....\nPp..p\n..pKP\n..P..\nq..B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk.Q..\n.qbr.\n.n..p\nRp...\nB...P\n....K\n");
	chess_move("c1-d1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk.Q..\n.qbr.\n.n..p\nRp...\nB...P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n.kbnr\np..p.\n..p.p\n.QP.P\nRP..B\n.N..K\n");
	chess_move("b1-c2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n.kbnr\np..p.\n..p.p\n.QP.P\nRP..B\n.N..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk..nr\npqP.p\nP....\nP.ppB\n.Q..P\nRN..K\n");
	chess_move("d4-e5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk..nr\npqP.p\nP....\nP.ppB\n.Q..P\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk.B.r\np.N.p\n.pp.P\nPP...\n...PK\nqR.Q.\n");
	chess_move("a6-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.B.r\np.N.p\n.pp.P\nPP...\n...PK\nqR.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nqb...\n.kpr.\nPp.pp\nn.P.P\n....Q\nRBN.K\n");
	chess_move("a3-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nqb...\n.kpr.\nPp.pp\nn.P.P\n....Q\nRBN.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.b.r\n..ppp\np...n\nP.PBP\n.RP..\n...QK\n");
	chess_move("c1-d1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk.b.r\n..ppp\np...n\nP.PBP\n.RP..\n...QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nkq..r\npppb.\n.n.pp\nPP.PK\nR..Q.\n.N...\n");
	chess_move("b3-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nkq..r\npppb.\n.n.pp\nPP.PK\nR..Q.\n.N...\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkr...\npR.B.\nP...p\n..p.Q\nn.p.P\n...K.\n");
	chess_move("d2-e1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkr...\npR.B.\nP...p\n..p.Q\nn.p.P\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkb..r\np.Q..\nP.q.p\n...PP\np.P..\n.B..K\n");
	chess_move("d4-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nkb..r\np.Q..\nP.q.p\n...PP\np.P..\n.B..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nkq...\n..p.r\n.pP..\nBP...\nPK.Q.\nR....\n");
	chess_move("a1-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nkq...\n..p.r\n.pP..\nBP...\nPK.Q.\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nk...Q\np..rb\n..N.P\npBP..\n....P\n.R..K\n");
	chess_move("b4-b3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk...Q\np..rb\n..N.P\npBP..\n....P\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkbr..\np.pq.\n....p\nP.pPP\n..BQK\nR....\n");
	chess_move("a6-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkbr..\np.pq.\n....p\nP.pPP\n..BQK\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.qr..\npkPp.\nb..pp\n.....\nPP.NK\nR....\n");
	chess_move("b2-b3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.qr..\npkPp.\nb..pp\n.....\nPP.NK\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nq...b\nk..rB\nPp..p\n...Nn\nP.P.K\nRQ...\n");
	chess_move("c5-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nq...b\nk..rB\nPp..p\n...Nn\nP.P.K\nRQ...\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.bnr\nppP..\n..ppp\nP.N.P\n.BPPQ\nR..K.\n");
	chess_move("e1-e2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk.bnr\nppP..\n..ppp\nP.N.P\n.BPPQ\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk...r\n.pb.p\n..P.p\npPPKq\nP.Q..\nRB...\n");
	chess_move("d4-d3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk...r\n.pb.p\n..P.p\npPPKq\nP.Q..\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nkq...\n...p.\np..Pr\nbpp.P\nPPPQK\n.R.B.\n");
	chess_move("e3-e2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nkq...\n...p.\np..Pr\nbpp.P\nPPPQK\n.R.B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkqn.r\n..pp.\n.b..p\nNp.P.\n.P..P\n.R.BK\n");
	chess_move("a1-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkqn.r\n..pp.\n.b..p\nNp.P.\n.P..P\n.R.BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n...r.\nkq..Q\npB..p\nPPp..\n..P.N\n...RK\n");
	chess_move("e2-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n...r.\nkq..Q\npB..p\nPPp..\n..P.N\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n..N..\nk...p\nP....\n.K.rP\n.q.n.\n.....\n");
	chess_move("b5-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..N..\nk...p\nP....\n.K.rP\n.q.n.\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk...r\np..pN\nPpb.p\nR...P\n..P.P\n.B.QK\n");
	chess_move("c3-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk...r\np..pN\nPpb.p\nR...P\n..P.P\n.B.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\n.q...\nk.p.r\n...pb\nnB.P.\n....Q\nqR.K.\n");
	chess_move("b6-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.q...\nk.p.r\n...pb\nnB.P.\n....Q\nqR.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nqkb..\np.P.B\n.p..p\n.n.pP\nP.PKQ\n.R...\n");
	chess_move("b6-e6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nqkb..\np.P.B\n.p..p\n.n.pP\nP.PKQ\n.R...\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk.bq.\np..N.\n.Bp.r\n.PPp.\nP..KP\n.R.Q.\n");
	chess_move("b6-a6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.bq.\np..N.\n.Bp.r\n.PPp.\nP..KP\n.R.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkQBn.\np...r\n.p...\n.P.Pp\nPb.KP\nRN...\n");
	chess_move("d5-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkQBn.\np...r\n.p...\n.P.Pp\nPb.KP\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk..qr\np.Q.p\np....\nNb...\n.pPBP\n.R..K\n");
	chess_move("c5-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk..qr\np.Q.p\np....\nNb...\n.pPBP\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk..r.\nb.pPp\n...q.\nP..K.\n..PP.\n.R.B.\n");
	chess_move("d6-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk..r.\nb.pPp\n...q.\nP..K.\n..PP.\n.R.B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n.r...\nq.p.p\npkP..\nP.PpP\n...K.\nQ.R..\n");
	chess_move("a6-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.r...\nq.p.p\npkP..\nP.PpP\n...K.\nQ.R..\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nq...r\nkp..p\nnp.pP\n...K.\nRP...\n..BN.\n");
	chess_move("d6-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nq...r\nkp..p\nnp.pP\n...K.\nRP...\n..BN.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n.k.qr\nBpb.p\n..p.n\nP.pPP\nR....\n.Nq.K\n");
	chess_move("c6-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.k.qr\nBpb.p\n..p.n\nP.pPP\nR....\n.Nq.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkq.nr\n..p.p\n.P.p.\n...PP\nRBP..\n...QK\n");
	chess_move("c2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq.nr\n..p.p\n.P.p.\n...PP\nRBP..\n...QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nk..r.\np.q.p\n.pP..\nN.p.P\nPP...\nRB.QK\n");
	chess_move("c2-c1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk..r.\np.q.p\n.pP..\nN.p.P\nPP...\nRB.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n...kr\n..p..\n..PpB\n...p.\nP...K\nR.Q..\n");
	chess_move("e3-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n...kr\n..p..\n..PpB\n...p.\nP...K\nR.Q..\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n..q.r\n.kp..\n.p.pn\n..PPp\nP.N.P\n..RBK\n");
	chess_move("e3-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n..q.r\n.kp..\n.p.pn\n..PPp\nP.N.P\n..RBK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nq.Q..\n.....\np.kpP\nbp...\nPP.BP\n.R..K\n");
	chess_move("d5-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nq.Q..\n.....\np.kpP\nbp...\nPP.BP\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nk.br.\n..pp.\nqP...\n.PN..\n..B.P\nR.K..\n");
	chess_move("a3-b4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk.br.\n..pp.\nqP...\n.PN..\n..B.P\nR.K..\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.qbkr\np...p\n..pPn\n.pN..\nPPPBK\nR.Q..\n");
	chess_move("d3-e2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.qbkr\np...p\n..pPn\n.pN..\nPPPBK\nR.Q..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nkb...\n....p\nqp..B\nP...P\n.PrP.\nR...K\n");
	chess_move("e3-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkb...\n....p\nqp..B\nP...P\n.PrP.\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n..q.r\nkppbp\n..N..\n.P.pP\nP.K..\n.R.Q.\n");
	chess_move("b6-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n..q.r\nkppbp\n..N..\n.P.pP\nP.K..\n.R.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkb...\npp.rp\n...q.\nQpPPn\nPB...\nRN..K\n");
	chess_move("e6-d6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkb...\npp.rp\n...q.\nQpPPn\nPB...\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n.q.br\n...pp\n..k..\np.PpP\nP.P.Q\nR..K.\n");
	chess_move("d6-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.q.br\n...pp\n..k..\np.PpP\nP.P.Q\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk....\npq...\n...P.\n.P...\nR..Br\n.N.QK\n");
	chess_move("b2-e2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk....\npq...\n...P.\n.P...\nR..Br\n.N.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk..r.\np.Bb.\n...p.\nnPQ.p\nP...P\nRN..K\n");
	chess_move("c4-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..r.\np.Bb.\n...p.\nnPQ.p\nP...P\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk....\nP.pq.\n.p..r\nRB.pP\n...NP\n..QK.\n");
	chess_move("d2-e1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk....\nP.pq.\n.p..r\nRB.pP\n...NP\n..QK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nkq.br\n.p..p\npPp.n\nP..pP\n..PPQ\n.RB.K\n");
	chess_move("d1-c2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nkq.br\n.p..p\npPp.n\nP..pP\n..PPQ\n.RB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.kr..\npbp..\n....Q\nRP...\n.NP.P\n..B.K\n");
	chess_move("b5-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.kr..\npbp..\n....Q\nRP...\n.NP.P\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk...r\npqp..\nPp.pp\n...P.\nb..QP\n.NB.K\n");
	chess_move("d5-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk...r\npqp..\nPp.pp\n...P.\nb..QP\n.NB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.k.b.\n...Qr\np....\n.q.PP\nP.p.K\nR.B..\n");
	chess_move("e5-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.k.b.\n...Qr\np....\n.q.PP\nP.p.K\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.qbn.\nkpp.r\nP..p.\n.pP.P\nR....\n.NBQK\n");
	chess_move("c6-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.qbn.\nkpp.r\nP..p.\n.pP.P\nR....\n.NBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk..qr\n..p.p\n.pn.P\npPP.Q\nP.b.K\nR..B.\n");
	chess_move("c5-e3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk..qr\n..p.p\n.pn.P\npPP.Q\nP.b.K\nR..B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n..br.\n.nkpp\n.q...\np...P\n.BPP.\nR..QK\n");
	chess_move("a6-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n..br.\n.nkpp\n.q...\np...P\n.BPP.\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk....\npqp..\nb.p..\nP..pP\nR...N\n..B.K\n");
	chess_move("b2-b4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk....\npqp..\nb.p..\nP..pP\nR...N\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n..bn.\nkpp.N\n....p\nqP..p\n..PPK\n.RQ..\n");
	chess_move("a4-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n..bn.\nkpp.N\n....p\nqP..p\n..PPK\n.RQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n...r.\n.k..p\np..pB\np.b..\n..PQ.\n...NK\n");
	chess_move("c4-b4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n...r.\n.k..p\np..pB\np.b..\n..PQ.\n...NK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk..Q.\n.p..q\np...n\nP..P.\n.P..P\nRN..K\n");
	chess_move("d1-e2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk..Q.\n.p..q\np...n\nP..P.\n.P..P\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\nk.P.p\np..pb\npq..P\nP.PK.\n.nRQ.\n");
	chess_move("d6-e6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n....r\nk.P.p\np..pb\npq..P\nP.PK.\n.nRQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n..bnr\nqPkpp\np.p.P\n.....\nPBPp.\nRQ..K\n");
	chess_move("d5-d6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..bnr\nqPkpp\np.p.P\n.....\nPBPp.\nRQ..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n..b.r\n..ppp\nk..KN\nPp...\n.BpPq\nR..n.\n");
	chess_move("d3-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n..b.r\n..ppp\nk..KN\nPp...\n.BpPq\nR..n.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nk...r\npP.qp\n..pp.\nbn...\nRB.PP\n.NQ.K\n");
	chess_move("a1-b1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk...r\npP.qp\n..pp.\nbn...\nRB.PP\n.NQ.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.q.nr\n..b.p\nQkP.P\nB.P..\nP....\n..R.K\n");
	chess_move("c2-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.q.nr\n..b.p\nQkP.P\nB.P..\nP....\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nkn...\npbP..\n.....\npq...\n.B..K\nRN...\n");
	chess_move("b5-a4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nkn...\npbP..\n.....\npq...\n.B..K\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\n.q.br\np.p..\nk..P.\n..p.p\npPPQP\n...RK\n");
	chess_move("d3-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.q.br\np.p..\nk..P.\n..p.p\npPPQP\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.r...\nk.bpp\npP.qP\n.....\n..PBP\nR..QK\n");
	chess_move("d5-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.r...\nk.bpp\npP.qP\n.....\n..PBP\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n.kb.r\n.QN..\n.pp..\n....P\nqPKPn\nR.B..\n");
	chess_move("e5-d3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n.kb.r\n.QN..\n.pp..\n....P\nqPKPn\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nkqb..\n..Q..\nP.n..\n....r\nP.PP.\nRN..K\n");
	chess_move("c2-c1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nkqb..\n..Q..\nP.n..\n....r\nP.PP.\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nBkb.r\n.p.p.\nP....\nP.P.p\nq...P\nR...K\n");
	chess_move("a3-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nBkb.r\n.p.p.\nP....\nP.P.p\nq...P\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n....r\np.q.p\nB.k..\np...P\n...K.\nbRQ..\n");
	chess_move("c2-b3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n....r\np.q.p\nB.k..\np...P\n...K.\nbRQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nk.n.r\n....Q\n..ppp\n.P...\nP...q\nR.B.K\n");
	chess_move("e5-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk.n.r\n....Q\n..ppp\n.P...\nP...q\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nk.br.\n....p\nPppK.\n..pq.\nPB..Q\nRN...\n");
	chess_move("d4-e5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk.br.\n....p\nPppK.\n..pq.\nPB..Q\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nk...R\nPnp.p\n....b\nBP.pP\n...P.\n...QK\n");
	chess_move("a1-b1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk...R\nPnp.p\n....b\nBP.pP\n...P.\n...QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.k...\np.qbr\n..pP.\nB..K.\n.n...\nRNQ..\n");
	chess_move("d2-e3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.k...\np.qbr\n..pP.\nB..K.\n.n...\nRNQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkr...\nqpPpp\np...n\n.b.p.\nP..NQ\nRB..K\n");
	chess_move("e5-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkr...\nqpPpp\np...n\n.b.p.\nP..NQ\nRB..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nqr...\nk.bpp\np.p.P\nn.PQ.\n.PPB.\nR..K.\n");
	chess_move("d5-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nqr...\nk.bpp\np.p.P\nn.PQ.\n.PPB.\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n..b..\nnkp..\nNp.p.\n.PpPr\n.B...\nR...K\n");
	chess_move("a3-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n..b..\nnkp..\nNp.p.\n.PpPr\n.B...\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n..qkr\n..pbp\nPp..p\nPKPn.\n...P.\nRN..B\n");
	chess_move("b3-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n..qkr\n..pbp\nPp..p\nPKPn.\n...P.\nRN..B\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.Q.kr\n.n..p\np.p.P\npPP.p\n....P\n...RK\n");
	chess_move("d6-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.Q.kr\n.n..p\np.p.P\npPP.p\n....P\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nb..n.\np.p.r\n..kBp\n..PP.\nRP..P\n....K\n");
	chess_move("d4-e3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nb..n.\np.p.r\n..kBp\n..PP.\nRP..P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n.k...\np.ppr\n...Pp\n..K.P\nb.P..\n.NBn.\n");
	chess_move("c6-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.k...\np.ppr\n...Pp\n..K.P\nb.P..\n.NBn.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nkb.Q.\n.N...\n..ppr\nP.Pq.\n.P.KP\nRB...\n");
	chess_move("d5-e6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nkb.Q.\n.N...\n..ppr\nP.Pq.\n.P.KP\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.kr..\n.p.pp\n.b.Q.\np...P\nPnPK.\n.NRB.\n");
	chess_move("d6-e5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.kr..\n.p.pp\n.b.Q.\np...P\nPnPK.\n.NRB.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkq.r.\np.pbp\n.p..n\nPP..P\n..QP.\nRN.BK\n");
	chess_move("d2-d3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq.r.\np.pbp\n.p..n\nPP..P\n..QP.\nRN.BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk..nb\n.p..r\np..Pq\nPp...\n..P.K\n.RB..\n");
	chess_move("e5-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk..nb\n.p..r\np..Pq\nPp...\n..P.K\n.RB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n..Qr.\n.k...\n...QP\npP...\n.....\n.RK..\n");
	chess_move("b2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..Qr.\n.k...\n...QP\npP...\n.....\n.RK..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nkn...\nP.Q.r\n..bpP\n.....\n.P.PK\nRN.B.\n");
	chess_move("a6-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nkn...\nP.Q.r\n..bpP\n.....\n.P.PK\nRN.B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n.k.r.\n.nbp.\np..q.\nPpPPp\nRBK..\n.Q...\n");
	chess_move("c2-a4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.k.r.\n.nbp.\np..q.\nPpPPp\nRBK..\n.Q...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nBk.nr\n....p\n..Np.\n..RP.\n.P..P\n...K.\n");
	chess_move("d1-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nBk.nr\n....p\n..Np.\n..RP.\n.P..P\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n.k.br\nq.pPp\npp..P\nP....\nRP.KQ\nnN..B\n");
	chess_move("e5-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.k.br\nq.pPp\npp..P\nP....\nRP.KQ\nnN..B\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.kb.r\n.p...\n..N..\np.q.P\nPPQ..\nR.BqK\n");
	chess_move("c6-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.kb.r\n.p...\n..N..\np.q.P\nPPQ..\nR.BqK\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.k...\npnP.r\nP..Bp\n.P.Q.\nq...P\nRN..K\n");
	chess_move("a5-a4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.k...\npnP.r\nP..Bp\n.P.Q.\nq...P\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk.b..\n.Pp.r\nq..Pp\n...Pn\nPP..K\nRN..Q\n");
	chess_move("e4-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.b..\n.Pp.r\nq..Pp\n...Pn\nPP..K\nRN..Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk...r\n.p..p\n..pb.\npP.N.\nP.BPP\nR..QK\n");
	chess_move("d6-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk...r\n.p..p\n..pb.\npP.N.\nP.BPP\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n...b.\npk...\n.pNpr\n.P.Pp\nqBP.P\nRQ..K\n");
	chess_move("c3-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n...b.\npk...\n.pNpr\n.P.Pp\nqBP.P\nRQ..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk...r\n.p.Q.\nQ.nbp\nN..p.\nP.BPP\nR...K\n");
	chess_move("a1-b1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk...r\n.p.Q.\nQ.nbp\nN..p.\nP.BPP\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nkqn..\n...b.\nP.p..\n.QP.p\nPpPB.\nR...K\n");
	chess_move("b1-d3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nkqn..\n...b.\nP.p..\n.QP.p\nPpPB.\nR...K\n") != 0) {
		return false;
	}
	
	return true;
}

int test_movesCount(int* intBuffer, char* charBuffer, int intCount) {
	int intEqual = 0;
	
	for (int intFor1 = 0; intFor1 < intCount; intFor1 += 1) {
		for (int intFor2 = intFor1 + 1; intFor2 < intCount; intFor2 += 1) {
			if (intBuffer[intFor1] != intBuffer[intFor2]) {
				intEqual = intCount;
			}
		}
	}
	
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
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nkrb..\np...p\nPpP.B\nR....\n...nP\n..qQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n.....\n.n.p.\nkp...\npB...\nP.q.K\n....R\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n..k.Q\n.pb.p\n....P\npP...\nR..P.\nBq.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n....N\nk.Q.p\nbp..P\nRK..P\n.PP..\n..Br.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n.k..r\np..bp\n.pP.n\nPp...\n..Qq.\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\n.Q.br\nk..Qp\np....\n...P.\nPp..P\nRnBK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nkN.r.\np.bp.\nP...p\n.Pn..\n.P.KP\nRB...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\n....r\nkq.p.\n..Ppp\n.P..Q\nP...P\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\n..b.r\n.q..p\n.p.Qn\nR.kP.\n.PP.P\n.NB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n....r\nn.p.p\n.Pkpb\n.R...\nB..PQ\n.N..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\n..kbr\np..p.\nPP..N\nQ....\n.P.PK\n.BR..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\nk.qbr\n....p\n..p..\np.P..\nP...P\nRNQ.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 W\nk.bn.\npp.q.\n.P.Q.\n.....\nP..Np\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 W\n.k...\n.Q...\np.n.p\nPpPKP\n.P...\n.RB..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\nk..n.\n..Kbr\n..qP.\n....p\n.....\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk.nr.\n.qp..\n.p..b\npP.P.\nP.PPK\nR.Q..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nkqr..\n...bp\np.p.P\nN...P\nPPpQK\n..RB.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\nk.r..\n.ppb.\np..q.\nN...P\nPBP..\nR..K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n..r..\nkbppp\npP..q\nP..PP\n.....\nRQB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\nk....\np.brp\n..ppP\npPQPK\n.....\n.RB..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk..Nr\n..pp.\n....q\n.P...\n.pP.Q\n.RB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nk.r.b\npK..p\n...p.\n...P.\nN.BQP\n.....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\nk....\npp...\nPP.bp\nN..Rp\n...K.\n...B.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n.k...\npp.rp\n.b.B.\nNq..P\nPPpK.\n....R\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\n..r..\nk..pb\np.RQ.\nP...p\nP.P.P\n...BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk...r\npp.Pp\n..p..\nqR.P.\n.nP..\n.N.QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nkq..r\n.bppp\n.....\n.pNPP\nPP..B\nn..QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk..br\nq.pp.\np.PQp\nn...P\nPPBP.\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk..b.\n.p.p.\npqN..\n.Pr..\n.PQPK\nR.B..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\n...r.\npkp.p\nnPqBP\n.bP..\n...P.\nR..QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\n..kQr\n...p.\np.q..\n..n.P\n.B.P.\nRN.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nk..q.\nPpppr\nP...p\n..PnP\n...QN\n...K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\nkqr..\n.pP.p\n.n...\npP..b\nP.PPN\nB.RQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nq..n.\np.kB.\nP.p.p\np....\n...PP\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\n.b..r\n.k.Pp\npKq..\nPp...\n.PPB.\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\nkr...\np.p..\nPp.qp\nNPnb.\nB..QP\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\n.b...\nqk.p.\n.P...\npP.P.\nP..Pr\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n.r..b\nkppp.\nQ.B.p\nP.P.P\n.P...\nRn..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\nkb.q.\n..pPp\np..P.\nP.N..\n.P...\nRnBK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\n..k.r\n..b.p\n.pp.n\nPP..Q\n....P\nRB..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nq...r\n...pp\nN.Pb.\nkP..P\nRP..K\n.BQ..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n.qr..\np..pp\n.bP.n\n..P.k\n.PB.Q\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nkq...\n.nb.r\n..Pp.\nPpP.p\n.PB.P\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\nk..r.\np.q.p\np..b.\nN..KP\n.P.Q.\nRB...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\nqr...\nbpppp\nkP...\n.....\nnQ.NP\n..R.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nkB..r\np..pp\nb.P.N\nP....\nP..pP\nR..K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk..nr\npN...\nq...p\nBPpp.\nP.PP.\n..RQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n..b.r\nkn...\n...q.\n..p.P\nRPP..\n..BK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\n.k.n.\n.p.br\n..pQp\n..PP.\nP.B.P\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\nk....\n...rp\n.....\npP.QP\nP..QP\n..R.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\n..b.r\nkp.p.\n....p\nPn.pq\nRBPKQ\n.N...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\n....r\npk.qp\nPQPN.\n.n.RP\n.P..P\n....K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n...r.\n.pbBp\nqk...\nP.Pp.\n...KP\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\nk.r..\np.pKp\n..P..\nn....\nP.B.P\nR.q.Q\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\n.....\n.bpr.\nk..Bp\nPp.nK\n.P..P\n.R...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\n.q.br\nnkp..\n.ppPp\npP..P\nP.NB.\n.R.QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\nk.br.\n....p\n...pP\nBq...\nP..K.\nR..q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n.b.r.\n.Pp..\nQk..p\nPpNp.\nR..KP\n.....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n.qb..\nkpp.r\n..np.\nBPPPp\nP...P\nR..KQ\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n.kbnr\nRP..p\n..Pp.\n.B...\n..PPP\n..qQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nk..qr\np..b.\n...Nn\n.pP..\npQ.K.\n..RB.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\nk.qnr\npp...\n...Qp\n.....\nP.PPP\nRNBQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 W\n.kQ.r\np.p.p\n...BP\n...P.\nPbP..\n.n.KQ\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk...r\nqppbp\np..pn\nP..P.\nRPPNP\n..BQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n..k.r\n..pp.\npRPbp\nP...P\n.B.K.\n...q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\n.b.r.\np..pp\n.....\npk.P.\n.nKN.\nR..B.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 B\nk.q.r\n...p.\n..np.\npP...\nPBPQP\nR.K..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n..b.K\nk..p.\nP..PP\nNppB.\n..R..\n....Q\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\nk..n.\n.P.r.\n....p\npPb.q\nPQ.p.\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\nRb.r.\n.kp.p\n..p..\n.p.PK\n.P..P\n...q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n.kb.r\np.P.p\n.pqp.\n....P\nP.P.n\nRNB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n..Qr.\nk....\np...p\npnp..\nR.PPB\n.N..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 B\nk.q.r\np....\n..bpp\npNnPP\n.RP.Q\n...BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\n.k.nr\nNqb..\n...P.\n...pQ\nP....\n...RK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n..k.r\nn..Qq\np...p\nPpNP.\n.....\n...KR\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n.br..\n.k.pp\np..P.\nR...P\n.PPKQ\n..B..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nk....\np..p.\n..pPr\n.PP..\nq...P\n...RK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\n...br\nk..Bp\np.nP.\n.qP.P\nP...K\n.....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n..bnr\np.k.p\n..pNp\n..qK.\nP....\nR....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nkq...\np.p.p\n.....\n.bNrP\nPP...\nR..KB\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk...r\nq.bKp\npp..P\nPpB..\n.P.P.\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nb...r\nk.pp.\n.P.P.\n...P.\nKn.NB\nR...Q\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n.k..b\n..p.r\n..P.p\np.qP.\nR.Q..\n.B.NK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nkqr..\npp...\nb.pPp\n..P..\nPPB.p\n..R.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n.q.br\nk.pp.\nppPPp\nP.PKP\nQ....\nRNB..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.nr\npp...\nRP.PP\n....P\n.P..K\n.B..q\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\nk.B..\np..pp\n..nN.\nbPpP.\nPRP.P\n...QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n.kbnr\n...pp\np.pQN\nPpP.P\n.P..P\nR.B.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nr....\n..k.p\np.p.P\n.PQ..\nR.P..\nqBK..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nk.bn.\n..P.r\np...p\nP.Nq.\nRP...\n..QBK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\n.k...\nqB.rQ\npP..p\n.P.pP\nb..K.\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n...Qr\n.k...\n.....\n.p...\n.BPP.\nRN.QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\nkb.r.\n.pp.p\np....\nN..QP\nPq...\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\nk.r..\nq...p\nP..pP\n.pp..\nPB.QP\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk.bn.\n..pp.\npqP.r\n....P\nPP.K.\nRB.N.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\nkr...\n.P..p\n..B..\n....p\n..N.P\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\nk....\nq.p..\nn..p.\n..p.Q\nR..P.\n.Q..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\nk..qr\np.PNp\nP..p.\nP....\n..K.P\nR.n..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\nk...r\n....p\npQ.qP\nPPp..\nR.P.K\n..B..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	return true;
}

bool test_movesOrder(int intMoves, char* charMoves) {
	int intEval[128] = { };
	
	for (int intFor1 = 0; intFor1 < intMoves; intFor1 += 1) {
		chess_move(&charMoves[intFor1 * 6]);
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
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk..qr\np..pp\nPbp.P\n..Pn.\n.Q.NK\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.q..r\n.ppPp\n.kn..\nPp.p.\n.B...\nR..QK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.q.Qr\n....p\nb.k.n\nP...P\n..BP.\n.R.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\n..k.Q\n..p..\npb..Q\nPq.rP\n.P.K.\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("11 B\n.b..r\n.Q.pp\n.....\nBkP.n\n....P\n..R.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("11 B\n..b.r\npkp..\nPPnp.\n.P..p\nR.q.P\n.NBQK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk.b.r\np..p.\n...qp\nn.PPQ\nP.p.P\nB.RK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\n.q..r\nk..np\nb.pP.\nPQ.BP\n....K\n.q...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk...r\np..qp\nPp..n\n.PP..\nRbQK.\n.....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk....\np.pbr\nqp..n\n.P..B\nQ.P.P\nRN.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\n.q..r\nk....\nppppP\n.QP.P\nP....\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\nk..qr\n..p..\n.p..p\nPb.PN\n.QPB.\n...K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nnQ.br\n...p.\n.k..p\nQP..P\nP.PK.\nRN...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nq.br.\n..pP.\npk...\nP.PPP\nR..p.\n.N.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("21 W\nk....\n.b.p.\n.B.pn\nPp...\nR..P.\n..Q.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk...q\n.ppr.\n..Qpn\nPpP..\nR...P\n.N.BK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\n.q.br\nk.p.p\n..p..\n.p.pN\nPB.PQ\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nk...r\n.q...\nP.p.n\n.BPp.\nP..PK\nRN...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\nkq..r\np.pp.\n..nPN\nPP.bP\nBRQ..\n...K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\nqbQ..\n.kp..\npPn..\n....p\nPPKPP\n.R.B.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\nq....\nkp.Q.\np.np.\nPP...\n..B.K\n.R.r.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nkq.N.\np..p.\nbp.r.\n.PQ..\n..n.P\n.RBK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk..r.\n...p.\n..pnp\n.....\n.RPPK\n.QQ..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\n..kr.\nRQpp.\n....p\n..BPP\n.....\n...qK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk..br\n.qP..\np.n.p\n...pP\nP..QB\n.R..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\n.Nb.r\nk.pp.\n.pQ.n\n....B\nP.P.P\nq...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk..nr\n.b...\nR...p\n..P.P\n.....\n.Q.BK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.q...\nkP..p\np....\nR.Pnr\nQb...\n..BK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("21 W\n...br\n.k...\npn..p\nP...P\nQRP.N\n..K..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\nkr...\np....\nb.pp.\np...B\n...q.\nR..QK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk.b.r\np....\nPPp..\n.PNq.\n...RP\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nkq.b.\n.pPN.\np..P.\nP..P.\n.nQp.\n..B.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\nk...r\nq...p\nRP.p.\n.P.pP\n...nK\n..Q..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\n.qb..\n.k.rp\npP.p.\nP.pP.\n..PQP\nR..BK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n...r.\nkq.pp\n..p.N\nPp..Q\n..P.P\n.R.BK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk.Q.r\n.bq.n\n.....\n.pPp.\n.B..P\nRQK..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.b..r\nP..kp\np...P\nn..P.\nBP.Q.\n..R.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\nkN...\npb...\n.PP.p\n.P...\nR.QrP\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\n.k.r.\npn...\nP.p.b\n.P.pP\nRqPKP\n..BNQ\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\n.....\nkp..N\n...rp\nRP.pQ\n..P.P\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\nkq.r.\n.....\npp.p.\nb.PpP\n.P.K.\n.RB..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\n.q.N.\nkb..p\nppppB\n.QPP.\nPP.nP\n..R.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\n....r\npkpb.\npK...\nPqPpP\n.B...\nR...Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.q.br\np...p\n.p.kP\n.Q...\nP.PP.\n...RK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\n...Qb\n....r\nppk.P\n.....\n..P.K\nRNqQ.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 W\n.b...\n.p...\n.kNp.\n.....\nPqPBP\n.R.nK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("21 W\n...nr\n.pk..\n..p.K\n...R.\n.PP.P\n...B.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("21 W\n.....\nPk.p.\n...bp\n....P\n.nPBK\n.Q...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk..r.\np.p.p\nP..p.\n.qPPK\nR...P\n.B.Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk.qr.\n...p.\n..Q..\np.P..\nRP.KP\n.B...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.....\n..Q.r\nk.p.p\n.PPpP\nP....\nR.B.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\nQ.kbr\n....p\nqp..p\n.p...\n.PB..\n..R.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nkQ.nq\n.....\n..p..\n..P..\nPPBKr\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\n.q..r\n.kpbp\n.pP..\n.P...\nP.NBP\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.q.nr\n.b...\npkp.p\nPPPpP\n...PQ\n.RB.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\nq.r..\n.kppP\nppP..\nQP...\nP..bK\nRN.n.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\nk...r\np.qbp\n....B\n..p..\nPPQP.\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nqkb.r\n....p\nP.pP.\n....P\nR....\nBN..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk...r\n.N..q\nppnpp\n..B..\nP.b.P\n.RQ.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\n.b.nr\n.k.N.\npq.p.\nPB.Pp\n.R..P\n.Q..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\nq..br\n...kp\np....\np.P.P\nB.K..\nR.QN.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\n.....\nkpbp.\n....r\n..P..\nq.K.P\n....R\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk..r.\npqp.n\nP...P\n.Pp..\nb.PKP\n.RB..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nq.br.\nk.B.p\nQp..P\np.N..\nPP..P\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\n.....\nkqr..\np..pp\n.pP.P\nPB...\n..RK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\nk.bn.\n...q.\npp.K.\nPPNpr\n..P.P\n.R...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n....r\npk..p\n.ppb.\nPP..Q\n..PP.\nRnK.B\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\nk...r\n..p.p\n.p.Pb\n.Pn.P\nNRPB.\n..Q.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\n..bn.\npk.q.\nPB.p.\n..pp.\n....r\nRN.QK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkq..r\n....p\np..Pb\n.K.Pp\nPn.Q.\nR.B..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\nk.r..\n.N...\npp.p.\n..n.q\nP....\nR.BK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\n.kB.r\n....q\nP.p..\nb.R..\n...pP\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\nkr...\n..b..\npp...\nP.KpP\n.qP..\nR...Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\n..qnr\nkpp..\npb.pP\n..P.K\nPQ..P\nRB..N\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nkNbr.\n..qpp\n..P..\nRP...\n..PKP\n..B.Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk....\n....p\n..rRP\n..P..\n..p..\n...BK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nkq..r\n...b.\np.Ppn\nN.pQP\nP....\nR.BK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\nkb...\n..n..\np..r.\nP.ppp\nR...P\n.NK.B\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.k.br\npN..p\n..pq.\n..PnP\nP..PK\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\n....Q\n.p..p\n....P\n.k...\n...KP\nq....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\n.q...\n.kpbr\npp.pP\n.nN..\nP.P.B\nR.Q.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk..br\npn.P.\n..p.p\n.PB..\n....P\n.N..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\nkq.nr\np.b..\n....p\n..PQ.\nPK.p.\nRN..B\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk...r\np.pK.\nb....\n...P.\n....P\n...q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\nk....\nQ..pr\nn..K.\n...pP\n..PQ.\n.RB..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nk....\n....r\np.qpn\n..pQ.\nP.P.P\nRK...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\n...qr\nkp..p\n..p.P\n.bP.P\n..R.K\n.nQ..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\nq...r\npK.pp\n....n\nb.k.P\n.P.P.\n.RBQ.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\nk..q.\np..b.\n..pp.\npPNB.\n...Q.\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\n..b.r\nkR..p\nP.pp.\nP.n.P\n..PPK\n..B.Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk....\np....\n..p.Q\n..PpP\n..qP.\nRNBK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\n.kq..\nnbp..\np....\n.pPp.\nPP..B\n.RK..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkq...\n.bp..\np.r..\np...p\nPP..P\nRQ..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\n..bnr\nkp...\n..qpp\n.P..K\nP..N.\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk...r\npn.p.\nP.QPp\nb....\n...q.\nqNB.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 W\nk.q..\nb..pr\npQ...\nnpP.P\n...RP\nB...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\nkbQ..\n.q...\n..pBr\npPPR.\n..P.P\n...K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\nkr...\n.p.Bp\np....\nP.P.q\n..P.K\n....R\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nkN..r\np...p\n...q.\n...PP\nPBb..\n.RQ.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	return true;
}

bool test_moveRandom() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_moveRandom(charBuffer);
	
	if (strstr("a5-a4\nb5-b4\nc5-c4\nd5-d4\ne5-e4\nb6-a4\nb6-c4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nq..b.\nkr...\n....p\n.PP.p\n..P.Q\nR..BK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b4-b3\nc4-c3\ne5-e4\ne5-d5\ne5-d4\ne5-c3\ne5-b2\na6-a5\na6-a4\na6-a3\na6-a2\na6-b6\na6-c6\nd6-d5\nd6-c6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\nk..r.\nq.p.p\np..p.\nBPQbP\nP.P..\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-b2\nd1-c1\nd1-b1\nd1-e1\nd1-d2\na2-b2\na2-b1\na2-b3\na2-c4\nc2-c3\ne2-e3\na3-b4\nd3-c4\nd3-e4\nd4-c3\nd4-b2\nd4-e3\nd4-c5\nd4-e5\nd4-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nk.r..\np.ppp\n..PP.\np....\nPR..P\n..qQK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c3-d2\nd3-c2\nd3-e2\nb5-b4\nb5-b3\nb5-b2\nb5-b1\nb5-c5\nb5-d5\nb5-b6\ne5-e4\nd6-d5\nd6-d4\nd6-c6\nd6-c5\nd6-b4\nd6-a3\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 W\n.qbNr\n..p.p\nkp...\n...P.\nPP.PP\n.RBQK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d1-b2\nd1-c3\nd1-e3\nd4-d3\na5-a4\nb5-b4\ne5-e4\nb6-a6\nc6-c5\nd6-c5\nd6-b4\nd6-a3\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\n..qr.\nkpB.p\np..p.\nP.PQn\n.P.RP\n...K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c1-b1\nc1-a1\nc1-c2\nc1-d2\nc1-e3\nd1-e1\nd1-d2\na2-a1\na2-b1\na2-b3\nb2-b3\ne2-e3\nd3-c4\ne4-c3\ne4-d2\ne4-c5\ne4-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("21 W\nk....\np.P.p\n.pP..\nq.N..\n..BQ.\n...Kr\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c2-c1\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nc4-a5\nc4-b6\nc4-e5\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-b6\nc5-b5\nc5-c6\nd5-d4\nd5-d3\nd5-d2\nd5-d1\nd5-e5\nd5-e4\nd5-c6\nd5-e6\nd6-c6\nd6-e6\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nk..br\nppq..\nP.P.P\n...n.\n..PKP\nRN.Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a3-b2\nc3-b2\ne3-e2\nc5-c4\nc5-d4\nd5-d4\nd5-c4\nd5-e4\nd5-c6\nd5-e6\ne5-e4\ne5-d4\na6-a5\na6-a4\nb6-a4\nb6-c4\nd6-c6\nd6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 B\nk...r\n.Pp.p\n.....\nP...q\n.BPP.\nRNQ.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-b2\ne1-d1\ne1-c1\ne1-b1\nc2-c3\ne2-e3\ne4-e3\ne4-d4\ne4-c4\ne4-b4\ne4-a4\ne4-e5\ne4-e6\ne4-d3\ne4-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\n.kqr.\n..p..\np...p\nPP..P\n..pB.\n.R.QK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-b2\nb1-a2\nc1-b2\nc1-d2\nd1-e1\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nc2-c3\na3-b4\nc5-c6\nc5-b6\nc5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 W\nk....\n.p.bp\np...n\nPp..r\nBNR..\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a5-b4\na5-b6\na5-a6\nb5-a3\nb5-d4\nb5-c3\nb5-d6\nc5-c4\nc5-c3\nc5-c2\nc5-c1\nc5-d5\nc5-e5\nc5-c6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("11 B\nb..n.\n.pkpr\np.p.p\nPPNPP\n..PQK\nR.B..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\nb2-b3\nc2-c1\nc2-b1\nc2-b3\nc2-d3\nd2-d3\ne2-e1\na3-b4\nc3-b4\nc3-d4\ne3-d4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nk.b.r\npN.Pp\n.P...\nP.p..\n..q..\n.RB.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b2-d1\nb2-d3\nb2-c4\nd2-d1\nd2-c1\nd2-e1\nb3-a2\na4-a3\nb6-b5\nb6-b4\nb6-a6\nc6-b5\nc6-d5\nc6-e4\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 B\n..bNr\n.kp.n\np...p\nPq.pP\nR.PPQ\n..BK.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c1-d2\nc1-b1\ne1-d1\nb2-b1\nb2-a2\nb2-b3\nb2-a1\nb2-c3\nc2-c3\ne2-c3\nb4-b3\nb4-a4\nb4-c4\nb4-b5\nb4-b6\nb4-c3\nb4-d2\nb4-a5\nb4-c5\nd4-c5\nd4-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\n.b..r\n...pq\npk...\nN.P.p\nPn.BP\n...RK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a4-c3\na4-b2\na4-c5\na4-b6\nc4-c3\nc4-b3\nd5-e4\nd5-c6\nd5-d4\nd5-c5\nd6-c6\nd6-b6\nd6-a6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 W\nkb..r\n.qp.p\np.N..\n...PP\nQ.p.K\nR.B..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c3-a2\nc3-b1\nc3-e2\nc3-d1\nc3-a4\nc3-b5\nc3-d5\nd4-d3\ne4-e3\na5-a4\na5-a3\na5-b5\na5-c5\na5-b4\na5-b6\ne5-d5\ne5-e6\ne5-d6\na6-b6\nc6-b5\nc6-a4\nc6-d5\nc6-b6\nc6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\n....q\nkbp.p\npp.rP\n...pP\nPP.NK\n.R.B.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("e4-d3\na5-a4\nb5-b4\nd5-b4\nd5-c3\ne5-e6\ne5-d4\nb6-a6\nb6-c6\nd6-c5\nd6-b4\nd6-a3\nd6-c6\nd6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 B\n...qr\n.kpPp\n.....\nppP.P\nP....\n.K...\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d1-c1\nd1-b1\nd1-a1\nd1-d2\nb2-b1\nb2-a2\nb2-b3\nb2-a1\nb2-c1\nb2-a3\nb2-c3\nc2-c3\ne2-e3\nb4-b5\nb4-a5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("18 B\nk.N.r\n.qp.p\nP...P\n..P.p\n.p.n.\nR.B.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\ne1-d1\ne1-c1\nb2-b1\nb2-a2\nb2-b3\nb2-b4\nb2-c1\nb2-a3\nb2-c3\nb2-d4\nb2-e5\nc2-c3\ne4-e5\nb5-b6\nb5-a6\nb5-c6\nd5-b4\nd5-c3\nd5-e3\nd5-b6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nk..q.\npp.r.\n.bpp.\nNBP..\nP..PK\nR....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a4-c3\na4-b2\na4-c5\na4-b6\nb4-a3\nb4-c3\nb4-c5\nb4-d6\nb4-b5\nc4-b3\nc4-d3\nd5-d4\ne5-e4\ne5-e6\ne5-d4\ne5-d6\na6-b6\na6-c6\na6-d6\na6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 B\nq.rb.\n..p..\n..npp\n.kNPP\n..Q..\n.R.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-a3\na1-a4\na1-a5\na1-a6\na1-b2\nc1-b1\nd1-e2\nd1-e1\nd1-d2\nc3-a2\nc3-b1\nc3-e2\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nd3-c4\nd3-e4\ne3-d4\nb4-b3\nb4-a4\nb4-c4\nb4-b5\nb4-a3\nb4-a5\nb4-c5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\nqb.r.\n.kppp\npP.KP\n...n.\nP.QP.\nRNB..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-a2\nb1-a2\nb1-c1\nd1-c1\nd1-e1\nb2-a2\nb2-b3\nb2-c1\nb2-c3\nc2-c3\nc2-b3\nc2-d3\nd2-e3\ne2-d3\na3-a4\nd4-b3\nd4-b5\nd4-c6\nd4-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 W\nkB.nr\n...p.\n.....\nN....\np...K\n...q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a2\nb1-c2\nb1-d3\nb1-e4\nb1-c1\nb1-b2\na4-c3\na4-b2\na4-c5\na4-b6\ne5-e4\ne5-d5\ne5-e6\ne5-d4\ne5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 W\nk.b..\nqp.pr\nqQpP.\n..B.P\n..K..\n..R..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b3-b2\nb3-a3\nb3-c3\nb3-b4\nb3-b5\nb3-b6\nb3-a2\nb3-c2\nb3-d1\nb3-a4\nd3-e2\nc4-b5\nc4-a6\nc4-d5\nc4-e6\nc4-b4\nc4-d4\ne4-e3\nc5-b5\nc5-d5\nc5-b4\nc5-d4\nc5-b6\nc5-d6\nc6-b6\nc6-a6\nc6-d6\nc6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 W\nkn...\npp..p\n..pr.\nq.BPP\nPPp..\n...RK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-b3\nc4-a2\nc4-d3\nc4-d5\nc4-b4\nd4-c3\ne4-e3\ne4-d3\nb5-b4\nb5-a4\nd6-d5\nd6-c6\nd6-b6\nd6-a6\ne6-e5\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 B\nkb.nr\n..P.p\np..p.\nPqpB.\n..PKP\n...Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-a2\na1-b2\nb1-a2\nb1-c2\nb1-c1\nb1-b2\nd1-b2\nd1-c3\nd1-e3\ne2-e3\nb4-b3\nb4-b2\nb4-a4\nb4-b5\nb4-b6\nb4-c3\nb4-d2\nb4-a5\nb4-c5\nc4-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("18 B\nk..n.\nqpN..\npP.rp\nP..KP\n.pPP.\n..B.Q\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\nd1-c3\na2-b1\na2-b3\nd3-d2\nd3-c3\nd3-b3\nd3-d4\ne3-d4\nb5-b6\nb5-c6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("21 W\nkq.b.\n..p..\n..pp.\np....\nR.Q.r\n.NnqK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a5-a4\na5-b5\na5-a6\nc5-c4\nc5-c3\nc5-b5\nc5-d5\nc5-e5\nc5-c6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-d6\nb6-a4\nb6-d5\nb6-c4\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 W\n...N.\n.bB.p\nppp..\nq..p.\nPPk..\n..R.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d1-b2\nd1-c3\nd1-e3\nc2-b1\nc2-b3\nc2-d3\nc2-e4\nc2-c1\nc2-d2\nb5-b4\nb5-a4\nc6-c5\nc6-b6\nc6-a6\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 B\n.k.r.\n..n..\nPp...\nN.pP.\nPK...\nR..Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-c1\nb1-b2\nb1-a2\nd1-c1\nd1-e1\nd1-d2\nd1-d3\nd1-d4\nc2-a1\nc2-e1\nc2-a3\nc2-b4\nc2-e3\nc2-d4\nb3-b4\nb3-a4\nc4-c5\nc4-b5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("18 B\n.kr..\n....p\n.ppb.\n..nPP\n..qK.\nQ.R..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-b2\nb1-a2\nb1-c2\nc1-d1\nc1-e1\nc1-c2\ne2-e3\nb3-b4\nc3-d4\nd3-c2\nd3-e4\nd3-d2\nd3-e3\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc5-b5\nc5-a5\nc5-d5\nc5-c6\nc5-b4\nc5-a3\nc5-d4\nc5-b6\nc5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 W\nk....\np.q.r\n....P\n..p.p\nP...R\n.B..K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a5-a4\ne5-e4\ne5-d5\ne5-c5\ne5-b5\nb6-c5\nb6-d4\nb6-b5\nb6-a6\nb6-c6\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 W\nk...r\n.b.qp\npppp.\n..NPP\nPBQ..\nR..K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-a3\nc4-b2\nc4-e3\nc4-d2\nc4-b6\nc4-e5\nd4-c3\ne4-e3\ne4-d3\na5-a4\nb5-a4\nb5-c6\nb5-b4\nb5-b6\nc5-d5\nc5-e5\nc5-c6\nc5-b4\nc5-a3\nc5-b6\na6-b6\na6-c6\nd6-d5\nd6-c6\nd6-e6\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nk...r\np..b.\np.n.P\nP...q\n.P...\n.RB.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("e3-e2\ne3-d2\nb5-b4\nb6-a6\nc6-d5\nc6-e4\nc6-c5\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\nkB.br\n.p..p\nnqpP.\nPPKP.\n..P..\nRN.Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\nd1-c2\nd1-c1\nd1-d2\ne2-e3\ne2-d3\na3-c2\na3-b1\na3-c4\na3-b5\nb3-b4\nb3-a2\nb3-c2\nb3-a4\nb3-c4\nc3-b4\nc3-d4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\n...n.\np..pr\nk.q..\n.pPpQ\nP....\nR..K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("e4-e3\ne4-e2\ne4-d4\ne4-e5\ne4-e6\ne4-d3\ne4-c2\ne4-b1\ne4-d5\ne4-c6\na5-a4\na5-b4\na6-b6\na6-c6\nd6-d5\nd6-c6\nd6-e6\nd6-c5\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nk.b.r\nq..p.\np.ppn\nPpPQP\n.P..K\nRNB..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-d3\nd4-d3\nd4-d5\nd4-d6\nd4-c3\nd4-e3\nd4-c5\ne4-d3\ne5-d5\ne5-e6\ne5-d6\na6-a5\nb6-d5\nc6-d5\nc6-c5\nc6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("18 W\n.qb..\n.p.r.\nk.ppP\nPp..B\n.PP..\nRN.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("e3-e2\ne3-d2\ne4-d3\ne4-d5\ne4-c6\ne4-d4\ne4-e5\nc5-c4\nc5-b4\na6-a5\nb6-d5\nb6-c4\nd6-d5\nd6-c6\nd6-e6\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 B\nk.b.r\n...p.\n.....\nB.nPp\nPp..q\nR...K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-b2\nc1-b2\nc1-a3\nc1-b1\nc1-d1\nc1-c2\ne1-d1\ne1-e2\ne1-e3\nd2-d3\nc4-a3\nc4-b2\nc4-e3\nc4-a5\nc4-b6\nc4-d6\nb5-b6\nb5-a6\ne5-d5\ne5-c5\ne5-e6\ne5-d4\ne5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 W\nq..nQ\npk.p.\nb.p..\n.p..B\nNPPKP\nR...Q\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("e1-d1\ne1-e2\ne1-e3\ne1-d2\ne4-d3\ne4-c2\ne4-b1\ne4-e3\ne4-d4\na5-c4\na5-b3\na5-c6\nc5-c4\nc5-b4\nd5-d4\nd5-d6\nd5-c4\nd5-c6\na6-b6\na6-c6\na6-d6\ne6-d6\ne6-c6\ne6-b6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 W\n..b.r\npkp.p\nP.Q.n\nP..KP\n.B.P.\nRN...\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a3-b2\nc3-c2\nc3-b3\nc3-d3\nc3-e3\nc3-c4\nc3-c5\nc3-c6\nc3-b2\nc3-d2\nc3-e1\nc3-b4\nc3-a5\nd4-d3\nd4-c4\nd4-e3\nd4-c5\nd4-e5\nb5-c4\nb5-d3\nb5-e2\nb5-c6\nb5-b4\nb5-a5\nb5-c5\na6-a5\nb6-c4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nk.b..\n..qQ.\npppp.\nP.NP.\n.P...\nRB.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d2-d1\nd2-c2\nd2-e2\nd2-d3\nd2-c1\nd2-e1\nd2-c3\nd2-e3\na4-b3\nc4-a3\nc4-b2\nc4-e3\nc4-a5\nc4-e5\nd4-c3\nb5-b4\na6-a5\nb6-a5\nb6-c5\nb6-c6\nd6-d5\nd6-c6\nd6-e6\nd6-c5\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nkq..r\nQ...b\n..p..\n.P.pn\nP..K.\nRNB..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a2-a1\na2-b2\na2-c2\na2-d2\na2-e2\na2-a3\na2-a4\na2-b1\na2-b3\na2-c4\nb4-b3\nb4-c3\na5-a4\nd5-d4\nd5-c5\nd5-e5\nd5-d6\nd5-c4\nd5-e4\nd5-e6\nb6-a4\nb6-c4\nc6-b5\nc6-a4\nc6-c5\nc6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 W\nk..r.\nnp...\np...p\nPPP.q\n.BQK.\nR....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b4-b3\nb4-a3\nc4-c3\nb5-c6\nb5-a5\nb5-b6\nc5-c6\nc5-d4\nc5-e3\nc5-b6\nc5-d6\nd5-d4\nd5-e5\nd5-d6\nd5-e4\nd5-c6\nd5-e6\na6-a5\na6-b6\na6-c6\na6-d6\na6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 W\nk.qb.\n.pp..\np.prp\n..PKP\nRB.P.\n.N.Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-d3\nd4-d3\nd4-c3\nd4-e3\nd4-c5\nd4-e5\ne4-d3\na5-a4\na5-a3\na5-a6\nb5-a4\nb5-a6\nb5-c6\nb5-b4\nb5-c5\nb6-a4\nd6-c6\nd6-e6\nd6-c5\nd6-b4\nd6-a3\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 B\n.Qr..\nk..pp\n..p..\n..N.P\n...P.\nq...K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c1-b1\nc1-d1\nc1-e1\nc1-c2\na2-a1\na2-b2\na2-a3\na2-b1\na2-b3\nd2-d3\ne2-e3\na6-a5\na6-a4\na6-a3\na6-b6\na6-c6\na6-d6\na6-e6\na6-b5\na6-c4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\n.k..r\np...p\nbpp.p\n..Q..\nRBPP.\n.N.nK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-c3\nc4-b4\nc4-a4\nc4-d4\nc4-e4\nc4-b3\nc4-d3\nc4-e2\na5-a4\na5-a3\na5-a6\nb5-a4\nb5-a6\nb5-c6\nb5-b4\nd5-d4\nb6-a4\ne6-e5\ne6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 W\nkq...\n..bP.\np.P.r\nR...p\n..PnP\n..B.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d2-d1\na4-a3\na4-b4\na4-c4\na4-d4\na4-e4\na4-a5\na4-a6\nc5-c4\nc6-b5\nc6-d5\nc6-b6\nc6-d6\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\n.b.r.\np.p.p\nk.P.n\npPN..\n.R...\n..BQK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b4-b3\nb4-a3\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nc4-a5\nc4-b6\nc4-e5\nb5-a5\nb5-c5\nb5-d5\nb5-e5\nb5-b6\nc6-d5\nc6-e4\nc6-c5\nc6-b6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nd6-d1\nd6-c5\nd6-e5\ne6-e5\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 W\n.qb..\n..pp.\nkp..r\nnP..K\n.....\nRN.B.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b4-a3\ne4-e3\ne4-d4\ne4-e5\ne4-d3\ne4-d5\na6-a5\na6-a4\nb6-a4\nb6-d5\nb6-c4\nd6-c5\nd6-e5\nd6-d5\nd6-c6\nd6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 W\nk....\npNr.p\nn..pP\nBb.P.\nP..KQ\nR....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b2-d1\nb2-d3\nb2-c4\na4-b3\na4-c2\na4-b5\na4-c6\na5-b4\nd5-c5\nd5-d6\nd5-c4\nd5-e4\nd5-c6\nd5-e6\ne5-e4\ne5-e6\ne5-d6\na6-b6\na6-c6\na6-d6\na6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\n.q..r\nkp.p.\nB.p.p\n..R.P\n..PbK\n.N.n.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-c1\nb1-d1\nb1-c2\nb1-d3\nb1-e4\ne1-d1\ne1-c1\ne1-e2\na2-a1\na2-a3\na2-b3\nb2-b3\nb2-a3\nd2-d3\nd5-c4\nd5-e4\nd5-c6\nd5-e6\nd5-d4\nd6-b5\nd6-c4\nd6-e4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 W\nkr...\np..pp\n.Q..q\nPp...\n..P..\nRnB.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b3-b2\nb3-b1\nb3-a3\nb3-c3\nb3-d3\nb3-e3\nb3-b4\nb3-a2\nb3-c2\nb3-d1\nb3-c4\nb3-d5\na4-a3\nc5-c4\nc5-b4\na6-a5\na6-b6\nc6-b5\nc6-d5\nc6-e4\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("21 W\nkqr..\nB.p.p\nb..p.\nN..P.\nRP...\n...K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a2-b1\na2-b3\na2-c4\na2-d5\na2-e6\na2-b2\na4-c3\na4-b2\na4-c5\na4-b6\na5-a6\nb5-b4\nd6-d5\nd6-c6\nd6-e6\nd6-c5\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\n.kbr.\np..pQ\n....p\n.n..q\n.Rp..\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("e2-e1\ne2-d2\ne2-e3\ne2-d1\ne2-d3\ne2-c4\nb5-b4\nb5-a5\nb5-c5\nb5-b6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 B\nkQ..r\n...bp\nq..p.\n..P..\nPp..P\nRN.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-b2\ne1-d1\ne1-c1\ne1-b1\nd2-c1\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-d1\nd2-c2\ne2-e3\na3-a2\na3-b3\na3-c3\na3-a4\na3-a5\na3-b2\na3-c1\na3-b4\na3-c5\na3-d6\nd3-d4\nd3-c4\nb5-a6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\n..k.r\n.Ppp.\nbp...\nP..PB\n.P..P\nR...K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c1-b1\nc1-d1\nc1-b2\ne1-d1\ne1-e2\ne1-e3\ne1-e4\nc2-c3\nd2-d3\na3-b2\na3-b4\na3-c5\na3-d6\na3-a2\nb3-b4\nb3-a4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\nk....\n.p.pr\np.BP.\nP.pPp\n.nQKP\nRN...\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\nb2-b3\nb2-c3\nd2-c3\ne2-e1\ne2-e3\nc4-d5\ne4-d5\nb5-d4\nb5-c3\nb5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 B\n.....\np..p.\n.rpPp\n...PP\nk..b.\n.B..K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a2-a3\nb3-b2\nb3-b1\nb3-a3\nb3-b4\nb3-b5\nb3-b6\nc3-c4\nc3-d4\ne3-d4\na5-a4\na5-b5\na5-a6\na5-b4\na5-b6\nd5-c4\nd5-e4\nd5-c6\nd5-e6\nd5-c5\nd5-e5\nd5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 W\nq..nr\np.pPp\nk....\npP.P.\nPQPb.\nR...K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d2-e1\nb4-b3\nb4-a3\nd4-d3\nb5-b6\nb5-a4\nb5-c4\nb5-d3\nb5-e2\nb5-c6\nc5-c4\na6-b6\na6-c6\na6-d6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\nk.Qnb\n.p..r\np....\nq...P\nR..pK\n.....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\nd1-c3\nd1-e3\ne1-d2\ne1-c3\ne1-b4\ne1-a5\nb2-b3\ne2-d2\ne2-c2\ne2-e3\ne2-e4\na4-b4\na4-c4\na4-d4\na4-e4\na4-a5\na4-b3\na4-c2\na4-b5\na4-c6\nd5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\nk..qr\n.p.b.\n.PnpP\n..N.P\nP.P.K\nR.Q..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\nd1-c1\nd1-b1\nd1-c2\nd1-b3\nd1-e2\ne1-e2\ne1-e3\nd2-c1\nd2-e3\nd2-c2\nd2-e2\nc3-a2\nc3-b1\nc3-e2\nc3-a4\nc3-b5\nc3-e4\nc3-d5\nd3-d4\nd3-c4\nd3-e4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 B\nk...r\n.b.N.\n..npp\nP..PP\n.p...\nR..KB\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\ne1-d1\ne1-c1\ne1-b1\ne1-e2\nb2-c1\nb2-a3\nb2-b1\nb2-a2\nb2-c2\nb2-b3\nc3-a2\nc3-b1\nc3-e2\nc3-d1\nc3-a4\nc3-e4\nc3-d5\nd3-e4\ne3-d4\nb5-b6\nb5-a6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 B\n.....\nkQ.N.\n..n.p\np.K..\nq.P..\nR.Q..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a2-a1\na2-b2\na2-a3\na2-b1\na2-b3\nc3-b1\nc3-e2\nc3-d1\nc3-b5\nc3-e4\nc3-d5\ne3-e4\na5-b5\na5-c5\na5-a6\na5-b4\na5-b6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 W\nkqb.r\n..ppp\nQpPn.\n...P.\nPB.KP\nRN...\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a3-a2\na3-a1\na3-b3\na3-a4\na3-b2\na3-c1\na3-b4\na3-c5\na3-d6\nc3-d2\na5-a4\nb5-a4\nb5-c4\nb5-d3\nb5-c6\nb5-b4\nb5-c5\nd5-c5\nd5-d6\nd5-c4\nd5-e4\nd5-c6\nd5-e6\ne5-e4\nb6-a4\nb6-c4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 B\n..k.r\np.P.p\np...b\nR.P.P\n.qp.Q\n.N.BK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c1-b1\nc1-d1\nc1-c2\nc1-b2\nc1-d2\ne1-d1\ne3-d2\ne3-d4\ne3-d3\nb5-b4\nb5-b3\nb5-b2\nb5-b1\nb5-a5\nb5-b6\nb5-a4\nb5-c4\nb5-a6\nb5-c6\nc5-c6\nc5-b6\nc5-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 B\n.k.b.\n.pp.r\nPq.p.\n....B\n..KnP\nR....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-c1\nb1-a2\nd1-c1\nd1-e1\nd1-d2\nb2-a3\nc2-c3\ne2-e1\ne2-d2\ne2-e3\ne2-e4\nb3-a3\nb3-c3\nb3-b4\nb3-b5\nb3-b6\nb3-a2\nb3-a4\nb3-c4\nd3-d4\nd3-e4\nd5-b4\nd5-c3\nd5-e3\nd5-b6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 W\n.Nbn.\nk.p.r\npP.p.\n...KP\n.PPB.\n.R.Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a3\nb1-d2\nb1-c3\nb3-b2\nb3-a2\nb3-c2\nd4-d3\nd4-c4\nd4-c3\nd4-e3\nd4-e5\ne4-e3\ne4-d3\nb5-b4\nc5-c4\nd5-c4\nd5-c6\nd5-e6\nd5-e5\nb6-a6\nb6-c6\nd6-c6\nd6-e6\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 W\nkb...\n.qN.r\n.p.pP\nPp...\n.P...\nR.B.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c2-a1\nc2-e1\nc2-a3\nc2-b4\nc2-d4\na4-a3\na4-b3\na6-a5\na6-b6\nc6-d5\nc6-e4\nc6-c5\nc6-b6\nc6-d6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 B\nk.r..\np..pp\n.PPq.\n.....\n...Kb\n.R...\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-b2\nc1-b1\nc1-d1\nc1-e1\nc1-c2\nc1-c3\na2-a3\na2-b3\nd2-c3\ne2-e3\nd3-c3\nd3-e3\nd3-d4\nd3-d5\nd3-c2\nd3-b1\nd3-c4\nd3-b5\nd3-a6\nd3-e4\ne5-d4\ne5-c3\ne5-d6\ne5-e4\ne5-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\n..kbr\n.QqBp\n.p...\np.P.n\nPP...\nRN.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c1-b1\nc1-b2\nc1-d2\nc2-b2\nc2-d2\nc2-c3\nc2-c4\nc2-b1\nc2-d3\ne2-e3\nb3-b4\nb3-c4\na4-b5\ne4-c3\ne4-d2\ne4-c5\ne4-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 B\nq...r\n...bp\nBkNp.\nq.PPQ\n.....\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-c1\na1-d1\na1-a2\na1-a3\na1-b2\na1-c3\ne1-d1\ne1-c1\ne1-b1\nd2-c1\nd2-c3\nd2-e3\nd2-d1\nd2-c2\ne2-e3\nb3-b2\nb3-a3\nb3-c3\nb3-b4\nb3-a2\nb3-c2\nb3-c4\nd3-c4\nd3-e4\na4-a3\na4-b4\na4-c4\na4-a5\na4-a6\na4-b5\na4-c6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\nqkbrB\n.pN.p\np....\nP.Pp.\n...PP\n..RQK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-a2\nb1-a2\nb1-c2\nc1-d2\nc1-e3\nd1-e1\nd1-d2\nd1-d3\nb2-b3\ne2-e3\nd4-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nk..r.\nq.P..\n.bnPp\n....P\n..BP.\n.N..K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c2-c1\nc2-d1\nd3-d2\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-d6\nc5-c4\nc5-b5\nc5-c6\nd5-d4\nb6-a4\nb6-c4\ne6-e5\ne6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\nkQbnr\n...p.\n.q..p\nP...P\nRpP..\n.N.BK\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-b2\nc1-b2\nc1-a3\nc1-c2\nd1-b2\nd1-c3\ne1-e2\nd2-d3\nb3-b2\nb3-b1\nb3-a3\nb3-c3\nb3-d3\nb3-b4\nb3-a2\nb3-c2\nb3-a4\nb3-c4\nb3-d5\nb3-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\nkBbr.\n...pp\n.ppq.\n...PK\nPpP.P\nRN.Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-b2\nc1-b2\nc1-a3\nc1-c2\nd1-e1\ne2-e3\nb3-b4\nc3-c4\nc3-d4\nd3-e3\nd3-d4\nd3-c2\nd3-b1\nd3-c4\nd3-e4\nb5-a6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 B\n.qb..\n..pPr\npk..P\n.P..P\np.nBN\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-b2\nb1-a2\nc1-b2\nc1-d2\nc1-d1\nc2-c3\ne2-e1\ne2-d2\ne2-e3\na3-a4\na3-b4\nb3-b2\nb3-c3\nb3-b4\nb3-a2\nb3-a4\nb3-c4\na5-a6\nc5-a4\nc5-e4\nc5-d3\nc5-a6\nc5-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.qr\np.bP.\nN.n.Q\n.p...\nPP.BK\nR....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d2-e1\na3-c2\na3-b1\na3-c4\ne3-e2\ne3-e1\ne3-d3\ne3-c3\ne3-e4\ne3-d4\ne3-c5\ne3-b6\na5-a4\na5-b4\nd5-c4\nd5-b3\nd5-a2\nd5-e4\nd5-c6\nd5-e6\nd5-d4\nd5-c5\nd5-d6\ne5-e4\ne5-e6\ne5-d4\ne5-d6\na6-b6\na6-c6\na6-d6\na6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\nkqb..\np.p..\nPK.P.\n...R.\n.P.n.\n.....\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b3-b2\nb3-c3\nb3-b4\nb3-a2\nb3-c2\nb3-a4\nb3-c4\nd3-d2\nd3-c2\nd4-c4\nd4-b4\nd4-a4\nd4-e4\nd4-d5\nb5-b4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 W\n..k.r\np....\n..nPP\nPB...\n..pK.\nR..Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d3-d2\ne3-e2\na4-a3\nb4-a3\nb4-c3\nb4-a5\nb4-c5\nb4-b3\nb4-c4\nb4-b5\nd5-d4\nd5-c5\nd5-e5\nd5-c4\nd5-e4\nd5-c6\nd5-e6\na6-a5\na6-b6\na6-c6\nd6-c6\nd6-b6\nd6-e6\nd6-c5\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\nk..r.\n..P.p\np.b.n\nN.pPp\nP.PK.\nRBQ..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-a2\na1-b2\nd1-c1\nd1-b1\nd1-e1\nd1-d2\nd1-d3\nd1-d4\nc3-b2\nc3-d2\nc3-e1\nc3-b4\nc3-a5\nc3-d4\nc3-b3\nc3-d3\ne3-c2\ne3-d5\nc4-d5\ne4-e5\ne4-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("19 W\n.k..r\np..p.\nP..pn\nPR..q\n..B..\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b4-b3\nb4-b2\nb4-b1\nb4-c4\nb4-d4\nb4-e4\nb4-b5\nb4-b6\nc5-d4\nc5-e3\nc5-b6\nc5-d6\nc5-c4\nc5-b5\nc5-d5\nc5-c6\ne6-e5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nk.b.r\n..p..\np...p\nPqPp.\n..KP.\nRN...\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-c3\nc5-b5\nc5-c6\nc5-b4\nc5-d4\nc5-d6\na6-a5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nkq.r.\n.p.pp\npP.bn\n..QpP\nP..B.\nRN..K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c4-c3\nc4-c2\nc4-c1\nc4-b4\nc4-a4\nc4-d4\nc4-c5\nc4-c6\nc4-d3\nc4-b5\ne4-d3\na5-a4\nd5-c6\nd5-c5\nd5-e5\nd5-d6\nb6-a4\ne6-e5\ne6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 W\n.Q.nr\n...pP\n..Pk.\np.RB.\nPPb.P\n....K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-c1\nb1-d1\nb1-b2\nb1-b3\nb1-b4\nb1-a2\nb1-c2\nb1-d3\ne2-d1\nc3-c2\nc3-d2\nc4-b4\nc4-a4\nc4-c5\nd4-e3\nd4-c5\nd4-e4\nd4-d5\nb5-b4\nb5-a4\ne5-e4\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\nkb..Q\n.p...\n.P.pp\npB..P\nP.P..\nR...K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-a2\nb1-a2\nb1-c2\nb1-c1\nd3-d4\nd3-e4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\n.q..r\nkp..p\np.p.b\nPP.pN\n..PPK\nRB.Q.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b4-b3\nb4-a3\nb4-c3\ne4-c3\ne4-d2\nc5-c4\nc5-d4\ne5-e6\ne5-d4\na6-a5\nb6-a5\nb6-b5\nb6-c6\nd6-c6\nd6-e6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\n...rB\nk.bP.\n.p...\npP..K\nP...P\nRNQ..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d1-c1\nd1-b1\nd1-a1\nd1-e1\nd1-d2\na2-a1\na2-b2\na2-a3\na2-b1\nc2-b1\nc2-d3\nc2-e4\nc2-c1\nc2-b2\nc2-c3\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 W\n.k.nr\n.N.p.\np.p.p\nq..KP\npP...\nR.BQ.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b2-d1\nb2-a4\nb2-d3\nb2-c4\nd4-d3\nd4-c4\nd4-d5\nd4-c3\nd4-e3\nd4-c5\nd4-e5\nb5-b4\nb5-a4\na6-a5\na6-b6\nc6-d5\nc6-c5\nc6-b6\nd6-d5\nd6-e6\nd6-c5\nd6-b4\nd6-a3\nd6-e5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("17 B\n.kb..\n..p..\nQ.P..\n.....\n..P.r\n.q..K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("b1-a1\nb1-b2\nb1-a2\nc1-b2\nc1-a3\nc1-d2\nc1-e3\nc1-d1\ne5-e4\ne5-e3\ne5-e2\ne5-e1\ne5-d5\ne5-c5\ne5-e6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-a6\nb6-c6\nb6-d6\nb6-e6\nb6-a5\nb6-c5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 W\nk.b.r\n..Bpp\nq...n\np.QP.\nP...P\nRN..K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("c2-b1\nc2-d1\nc2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b2\nc2-c3\nc4-c3\nc4-b4\nc4-a4\nc4-c5\nc4-c6\nc4-b3\nc4-a2\nc4-d3\nc4-e2\nc4-b5\nc4-d5\nd4-d3\nd4-e3\ne5-e4\nb6-a4\nb6-d5\ne6-d6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("20 B\n...br\npk.qp\n.pp.Q\nnPP..\nP..PK\n.RB..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d1-c2\nd1-c1\na2-a3\nb2-b1\nb2-c2\nb2-a1\nb2-c1\nb2-a3\nd2-c2\nd2-d3\nd2-d4\nd2-d5\nd2-c1\nd2-e3\nb3-c4\nc3-b4\na4-c5\na4-b6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\nk..r.\np..Pp\n.p.B.\nq...P\n..Pp.\nRN.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-b2\nd1-c1\nd1-b1\nd1-e1\nd1-d2\na2-a3\ne2-e3\ne2-d3\nb3-b4\na4-a3\na4-b4\na4-c4\na4-d4\na4-e4\na4-a5\na4-a6\na4-b5\na4-c6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 W\nk.b..\npp..r\n..n.p\nP.qP.\n.P.QK\nR.B..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a4-a3\nd4-d3\nd4-c3\nd4-e3\nb5-b4\nb5-c4\nd5-c5\nd5-d6\nd5-c4\nd5-e4\nd5-e6\ne5-e4\ne5-e6\ne5-d6\na6-a5\na6-b6\nc6-c5\nc6-b6\nc6-d6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("15 B\nk...Q\np...p\nb...B\nP.p..\nPR.P.\n..K.q\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\na1-b2\na3-b2\na3-c1\na3-b4\na3-c5\na3-d6\na3-b3\nc4-c5\nc4-b5\nc4-d5\ne6-e5\ne6-e4\ne6-e3\ne6-d6\ne6-c6\ne6-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 B\nk.b.r\npp.pp\n.....\n.Pnp.\nPqP.P\nR.BK.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\nc1-b1\nc1-d1\nc1-c2\ne1-d1\na2-a3\nb2-b3\nd2-d3\ne2-e3\nc4-a3\nc4-e3\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nd4-d5\nd4-c5\nd4-e5\nb5-b4\nb5-a5\nb5-c5\nb5-b6\nb5-a4\nb5-a6\nb5-c6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("16 B\nkqr..\npQp.N\nPK..P\n.....\nq....\n.bB..\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b2\nb1-b2\nc1-d1\nc1-e1\na2-b3\nc2-c3\nc2-b3\na5-a4\na5-a3\na5-b5\na5-c5\na5-d5\na5-e5\na5-a6\na5-b4\na5-c3\na5-d2\na5-e1\nb6-c5\nb6-d4\nb6-e3\nb6-b5\nb6-a6\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("13 B\nk.r..\nqp..p\npN..n\n...b.\nP...P\nQ.B.K\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a1-b1\nc1-b1\nc1-d1\nc1-e1\nc1-c2\nc1-c3\nc1-c4\nc1-c5\nc1-c6\na2-b1\na2-b3\na3-a4\ne3-c2\ne3-d1\ne3-c4\ne3-d5\nd4-c3\nd4-c5\nd4-b6\nd4-e5\nd4-d3\nd4-c4\nd4-e4\nd4-d5\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("14 B\n...r.\nppkPp\nqPpPb\n..NK.\n..P..\nR.B.Q\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("d1-c1\nd1-b1\nd1-a1\nd1-e1\nd1-d2\na2-b3\nc2-c1\nc2-d2\nc2-b1\nc2-b3\nc2-d3\ne2-d3\na3-b3\na3-a4\na3-a5\na3-a6\na3-b4\na3-c5\nc3-d4\ne3-d2\ne3-d4\ne3-e4\n", charBuffer) == NULL) {
		return false;
	}
	
	chess_boardSet("12 W\nk.bnr\nR.p.p\n...p.\n.....\n.PqQP\n.B.K.\n");
	chess_moveRandom(charBuffer);
	
	if (strstr("a2-a1\na2-b2\na2-c2\na2-a3\na2-a4\na2-a5\na2-a6\nb5-b4\nd5-d4\nd5-d3\nd5-c5\nd5-c4\nd5-b3\nd5-e4\nd5-c6\nd5-e6\ne5-e4\nb6-a5\nb6-c5\nb6-a6\nb6-c6\nd6-c6\nd6-e6\nd6-c5\n", charBuffer) == NULL) {
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
		return false;
		
	} else if (intLost > 10) {
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
		return false;
		
	} else if (intLost > 10) {
		return false;
		
	}
	
	return true;
}

int test_moveCarbide(char* charLeft, char* charRight, int intNumber) __asm ("test_moveCarbide");
int test_moveCarbide(char* charLeft, char* charRight, int intNumber) {
	__asm volatile("test_moveCarbide_0:     nop        ");
	__asm volatile("test_moveCarbide_1:     nop        ");
	__asm volatile("test_moveCarbide_4:     mov        %rdi,-0x18(%rbp)");
	__asm volatile("test_moveCarbide_8:     mov        %rsi,-0x20(%rbp)");
	__asm volatile("test_moveCarbide_12:    mov        %edx,-0x24(%rbp)");
	__asm volatile("test_moveCarbide_15:    movl       $0x0,-0x4(%rbp)");
	__asm volatile("test_moveCarbide_22:    jmp        test_moveCarbide_136");
	__asm volatile("test_moveCarbide_24:    mov        -0x4(%rbp),%eax");
	__asm volatile("test_moveCarbide_27:    movslq     %eax,%rdx");
	__asm volatile("test_moveCarbide_30:    mov        -0x18(%rbp),%rax");
	__asm volatile("test_moveCarbide_34:    add        %rdx,%rax");
	__asm volatile("test_moveCarbide_37:    movzbl     (%rax),%eax");
	__asm volatile("test_moveCarbide_40:    test       %al,%al");
	__asm volatile("test_moveCarbide_42:    jne        test_moveCarbide_46");
	__asm volatile("test_moveCarbide_44:    jmp        test_moveCarbide_144");
	__asm volatile("test_moveCarbide_46:    mov        -0x4(%rbp),%eax");
	__asm volatile("test_moveCarbide_49:    movslq     %eax,%rdx");
	__asm volatile("test_moveCarbide_52:    mov        -0x18(%rbp),%rax");
	__asm volatile("test_moveCarbide_56:    add        %rdx,%rax");
	__asm volatile("test_moveCarbide_59:    movzbl     (%rax),%edx");
	__asm volatile("test_moveCarbide_62:    mov        -0x4(%rbp),%eax");
	__asm volatile("test_moveCarbide_65:    movslq     %eax,%rcx");
	__asm volatile("test_moveCarbide_68:    mov        -0x20(%rbp),%rax");
	__asm volatile("test_moveCarbide_72:    add        %rcx,%rax");
	__asm volatile("test_moveCarbide_75:    movzbl     (%rax),%eax");
	__asm volatile("test_moveCarbide_78:    cmp        %al,%dl");
	__asm volatile("test_moveCarbide_80:    jle        test_moveCarbide_89");
	__asm volatile("test_moveCarbide_82:    mov        $0x1,%eax");
	__asm volatile("test_moveCarbide_87:    jmp        test_moveCarbide_149");
	__asm volatile("test_moveCarbide_89:    mov        -0x4(%rbp),%eax");
	__asm volatile("test_moveCarbide_92:    movslq     %eax,%rdx");
	__asm volatile("test_moveCarbide_95:    mov        -0x18(%rbp),%rax");
	__asm volatile("test_moveCarbide_99:    add        %rdx,%rax");
	__asm volatile("test_moveCarbide_102:   movzbl     (%rax),%edx");
	__asm volatile("test_moveCarbide_105:   mov        -0x4(%rbp),%eax");
	__asm volatile("test_moveCarbide_108:   movslq     %eax,%rcx");
	__asm volatile("test_moveCarbide_111:   mov        -0x20(%rbp),%rax");
	__asm volatile("test_moveCarbide_115:   add        %rcx,%rax");
	__asm volatile("test_moveCarbide_118:   movzbl     (%rax),%eax");
	__asm volatile("test_moveCarbide_121:   cmp        %al,%dl");
	__asm volatile("test_moveCarbide_123:   jge        test_moveCarbide_132");
	__asm volatile("test_moveCarbide_125:   mov        $0xffffffff,%eax");
	__asm volatile("test_moveCarbide_130:   jmp        test_moveCarbide_149");
	__asm volatile("test_moveCarbide_132:   addl       $0x1,-0x4(%rbp)");
	__asm volatile("test_moveCarbide_136:   mov        -0x4(%rbp),%eax");
	__asm volatile("test_moveCarbide_139:   cmp        -0x24(%rbp),%eax");
	__asm volatile("test_moveCarbide_142:   jl         test_moveCarbide_24");
	__asm volatile("test_moveCarbide_144:   mov        $0x0,%eax");
	__asm volatile("test_moveCarbide_149:   nop        ");
	__asm volatile("test_moveCarbide_150:   nop        ");

}

int test_moveMercury(int intDepth) __asm ("test_moveMercury");
int test_moveMercury(int intDepth) {
	__asm volatile("test_moveMercury_0:     nop        ");
	__asm volatile("test_moveMercury_1:     nop        ");
	__asm volatile("test_moveMercury_4:     nop        ");
	__asm volatile("test_moveMercury_5:     sub        $0x448,%rsp");
	__asm volatile("test_moveMercury_12:    mov        %edi,-0x444(%rbp)");
	__asm volatile("test_moveMercury_18:    nop        ");
	__asm volatile("test_moveMercury_27:    mov        %rax,-0x18(%rbp)");
	__asm volatile("test_moveMercury_31:    xor        %eax,%eax");
	__asm volatile("test_moveMercury_33:    mov        $0x0,%eax");
	__asm volatile("test_moveMercury_38:    callq      chess_winner");
	__asm volatile("test_moveMercury_43:    movsbl     %al,%eax");
	__asm volatile("test_moveMercury_46:    mov        %eax,-0x42c(%rbp)");
	__asm volatile("test_moveMercury_52:    cmpl       $0x0,-0x444(%rbp)");
	__asm volatile("test_moveMercury_59:    jne        test_moveMercury_76");
	__asm volatile("test_moveMercury_61:    mov        $0x0,%eax");
	__asm volatile("test_moveMercury_66:    callq      chess_eval");
	__asm volatile("test_moveMercury_71:    jmp        test_moveMercury_353");
	__asm volatile("test_moveMercury_76:    cmpl       $0x3d,-0x42c(%rbp)");
	__asm volatile("test_moveMercury_83:    jne        test_moveMercury_95");
	__asm volatile("test_moveMercury_85:    mov        $0x0,%eax");
	__asm volatile("test_moveMercury_90:    jmp        test_moveMercury_353");
	__asm volatile("test_moveMercury_95:    cmpl       $0x42,-0x42c(%rbp)");
	__asm volatile("test_moveMercury_102:   jne        test_moveMercury_119");
	__asm volatile("test_moveMercury_104:   mov        $0x0,%eax");
	__asm volatile("test_moveMercury_109:   callq      chess_eval");
	__asm volatile("test_moveMercury_114:   jmp        test_moveMercury_353");
	__asm volatile("test_moveMercury_119:   cmpl       $0x57,-0x42c(%rbp)");
	__asm volatile("test_moveMercury_126:   jne        test_moveMercury_143");
	__asm volatile("test_moveMercury_128:   mov        $0x0,%eax");
	__asm volatile("test_moveMercury_133:   callq      chess_eval");
	__asm volatile("test_moveMercury_138:   jmp        test_moveMercury_353");
	__asm volatile("test_moveMercury_143:   movl       $0x0,-0x428(%rbp)");
	__asm volatile("test_moveMercury_153:   lea        -0x420(%rbp),%rsi");
	__asm volatile("test_moveMercury_160:   mov        $0x0,%eax");
	__asm volatile("test_moveMercury_165:   mov        $0x80,%edx");
	__asm volatile("test_moveMercury_170:   mov        %rsi,%rdi");
	__asm volatile("test_moveMercury_173:   mov        %rdx,%rcx");
	__asm volatile("test_moveMercury_176:   rep stos   %rax,%es:(%rdi)");
	__asm volatile("test_moveMercury_179:   lea        -0x420(%rbp),%rax");
	__asm volatile("test_moveMercury_186:   mov        %rax,%rdi");
	__asm volatile("test_moveMercury_189:   callq      chess_movesShuffled");
	__asm volatile("test_moveMercury_194:   mov        %eax,-0x428(%rbp)");
	__asm volatile("test_moveMercury_200:   movl       $0x80007fff,-0x434(%rbp)");
	__asm volatile("test_moveMercury_210:   movl       $0x0,-0x424(%rbp)");
	__asm volatile("test_moveMercury_220:   movl       $0x0,-0x430(%rbp)");
	__asm volatile("test_moveMercury_230:   jmp        test_moveMercury_333");
	__asm volatile("test_moveMercury_232:   mov        -0x430(%rbp),%edx");
	__asm volatile("test_moveMercury_238:   mov        %edx,%eax");
	__asm volatile("test_moveMercury_240:   add        %eax,%eax");
	__asm volatile("test_moveMercury_242:   add        %edx,%eax");
	__asm volatile("test_moveMercury_244:   add        %eax,%eax");
	__asm volatile("test_moveMercury_246:   lea        -0x420(%rbp),%rdx");
	__asm volatile("test_moveMercury_253:   cltq       ");
	__asm volatile("test_moveMercury_255:   add        %rdx,%rax");
	__asm volatile("test_moveMercury_258:   mov        %rax,%rdi");
	__asm volatile("test_moveMercury_261:   callq      chess_move");
	__asm volatile("test_moveMercury_266:   mov        -0x444(%rbp),%eax");
	__asm volatile("test_moveMercury_272:   sub        $0x1,%eax");
	__asm volatile("test_moveMercury_275:   mov        %eax,%edi");
	__asm volatile("test_moveMercury_277:   callq      test_moveMercury");
	__asm volatile("test_moveMercury_282:   neg        %eax");
	__asm volatile("test_moveMercury_284:   mov        %eax,-0x424(%rbp)");
	__asm volatile("test_moveMercury_290:   mov        $0x0,%eax");
	__asm volatile("test_moveMercury_295:   callq      chess_undo");
	__asm volatile("test_moveMercury_300:   mov        -0x424(%rbp),%eax");
	__asm volatile("test_moveMercury_306:   cmp        -0x434(%rbp),%eax");
	__asm volatile("test_moveMercury_312:   jle        test_moveMercury_326");
	__asm volatile("test_moveMercury_314:   mov        -0x424(%rbp),%eax");
	__asm volatile("test_moveMercury_320:   mov        %eax,-0x434(%rbp)");
	__asm volatile("test_moveMercury_326:   addl       $0x1,-0x430(%rbp)");
	__asm volatile("test_moveMercury_333:   mov        -0x430(%rbp),%eax");
	__asm volatile("test_moveMercury_339:   cmp        -0x428(%rbp),%eax");
	__asm volatile("test_moveMercury_345:   jl         test_moveMercury_232");
	__asm volatile("test_moveMercury_347:   mov        -0x434(%rbp),%eax");
	__asm volatile("test_moveMercury_353:   mov        -0x18(%rbp),%rbx");
	__asm volatile("test_moveMercury_357:   nop        ");
	__asm volatile("test_moveMercury_366:   nop        ");
	__asm volatile("test_moveMercury_368:   nop        ");
	__asm volatile("test_moveMercury_373:   add        $0x448,%rsp");
	__asm volatile("test_moveMercury_380:   nop        ");
	__asm volatile("test_moveMercury_381:   nop        ");
	__asm volatile("test_moveMercury_382:   nop        ");
}

bool test_moveTungsten(int intDepth) __asm ("test_moveTungsten");
bool test_moveTungsten(int intDepth) {
	__asm volatile("test_moveTungsten_0:     nop        ");
	__asm volatile("test_moveTungsten_1:     nop        ");
	__asm volatile("test_moveTungsten_4:     nop        ");
	__asm volatile("test_moveTungsten_5:     sub        $0x458,%rsp");
	__asm volatile("test_moveTungsten_12:    mov        %edi,-0x454(%rbp)");
	__asm volatile("test_moveTungsten_18:    nop        ");
	__asm volatile("test_moveTungsten_27:    mov        %rax,-0x18(%rbp)");
	__asm volatile("test_moveTungsten_31:    xor        %eax,%eax");
	__asm volatile("test_moveTungsten_33:    movl       $0x0,-0x438(%rbp)");
	__asm volatile("test_moveTungsten_43:    lea        -0x420(%rbp),%rsi");
	__asm volatile("test_moveTungsten_50:    mov        $0x0,%eax");
	__asm volatile("test_moveTungsten_55:    mov        $0x80,%edx");
	__asm volatile("test_moveTungsten_60:    mov        %rsi,%rdi");
	__asm volatile("test_moveTungsten_63:    mov        %rdx,%rcx");
	__asm volatile("test_moveTungsten_66:    rep stos   %rax,%es:(%rdi)");
	__asm volatile("test_moveTungsten_69:    lea        -0x420(%rbp),%rax");
	__asm volatile("test_moveTungsten_76:    mov        %rax,%rdi");
	__asm volatile("test_moveTungsten_79:    callq      chess_movesShuffled");
	__asm volatile("test_moveTungsten_84:    mov        %eax,-0x438(%rbp)");
	__asm volatile("test_moveTungsten_90:    movl       $0x80007fff,-0x444(%rbp)");
	__asm volatile("test_moveTungsten_100:   movl       $0x0,-0x434(%rbp)");
	__asm volatile("test_moveTungsten_110:   movl       $0x0,-0x440(%rbp)");
	__asm volatile("test_moveTungsten_120:   movl       $0x0,-0x43c(%rbp)");
	__asm volatile("test_moveTungsten_130:   jmp        test_moveTungsten_288");
	__asm volatile("test_moveTungsten_135:   mov        -0x43c(%rbp),%edx");
	__asm volatile("test_moveTungsten_141:   mov        %edx,%eax");
	__asm volatile("test_moveTungsten_143:   add        %eax,%eax");
	__asm volatile("test_moveTungsten_145:   add        %edx,%eax");
	__asm volatile("test_moveTungsten_147:   add        %eax,%eax");
	__asm volatile("test_moveTungsten_149:   lea        -0x420(%rbp),%rdx");
	__asm volatile("test_moveTungsten_156:   cltq       ");
	__asm volatile("test_moveTungsten_158:   add        %rdx,%rax");
	__asm volatile("test_moveTungsten_161:   mov        %rax,%rdi");
	__asm volatile("test_moveTungsten_164:   callq      chess_move");
	__asm volatile("test_moveTungsten_169:   mov        -0x454(%rbp),%eax");
	__asm volatile("test_moveTungsten_175:   sub        $0x1,%eax");
	__asm volatile("test_moveTungsten_178:   mov        %eax,%edi");
	__asm volatile("test_moveTungsten_180:   callq      test_moveMercury");
	__asm volatile("test_moveTungsten_185:   neg        %eax");
	__asm volatile("test_moveTungsten_187:   mov        %eax,-0x434(%rbp)");
	__asm volatile("test_moveTungsten_193:   mov        $0x0,%eax");
	__asm volatile("test_moveTungsten_198:   callq      chess_undo");
	__asm volatile("test_moveTungsten_203:   mov        -0x434(%rbp),%eax");
	__asm volatile("test_moveTungsten_209:   cmp        -0x444(%rbp),%eax");
	__asm volatile("test_moveTungsten_215:   jne        test_moveTungsten_229");
	__asm volatile("test_moveTungsten_217:   movl       $0xffffffff,-0x440(%rbp)");
	__asm volatile("test_moveTungsten_227:   jmp        test_moveTungsten_255");
	__asm volatile("test_moveTungsten_229:   mov        -0x434(%rbp),%eax");
	__asm volatile("test_moveTungsten_235:   cmp        -0x444(%rbp),%eax");
	__asm volatile("test_moveTungsten_241:   jle        test_moveTungsten_255");
	__asm volatile("test_moveTungsten_243:   mov        -0x43c(%rbp),%eax");
	__asm volatile("test_moveTungsten_249:   mov        %eax,-0x440(%rbp)");
	__asm volatile("test_moveTungsten_255:   mov        -0x434(%rbp),%eax");
	__asm volatile("test_moveTungsten_261:   cmp        -0x444(%rbp),%eax");
	__asm volatile("test_moveTungsten_267:   jle        test_moveTungsten_281");
	__asm volatile("test_moveTungsten_269:   mov        -0x434(%rbp),%eax");
	__asm volatile("test_moveTungsten_275:   mov        %eax,-0x444(%rbp)");
	__asm volatile("test_moveTungsten_281:   addl       $0x1,-0x43c(%rbp)");
	__asm volatile("test_moveTungsten_288:   mov        -0x43c(%rbp),%eax");
	__asm volatile("test_moveTungsten_294:   cmp        -0x438(%rbp),%eax");
	__asm volatile("test_moveTungsten_300:   jl         test_moveTungsten_135");
	__asm volatile("test_moveTungsten_306:   cmpl       $0xffffffff,-0x440(%rbp)");
	__asm volatile("test_moveTungsten_313:   je         test_moveTungsten_426");
	__asm volatile("test_moveTungsten_315:   movq       $0x0,-0x430(%rbp)");
	__asm volatile("test_moveTungsten_326:   movq       $0x0,-0x428(%rbp)");
	__asm volatile("test_moveTungsten_337:   mov        -0x454(%rbp),%ecx");
	__asm volatile("test_moveTungsten_343:   lea        -0x430(%rbp),%rax");
	__asm volatile("test_moveTungsten_350:   mov        $0x7fffffff,%edx");
	__asm volatile("test_moveTungsten_355:   mov        %ecx,%esi");
	__asm volatile("test_moveTungsten_357:   mov        %rax,%rdi");
	__asm volatile("test_moveTungsten_360:   callq      chess_moveAlphabeta");
	__asm volatile("test_moveTungsten_365:   mov        -0x440(%rbp),%edx");
	__asm volatile("test_moveTungsten_371:   mov        %edx,%eax");
	__asm volatile("test_moveTungsten_373:   add        %eax,%eax");
	__asm volatile("test_moveTungsten_375:   add        %edx,%eax");
	__asm volatile("test_moveTungsten_377:   add        %eax,%eax");
	__asm volatile("test_moveTungsten_379:   lea        -0x420(%rbp),%rdx");
	__asm volatile("test_moveTungsten_386:   cltq       ");
	__asm volatile("test_moveTungsten_388:   lea        (%rdx,%rax,1),%rcx");
	__asm volatile("test_moveTungsten_392:   lea        -0x430(%rbp),%rax");
	__asm volatile("test_moveTungsten_399:   mov        $0x5,%edx");
	__asm volatile("test_moveTungsten_404:   mov        %rax,%rsi");
	__asm volatile("test_moveTungsten_407:   mov        %rcx,%rdi");
	__asm volatile("test_moveTungsten_410:   callq      test_moveCarbide");
	__asm volatile("test_moveTungsten_415:   test       %eax,%eax");
	__asm volatile("test_moveTungsten_417:   je         test_moveTungsten_426");
	__asm volatile("test_moveTungsten_419:   mov        $0x0,%eax");
	__asm volatile("test_moveTungsten_424:   jmp        test_moveTungsten_431");
	__asm volatile("test_moveTungsten_426:   mov        $0x1,%eax");
	__asm volatile("test_moveTungsten_431:   mov        -0x18(%rbp),%rbx");
	__asm volatile("test_moveTungsten_435:   nop        ");
	__asm volatile("test_moveTungsten_444:   nop        ");
	__asm volatile("test_moveTungsten_446:   nop        ");
	__asm volatile("test_moveTungsten_451:   add        $0x458,%rsp");
	__asm volatile("test_moveTungsten_458:   nop        ");
	__asm volatile("test_moveTungsten_459:   nop        ");
	__asm volatile("test_moveTungsten_460:   nop        ");
}

bool test_moveAlphabeta() {
	chess_reset();
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("18 B\n.kb.r\n.pP.p\n.Q...\n....P\n.RnpK\n.....\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("18 W\n.q...\npk...\n..p.r\n.P.pK\nP.P..\n.R.B.\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk.b..\n.qp..\n...pP\npPpB.\nPK...\nR...r\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("16 B\nq.br.\n.kpN.\npp...\nPB...\n.P.KP\nRQ...\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk.q.r\n.pp.p\np..b.\nRP..p\n..PPN\n.BQ.K\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("17 B\n...r.\npk..p\n.qp.P\nNPBQb\nP....\n.RK..\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("18 B\nk..b.\nQ.p..\n.prpq\n.BPPp\nP...P\n.R.K.\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk.bnr\np.Qpp\n...P.\n..N..\n..P.P\nRq..K\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("14 B\nk...Q\n..q..\nP....\n.p.Pp\n...PB\nRN.nK\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nkQ.q.\n.p...\np...p\nPPpb.\nR.BPP\n.NQ.K\n");
	
	if (test_moveTungsten(1) != true) {
		return false;
	}
	
	chess_boardSet("11 B\nk..nr\np..P.\nPpp.p\nP..QP\nRB.P.\n.N..K\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("11 B\nkq.N.\n.pp.r\n...b.\np....\nPPPBP\nRQ..K\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("12 B\n.k.n.\npPb..\n..ppr\n..NP.\n.PQK.\nR..B.\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("12 W\nk..n.\np.qbr\n....p\n.P..P\n..PB.\n.R.QK\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("17 B\n.k...\np..rp\n..Ppn\npP.B.\n.RPKP\n....Q\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("13 B\n.kb.q\n.p.pr\n..pPN\nPQP.K\n.P..P\n.R...\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("17 B\nb....\n.....\n.pNPp\nP...Q\nP.PKk\nRB...\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("19 W\n.kr..\n....p\np.nP.\nP...q\n....P\n...RK\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("15 W\nk..r.\n..p.p\np...p\nP.K.P\n.qP.Q\nR.B..\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("15 W\nkq.br\np...p\n.Pp..\nnR.PK\n...B.\n.N.q.\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("18 W\n.q..r\npkppN\nb.P.p\n..QP.\np...P\nB..RK\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("13 W\n.b..r\np.q.p\nQ.p.p\nk.PP.\nBP..P\nR...K\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("16 W\n.q...\npk.Br\n.pn.p\nP.b..\n..P.Q\nR..K.\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("11 B\n..bnr\npk..p\n.pp..\n..P..\nPP..K\n.R...\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("21 W\n...br\n.k...\n....p\n.Pp.p\nP....\n..RK.\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("17 W\n...br\np..pp\nk.pPQ\nP.K..\n....n\nRN...\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("18 W\nk....\n.p..r\n....Q\nqP..B\nPP..P\nR..K.\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("12 W\nq...r\npkb.p\n.pP..\nN.P..\nPB.nK\nR....\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("18 B\nk....\nR.pr.\nP.b.p\n....P\n..PPp\n.B.K.\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("14 W\nknr..\n..pPp\n.....\nqpBP.\nPP..Q\nR...K\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("14 W\nk...r\nbp.pp\n.....\nPpn..\n..P.K\n..q..\n");

	if (test_moveTungsten(1) != true) {
		return false;
	}

	chess_boardSet("17 W\nq..r.\n.p..p\nkp..b\n.p..P\nP...K\n..RQ.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("19 W\nqbr..\nk.P.p\n....n\n.RpP.\n..B..\nq..K.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("11 B\nk.bn.\npNqr.\n.p..p\n.PQp.\nP..PP\nRB..K\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("20 B\n.k...\n...br\npKp.p\nP.q..\n....P\nnN...\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("15 W\nk..nr\np.qpp\nb....\nppP.P\n.BQP.\nRN..K\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("12 B\nkqb.r\nppp.p\n.P.pn\nPKPPB\n....P\nRN.Q.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("16 B\nk..q.\np.p.R\n..b.B\n.pp.P\nP....\n...K.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("19 W\n.kq..\npP..r\n...pp\n.Pb.P\nBKPp.\n....R\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("19 B\nn....\nNpk.r\np..R.\nPpP.P\n....P\n.BQ.K\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("17 W\n.N.b.\n..p.r\n.k.pp\n....P\nPB.PQ\n.R..K\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("12 W\nk..br\n...p.\npppqN\n..P.p\nPP..P\nRBQK.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("16 B\n...r.\nk...p\npp.pb\n..P.P\nn..Q.\n..B.K\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("18 B\n.kbr.\n.....\nQ..B.\n..P..\np..NP\n...K.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("20 W\n.k..r\n.n.bp\nQP..P\n..p..\n..P.B\n...qK\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("14 B\nk.qr.\n.pp.p\nb...P\n..p..\n...p.\nRN.K.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("17 W\n....q\n.k..r\nppp.p\nPPp.b\n.RPP.\n.Q.K.\n");

	if (test_moveTungsten(2) != true) {
		return false;
	}

	chess_boardSet("15 W\n.kqQr\n.pp.p\np.p.P\nN.B.P\nPP...\nR...K\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("20 W\n..r..\nb.kPn\n...p.\npP.K.\nP..P.\n.R...\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("18 B\nqb.rN\nn...P\n.p.P.\n..B..\nP.kQ.\nR...K\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("13 B\nk..nr\n..bpp\np.P..\n..P.P\nP...q\nRB.K.\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("16 B\nq.b.r\n.kp.p\np....\nP....\nB.P..\nR.Q.K\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("21 W\n...nr\npk.qp\nP.p..\nR.PPP\n..BK.\n.N...\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("21 W\nk.br.\nP..pp\nq.p.P\npB...\n..PP.\nR..K.\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("18 W\nkb...\npp...\nq...r\n.....\np...B\nR..K.\n");

	if (test_moveTungsten(3) != true) {
		return false;
	}

	chess_boardSet("20 W\n..r..\nn....\nP...p\n.....\n..k..\nRN..K\n");

	if (test_moveTungsten(4) != true) {
		return false;
	}

	return true;
}
