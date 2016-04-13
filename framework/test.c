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
	
	chess_boardSet("40 W\n.....\n.k...\n.qr..\n.....\n..p..\n.R...\n");
	
	if (chess_winner() != 'B') {
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
	char charBuffer[1024] = { };
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() != 0) {
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() != 0) {
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() >= 0) {
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() <= 0) {
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d W\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() <= 0) {
			return false;
		}
	}
	
	for (int intFor1 = 1; intFor1 < 40; intFor1 += 1) {
		sprintf(charBuffer, "%d B\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n", intFor1);
		
		chess_boardSet(charBuffer);
		
		if (chess_eval() >= 0) {
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
	if (test_movesCompare(intBuffer, charBuffer, "a2-a3\nb2-b3\nc2-c3\nd2-d3\ne2-e3\nb1-a3\nb1-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk.bnr\n..N.p\nBp...\n.p.q.\nP..P.\n.R.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-b6\nd6-b5\nd6-c4\nd6-e4\ne5-e4\nb3-b2\nb3-a2\nd3-d4\nd3-d5\nd3-c3\nd3-e3\nd3-d2\nd3-c4\nd3-b5\nd3-e4\nd3-c2\nd3-b1\nd3-e2\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nkb..r\n..p.p\nQ.PPP\nP....\n.B.P.\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-a5\nb6-c6\nb6-b5\ne6-d6\ne6-c6\nc5-d4\ne5-d4\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\n.Nb..\n.k..r\n.ppPp\n....P\nPPPQ.\nR.B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a4\nb6-d5\nb6-c4\nd4-d5\nd4-e5\na2-a3\nb2-b3\nc2-c3\nd2-d3\nd2-e2\nd2-d1\nd2-c3\nd2-b4\na1-b1\nc1-b1\nc1-d1\ne1-e2\ne1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.k.nr\nppbqp\n.P..P\nP.pB.\nR.PK.\n.N...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nd6-c4\nd6-e4\na5-a4\na5-b4\nc5-b4\nc5-d4\nc5-e3\nc5-c6\nc5-c4\nd5-d4\nd5-d3\nd5-c6\nd5-c4\nd5-b3\nd5-a2\nd5-e4\nc3-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\n....r\n..p.p\nqkp..\n...b.\nP.PBP\n..RK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a2-a3\nc2-c3\nc2-d3\nd2-c3\nd2-b4\nd2-e3\nd2-e1\ne2-e3\ne2-d3\nc1-b1\nc1-a1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("21 W\n.....\n.k.b.\n.pP.N\np.nrB\nP..R.\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b5\nc4-d5\ne4-c5\ne4-d6\ne4-c3\ne3-d4\ne3-c5\ne3-b6\ne3-e2\nd2-d3\nd2-c2\nd2-b2\nd2-e2\nd2-d1\ne1-e2\ne1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\n..rb.\n..k.p\n.p.p.\nPPRP.\n...K.\n...Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nd6-e6\nd6-d5\nc5-b5\nc5-d5\nc5-c4\nc5-b6\ne5-e4\nb4-a3\nb4-c3\nd4-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\nk....\n.pp.r\n..K.b\n.ppn.\n....R\nqNB.Q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-b4\nc4-d4\nc4-c3\nc4-b5\nc4-d5\nc4-b3\nc4-d3\ne2-e3\ne2-e4\ne2-d2\ne2-c2\ne2-b2\ne2-a2\nb1-a3\nb1-d2\nb1-c3\nc1-b2\nc1-a3\nc1-d2\nc1-e3\nc1-c2\nc1-d1\ne1-d1\ne1-d2\ne1-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\nk...r\nppb..\n....p\nP.pPP\n..P.B\n.R.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\ne6-d6\ne6-c6\ne6-b6\ne6-e5\na5-a4\nb5-b4\nc5-b6\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\nc5-c6\nc5-d5\nc5-c4\ne4-d3\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\n...q.\nRkpbp\n..PrP\n...p.\n...PK\n...n.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c6\nd6-b6\nd6-a6\nd6-e6\nb5-b6\nb5-a5\nb5-b4\nb5-a6\nb5-c6\nb5-a4\nb5-c4\nd5-c6\nd5-e6\nd5-c4\nd5-e4\nd4-c4\nd4-e4\nd3-e2\nd1-b2\nd1-c3\nd1-e3\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\n.k..r\n..P.p\nB....\nR.p..\n...KP\n.N...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b6\na4-b5\na4-c6\na4-b3\na4-c2\na4-d1\na4-a5\na4-b4\na3-b3\na3-c3\na3-a2\na3-a1\nd2-d3\nd2-c2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\ne2-e3\nb1-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\n.qk..\npr...\n...p.\nP.PBp\n.P..p\nRN.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c5\nc6-d6\nc6-c5\nc6-d5\na5-a4\nb5-c5\nb5-d5\nb5-e5\nb5-b4\nb5-b3\nb5-b2\nd4-c3\ne2-e1\ne2-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nkb.nr\n....p\n.pN..\np.p.P\nPP..K\nR.B..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-d2\ne3-e4\nb2-b3\nb2-a3\nb2-c3\ne2-d2\ne2-e1\ne2-d3\ne2-d1\na1-b1\nc1-d2\nc1-c2\nc1-b1\nc1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\nk..br\n.p..p\np.p.P\nB...p\nP.qN.\nRQ..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nd6-c5\nd6-b4\nd6-a3\nd6-c6\nd6-d5\nb5-b4\nc4-c3\ne3-e2\ne3-d2\nc2-c3\nc2-b2\nc2-a2\nc2-d2\nc2-c1\nc2-b3\nc2-d3\nc2-e4\nc2-b1\nc2-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk..nr\n.qp.p\npP...\nP.Q.P\nRP.K.\n....B\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nd6-c4\nd6-e4\nb5-b6\nb5-a5\nb5-b4\nb5-c6\nb5-c4\nb5-d3\nb5-e2\nc5-c4\nc5-b4\ne5-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nkr..b\np..N.\n.Bpp.\n.q..P\nP...P\n.R..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-b6\nd5-c3\nb4-a5\nb4-c5\nb4-d6\nb4-a3\nb4-c3\nb4-d2\nb4-b5\nb4-a4\ne3-e4\ne3-d4\na2-a3\na2-b3\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk.q.r\np...p\n...pb\np..P.\nPBpQP\n.R.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-e4\nb2-a3\nb2-c3\nb2-d4\nb2-a1\nb2-c1\nb2-b3\nd2-c2\nd2-c3\nd2-b4\nd2-a5\nd2-e3\nd2-c1\nd2-e1\ne2-e3\nb1-a1\nb1-c1\nd1-c1\nd1-e1\nd1-c2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk.br.\n..q..\n.p..Q\nn....\np.PPB\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nc6-b6\nd6-e6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nc5-b5\nc5-a5\nc5-d5\nc5-e5\nc5-c4\nc5-c3\nc5-c2\nc5-b6\nc5-d4\nc5-e3\nb4-b3\na3-c4\na3-b5\na3-c2\na3-b1\na2-a1\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\nkr...\n..QPp\n.P...\n..q..\nPBPn.\n.R.bK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-b4\ne5-e4\nc3-c4\nc3-c5\nc3-b3\nc3-a3\nc3-d3\nc3-e3\nc3-c2\nc3-b4\nc3-d4\nc3-b2\nd2-b3\nd2-c4\nd2-e4\nd2-b1\nd1-c2\nd1-e2\nd1-c1\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\n.q.nr\nkp..p\n..p..\n..b..\n..PQP\nq.RK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d2-d3\nd2-d4\nd2-d5\nd2-d6\nd2-c3\nd2-e3\nd2-e1\ne2-e3\nc1-b1\nc1-a1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\nk....\n.pbpr\n.P..P\n.Pp..\n..P.Q\nqN..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nc5-b6\nc5-d6\nc5-b4\nc5-d4\nc5-e3\nc5-c6\nc5-c4\nd5-d4\nd5-e4\ne5-e6\ne5-e4\na1-a2\na1-a3\na1-a4\na1-a5\na1-b1\na1-b2\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.k.N.\np.r..\nb...Q\npP..P\n..P.P\nR.B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nc5-c6\nc5-b5\nc5-d5\nc5-e5\nc5-c4\nc5-c3\nc5-c2\na4-b5\na4-c6\na4-b3\na4-b4\na3-a2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nk..br\n..p..\n..p.p\nRP..P\n..p.K\n..B..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-a4\na3-a5\na3-a6\na3-a2\na3-a1\nb3-b4\nb3-c4\ne2-d2\ne2-e1\ne2-d3\ne2-d1\nc1-b2\nc1-d2\nc1-b1\nc1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\nk..nr\np.p.p\nP....\npQpP.\n..P..\nR.qK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nd6-b5\nd6-c4\nd6-e4\nc5-c4\ne5-e4\na3-a2\nc1-c2\nc1-b1\nc1-a1\nc1-d1\nc1-b2\nc1-d2\nc1-e3\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nkqbr.\n.ppp.\nP.PB.\nP....\n...Pn\n...RK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-a5\nd6-e6\nb5-b4\nb5-a4\nb5-c4\nc5-d4\nd5-c4\ne2-c3\ne2-d4\ne2-c1\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\n...nr\nQk.p.\np.PPp\nP....\n.pP.N\n..RBK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a6\na5-b5\na5-a4\na5-b6\na5-b4\na5-c3\na5-d2\nc4-c5\nc4-b5\nc4-d5\nc2-c3\ne2-c3\nc1-b1\nc1-a1\nd1-d2\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk....\np...p\n..QpP\nP..P.\n.r.K.\nRN.q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-c6\nc4-b4\nc4-a4\nc4-d4\nc4-c3\nc4-c2\nc4-c1\nc4-b5\nc4-a6\nc4-d5\nc4-e6\nc4-b3\nc4-a2\na3-a4\nd2-c2\nd2-e2\nd2-d1\nd2-c3\nd2-e3\nd2-c1\nd2-e1\na1-a2\nb1-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nk..b.\npp.r.\n.R.Kp\nB.P..\nPnPq.\n.....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b5\nb4-a4\nb4-c4\nb4-b3\nb4-b2\nd4-d5\nd4-c4\nd4-e4\nd4-d3\nd4-c5\nd4-e5\nd4-e3\na3-b2\na3-a4\na3-b3\nc3-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.....\np.pNB\nQp..p\n.bk.P\n.P..q\n.R..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-b6\nd5-b4\nd5-c3\ne5-d6\ne5-d4\ne5-c3\ne5-e6\na4-a5\na4-b4\na4-a3\na4-a2\na4-a1\na4-b5\na4-c6\na4-b3\nb2-c3\nb1-a1\nb1-c1\nb1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nq...r\nk.n..\np...P\n.bp..\nP.Bp.\n.R..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-e5\na2-a3\na2-b3\nc2-b3\nc2-d3\nc2-d1\nc2-b2\nc2-c1\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\nk...r\n...qp\npR.P.\nP.Kb.\n...BP\n.Q...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b5\nb4-b6\nb4-a4\nb4-c4\nb4-b3\nb4-b2\nd4-e5\nc3-c4\nc3-b3\nc3-d3\nc3-c2\nc3-b2\nd2-e3\nd2-c1\nd2-e1\nd2-c2\nd2-d1\ne2-e3\ne2-d3\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nb1-d1\nb1-e1\nb1-a2\nb1-c2\nb1-d3\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\n..r..\n.k.pb\n.Q...\n..n.P\nP..KP\nRN...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-e6\nc6-c5\nc6-c4\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nb5-a6\nb5-a4\nb5-c4\nd5-d4\ne5-d6\ne5-d4\ne5-e6\ne5-e4\nc3-a4\nc3-e4\nc3-a2\nc3-b1\nc3-e2\nc3-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nk.qnr\n..p.P\np....\n.BQp.\nP..P.\nRq..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-d6\nb3-a4\nb3-c4\nb3-d5\nb3-e6\nb3-c2\nb3-d1\nb3-b4\nb3-a3\nb3-b2\nc3-c4\nc3-c5\nc3-d3\nc3-c2\nc3-c1\nc3-b4\nc3-a5\nc3-d4\nc3-b2\na2-a3\na1-b1\ne1-e2\ne1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("21 W\n....r\n....Q\np.k.q\np.P.P\nRp...\n.NB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-e6\ne5-d5\ne5-c5\ne5-b5\ne5-a5\ne5-e4\ne5-d6\ne5-d4\na2-a3\na2-b2\na2-a1\nb1-a3\nb1-d2\nc1-b2\nc1-d2\nc1-c2\nc1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk...r\n.N.qP\n.....\np..pP\n..bK.\n.R.n.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\ne6-d6\ne6-c6\ne6-b6\ne6-e5\nd5-d6\nd5-c5\nd5-b5\nd5-e5\nd5-d4\nd5-c6\nd5-c4\nd5-b3\nd5-a2\nd5-e4\na3-a2\nc2-b3\nc2-a4\nc2-b1\nc2-c3\nc2-b2\nc2-c1\nd1-b2\nd1-c3\nd1-e3\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkq.br\n..p.p\n.p.pn\nP.pPP\n..Q..\nRN.BK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-a4\na3-b4\nd3-e4\ne3-d4\nc2-c3\nc2-b2\nc2-a2\nc2-d2\nc2-e2\nc2-c1\nc2-b3\nc2-a4\na1-a2\nb1-d2\nb1-c3\nd1-e2\nd1-d2\nd1-c1\ne1-e2\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\nk..qr\n...pp\np..b.\n.P...\n..Pn.\nR..QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-a4\nc2-c3\na1-a2\na1-a3\na1-a4\na1-b1\na1-c1\nd1-d2\nd1-c1\nd1-b1\nd1-e2\ne1-e2\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk.qbr\n.Np.p\n.pP..\nP..p.\n.P.KP\n..Bn.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-d6\nb5-d4\nb5-c3\na3-a4\na3-b4\nb2-b3\nd2-d3\nd2-c2\nd2-d1\nd2-c3\nd2-e3\nd2-e1\ne2-e3\ne2-d3\nc1-c2\nc1-b1\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\n...Q.\nk..pr\nR..Pp\n..NK.\n.nP..\n..B.Q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a6\na5-b5\na5-a4\na5-b6\na5-b4\ne5-e6\ne4-e3\ne4-d3\nb2-a4\nb2-d3\nb2-c4\nb2-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\nk...r\nPpN.b\n....p\nR..p.\n.p.BP\n...QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-a6\nc5-e6\nc5-a4\nc5-b3\nc5-e4\nc5-d3\na3-a4\na3-b3\na3-c3\na3-d3\na3-a2\na3-a1\nd2-c3\nd2-b4\nd2-e3\nd2-c1\nd2-c2\ne2-e3\ne2-d3\nd1-c1\nd1-b1\nd1-a1\nd1-c2\nd1-b3\nd1-a4\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.r.\np...p\nP.Q.P\n..p..\n..B.P\nq...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\nc4-c6\nc4-b4\nc4-d4\nc4-c3\nc4-b5\nc4-a6\nc4-d5\nc4-e6\nc4-b3\nc4-a2\nc4-d3\nc2-b3\nc2-d3\nc2-b1\nc2-d1\nc2-b2\nc2-d2\nc2-c1\ne2-e3\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("21 W\n.n...\n.kPPQ\npp...\nbP..P\nP.B.K\n..q..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nc5-b6\nd5-d6\ne5-e6\ne5-e4\ne5-d6\ne5-d4\ne5-c3\ne5-b2\ne5-a1\nb3-a4\ne3-e4\nc2-d3\nc2-e4\nc2-b1\nc2-d1\nc2-c3\nc2-b2\nc2-d2\ne2-d2\ne2-e1\ne2-d3\ne2-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk..b.\n..p.r\npq..p\n.p.PK\nP...N\n...BR\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-d4\nd3-e4\ne3-e4\ne3-d4\ne3-d2\na2-a3\na2-b3\ne2-c3\ne2-d4\ne2-c1\nd1-c2\nd1-b3\nd1-d2\nd1-c1\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.br\np...p\nP.pp.\n..n.P\nR..PQ\n.NB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e3-e4\ne3-d4\na2-a3\na2-b2\na2-c2\na2-a1\nd2-d3\nd2-c3\ne2-d3\ne2-c4\ne2-d1\nb1-a3\nb1-c3\nc1-b2\nc1-a3\nc1-c2\nc1-d1\ne1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\nkq..K\n..p..\np...p\nP...P\nP.P.b\n.RBQ.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-b4\nb6-b3\nb6-b2\nb6-b1\nb6-a5\nc5-c4\ne2-d3\ne2-c4\ne2-b5\ne2-d1\ne2-d2\ne2-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nk.b.r\n..pp.\nNp...\n...pP\nP.PK.\nRQq..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-c5\na4-b6\na4-c3\na4-b2\ne3-e4\na2-a3\nc2-c3\nc2-d3\nd2-d3\nd2-e2\nd2-d1\nd2-c3\nd2-c1\nd2-e1\nb1-b2\nb1-b3\nb1-b4\nb1-c1\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\nkb..r\npp.qp\n..p.P\n.PP..\nPBN.Q\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-c5\nb6-d4\nb6-e3\nb6-c6\ne6-d6\ne6-c6\na5-a4\nb5-b4\nd5-d6\nd5-c5\nd5-d4\nd5-d3\nd5-d2\nd5-d1\nd5-c6\nd5-e4\nc4-b3\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk.qr.\n.pp..\n.P...\npb..p\nP.PQP\n.R..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nc6-b6\nc6-d5\nc6-e4\nd6-e6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nc5-c4\nc5-b4\nb3-a4\nb3-c4\nb3-d5\nb3-e6\nb3-a2\nb3-c2\nb3-c3\nb3-b2\ne3-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\n.b...\nk.p.r\n..PPP\np.P..\nP..NK\n..R.q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\na5-a6\na5-b5\na5-a4\na5-b4\nc5-d4\ne5-e6\ne5-d5\ne5-e4\ne1-e2\ne1-d1\ne1-c1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.k.r.\nP...p\np..P.\n.P...\nRP...\n..B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nb6-c5\nd6-c6\nd6-e6\nd6-d5\nd6-d4\ne5-e4\ne5-d4\na4-a3\na4-b3\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk..nr\nPqQ.b\np.p..\n.....\nPBP.P\n.R.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nd6-e4\nb5-b6\nb5-a5\nb5-c5\nb5-b4\nb5-b3\nb5-b2\nb5-c6\ne5-d4\ne5-c3\ne5-b2\ne5-d5\ne5-e4\na4-a3\nc4-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.br..\nkq.R.\np....\n..p.B\nP.P.K\n.n.Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-d6\nd5-c5\nd5-b5\nd5-e5\nd5-d4\nd5-d3\nd5-d2\ne3-d4\ne3-c5\ne3-b6\ne3-d2\ne3-c1\ne3-e4\ne3-d3\na2-a3\ne2-d2\ne2-e1\ne2-d3\nd1-d2\nd1-d3\nd1-d4\nd1-c1\nd1-b1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n..r..\nkNq.b\np....\n...p.\nPnP.K\nRQ...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-e6\na5-a6\na5-b5\na5-b6\na5-b4\nc5-b5\nc5-d5\nc5-c4\nc5-c3\nc5-c2\nc5-b6\nc5-d6\nc5-b4\nc5-a3\nc5-d4\nc5-e3\ne5-d6\ne5-d4\ne5-c3\ne5-e6\ne5-d5\ne5-e4\na4-a3\nd3-d2\nd3-c2\nd3-e2\nb2-c4\nb2-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.kb..\n...rQ\npp..p\nQ...P\np.PP.\n.R.K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-b5\nb6-a5\nb6-c5\nc6-b5\nc6-d6\nc6-c5\nd5-d6\nd5-c5\nd5-b5\nd5-a5\nd5-e5\nd5-d4\nd5-d3\nd5-d2\nb4-b3\nb4-a3\na2-a1\na2-b1\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\nk..n.\np.rq.\n.PR.p\n....P\n...PK\n...Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nd6-b5\nd6-c4\na5-a4\na5-b4\nc5-c6\nc5-b5\nc5-c4\nd5-e5\nd5-d4\nd5-d3\nd5-d2\nd5-c6\nd5-e6\nd5-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\nkb.qr\npp.Qp\nBR..n\nP.p.N\n..P.p\n...K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-c5\nb6-d4\nb6-e3\nb6-c6\nd6-c6\nd6-d5\nd6-c5\nd6-b4\na5-b4\nb5-a4\ne4-c5\ne4-d2\ne2-e1\ne2-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n..b.r\n.nk.p\npPpQ.\nP....\n.P.P.\nRNB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-d5\nc6-e4\nc6-b6\nc6-d6\ne6-d6\nb5-d6\nb5-a3\nb5-d4\nb5-c3\nc5-d5\nc5-b6\nc5-d6\nc5-b4\nc5-d4\ne5-e4\ne5-d4\nc4-c3\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk...r\np.b.p\n.pNp.\n.PQP.\nP.P.P\nRBqK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nc4-d2\nc3-b4\nc3-d4\nc3-b2\nc3-d2\nc3-e1\na2-a3\ne2-e3\nb1-b2\nd1-d2\nd1-c1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\nk...r\n.pPbp\np.p..\n.N...\nP.P.K\nR.Bn.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-c6\nb3-a5\nb3-d4\nb3-d2\na2-a3\nc2-c3\ne2-e3\ne2-d2\ne2-e1\ne2-d3\ne2-d1\na1-b1\nc1-b2\nc1-a3\nc1-d2\nc1-e3\nc1-b1\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nbkr..\n..P.Q\n.p.P.\n.p...\nR.PK.\n...B.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-b6\ne5-e6\ne5-d5\ne5-e4\ne5-e3\ne5-e2\ne5-e1\ne5-d6\nd4-d5\na2-a3\na2-a4\na2-a5\na2-a6\na2-b2\na2-a1\nc2-c3\nc2-b3\nd2-d3\nd2-e2\nd2-c3\nd2-e3\nd2-c1\nd2-e1\nd1-e2\nd1-c1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nk..r.\nK.P.N\n.....\n...p.\nP.P.P\nR.qQ.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a5-a6\na5-b5\na5-a4\na5-b6\na5-b4\nc5-c6\nc5-d6\ne5-c6\ne5-c4\ne5-d3\na2-a3\nc2-c3\nc2-d3\ne2-e3\ne2-d3\na1-b1\na1-c1\nd1-d2\nd1-d3\nd1-c1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("17 B\nk.N.r\np.p..\n..n.p\n.p.BP\nP..K.\nR....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\ne6-d6\ne6-c6\ne6-e5\na5-a4\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-e3\nc4-d2\ne4-d3\nb3-b2\nb3-a2\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n..q.r\nPkb..\npBppp\n..N..\n..PPP\n.R.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-d6\nc6-d5\ne6-d6\ne6-e5\nb5-b6\nb5-a5\nb5-b4\nb5-a6\nc5-b6\nc5-d6\nc5-b4\nc5-d5\na4-a3\nd4-d3\nd4-c3\ne4-e3\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk....\n.p.b.\n.qnp.\n.PP.r\n....B\n.R..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\nd5-c6\nd5-e6\nd5-e4\nd5-d6\nd5-c5\nd5-e5\nb4-a4\nb4-b3\nb4-a5\nb4-c5\nb4-d6\nb4-a3\nb4-c3\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-d2\nd4-d3\nd4-c3\ne3-e4\ne3-e5\ne3-e6\ne3-d3\ne3-c3\ne3-e2\n") != true) {
		return false;
	}
	
	chess_boardSet("16 B\n...br\nk...p\n.pp.P\n.P...\nq..P.\n.QB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c5\nd6-c6\nd6-d5\na5-a6\na5-b5\na5-a4\na5-b6\nc4-c3\nc4-b3\na2-a3\na2-a4\na2-b2\na2-c2\na2-d2\na2-a1\na2-b3\na2-b1\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nQ.Q..\nk..qp\n.Pp..\nP....\n.n.Pp\nRN..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\na6-c4\nc6-b6\nc6-d6\nc6-e6\nc6-c5\nc6-c4\nc6-b5\nc6-a4\nc6-d5\nb4-b5\nb4-a5\na3-a4\nd2-d3\na1-a2\nb1-c3\ne1-e2\ne1-d1\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\nq...r\nkp.Bp\nP..b.\n...P.\nP.Pp.\nRNK..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d5-c6\nd5-e6\nd5-c4\nd5-b3\nd5-e4\nd5-d6\nd5-c5\na4-b5\na2-a3\nc2-c3\nb1-a3\nb1-d2\nb1-c3\nc1-d1\nc1-b2\nc1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk.qbr\np..pp\nPpRp.\n.....\n.P.NB\n....K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nc6-b6\nc6-c5\nc6-c4\nc6-b5\nc6-a4\nd6-c5\nd5-c4\ne5-e4\nb4-b3\nd4-d3\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.qb.r\nk.Pp.\n...Pp\n.p..P\n.PN.K\nRQ...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c5-b6\nc2-a3\nc2-b4\nc2-e1\ne2-d2\ne2-e1\ne2-d3\ne2-d1\na1-a2\na1-a3\na1-a4\na1-a5\nb1-c1\nb1-d1\nb1-e1\nb1-a2\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\n.k.r.\n..p..\n.pP.p\n.Q..P\nPpB..\n...RK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nd6-c6\nd6-e6\nd6-d5\nd6-d4\nd6-d3\nd6-d2\nd6-d1\nb2-b1\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\n..qr.\np.p.p\n....N\n.k.Pp\nP...Q\n...RK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b6\nc6-a6\nc6-b5\nc6-a4\nc6-d5\nc6-e4\nd6-e6\nd6-d5\nd6-d4\nd6-d3\na5-a4\nc5-c4\nb3-b4\nb3-a3\nb3-c3\nb3-b2\nb3-a4\nb3-c4\nb3-a2\nb3-c2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\n.k.n.\n..pp.\n.b...\n.B..P\n.P.K.\n.RQ..\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-b5\nb6-a5\nd6-b5\nd6-c4\nd6-e4\nc5-c4\nd5-d4\nb4-a5\nb4-a3\nb4-c3\nb4-d2\nb4-b5\nb4-a4\nb4-c4\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\nk.br.\n.pp..\n.P.pp\nN.P.P\n.p...\n.R.QK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-c5\na3-c4\na3-b5\na3-c2\nc3-c4\nc3-d4\ne3-d4\nb1-b2\nb1-a1\nb1-c1\nd1-d2\nd1-d3\nd1-d4\nd1-c1\nd1-c2\nd1-b3\nd1-a4\nd1-e2\ne1-e2\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\nq.bnr\n.k.p.\np....\n.P..P\nR.Q..\n.N..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-a4\ne3-e4\na2-a3\na2-a4\na2-b2\na2-a1\nc2-c3\nc2-c4\nc2-c5\nc2-c6\nc2-b2\nc2-d2\nc2-e2\nc2-c1\nc2-d3\nc2-e4\nc2-d1\nb1-a3\nb1-d2\nb1-c3\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("16 W\nkqr..\np....\nP.Pp.\n.bn.p\nQ...P\n.R.BK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-c5\na2-a3\na2-b2\na2-c2\na2-d2\na2-a1\na2-b3\nb1-b2\nb1-b3\nb1-a1\nb1-c1\nd1-c2\nd1-b3\nd1-d2\nd1-c1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nk..nr\n....p\npbp..\nP.Pp.\n.PQK.\nR....\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a3-b4\nc3-b4\nb2-b3\nc2-c1\nc2-b3\nc2-a4\nc2-d3\nc2-b1\nc2-d1\nd2-d3\nd2-e2\nd2-d1\nd2-e3\nd2-c1\nd2-e1\na1-a2\na1-b1\na1-c1\na1-d1\na1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk..r.\nq.bp.\np.PNp\n.R..P\nP.PPQ\n...K.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-b5\nd6-c6\nd6-b6\nd6-e6\na5-b5\na5-b6\na5-b4\na5-c3\na5-d2\nc5-b6\nc5-b4\nc5-a3\nc5-d4\nc5-c6\nc5-b5\nd5-c4\na4-a3\na4-b3\n") != true) {
		return false;
	}
	
	chess_boardSet("11 B\n.kbnr\n.p.qp\np...Q\nN.P..\nPPP.P\nR.BK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-a5\nb6-c5\nc6-c5\nd6-c4\nd6-e4\nb5-b4\nd5-c5\nd5-d4\nd5-d3\nd5-d2\nd5-d1\nd5-c4\nd5-b3\nd5-a2\nd5-e4\n") != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.q.br\nk..np\n.p..P\n.P.p.\n..PQK\n.B...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e4-d5\nc2-c3\nc2-d3\nd2-d3\nd2-d1\nd2-c3\nd2-b4\nd2-e3\nd2-c1\nd2-e1\ne2-e3\ne2-e1\ne2-d3\ne2-d1\nb1-a2\nb1-b2\nb1-a1\nb1-c1\n") != true) {
		return false;
	}
	
	chess_boardSet("13 B\n..bn.\np.p.B\nk.P..\n....p\nP..PP\nRN..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c6-b5\nc6-d5\nc6-e4\nc6-b6\nd6-b5\nd6-c4\nd6-e4\na4-b4\na4-a3\na4-b5\na4-b3\ne3-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk..br\n..pp.\n...Qp\n.q.BP\nPP.pP\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d4-d5\nd4-c4\nd4-b4\nd4-a4\nd4-e4\nd4-c5\nd4-e5\nd4-c3\nd3-c4\nd3-b5\nd3-a6\nd3-e4\nd3-c2\nd3-b1\nd3-c3\na2-a3\na2-b3\na1-b1\na1-c1\na1-d1\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("20 B\nkr...\n.n.pp\np....\nNQPP.\nq....\n.bB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-d6\nb6-e6\nb5-d6\nb5-a3\nb5-d4\nb5-c3\nd5-d4\ne5-e4\na4-b3\na2-a3\na2-b2\na2-c2\na2-d2\na2-e2\na2-a1\na2-b3\nb1-c2\nb1-d3\nb1-b2\nb1-a1\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk.r..\nq...p\npPp.P\nP.KB.\n.b.P.\nn..Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-b5\nb4-a5\nc3-c4\nc3-b3\nc3-c2\nc3-d4\nc3-b2\nd3-c4\nd3-c2\nd3-b1\nd3-e2\nd3-d4\nd3-e3\nd1-c1\nd1-b1\nd1-a1\nd1-e1\nd1-c2\nd1-b3\nd1-a4\nd1-e2\n") != true) {
		return false;
	}
	
	chess_boardSet("18 B\nkr...\n.....\n..PBN\nqp..P\nP..K.\nR..Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\na6-b5\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-b4\na3-a4\na3-a5\na3-a2\na3-b4\na3-c5\na3-d6\na3-b2\na3-c1\nb3-b2\nb3-a2\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\n.Q...\n.kP..\npP..p\n..P..\n.Rq..\n..B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b6-a6\nb6-c6\nb6-d6\nb6-e6\nb6-b5\nb6-a5\nc5-c6\nc3-c4\nb2-b3\nb2-a2\nb2-c2\nb2-b1\nc1-d2\nc1-e3\nc1-b1\nc1-d1\ne1-e2\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\n...br\nn.pkp\n.B...\nP..P.\n....Q\n..KR.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b4-a5\nb4-c5\nb4-c3\nb4-d2\nb4-e1\nb4-b5\nb4-a4\nb4-c4\nb4-b3\na3-a4\nd3-d4\ne2-e3\ne2-e4\ne2-e5\ne2-d2\ne2-c2\ne2-b2\ne2-a2\ne2-e1\nc1-c2\nc1-b1\nc1-b2\nc1-d2\nd1-d2\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("14 B\nkq.nr\n.pp..\np..Kb\nP.P.P\nR..BQ\n.N...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-a5\nb6-c6\nb6-a5\nd6-c4\ne6-e5\nb5-b4\nc5-c4\nc5-d4\ne4-d5\ne4-c6\ne4-d3\ne4-c2\ne4-b1\ne4-e5\n") != true) {
		return false;
	}
	
	chess_boardSet("19 W\nrk...\npb.p.\nBPp.q\nN.K.P\nP..P.\n....R\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a4-b5\na4-b3\na4-c2\na4-d1\nb4-a5\na3-c4\na3-b5\na3-c2\na3-b1\nc3-c4\nc3-b3\nc3-d3\nc3-c2\nc3-d4\nc3-b2\nd2-d3\ne1-e2\ne1-d1\ne1-c1\ne1-b1\ne1-a1\n") != true) {
		return false;
	}
	
	chess_boardSet("19 B\nk.bq.\n..n.r\np.p..\n.R.pp\n.P.BP\n.NQK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b6\na6-a5\na6-b5\nc6-b5\nc6-d5\nc6-e4\nc6-b6\nd6-e6\nd6-d5\nd6-d4\nc5-e6\nc5-b3\nc5-e4\ne5-e6\ne5-d5\ne5-e4\na4-a3\na4-b3\nc4-c3\nc4-b3\nd3-e2\ne3-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 W\nq..nr\nkPp..\n..N.p\npb..P\nP....\n.RBQK\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-b6\nb5-a6\nc4-a5\nc4-b6\nc4-e5\nc4-d6\nc4-a3\nc4-b2\nc4-d2\na2-b3\nb1-b2\nb1-b3\nb1-a1\nc1-b2\nc1-a3\nc1-d2\nc1-c2\nd1-d2\nd1-d3\nd1-d4\nd1-d5\nd1-d6\nd1-c2\nd1-b3\nd1-e2\ne1-e2\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("15 B\nkq..r\np.pn.\nPp.Bp\nb..PP\n...N.\nR...K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "a6-b5\nb6-c6\nb6-d6\nb6-b5\ne6-d6\ne6-c6\ne6-e5\nc5-c4\nc5-d4\nd5-c3\nd5-e3\nb4-b3\ne4-d3\na3-b2\na3-c1\na3-b3\na3-a2\n") != true) {
		return false;
	}
	
	chess_boardSet("12 B\n...nr\n..b..\npq.p.\nPPk.p\n..P.P\nRB..K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-b5\nd6-c4\nd6-e4\ne6-e5\ne6-e4\nc5-b6\nc5-c6\nc5-b5\nc5-d5\nc5-c4\na4-b3\nb4-b5\nb4-b6\nb4-c4\nb4-b3\nb4-a5\nb4-a3\nd4-d3\nc3-c4\nc3-b3\nc3-d3\nc3-c2\nc3-b2\nc3-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk..n.\n.p.br\np.Bpp\nP.p..\n..PNK\n.R.Q.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "c4-b5\nc4-d5\nc4-b3\nc4-a2\nc4-d3\nc4-c5\nc4-b4\nd2-b3\nd2-e4\ne2-e3\ne2-e1\ne2-d3\nb1-b2\nb1-b3\nb1-b4\nb1-b5\nb1-a1\nb1-c1\nd1-c1\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("20 W\n....r\n.nk.b\n.p.pp\nqK.PB\nR..NP\n....Q\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-b4\nb3-a3\nb3-c3\nb3-b2\nb3-a4\nb3-c4\nb3-c2\nd3-e4\ne3-d4\na2-a3\na2-b2\na2-c2\na2-a1\nd2-c4\nd2-e4\nd2-b1\ne1-d1\ne1-c1\ne1-b1\ne1-a1\n") != true) {
		return false;
	}
	
	chess_boardSet("18 W\nk.b..\npP...\n.p..n\n.....\nP.BpQ\n..RK.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b5-b6\nb5-a6\nb5-c6\na2-a3\nc2-b3\nc2-a4\nc2-d3\nc2-e4\nc2-b1\nc2-c3\nc2-b2\ne2-e3\ne2-e4\ne2-d2\ne2-e1\ne2-d3\ne2-c4\nc1-b1\nc1-a1\nd1-d2\nd1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkqb..\n.p..N\np.p.n\n.PprP\nP..K.\nR.BQ.\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "e5-c6\ne5-c4\ne5-d3\nb3-b4\nb3-a4\nb3-c4\na2-a3\nd2-d3\nd2-c2\nd2-e2\nd2-c3\nd2-e1\na1-b1\nc1-b2\nc1-a3\nc1-c2\nc1-b1\nd1-e1\nd1-c2\nd1-e2\n") != true) {
		return false;
	}
	
	chess_boardSet("14 W\nk.q.r\nn..p.\np...p\nPB.PP\n.PQK.\n.R...\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "b3-a4\nb3-c4\nb3-d5\nb3-a2\nb3-b4\nb3-c3\nd3-d4\nd3-e4\nc2-c3\nc2-c4\nc2-c5\nc2-c6\nc2-c1\nc2-d1\nd2-e2\nd2-d1\nd2-c3\nd2-c1\nd2-e1\nb1-a1\nb1-c1\nb1-d1\nb1-e1\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk..Qr\npq...\nPp.p.\nn..pP\n..P.Q\n..B.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d6-c6\nd6-b6\nd6-a6\nd6-e6\nd6-d5\nd6-d4\nd6-c5\nd6-b4\nd6-e5\na4-b5\ne3-e4\ne3-d4\nc2-c3\nc2-d3\ne2-d2\ne2-d3\ne2-d1\nc1-b2\nc1-a3\nc1-d2\nc1-b1\nc1-d1\ne1-d1\ne1-d2\n") != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk...r\np.p.p\nq....\n...P.\nbPNQP\n.RB.K\n");
	
	intBuffer = chess_moves(charBuffer);
	if (test_movesCompare(intBuffer, charBuffer, "d3-d4\nb2-b3\nc2-a3\nc2-b4\nc2-e3\nc2-d4\nc2-a1\nd2-d1\nd2-c3\nd2-b4\nd2-a5\nd2-e3\ne2-e3\nb1-a1\nc1-d1\ne1-d1\n") != true) {
		return false;
	}
	
	return true;
}

bool test_move() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_move("c2-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 B\nkqbnr\nppppp\n.....\n..P..\nPP.PP\nRNBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nq...r\npkp.p\n...pn\nN.Q..\nR..BP\n....K\n");
	chess_move("a5-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nq...r\n.kp.p\np..pn\nN.Q..\nR..BP\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nkb...\n.....\n..P.p\n...Pp\n..P.P\n.QK..\n");
	chess_move("b6-d4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk....\n.....\n..Pbp\n...Pp\n..P.P\n.QK..\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.....\nkbqpr\nppp.p\n...PP\nPPPQK\nRB...\n");
	chess_move("c2-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.....\nkbqpr\nppp.p\n..PPP\nPP.QK\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\nk.b.r\npp...\n.qpPQ\n...P.\n.BP..\nRN..K\n");
	chess_move("d3-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nk.b.r\npp...\n.qPPQ\n.....\n.BP..\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk.r..\np.q.p\n.b...\nNPP.K\nP..P.\n.B.RQ\n");
	chess_move("c5-e3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk.r..\np...p\n.b...\nNPP.q\nP..P.\n.B.RQ\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.kb.r\nPp..p\n.Bp.P\n.pNPq\nR..nK\n...Q.\n");
	chess_move("a5-a6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nQkb.r\n.p..p\n.Bp.P\n.pNPq\nR..nK\n...Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nQk..r\n..bqp\n..ppP\n..p..\n.P.PB\nRN..K\n");
	chess_move("c3-c2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nQk..r\n..bqp\n..ppP\n.....\n.PpPB\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\nk..nr\n.....\n..pqp\nP.PP.\n...Q.\nR...K\n");
	chess_move("d2-c2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\nk..nr\n.....\n..pqp\nP.PP.\n..Q..\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..b..\nk..Nr\npB..n\npq.Pp\n....P\n.R.QK\n");
	chess_move("e1-d2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..b..\nk..Nr\npB..n\npq.Pp\n...KP\n.R.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n.kr..\n...nQ\n.pp.p\n.P.p.\nBR.P.\n...K.\n");
	chess_move("c6-e6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.k..r\n...nQ\n.pp.p\n.P.p.\nBR.P.\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nkR...\n..p.p\nP.nPb\n....B\nP.P.K\n...Q.\n");
	chess_move("c2-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkR...\n..p.p\nP.nPb\n..P.B\nP...K\n...Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n.k.n.\np.b..\n..p.N\n.....\nPPp..\nR..qK\n");
	chess_move("c5-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.k.n.\npb...\n..p.N\n.....\nPPp..\nR..qK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nk...r\np.b..\n..pp.\nB.P..\nR..q.\n....K\n");
	chess_move("a3-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk...r\np.B..\n..pp.\n..P..\nR..q.\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nk..qr\npP..p\n..n..\n.Pp.p\n..P..\n.R.K.\n");
	chess_move("c4-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk..qr\npP..p\n.....\n.Pp.p\n.nP..\n.R.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nk.r..\nP...p\n..p..\n..P..\n.PpPK\nRb...\n");
	chess_move("a6-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.kr..\nP...p\n..p..\n..P..\n.PpPK\nRb...\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk...r\npqp..\nN....\n....n\nRP.KP\n..B..\n");
	chess_move("d2-d1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk...r\npqp..\nN....\n....n\nRP..P\n..BK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\nkn..r\n.bP.p\n...P.\n.....\n..P.P\nq...K\n");
	chess_move("c5-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\nkQ..r\n.b..p\n...P.\n.....\n..P.P\nq...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkbr..\np...p\n..npP\npP.PK\nP....\nq.Q.B\n");
	chess_move("e1-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkbr..\np...p\n.BnpP\npP.PK\nP....\nq.Q..\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk.r..\n.pqb.\n.PP.p\np.n.Q\nPBp.P\n.R..K\n");
	chess_move("e3-c1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk.r..\n.pqb.\n.PP.p\np.n..\nPBp.P\n.RQ.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n..qbr\n.kp.p\n.pn.P\n.R.P.\nP..B.\n...QK\n");
	chess_move("a2-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n..qbr\n.kp.p\n.pn.P\nPR.P.\n...B.\n...QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n...q.\n..prp\npkP..\nP....\n.BPPK\nR..Q.\n");
	chess_move("d5-d2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n...q.\n..p.p\npkP..\nP....\n.BPrK\nR..Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nq.br.\n.Qppp\n.k...\n....n\np.PP.\nRNB.K\n");
	chess_move("b4-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nq.br.\n.Qppp\nk....\n....n\np.PP.\nRNB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk..br\n....p\n.pp.q\nPpPPp\n.RB..\n.N.KQ\n");
	chess_move("a6-a5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n...br\nk...p\n.pp.q\nPpPPp\n.RB..\n.N.KQ\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk.b..\n.npp.\n.P..B\npPQ..\n...r.\nR..K.\n");
	chess_move("a3-a2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk.b..\n.npp.\n.P..B\n.PQ..\np..r.\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n.kbnr\nq.pp.\nB.NPp\n..p.P\nP..K.\nq.Q..\n");
	chess_move("a1-a2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n.kbnr\nq.pp.\nB.NPp\n..p.P\nq..K.\n..Q..\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n.qb.r\nk.p.p\np.P.Q\n.....\nP..Pp\n.NR.K\n");
	chess_move("b6-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n..b.r\nk.p.p\npqP.Q\n.....\nP..Pp\n.NR.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n...nr\np..kp\nPK...\n.P.Pb\nR.P.q\n.N...\n");
	chess_move("e2-c2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n...nr\np..kp\nPK...\n.P.Pb\nR.q..\n.N...\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n.q.br\n..p.p\np.k.p\n..P.P\npP.QN\nR.B.K\n");
	chess_move("b6-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n...br\n..p.p\np.k.p\n..P.P\npq.QN\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n....r\nk..p.\nb.n.P\n.PP.P\n.p...\nR..BK\n");
	chess_move("e4-d5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n....r\nk..P.\nb.n..\n.PP.P\n.p...\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.k.nr\nb..p.\n....p\nNp.PP\n..q.Q\n....K\n");
	chess_move("a3-c2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.k.nr\nb..p.\n....p\n.p.PP\n..N.Q\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk...b\npP..p\n.....\nPPrPN\nR....\n...BK\n");
	chess_move("a2-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk...b\npP..p\n.....\nPPrPN\n.R...\n...BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n..kr.\n..pp.\nQ...p\nP...P\nP.PPK\nR.B..\n");
	chess_move("d5-d4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n..kr.\n..p..\nQ..pp\nP...P\nP.PPK\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nkb...\n..np.\np.rPp\nNRP.P\n.....\n.Q.K.\n");
	chess_move("a6-a5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.b...\nk.np.\np.rPp\nNRP.P\n.....\n.Q.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nNk.br\n....p\nPpnp.\n.P.p.\nBP..P\n..R.K\n");
	chess_move("a6-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.k.br\n..N.p\nPpnp.\n.P.p.\nBP..P\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n.kbn.\n....Q\n.p...\np...r\nPPPp.\nRB.NK\n");
	chess_move("d6-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.kb..\n....Q\n.pn..\np...r\nPPPp.\nRB.NK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\nk....\nRp..p\n.Qp.q\n.P.PP\n.B.K.\n");
	chess_move("a4-a2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n....r\nk....\n.p..p\n.Qp.q\nRP.PP\n.B.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk.r..\n.qppp\n.p.KP\nPb...\nPR...\n.NB..\n");
	chess_move("d4-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.r..\n.qppp\n.pK.P\nPb...\nPR...\n.NB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk..br\nq.ppp\n.p..N\nPP.BP\n..P..\n.R.QK\n");
	chess_move("d5-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\nk..br\nq.p.p\n.p..p\nPP.BP\n..P..\n.R.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk.b.r\np.K.p\n....q\nPP...\n....P\nRN.Q.\n");
	chess_move("c5-d6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk.bKr\np...p\n....q\nPP...\n....P\nRN.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nq...r\n..kb.\np..Pp\nP..Pn\n...R.\n..BQK\n");
	chess_move("d1-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nq...r\n..kb.\nQ..Pp\nP..Pn\n...R.\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.q...\nkpb.r\n..p.p\nPQp..\nRP.BP\n....K\n");
	chess_move("b6-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n..q..\nkpb.r\n..p.p\nPQp..\nRP.BP\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\n.kb..\n...pr\np.p..\n..P..\n.P.n.\nRB.K.\n");
	chess_move("c6-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.k...\n..bpr\np.p..\n..P..\n.P.n.\nRB.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk..nr\npp.b.\nq....\nQPP.p\nPBP.P\n..R.K\n");
	chess_move("b5-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..nr\np..b.\nqp...\nQPP.p\nPBP.P\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.kbnr\n..qp.\n.ppPp\nP.NBP\n..p.K\nR..Q.\n");
	chess_move("a3-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.kbnr\n..qp.\n.PpPp\n..NBP\n..p.K\nR..Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk..nr\n...Q.\np.p.p\nPb..P\n.BPK.\nR....\n");
	chess_move("d2-e1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk..nr\n...Q.\np.p.p\nPb..P\n.BP..\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nkb...\np...r\n..nPp\nppQ..\nP.p.K\n.R...\n");
	chess_move("b1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nkb...\np...r\n..nPp\nppQ..\nPRp.K\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n...br\nk...p\nN....\nq.PP.\n..R.p\n.B..K\n");
	chess_move("d6-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n....r\nk.b.p\nN....\nq.PP.\n..R.p\n.B..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk....\nn.r.p\nN.ppQ\nPq...\n.PP.K\nR..B.\n");
	chess_move("c2-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk....\nn.r.p\nN.ppQ\nPP...\n.P..K\nR..B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nk...r\npP...\n..nqp\n.P...\nB.PP.\n.R.QK\n");
	chess_move("c4-e3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nk...r\npP...\n...qp\n.P..n\nB.PP.\n.R.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk..b.\n.ppN.\np...Q\nP....\nP.pK.\nR.B..\n");
	chess_move("c5-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk..b.\n.p.N.\np.p.Q\nP....\nP.pK.\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nkqrn.\n..p.Q\n.....\n...P.\np.PQ.\n.RK..\n");
	chess_move("c5-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nkqrn.\n....Q\n..p..\n...P.\np.PQ.\n.RK..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk....\np...b\nP.np.\n.qp.p\n.QRPP\n..K..\n");
	chess_move("b2-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk....\np...b\nP.np.\n.qp.p\n..RPP\n.QK..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n..kr.\np.p.b\n..n.p\np.P..\nP.RPp\n...K.\n");
	chess_move("d6-e6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n..k.r\np.p.b\n..n.p\np.P..\nP.RPp\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nk.Rr.\npN.p.\nP..bp\n...Qq\n.....\n..q.K\n");
	chess_move("c1-e1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk.Rr.\npN.p.\nP..bp\n...Qq\n.....\n....q\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.k..r\n.nb..\n..QPp\npP.PK\nP....\nR....\n");
	chess_move("e6-e5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.k...\n.nb.r\n..QPp\npP.PK\nP....\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.q.r.\npbppp\n.p..n\n.PkP.\nPQ..P\nR..BK\n");
	chess_move("a1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.q.r.\npbppp\n.p..n\n.PkP.\nPQ..P\n.R.BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n..k..\n.npp.\nqp..P\n.P.P.\nP.PK.\nR....\n");
	chess_move("d2-e2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\n..k..\n.npp.\nqp..P\n.P.P.\nP.P.K\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nk.bn.\n.p...\np.q.r\nQ...B\nP..p.\nR...K\n");
	chess_move("c4-e2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk.bn.\n.p...\np...r\nQ...B\nP..pq\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkq.br\np.Bpp\n.pp..\nP.nP.\n..P..\n.R..K\n");
	chess_move("b1-b2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq.br\np.Bpp\n.pp..\nP.nP.\n.RP..\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.bnr\n..ppp\n...qP\n.P.P.\n..PB.\n.NQ.K\n");
	chess_move("d4-e4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.bnr\n..ppp\n....q\n.P.P.\n..PB.\n.NQ.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\n....r\nkp..p\np..qQ\nP.PP.\n.nBK.\nRN...\n");
	chess_move("e4-c6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n..Q.r\nkp..p\np..q.\nP.PP.\n.nBK.\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk..n.\n.qp..\np.N.r\nPP.p.\n..P..\n..R.K\n");
	chess_move("e1-d1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nk..n.\n.qp..\np.N.r\nPP.p.\n..P..\n..RK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkb.r.\n..p..\npPQpp\nn...P\nPP.P.\n.RBK.\n");
	chess_move("a6-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n.b.r.\n.kp..\npPQpp\nn...P\nPP.P.\n.RBK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk..nr\n..qp.\n.pb.p\nPP.QP\n..q.K\nR....\n");
	chess_move("d3-d2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk..nr\n..qp.\n.pb.p\nPP..P\n..qQK\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkb...\n.p.p.\n...Pn\nPpp.K\nR.PN.\n.B..Q\n");
	chess_move("e3-d3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkb...\n.p.p.\n...Pn\nPppK.\nR.PN.\n.B..Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nr....\npknpp\n..B.Q\nP.p..\n.PP..\nR...K\n");
	chess_move("a1-a2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nr....\npknpp\n..B.Q\nP.p..\nRPP..\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n..k.r\np...P\n...b.\n.....\nq.nK.\n.BQN.\n");
	chess_move("c1-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n..k.r\np...P\n...b.\nQ....\nq.nK.\n.B.N.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nkbqn.\np....\n.P.K.\n.pP..\n.P.r.\nRN...\n");
	chess_move("c6-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nkb.n.\np.q..\n.P.K.\n.pP..\n.P.r.\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.....\npk.pr\n.p.Pp\n...PP\nPN...\nR..QK\n");
	chess_move("b5-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.k...\np..pr\n.p.Pp\n...PP\nPN...\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk..r.\nP.p.p\np....\n..nPP\n.Pp..\nR.BQK\n");
	chess_move("e1-e2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk..r.\nP.p.p\np....\n..nPP\n.Pp.K\nR.BQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nk.br.\npn...\nQppPN\n....P\nPP...\n.R.BK\n");
	chess_move("c6-d5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk..r.\npn.b.\nQppPN\n....P\nPP...\n.R.BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n..krb\np....\n.p..P\n.pn.P\nB....\nQR..K\n");
	chess_move("c6-d5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n...rb\np..k.\n.p..P\n.pn.P\nB....\nQR..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nNk...\np.r..\n...pn\n....P\nq.P.P\n....K\n");
	chess_move("a6-c5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n.k...\np.N..\n...pn\n....P\nq.P.P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkb...\npn.r.\nPp...\n.pPBP\n.P..p\n..RK.\n");
	chess_move("d3-d4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nkb...\npn.r.\nPp.B.\n.pP.P\n.P..p\n..RK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.k..r\n.pb..\n.....\np.n.B\nP...P\n...RK\n");
	chess_move("c5-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.k..r\n.p...\n.b...\np.n.B\nP...P\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk.Q.r\n.n...\n..b.p\nP...q\n.P.PP\nR.B.K\n");
	chess_move("c1-d1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk.Q.r\n.n...\n..b.p\nP...q\n.P.PP\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n...q.\n..P..\n.p..p\npPk.P\nP.p.K\n..R..\n");
	chess_move("d6-a6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nq....\n..P..\n.p..p\npPk.P\nP.p.K\n..R..\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk.bnr\n...pp\n.B..q\nP..p.\n.PK.P\nRN...\n");
	chess_move("b4-a5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk.bnr\nB..pp\n....q\nP..p.\n.PK.P\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n.k..r\nppp.q\n..b..\n.P.BP\nPNP..\nRn..K\n");
	chess_move("a1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\n.k..r\nppp.q\n..b..\n.P.BP\nPNP..\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nq..nr\np.k.p\n.p.pN\nPP.Pb\n.RPpB\n....K\n");
	chess_move("a3-b4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nq..nr\np.k.p\n.P.pN\n.P.Pb\n.RPpB\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nq....\n.kpbp\nr.n..\nP..KP\n..p..\nRN.B.\n");
	chess_move("d3-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nq....\n.kpbp\nr.n..\nP.K.P\n..p..\nRN.B.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nkq...\npP...\nR..r.\n..P.p\n..P.K\n....Q\n");
	chess_move("e1-b1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nkq...\npP...\nR..r.\n..P.p\n..P.K\n.Q...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.k.r.\n.p.p.\nB....\n..P.b\nP..QP\nRN..K\n");
	chess_move("b5-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n.k.r.\n...p.\np....\n..P.b\nP..QP\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.b..r\n.kpp.\n.pn.p\n.P..B\n..NPP\nR.QK.\n");
	chess_move("c2-a3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.b..r\n.kpp.\n.pn.p\nNP..B\n...PP\nR.QK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nk....\npnp..\nbpNpq\nBPPpr\nP..Q.\nR...K\n");
	chess_move("a1-d1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nk....\npnp..\nbpNpq\nBPPpr\nP..Q.\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n...Q.\n.k..r\nN.pp.\n..P.p\nPP.PP\nR.B.K\n");
	chess_move("d6-a6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nQ....\n.k..r\nN.pp.\n..P.p\nPP.PP\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\n...Qr\np...q\np...p\nNk...\n.pP.K\n..R..\n");
	chess_move("d6-e5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 B\n....r\np...Q\np...p\nNk...\n.pP.K\n..R..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\nk.b.r\nn.q.p\npp...\n..PPP\nP.Q.K\nRB...\n");
	chess_move("a6-b5");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n..b.r\nnkq.p\npp...\n..PPP\nP.Q.K\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n...qb\nk.rnp\n.pPK.\nNP..P\nP...B\n..R..\n");
	chess_move("d6-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\n.q..b\nk.rnp\n.pPK.\nNP..P\nP...B\n..R..\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nqkbn.\n.ppqr\n..p..\nK...P\nPP...\nR..Q.\n");
	chess_move("a3-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\nqkbn.\n.ppqr\nK.p..\n....P\nPP...\nR..Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n.k.br\nPp.q.\n..p.p\nPBP.p\nR...K\n.NQ..\n");
	chess_move("a5-b6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.Q.br\n.p.q.\n..p.p\nPBP.p\nR...K\n.NQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\n.q...\nNk...\n..b.r\n.PP.p\nP....\nR.QBK\n");
	chess_move("e3-e2");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.q...\nNk...\n..b.r\n.PP..\nP...p\nR.QBK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n...n.\np.kQ.\nb.p.r\n.P.Kq\nP..P.\nRN...\n");
	chess_move("c4-b3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n...n.\np.kQ.\nb...r\n.p.Kq\nP..P.\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkbr..\np.q..\n..PQN\nPPp.K\n....P\nRB...\n");
	chess_move("c6-d6");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkb.r.\np.q..\n..PQN\nPPp.K\n....P\nRB...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nkqr..\n.pp.b\n.B...\n.PP.p\n..Q.P\nRN..K\n");
	chess_move("c5-c4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nkqr..\n.p..b\n.Bp..\n.PP.p\n..Q.P\nRN..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk..n.\nB.p..\np.Ppr\nP..P.\nqQ..K\nR...b\n");
	chess_move("b2-c3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk..n.\nB.p..\np.Ppr\nP.QP.\nq...K\nR...b\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n...n.\nk...p\np.Qp.\nP....\nR.PP.\nQ..bK\n");
	chess_move("d1-c1");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n...n.\nk...p\np.Qp.\nP....\nR.PP.\nQ.b.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n.kb.r\n..ppp\n.....\nPpq..\nR.PQP\n..B.K\n");
	chess_move("a3-a4");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.kb.r\n..ppp\nP....\n.pq..\nR.PQP\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.k..r\npbppp\n....B\n.P...\n.p.KP\n.....\n");
	chess_move("e4-e3");
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.k..r\npbppp\n.....\n.P..B\n.p.KP\n.....\n") != 0) {
		return false;
	}
	
	return true;
}

bool test_undo() {
	char charBuffer[1024] = { };
	
	chess_reset();
	chess_move("b2-b3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.kQr.\n...p.\nQ.pq.\n.pn.B\nP..KP\nR....\n");
	chess_move("c3-d1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.kQr.\n...p.\nQ.pq.\n.pn.B\nP..KP\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n..qn.\np.B.r\n.kN.p\n.....\nPP.pP\n..RK.\n");
	chess_move("c4-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n..qn.\np.B.r\n.kN.p\n.....\nPP.pP\n..RK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.qQ..\npkp..\nP.n.r\n.P...\n.pP.P\n..B.K\n");
	chess_move("c1-b1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.qQ..\npkp..\nP.n.r\n.P...\n.pP.P\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk.Qbr\n.....\n..pp.\nn.pPp\nP.P.P\n.R.QK\n");
	chess_move("a3-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk.Qbr\n.....\n..pp.\nn.pPp\nP.P.P\n.R.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n...br\n..p.p\nq....\n.P.kK\n....P\n.R...\n");
	chess_move("a4-a3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n...br\n..p.p\nq....\n.P.kK\n....P\n.R...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\n.B.r.\nq.p.p\n...N.\n..k.P\nPpPn.\n...RK\n");
	chess_move("c3-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\n.B.r.\nq.p.p\n...N.\n..k.P\nPpPn.\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n.k..r\np..p.\n...bp\n.pP.q\nRQn.P\n..B.K\n");
	chess_move("e1-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.k..r\np..p.\n...bp\n.pP.q\nRQn.P\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nkq.n.\nQp.r.\n...p.\nB.bpP\nP.P..\nRN.K.\n");
	chess_move("d4-e3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nkq.n.\nQp.r.\n...p.\nB.bpP\nP.P..\nRN.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk.b.r\n.p...\np.n.p\n.PpPQ\nP....\nR..BK\n");
	chess_move("d3-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.b.r\n.p...\np.n.p\n.PpPQ\nP....\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk....\nqp..r\n.pNpp\npb.P.\nP.PKP\n.R.Q.\n");
	chess_move("b1-c1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk....\nqp..r\n.pNpp\npb.P.\nP.PKP\n.R.Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n.kb.r\n....p\n.pP..\n.Pp..\n...QP\n..R.K\n");
	chess_move("b6-a6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n.kb.r\n....p\n.pP..\n.Pp..\n...QP\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n.b.nr\nk....\n.p...\nN.PPq\nPp...\nR.Q.K\n");
	chess_move("b6-a6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.b.nr\nk....\n.p...\nN.PPq\nPp...\nR.Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk..Nr\n.ppbp\np....\nP..B.\n..PQP\nR...K\n");
	chess_move("c5-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk..Nr\n.ppbp\np....\nP..B.\n..PQP\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n....b\n..k..\n.rp.P\nPNP..\n....P\nR.K..\n");
	chess_move("a1-b1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n....b\n..k..\n.rp.P\nPNP..\n....P\nR.K..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n...r.\n.k.pp\n.pp.n\nP..q.\nRNPPP\nB..QK\n");
	chess_move("b5-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n...r.\n.k.pp\n.pp.n\nP..q.\nRNPPP\nB..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n...nB\n.k.P.\n.R...\n....b\nP.qP.\n....K\n");
	chess_move("b4-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n...nB\n.k.P.\n.R...\n....b\nP.qP.\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk....\n.Nb..\npPp.r\n.qBpP\nP..Q.\n...K.\n");
	chess_move("b3-c2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk....\n.Nb..\npPp.r\n.qBpP\nP..Q.\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nkr...\nb.P..\n.N.pn\np.Q.P\nRPP..\n..B.K\n");
	chess_move("e1-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nkr...\nb.P..\n.N.pn\np.Q.P\nRPP..\n..B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.b.r.\n.p.Pp\np.kP.\nP...Q\n.P..P\nR..BK\n");
	chess_move("d1-a4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.b.r.\n.p.Pp\np.kP.\nP...Q\n.P..P\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n..br.\n.p.p.\np.Pp.\n....p\n.kRK.\n.N...\n");
	chess_move("c4-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n..br.\n.p.p.\np.Pp.\n....p\n.kRK.\n.N...\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\nkNb..\nq.p..\nBpnrp\nP..Pp\n.P.QK\n..R..\n");
	chess_move("c6-d6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\nkNb..\nq.p..\nBpnrp\nP..Pp\n.P.QK\n..R..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk....\np....\nP....\n.P.Q.\n.nNK.\nq....\n");
	chess_move("d3-a6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk....\np....\nP....\n.P.Q.\n.nNK.\nq....\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkq..r\npp.b.\nP..p.\n..BpP\n.Pp..\n.NQ.K\n");
	chess_move("e6-e5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkq..r\npp.b.\nP..p.\n..BpP\n.Pp..\n.NQ.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nq.br.\nB.ppp\nP.P..\n...PP\n.....\n.R.kK\n");
	chess_move("b1-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nq.br.\nB.ppp\nP.P..\n...PP\n.....\n.R.kK\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\nk...r\nqp...\np.b.p\n.P...\nPBPnK\nR...Q\n");
	chess_move("e6-e5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\nk...r\nqp...\np.b.p\n.P...\nPBPnK\nR...Q\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n.q.r.\n.k...\n.pppp\nPnP..\n.P...\nRN.BK\n");
	chess_move("a1-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n.q.r.\n.k...\n.pppp\nPnP..\n.P...\nRN.BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk..q.\npppN.\n..r..\n...p.\nP..PP\nR.Q.K\n");
	chess_move("d3-e2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk..q.\npppN.\n..r..\n...p.\nP..PP\nR.Q.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk.br.\np.ppp\n..p.P\n.Pq..\nP....\nQ...K\n");
	chess_move("e1-d1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk.br.\np.ppp\n..p.P\n.Pq..\nP....\nQ...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n.kq.r\n.NB.Q\n.p...\np.bPp\n.PP.P\n..R.K\n");
	chess_move("b2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n.kq.r\n.NB.Q\n.p...\np.bPp\n.PP.P\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk....\np...p\n.P.r.\n..NqP\nRP..K\n...q.\n");
	chess_move("d4-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk....\np...p\n.P.r.\n..NqP\nRP..K\n...q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nk..n.\npp...\nP.p.r\n..b.P\nRP...\n.N.QK\n");
	chess_move("a4-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nk..n.\npp...\nP.p.r\n..b.P\nRP...\n.N.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n...nr\nqkp..\npp.bP\n.P...\nPQP.P\n.RB.K\n");
	chess_move("a2-a3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n...nr\nqkp..\npp.bP\n.P...\nPQP.P\n.RB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk..Q.\nq...p\npQb..\nP....\n.n.N.\nR.B.K\n");
	chess_move("d6-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk..Q.\nq...p\npQb..\nP....\n.n.N.\nR.B.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nk.r..\n.p.pq\nn.Q..\nP.P..\n..BPP\nR..K.\n");
	chess_move("a1-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nk.r..\n.p.pq\nn.Q..\nP.P..\n..BPP\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n...k.\n..bpB\np.q..\np...p\nP.P.P\n.Q.K.\n");
	chess_move("b1-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n...k.\n..bpB\np.q..\np...p\nP.P.P\n.Q.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n.k...\npqp.b\nQ...p\n....B\nNP..P\n.R..K\n");
	chess_move("e1-d1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n.k...\npqp.b\nQ...p\n....B\nNP..P\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nkq.nr\n..p..\nb.Pp.\n..NP.\npBQ.P\n...K.\n");
	chess_move("b2-c1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nkq.nr\n..p..\nb.Pp.\n..NP.\npBQ.P\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n..kb.\n...pr\n.pN.p\n.....\n...P.\n...KQ\n");
	chess_move("d5-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..kb.\n...pr\n.pN.p\n.....\n...P.\n...KQ\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk....\n..r..\n..pPp\n....P\nPP..P\nRBK..\n");
	chess_move("c5-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk....\n..r..\n..pPp\n....P\nPP..P\nRBK..\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\nk..nr\n...P.\npp.Kp\nNP...\nP.qb.\n..B..\n");
	chess_move("d2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\nk..nr\n...P.\npp.Kp\nNP...\nP.qb.\n..B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk...r\n....Q\np.n.b\nPp..P\nRPpK.\nB....\n");
	chess_move("d2-d3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk...r\n....Q\np.n.b\nPp..P\nRPpK.\nB....\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.N...\npP...\n.k.p.\n.PQ.n\nB...r\nR..K.\n");
	chess_move("c3-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.N...\npP...\n.k.p.\n.PQ.n\nB...r\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk..n.\n.p..r\np.bB.\n.....\nP.P.K\nRN...\n");
	chess_move("c4-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk..n.\n.p..r\np.bB.\n.....\nP.P.K\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n..b.r\nkBQ.p\n.....\nnP.PP\nP..P.\n.R..K\n");
	chess_move("b5-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n..b.r\nkBQ.p\n.....\nnP.PP\nP..P.\n.R..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n...n.\n..p.b\n.Q.pr\nPkp.p\n.PBPP\n.R.K.\n");
	chess_move("b3-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n...n.\n..p.b\n.Q.pr\nPkp.p\n.PBPP\n.R.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nk....\nppq.N\n..nP.\nP....\n.....\n..RK.\n");
	chess_move("c1-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nk....\nppq.N\n..nP.\nP....\n.....\n..RK.\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk....\nqp..r\npbBpn\nPPP.N\n...PQ\n...RK\n");
	chess_move("c4-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk....\nqp..r\npbBpn\nPPP.N\n...PQ\n...RK\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n.....\nkr...\n.PPN.\n..R..\n....P\n...K.\n");
	chess_move("a5-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n.....\nkr...\n.PPN.\n..R..\n....P\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n.Q.r.\npnPb.\n.p..P\n.Pk.K\nP.PB.\nRN...\n");
	chess_move("c3-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.Q.r.\npnPb.\n.p..P\n.Pk.K\nP.PB.\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk.br.\n.p.p.\nq.n..\n...p.\nP.QNP\n.RB.K\n");
	chess_move("a4-b3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk.br.\n.p.p.\nq.n..\n...p.\nP.QNP\n.RB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 B\n.q...\nk...r\n.p...\n.Q..K\nPp...\nRn...\n");
	chess_move("e5-e6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 B\n.q...\nk...r\n.p...\n.Q..K\nPp...\nRn...\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n....r\n.kqpp\nb.p..\n..nQP\n..PP.\nBq..K\n");
	chess_move("c3-a2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n....r\n.kqpp\nb.p..\n..nQP\n..PP.\nBq..K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n...nr\np.kpp\n.....\nNPP.P\n.Q.K.\n.R.b.\n");
	chess_move("b2-c2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n...nr\np.kpp\n.....\nNPP.P\n.Q.K.\n.R.b.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\nq.br.\n....p\n.Pkp.\np.PQP\nP.P..\nRB.K.\n");
	chess_move("d1-e1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\nq.br.\n....p\n.Pkp.\np.PQP\nP.P..\nRB.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nk..br\nRp..N\n.P.p.\n...p.\n....q\n.B.QK\n");
	chess_move("e2-b2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk..br\nRp..N\n.P.p.\n...p.\n....q\n.B.QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\n...br\n....p\nk..pp\nP..K.\n...nQ\nRq...\n");
	chess_move("e2-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\n...br\n....p\nk..pp\nP..K.\n...nQ\nRq...\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\nk.r..\nq...p\nn.p..\n.b.P.\nPPPBP\nR..QK\n");
	chess_move("c6-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\nk.r..\nq...p\nn.p..\n.b.P.\nPPPBP\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nkQbn.\np..p.\n...P.\n.....\nRBP.K\n.N...\n");
	chess_move("b6-a6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nkQbn.\np..p.\n...P.\n.....\nRBP.K\n.N...\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk.br.\n....p\n.PPpP\np....\n.nPP.\n.R.K.\n");
	chess_move("d1-e1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk.br.\n....p\n.PPpP\np....\n.nPP.\n.R.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n.kqr.\np.p..\n.pPQp\nP....\n.PP.K\n.RB..\n");
	chess_move("d6-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n.kqr.\np.p..\n.pPQp\nP....\n.PP.K\n.RB..\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n..bn.\np.p.r\n..PPp\n...QK\n.k...\n.R...\n");
	chess_move("c6-d5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..bn.\np.p.r\n..PPp\n...QK\n.k...\n.R...\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n..b.r\nNQppp\n..k.P\nP....\n.PBP.\nR...K\n");
	chess_move("c4-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n..b.r\nNQppp\n..k.P\nP....\n.PBP.\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\n.k..r\npPpQb\n....p\n.P..P\n..P.P\n....K\n");
	chess_move("e5-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\n.k..r\npPpQb\n....p\n.P..P\n..P.P\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nkb..r\np.pBp\n....n\nP..PP\n..N..\nR..QK\n");
	chess_move("c5-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nkb..r\np.pBp\n....n\nP..PP\n..N..\nR..QK\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 B\nk...r\np..P.\nb.Ppp\nR.N.q\n....B\n...K.\n");
	chess_move("a4-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 B\nk...r\np..P.\nb.Ppp\nR.N.q\n....B\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 W\n..Nnr\n.kp.Q\n.p...\n..PP.\nqP.B.\nR...K\n");
	chess_move("e5-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 W\n..Nnr\n.kp.Q\n.p...\n..PP.\nqP.B.\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk....\npnp.r\nP.bq.\n..pP.\n....P\nRB.K.\n");
	chess_move("a1-a3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk....\npnp.r\nP.bq.\n..pP.\n....P\nRB.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n.kb.r\n..pp.\n..pBp\nPQP..\n....P\nR..K.\n");
	chess_move("e4-e3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n.kb.r\n..pp.\n..pBp\nPQP..\n....P\nR..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\nbk...\n...p.\npppPK\nBP...\nP.P..\nRN...\n");
	chess_move("b3-a4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\nbk...\n...p.\npppPK\nBP...\nP.P..\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\nkNbnr\n..pp.\npp..p\n....P\nRqK..\n..B..\n");
	chess_move("a2-a1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\nkNbnr\n..pp.\npp..p\n....P\nRqK..\n..B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\nkq..r\n.n...\nPpppp\nNp..Q\nRBP.b\n....K\n");
	chess_move("c2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\nkq..r\n.n...\nPpppp\nNp..Q\nRBP.b\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nk...r\n...b.\nppn..\n.P..B\nP.QPK\nR....\n");
	chess_move("d5-c6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nk...r\n...b.\nppn..\n.P..B\nP.QPK\nR....\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.....\n.pB.p\n..k..\nN....\nP.Qrq\nR...K\n");
	chess_move("c2-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.....\n.pB.p\n..k..\nN....\nP.Qrq\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\nk..r.\n...pp\nP.b.P\nN.P..\nPRB.n\n....K\n");
	chess_move("b2-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\nk..r.\n...pp\nP.b.P\nN.P..\nPRB.n\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 B\nk.bnr\n..Pp.\n....p\nP.N.P\n..p.B\n...K.\n");
	chess_move("a6-a5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 B\nk.bnr\n..Pp.\n....p\nP.N.P\n..p.B\n...K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 B\nkq...\np.bp.\n.qp.N\n...K.\nP...P\nR..Q.\n");
	chess_move("b6-b5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 B\nkq...\np.bp.\n.qp.N\n...K.\nP...P\nR..Q.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n...nr\n.kPbp\np.Pp.\n.P...\n.....\nRN.BK\n");
	chess_move("b5-a6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n...nr\n.kPbp\np.Pp.\n.P...\n.....\nRN.BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 W\n...br\n..kpp\nq..Kn\nPPpPP\n.....\n.RBQ.\n");
	chess_move("b1-a1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 W\n...br\n..kpp\nq..Kn\nPPpPP\n.....\n.RBQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n.k.Qr\n..b.q\nppP.p\n....P\nPPP..\nR..BK\n");
	chess_move("a2-a3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n.k.Qr\n..b.q\nppP.p\n....P\nPPP..\nR..BK\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\nk..br\n..p.p\npqP..\n.P.p.\nP..nP\nB.R.K\n");
	chess_move("e1-d2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\nk..br\n..p.p\npqP..\n.P.p.\nP..nP\nB.R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nk..qr\nppBbp\n..n..\n..Q.P\nPP.NK\n...R.\n");
	chess_move("d2-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nk..qr\nppBbp\n..n..\n..Q.P\nPP.NK\n...R.\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 W\n....r\nk..bp\nPNn..\nP....\n.BPP.\n.R.qK\n");
	chess_move("c2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 W\n....r\nk..bp\nPNn..\nP....\n.BPP.\n.R.qK\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\nk.b.r\n....p\np..p.\nP.B.P\n....q\nn..K.\n");
	chess_move("e2-c2");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\nk.b.r\n....p\np..p.\nP.B.P\n....q\nn..K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("15 W\n...kr\nq...p\n.pQpP\npP...\n..P.B\nRN.K.\n");
	chess_move("d1-c1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "15 W\n...kr\nq...p\n.pQpP\npP...\n..P.B\nRN.K.\n") != 0) {
		return false;
	}
	
	chess_boardSet("19 W\n.k.nr\nq.p.p\np.b..\np.PBP\nPP...\n..R.K\n");
	chess_move("d3-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "19 W\n.k.nr\nq.p.p\np.b..\np.PBP\nPP...\n..R.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("14 B\n..bnr\n..k.p\nqQpP.\nK..P.\nPpP.B\n.R...\n");
	chess_move("a4-b4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "14 B\n..bnr\n..k.p\nqQpP.\nK..P.\nPpP.B\n.R...\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 B\n..n.r\n..k.p\n.pb..\n....P\nP.BP.\nR...K\n");
	chess_move("c5-b6");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 B\n..n.r\n..k.p\n.pb..\n....P\nP.BP.\nR...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\n.....\nppkp.\nb....\nN...K\n.PQ..\n..R..\n");
	chess_move("c2-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\n.....\nppkp.\nb....\nN...K\n.PQ..\n..R..\n") != 0) {
		return false;
	}
	
	chess_boardSet("16 B\nkr...\nQ....\nN.qp.\n.p..K\nP..RP\n.b...\n");
	chess_move("c4-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "16 B\nkr...\nQ....\nN.qp.\n.p..K\nP..RP\n.b...\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 B\n..bnr\n..kp.\np..P.\n.pP..\n...Kp\n..RQ.\n");
	chess_move("c5-b4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 B\n..bnr\n..kp.\np..P.\n.pP..\n...Kp\n..RQ.\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk..b.\n..p..\nqp.np\nPBQ.P\nP..pK\nRN...\n");
	chess_move("c3-c4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk..b.\n..p..\nqp.np\nPBQ.P\nP..pK\nRN...\n") != 0) {
		return false;
	}
	
	chess_boardSet("17 W\n..br.\nk..pp\n..p.N\nqpPPP\nR....\nQ...K\n");
	chess_move("a1-b1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "17 W\n..br.\nk..pp\n..p.N\nqpPPP\nR....\nQ...K\n") != 0) {
		return false;
	}
	
	chess_boardSet("21 W\nk...r\np.q.p\n.Q..n\n.PpPp\n.RP..\n....K\n");
	chess_move("d3-d4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "21 W\nk...r\np.q.p\n.Q..n\n.PpPp\n.RP..\n....K\n") != 0) {
		return false;
	}
	
	chess_boardSet("12 W\n....q\npkppr\n.p..p\nP.N.Q\nb.PPK\nR.B..\n");
	chess_move("c1-d1");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "12 W\n....q\npkppr\n.p..p\nP.N.Q\nb.PPK\nR.B..\n") != 0) {
		return false;
	}
	
	chess_boardSet("13 B\n...b.\n..p.r\n..kpp\nq.PPP\nRP.BK\n.NQ..\n");
	chess_move("c4-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "13 B\n...b.\n..p.r\n..kpp\nq.PPP\nRP.BK\n.NQ..\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nkq.br\npB...\nnp.Pp\n....p\n.RPK.\n.....\n");
	chess_move("c2-c3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nkq.br\npB...\nnp.Pp\n....p\n.RPK.\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("18 W\nb...r\npk...\n.Pnpp\nBP..P\nP.R.K\n.....\n");
	chess_move("e2-d3");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "18 W\nb...r\npk...\n.Pnpp\nBP..P\nP.R.K\n.....\n") != 0) {
		return false;
	}
	
	chess_boardSet("11 B\n.qbnr\n.k.P.\n.Pp.p\nQ...P\nNP.P.\n.RB.K\n");
	chess_move("c6-c5");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "11 B\n.qbnr\n.k.P.\n.Pp.p\nQ...P\nNP.P.\n.RB.K\n") != 0) {
		return false;
	}
	
	chess_boardSet("20 W\nk..br\n.p.Qp\n.P...\n....q\nPpK.p\n.nR..\n");
	chess_move("d5-e4");
	chess_undo();
	
	chess_boardGet(charBuffer);
	if (strcmp(charBuffer, "20 W\nk..br\n.p.Qp\n.P...\n....q\nPpK.p\n.nR..\n") != 0) {
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
	
	chess_boardSet("13 W\n.qb.r\n.pp.p\nk..pP\n.pPP.\nPPQ.K\nR....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nkr...\npq.pP\n..p.n\nP...B\nb.KQP\n.N...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\nk...r\n.b.Pp\npp...\nP..P.\n..PBK\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n.q.N.\npkp..\nbp..p\n..P.P\nP.p.B\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\n.k..r\npp..p\n.PbpP\nqRp.P\nP.PBK\n...Q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nkN...\n..bQr\n.pp..\n.QP.p\nPP..P\nRB..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\nb...r\nkp.pP\np.B..\nP..p.\nRP.KP\n.N...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.n.\n..r..\np.p..\nPBppP\n.P...\nRQ..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk.q..\n.n.Qr\n.P.PN\np....\n.PPP.\nRB..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\n...nr\npk.b.\n..q..\nPp..P\nR.K..\n.N...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nq.b.r\np.k.p\n.ppPn\nPP..P\n.Bp..\nRN.QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n.k...\npbp.p\n.p.p.\n.PPq.\nP.QNP\nR.B.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\n.q.r.\npkb.p\npB.P.\nN....\n..PK.\nR..Q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\nk...Q\n....p\n.....\n.qP.P\nP.Bp.\nRN.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n.qbnr\n.k...\n.p..p\npPPp.\nB..PP\n.RQKN\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 W\n....r\n.pkbp\n.....\nP....\n..P.K\nB...R\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n.qb.r\nk...p\npp..p\nnP.Q.\nP....\n..B.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 B\n.k.b.\n.ppqr\np..pn\nNP.Q.\nP.PK.\nRB...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\nkb...\n.p...\npPp.p\n.....\nPB..P\nRq.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nQ..br\n..p..\nk.P.p\nPQ...\nB..Pp\nRN.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\nkb.nQ\n..p.r\np...p\n..q.P\nPP.P.\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\n..b..\nq.ppP\npkPN.\n....p\nPP.nP\nRB.QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\nk...r\n.Q...\n..ppP\np..BP\nR..N.\n...K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nkq...\n.n.Qr\nNp..p\nP..P.\n.PB.P\n.R.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\nkb..r\nB.q..\npQppn\n...PP\nPP..K\nR....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n.kq.r\np..pp\n..p.B\nb.P.P\nPP.n.\nR..K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\n.k.nr\nRqP.b\n.p..P\n.PB..\n..QP.\n....K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nkb...\n..ppr\nP...p\nP.pqP\n..QN.\nR..BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n.q..r\nb..pP\nk.p.P\nP.P.K\n....B\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk...r\np.p.p\n.pPq.\nP.P..\n.Pb.P\nR.QBK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\nk.bnr\nqpp..\nQp..p\nP.P.P\n.R.P.\n..B.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\n...q.\n....p\n....b\nkP..Q\n..P.P\n.KRr.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n...qr\np.k..\nP.npp\n..pP.\n....P\nBR.QK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\nk....\nqp..p\n...Pp\n.p...\n.B.PP\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk.b.r\np..pp\npq..n\n..Pp.\nPP.KP\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n..bnr\n.kppp\nPq...\np.KP.\nP.P.P\nRB.Q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n.k..Q\n.ppp.\np...r\nQ...P\n.Pq..\nR.BK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\n...br\npkpNB\nPpq..\n.P..P\nR.P..\n..KQ.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n.k.br\n....p\np...p\n.q.P.\nPBQK.\n.R...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n.b...\n.qr.P\nk.p..\nQ.p.B\nPP..P\nRN.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\nk..n.\np.bpr\n..q..\n..PP.\nP..KB\nq.Q..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\nk...r\n..pPQ\npp.PP\n.....\n.b...\n...K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\n.....\nk.pNp\n...r.\n.P..P\nQ.PKp\nR....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n...nr\nkp..q\nN..p.\n.P.bP\nP.P..\nR.B.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\n..r..\nkp.p.\nq.Qb.\nN...p\nPP.PP\nR..BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\n...nr\npqpP.\npk...\n.P..p\nN.QPK\nRB...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\nq.b..\n....r\npkp..\nP..BP\n.PPp.\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\nk...r\nQ.p.p\np...n\n...P.\nPPPQ.\nRNB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\n..kr.\nb.ppp\n.P..n\nQ.P..\nP..PP\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 W\n.....\nk....\nP.N.n\n.....\nP...P\n..R.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nk.r..\np.pbp\nPpNp.\n.P.PK\n.RP.P\n.B.Q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\n...q.\n.pkpr\n.....\n..PPp\nPB...\n..R.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\nk.bnr\n...pp\npp.q.\nPp.PP\n.PP.B\nRN.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\nkb.r.\nqp..n\n..pPP\n..P..\nPB...\n..RQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\n.k.r.\np.q..\nb.P.B\np.PP.\nP..N.\n.R..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\nk..r.\np.Q.p\nPpp.N\n.q...\nRPP.p\n.B..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\n.kb.r\nqPp.p\n...pN\nPQP..\n...PP\nR..BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nk.br.\np.qp.\n.....\n..p.R\nPPPn.\n..Q.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nk.b..\nq..pr\n..p.P\np.P..\nPnKpQ\nRN...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\nkq..r\n.N.bp\n.p.Q.\np....\nPPPnK\n.RB..\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\nq..nr\npk.pB\nPb.P.\n.pp..\n..QNP\nR...K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 B\n..Q.r\n..kp.\nP.p.p\n.Rq.P\n...P.\nBN.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nk....\np.pp.\nN..pn\npPP.K\n....Q\nR.Brb\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\n..r..\nkbp..\nP.n.p\n....P\nPp...\n.R.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\nkr...\n.P.pp\np.pQ.\nP....\n....P\n.B.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\n.k.b.\n.NBp.\nPp...\n.p..K\n..rn.\n.R...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 W\n....r\nk..pp\n.q...\nPbQ.P\n..p..\nRN.BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 B\nk...r\n...P.\nppNb.\n.....\nPqP.P\nR..KQ\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nk...r\n...bQ\n.....\npp.Pn\nPPqKP\n.R...\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\n.qbn.\nk...r\n.p.pN\n.PP.P\nP.BPK\nR..Q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\n.k...\npn.pP\n..BK.\nP..p.\n.q...\nR..Q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\nk...r\n..p..\npPp..\n.B..p\nP..Pp\nRQ..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 W\nk....\n.r..p\nPp.p.\npb.P.\nP.Q.P\n.RB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\nk..br\np..Pp\nnq...\n.K..P\nP....\n..q.Q\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\nk.q.r\np.p..\n.....\nP...p\nn.PBP\n....K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\nkq..r\np.B.p\nP.p..\n.b...\n..QPP\nR..nK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\n.k..r\nQ.nb.\n...pp\nB.P.P\nP..P.\nRN..K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 B\nkq..r\n..pp.\np.B.p\nP.P.P\n...K.\n.RnQ.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("12 B\nk.r..\n.qb.p\npp.p.\n...PP\nPPQ..\nRnB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 W\nk...Q\n..bqp\n..N..\n..p.P\n....K\nR....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 B\nk...r\n.n.p.\npP..p\nR.B.P\n..QK.\n.....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("19 W\nk.q.Q\n.Q...\n..p..\n..N..\nPB.bK\n...R.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\n....r\n.b.pp\nkpP.n\nRpPQ.\n.....\n.N.BK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\n.kb..\np..p.\n.P.Pr\nnQ...\n.B.KP\nRN.q.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("16 B\nkQ..r\np...p\n..ppP\n....q\nb.PP.\nR.K.Q\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\n..b.r\nkp.pp\np.pq.\nPQPP.\n.P..P\nRNB.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\n.b.nr\n..ppp\nQR..K\n..P.P\nPk.q.\n.....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n.r..q\nn..kp\nP.PpP\np....\nP.bB.\n..RK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("13 W\nk...r\npp.q.\n....p\n.PbQ.\nP..N.\nR.B.K\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\nk.b.r\nq.P.p\n..R..\np..P.\nP..P.\n..BQK\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("14 B\n.kr..\n..b.p\n..pp.\nP.P.P\n.q...\nRNQK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\n....r\nNn.Qp\n.pp.b\np..BP\nP....\nRk.K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("20 B\n.k...\n.n.pr\nP..Pp\nq.b.P\nPpP..\nR..K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("21 W\nN..r.\n...p.\n..K.p\nP.k.P\nP.P..\n..RB.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("18 B\nk.r..\np..pp\nbq...\n.P..P\nR.QPK\nB....\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\n.kp.p\np..qb\np..PQ\nN.P.B\n...K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("11 B\nqb.r.\n.kp.p\npPp.n\n..Np.\nPB.P.\nR.QK.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("17 W\n.k..r\np..p.\n.p.bp\nnP.Q.\n..PNP\nR..K.\n");
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		intBuffer[intFor1] = chess_movesShuffled(&charBuffer[intFor1 * 1024]);
	}
	if (test_movesCount(intBuffer, charBuffer, 100) > 10) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\nkbppp\n.....\nqPPPP\n.....\n..BQK\n");
	
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
	
	chess_boardSet("12 B\n.kqn.\n.pr..\np..Pb\nP.pP.\n.PP.K\nRN.B.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\nb...r\n.p..p\nk.N.P\n.....\nP.PKp\nq....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n..Q.r\n...kp\npp.P.\nRp...\n.P.PN\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\n.....\nk.q..\n.p...\n.Pp.B\n..n.P\nR.K..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.kbn.\np..Nr\n.ppPp\n.q..P\nPBP.Q\n..RK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nqkbr.\n.pp.n\np....\nP...p\nQP.NK\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\n....r\nkB.p.\n..p.p\n...Kb\np.P..\n.N...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk.bnr\np..p.\nPq.Qp\n.pN.P\nRP.PB\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nkq.n.\np.p..\n.p.p.\nPbPQ.\n.P...\nRB.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\n.kb..\np.pp.\n..Pr.\n...P.\nP.K..\nRN.B.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\n.k.nr\n.Nbpp\nppq..\n.PPB.\nP.p.P\n.R..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\n..k.r\np....\n.....\nK.n.P\n.PP..\nR..N.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n...r.\nk.pPp\np..P.\nbP...\n.nN.K\nRB...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\nk.q.r\nPp..p\nP..Pb\n..p.P\n.nPQK\n..R..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\nq...r\n...bp\np...N\np.P..\n.k.PP\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\nkq..r\np.pN.\n.P..P\n.....\n.....\n.q.RK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\n.k.nr\npq..p\nP....\n....p\nN.PP.\n..BQK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 W\nk...r\nq...p\n.....\n.pNP.\nR...P\n..K..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\nb...r\np.pnp\nPpk.p\nN...Q\nP..PP\n.R..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\n.qb.r\nkNp..\n...p.\nBp.p.\nPnP.P\nRQ.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\n.bQ..\nkpnpp\nB.p..\n..P..\nPPN.P\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\nkqbB.\npp.r.\nQ.P.p\n..pP.\nP...P\nRNK..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("11 B\n..bnr\n.kpN.\np...p\nPP..q\n.P.PK\nR.B.Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\n..r.k\np.q.p\np.KNP\n.....\nRpP.P\n...Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk..r.\nb....\n.Pppp\nP....\n.P.PP\n.R..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 W\nkn..r\np..p.\nP...p\nB..p.\nR...q\n.Q..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\nk.b.r\nQpq.p\n..P.p\n..p..\nP.PP.\nRN.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("11 B\n..bnr\n..kp.\npq.pN\nP..K.\n.PB.P\nR..Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.k..r\np.P.p\np....\n.Rnb.\n..PQp\n..B.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n..b..\n.qprp\npk...\nP..PP\n.RPpK\n..B..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\nkb.r.\n...pp\nP..q.\np.B..\nP.QPK\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkb.r.\n.p.q.\np.ppP\nP.B..\n.PK..\nRN.Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\n.kbr.\n..qp.\n.p..p\n.P..P\n.R.PQ\n...NK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\n.kq.r\npP.p.\nb..Pp\nN.P.K\nP...P\nR.B..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.k..r\n....p\nQ..bP\nP....\n...KP\nRN.q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.b.qr\n.k..p\n...p.\nPp.pK\nRP.n.\n.....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\nk...r\npn..p\n.q...\nPp.bP\n..PP.\nRB.KQ\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.kQbr\nq...p\nP...p\n.PK..\n..P..\nRB.n.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nkb.n.\nq.p..\np....\nPp.P.\n.PPPK\nRB.Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk...r\n..Pbp\np....\nP...P\n.q.Np\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 B\nkb.n.\n.p..r\n.N...\n..PQ.\n...qP\nB...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk..r.\nq.p..\np.Q..\n..PP.\nP....\n.RbQK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.N.r.\n.kbpp\np..p.\n.PpK.\nPB.nP\nR...Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\n..bnr\n..q..\nk..pp\n.pPPP\n.Q..K\nRN...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\n.k...\n.n.Br\n.p.KP\npP.q.\nP..P.\nb....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.k.nr\n...p.\n.N...\n.Pq.p\n...K.\nRQ..b\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.....\n.pprp\nk....\n.PpP.\nPRP..\n..BK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\n.r...\n.qb.p\n.kp..\nPp...\nRP.nP\n..BK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\n..r..\nknp..\npP.pp\n..pP.\nP..P.\nRB.QK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\nQ.k.r\np..pp\n....n\nRp..P\n..PK.\n..BN.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\n..b.r\npk.Kp\n.p...\n....q\nP.P.B\n..R..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\nkb...\n....B\n.ppr.\n.p..P\nPQ.N.\n..R.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nkqb..\np.R..\np..P.\n.....\n.p.BP\n.N..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\n.kr..\n..p.p\np.Pp.\n..Q.b\nP.BKP\n.R...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nkb...\n..p.p\nP..B.\np...P\n..PrK\n.RQ..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 W\nk.r..\np..b.\nP...N\n..qp.\n..pP.\n..K..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nkq.nr\np...p\n...pb\n...P.\n.p..P\nRBQ.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.k.Qb\n..B.P\npp...\nN.P.q\n.....\n...RK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n....r\npkpbN\n...q.\nPp.PB\n.P..P\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n...nr\n....p\n.kP..\n..pb.\n.PQBP\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 B\n.k.r.\n..p.p\npp.p.\nNK..q\nPPP..\n...RQ\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk..b.\n.Q..r\np.p.p\nP...P\n...N.\nR.B.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\n...r.\np...p\nqkpQP\n....b\np.P..\n.NR.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\nkr...\n..Q.p\np.bpn\nN.P.P\n.P..P\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 B\nk...r\n.p..p\nQPPpP\nN...P\n..P.K\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.....\nk.r..\n..p.Q\nN.P..\nP....\nRb.K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\nk.b..\np.Bpr\nq...p\n..Pp.\n.Q.K.\nRN...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nk....\npnqr.\n...p.\nR.NPp\n.BpPP\n...K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk.bnr\n.qpNp\n.....\nR...P\n..PPp\nB...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("11 B\nk...r\npb.p.\n.P.Bp\n.q...\nP..PP\nR..QK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n..qbr\np.p.Q\nB....\np...P\n.pkN.\n...RK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk..nr\np..qp\n..P..\nP.P..\n..BPK\n.R.Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("18 W\n..kqr\n....p\n..Pbn\np.P..\nP...P\n.R.BK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.q...\n.k.Nr\npP.pn\nP.B.p\n.QP.p\nR..K.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 W\n..b.Q\n.k...\np.p.p\nPnP.P\n.PN.P\n..RBK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.q..r\nPkb.p\n.Bp..\n.P.nP\n..K..\nR..Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nknb..\np..rp\np...p\n..PP.\n..R..\n.NBK.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\n...br\nkqpp.\nPp.Pp\nN.P..\nP..P.\nRB.KQ\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 W\n.k..r\np....\nP...p\nn.p.P\nb.pPK\nRB.Q.\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\n...nQ\nqkp..\np...P\nPpPp.\nP.B..\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 W\nk.b..\nQ..rp\nPp.Bn\n...q.\n.P.pP\nRN..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n.k.nr\np.q..\nP..Pb\nBpRQp\n..P.P\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("20 B\n...nr\npB...\n.k..K\nP.qb.\nRPPp.\n.Q...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("13 B\nk.B.r\np.b.p\n..npP\n.qp.K\nP.PP.\nRQ...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\nkR..r\n...pP\np.pn.\n..b.P\nP.PK.\n....Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\nbqkr.\n..ppp\nPp...\n..QP.\nR.B.P\n....K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\nk..qr\np...p\n.pp.p\n.PnPP\nP.P.K\nR.B..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\n.q.n.\np...r\n.P.bp\n..pp.\nP.kP.\n.RBNK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 W\n..q.r\npk.pb\n.pp.p\nPPP.P\n..RP.\n.NBQK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("12 B\nqk.br\nn.p.p\np...P\n..pP.\nPP...\nRNB.K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("17 W\n..bnr\nk...p\np.pqP\n.....\nPP.B.\nR...K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("14 B\nkqr..\n.nb.p\n..Pp.\nBpP..\nR..QP\n.N..K\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\nr....\nkp..p\nQ.p..\nP.PBq\n.p...\nR.K..\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("21 W\nk..Qr\n.b...\np.q..\n...P.\nR.n.K\n.N...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("16 W\nkqr..\n....p\nbpppn\n.P.K.\n.....\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 B\nk..Kr\n.Np..\np....\nP..qp\nBPPnQ\nR....\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.k..r\n.qp.p\nPp...\nP...P\nR.pP.\n..BQK\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("19 B\n.r...\npk.pp\n...n.\nb.qPP\nP..K.\n....Q\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
		return false;
	}
	
	chess_boardSet("15 W\n.k..r\nbp...\nQ..p.\nR..PK\n.B...\n.N...\n");
	
	intBuffer = chess_movesEvaluated(charBuffer);
	if (test_movesOrder(intBuffer, charBuffer) != true) {
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
	}
	if (test_moveCount(charBuffer, 100) < 2) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\n.k.nr\n.bppp\np...P\n.PP..\nP...K\n.RB.Q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\nkb.n.\np...q\n..ppp\npNP.P\n.P.BK\nR....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("21 W\nk...r\nppp..\n.q.b.\nPP.BP\nQ....\nR..K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n.kbr.\n.p..p\n.....\nP..QP\n.q.PK\n.R.B.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\nkq..r\n.np..\np.Pbp\nB..Pp\nPP...\nRNQ.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nk..br\npNp.p\nP...q\n.PP.K\nB....\n..RQ.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nk.r..\n.Qb.p\np...n\np.ppP\nP....\n.R..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\n.qknr\n..p.p\npBP.p\n.P...\nP....\nRNQ.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\nk.Q..\np..Np\n....b\n.PprP\nP....\n.Rn.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 B\nk..n.\np.Ppr\n...QP\n....P\n.PP..\nqB..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\nkN...\np...p\n.pnp.\n.B.P.\n....P\nRQq.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 B\nkb.n.\nqp.pr\npPp.p\nP...P\nB..PK\nRN.Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 2) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nk....\nP.q.p\n.PbrP\n..nP.\nR.Q..\n.N.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\n.k..r\np.p.p\n.....\nR....\n.PBqn\n..Q.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 W\nk....\n..r..\np.R.p\n....b\n..PN.\n..BnK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\n.b.nr\np.p.p\n..PkP\n.P..K\np.P..\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\n....r\n.Pp.p\n....K\nk..PP\n.n.Q.\nR..q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\nkb..r\n..nQp\npP...\n....K\n..B..\n..q..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 W\n..br.\nqk.Q.\np....\nPpP.P\n...P.\nRN..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\n.b..r\nkq..p\nppQ.P\n..N..\npRPP.\n..B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nk...r\npq..p\nn.pb.\nNp.pP\nPPBPQ\n.R..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\nQ.kbr\n...pB\n..pq.\n.p..P\nP....\nRn.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\n...n.\nqppr.\np...b\nk.P.P\nRPB..\n.N.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nk...r\npqp.p\n..PpQ\n...PP\n.PB..\nR.N.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nk.qnr\npp...\n..p.b\nP..Kp\n.PPP.\nRB.Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nk...r\npp.bP\n...Pn\n.Pp..\n..P..\nRqB.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\n...q.\npkp.p\n...r.\n.PN.P\nP....\nR.KB.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\n..k.r\n....P\np..p.\n..P..\nb.p..\nR..K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 3) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nk..qr\n...bp\nBN..n\npPpQ.\nP..P.\n...RK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("14 W\nkq..r\np.p..\nP....\nR.p..\nB.P.P\n...QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nk..r.\np.p.p\n.pP.q\nPbPBP\n...Q.\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\nkq.r.\n.pB..\n.p.pb\nn..p.\nPQP.K\nRN...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\n...Q.\npk.pr\n.q...\n..p.P\nP...P\nRB.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n.k...\np.qp.\n..P..\n.PNK.\nb..B.\n....R\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\nkb..r\npp.qp\nN..BQ\nPp.P.\n.nP..\n...K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n.r...\nk.p.p\npqP.P\n...p.\nP.NP.\n.R.BK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\n.qb..\nkPprp\np..p.\n.PQ.P\nP..Pn\nRNBK.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\n....r\n..pbp\nk..pn\np.KPP\n.Pp..\nRB.Q.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nb...r\np...p\n..kP.\nN.Q..\nPP.n.\n.R..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("21 W\n...r.\n...pb\n...kp\nP.B.P\nq..P.\n..N.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nq..r.\nkp..p\npB.b.\n...PP\nP...Q\nRN..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nk...r\np..pp\n..q.n\nN..PK\nRP.B.\n.....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n..k..\npPp.r\n.P.Kb\n.....\n.BP..\n.R..Q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\nkb.Q.\n.pp..\np..N.\n...KP\nP....\n.q.R.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nk..nr\npb.p.\n....R\n.P.P.\n....P\n...QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\nk.qb.\n.p.Nr\np.p.p\nPQP.P\n.P.K.\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\n....r\nkbqpp\nppp..\nP.P.P\n.P...\nRNBQK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\n.k...\n....q\np.p..\nPpP..\n.P..P\nR..K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 2) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nkqb.r\npQ..p\nnp...\n.....\nP.N.P\n.RB.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("21 W\n...b.\n..pp.\np..P.\n..P..\nk..pR\n..K..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nk.br.\nBpp..\nq..pp\n.P.n.\nP.PP.\n.R.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n.q...\nkN.pb\np.PP.\np....\nP.P.P\n..RK.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 W\n....r\nk....\np.pP.\n....q\nPP.K.\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\n..r..\nk..Bp\nQP.p.\n..P..\n...qK\nRN...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 B\nk..nr\npp...\nP....\nR.b.p\n.PP..\nB..QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\nQ....\n.k...\n.p..p\n.Rp.B\nP.P.P\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 2) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\n.k..r\nq.p.p\n...pb\n.Q.P.\n...P.\nRB..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nk.QN.\nq...p\n.....\np.pKP\n.B.b.\n.q...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("21 W\n.k.r.\n.pp..\nq.R.p\nPbP..\nB...p\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\n.Nb.r\np.p.p\n.k..B\n.....\npP.PP\n.RQ.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n.k...\npb.q.\n.ppp.\n.P..K\nP.p..\n.RB.Q\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\nN.k.r\np...q\n.Q...\n....B\n.P..P\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 10) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\n.q...\nPR.Pr\np.pp.\nP..Q.\n....k\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("17 B\n..b.r\nk.p.Q\np..p.\nP...P\nn.q.K\nB....\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nk...Q\np.p.b\nP..p.\n....P\n.P...\n...K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 2) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\nkq..r\n....B\n.Pp.P\n.P.p.\n..Q.P\n...RK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n...Q.\n..pp.\nkqb.n\n.....\n.P.QP\n.NB.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\n.k...\n.p.Kr\np.n.p\n..p..\n..P.P\nQ.b..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\nk....\n.qp.r\nP..pp\nn..PP\nRP...\n.NbBK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\n...r.\n..qbp\np.n..\nkPPP.\nP.Q..\nRB..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 B\n...n.\nk.Rp.\np..P.\nPp..r\np....\n...K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 W\n.k..r\nbp.Rp\n.n.p.\n...P.\n..P.P\n.NK..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n.....\npPb.r\nkB.pp\nP....\n....P\nR...K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 B\nkq...\n..p..\nP..br\nP.p.P\n.n.N.\n.R.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n.....\nkbpp.\np...r\nRNP.p\n...Bn\n.Q..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nkb..r\np...p\nqpppn\n.P..N\n..PPP\nBR.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\n.k.Nr\np...p\n.p...\nRp.p.\n.PQPP\n..K..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 3) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\n.....\n.k.r.\n..p.N\np.Q..\nPPP.P\nRB.K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("16 B\n.qbQ.\n.kp.P\np.n..\nPpP.P\n.P.r.\nR.B.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\nk...b\n...r.\nQp..p\nP...P\n..PpK\nRN...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nk.b.r\n.pnp.\n..p..\nPpP.Q\n..KN.\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\nkn.r.\n.p.b.\np...p\n.BP.Q\n..P..\n....K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 B\n....r\nk...p\npq..P\nP.ppQ\n.P...\nRNBK.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("18 W\n....r\n.k..p\npP.b.\n.....\nqP..P\n.B..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 3) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\nk.b.r\np....\n.PN..\n.....\nR.Q.P\n.q..K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 9) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\nk..nr\nppQ.p\n...p.\nN..PB\nb...P\n..R.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("11 B\n.k.nr\n.N...\n.pppp\n...P.\nPQ..P\nR..BK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("20 W\nk..r.\n.K..P\n..p.P\n.b.P.\n.qN..\nRn...\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\n....r\npkpqp\nBP..n\nP.PpP\n....P\nRN.QK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("19 W\nb.knr\n..p..\np.p.p\nP.PK.\nRP.P.\n...Bq\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 4) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\n...nr\n..k.P\npQp.p\n.....\nPP.P.\nRNB.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 B\nk...r\n.bpp.\n...qp\nnPP.P\nP..P.\n...RK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\nqkbnr\n.....\nppNPp\n.Q.PB\nPP..P\n..R.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\n..br.\np.ppp\n.kn.P\nq.N..\nRP...\n.QB.K\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 B\nkq..r\n...p.\nppb.p\nP.Q..\n.RP.n\n...BK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\nk..br\nqnp..\np..QP\npP..P\nN.P.K\nR..B.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 8) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("13 W\nk..nr\np....\n..qQ.\np..P.\nPPbK.\nR.B..\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 7) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("15 W\nkr...\n.qP.p\n....P\n.....\n.n.NP\nR..K.\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 5) {
		return false;
	}
	
	for (int intFor1 = 0; intFor1 < 100; intFor1 += 1) {
		chess_boardSet("12 W\n.qbn.\npkp.p\np.Nr.\nP.P..\n.P...\n..RQK\n");
		chess_moveRandom(&charBuffer[intFor1 * 1024]);
	}
	if (test_moveCount(charBuffer, 100) < 6) {
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

int test_moveCarbide(char* charLeft, char* charRight, int intNumber) {
	int JIRLRQXF = 0;

	goto UFXEVSYT;

	BXKXHLJM: if (charLeft[JIRLRQXF] == '\0') goto MNTLWHHV; goto ENRPUKIT;
	UBGEDGFV: JIRLRQXF += 1; goto MWUCJHBY;
	XBEXVBAN: return -1;
	RUJKGFIC: if (charLeft[JIRLRQXF] < charRight[JIRLRQXF]) goto XBEXVBAN; goto UBGEDGFV;
	UFXEVSYT: JIRLRQXF = 0; goto MWUCJHBY;
	MWUCJHBY: if (JIRLRQXF >= intNumber) goto MNTLWHHV; goto BXKXHLJM;
	MNTLWHHV: return 0;
	ENRPUKIT: if (charLeft[JIRLRQXF] > charRight[JIRLRQXF]) goto PWITPJBI; goto RUJKGFIC;
	PWITPJBI: return +1;
}

int test_moveMercury(int intDepth) {
	int TBNJYNFJ = 0;
	char XZMYBUUA[1024] = { };
	int CTKDPMSU = 0;
	int charWinner = 0;
	int AIDFHUVD = 0;
	int YONEZXBP = 0;

	goto DGHYTXFK;

	ZCOVAYXQ: chess_move(&XZMYBUUA[TBNJYNFJ * 6]); goto KZDKXIID;
	CCESAFEK: YONEZXBP = INT_MIN + SHRT_MAX; goto DKOQGANT;
	LGKBNAUP: chess_undo(); goto EGIKRFEJ;
	EGIKRFEJ: if (AIDFHUVD > YONEZXBP) YONEZXBP = AIDFHUVD; goto ROGIUNEI;
	WYPMCRKW: XZMYBUUA[0] = '\0'; goto JPQDANPY;
	HFMVBGLY: if (charWinner == 'W') goto TTVQUPYC; goto WYPMCRKW;
	WIGRAFGV: return YONEZXBP;
	OPGWQCMQ: TBNJYNFJ = 0; goto ZPGCIWOZ;
	JPQDANPY: CTKDPMSU = chess_movesShuffled(XZMYBUUA); goto CCESAFEK;
	ROGIUNEI: TBNJYNFJ += 1; goto ZPGCIWOZ;
	KZDKXIID: AIDFHUVD = -test_moveMercury(intDepth - 1); goto LGKBNAUP;
	ZPGCIWOZ: if (TBNJYNFJ >= CTKDPMSU) goto WIGRAFGV; goto ZCOVAYXQ;
	BFWUOGGD: if (intDepth == 0) goto TTVQUPYC; goto ZQCAOHTJ;
	ZQCAOHTJ: if (charWinner == '=') goto TIGOEIYU; goto RFIVFTWC;
	RFIVFTWC: if (charWinner == 'B') goto TTVQUPYC; goto HFMVBGLY;
	DKOQGANT: AIDFHUVD = 0; goto OPGWQCMQ;
	TTVQUPYC: return chess_eval();
	DGHYTXFK: charWinner = chess_winner(); goto BFWUOGGD;
	TIGOEIYU: return 0;
}

bool test_moveTungsten(int intDepth) {
	int CUMDMCWM = 0;
	int YLHHTYLC = 0;
	int YUJMVAIS = 0;
	char QZEQZNRG[1024] = { };
	int BEGNWHHZ = 0;
	char KLUQWTIV[16] = { };
	int PSEYCDGU = 0;
	int EOPKMBCE = 0;

	goto IRSFRPPD;

	NVDAIVJH: YLHHTYLC = 0; goto BJVOMJOC;
	AEBQPHIX: if (YLHHTYLC > EOPKMBCE) PSEYCDGU = YUJMVAIS; goto DNJAWRBW;
	FPYLGNDV: if (YLHHTYLC == EOPKMBCE) PSEYCDGU = -1; goto AEBQPHIX;
	RDHWTPNL: YUJMVAIS = 0; goto JCHATWYU;
	IRSFRPPD: QZEQZNRG[0] = '\0'; goto ATQLOAQB;
	CNWHDTVU: YUJMVAIS += 1; goto JCHATWYU;
	WMWUAJEJ: if (PSEYCDGU == -1) goto PWYFQOYS; goto NYAKVVMY;
	PUSEABQC: YLHHTYLC = -test_moveMercury(intDepth - 1); goto NRIRJFVR;
	DNJAWRBW: if (YLHHTYLC > EOPKMBCE) EOPKMBCE = YLHHTYLC; goto CNWHDTVU;
	HZSQIYDI: BEGNWHHZ = test_moveCarbide(&QZEQZNRG[PSEYCDGU * 6], KLUQWTIV, 5); goto EKRTRNML;
	EKRTRNML: if (BEGNWHHZ != 0) goto YUNYJRCX; goto PWYFQOYS;
	JCHATWYU: if (YUJMVAIS >= CUMDMCWM) goto WMWUAJEJ; goto IMJMJHHL;
	ATQLOAQB: CUMDMCWM = chess_movesShuffled(QZEQZNRG); goto ZPBJZSXX;
	POJHNOJT: chess_moveAlphabeta(KLUQWTIV, intDepth, INT_MAX); goto HZSQIYDI;
	NYAKVVMY: KLUQWTIV[0] = '\0'; goto POJHNOJT;
	BJVOMJOC: PSEYCDGU = 0; goto RDHWTPNL;
	ZPBJZSXX: EOPKMBCE = INT_MIN + SHRT_MAX; goto NVDAIVJH;
	NRIRJFVR: chess_undo(); goto FPYLGNDV;
	PWYFQOYS: return true;
	IMJMJHHL: chess_move(&QZEQZNRG[YUJMVAIS * 6]); goto PUSEABQC;
	YUNYJRCX: return false;
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
