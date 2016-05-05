#teaching-minichess
this project provides the framework for my advanced artificial intelligence class, in which an artificial chess player is ought to be implemented.

##overview
the repository contains the framework itself, as well as multiple empty clients in various languages. the framework provides a generic scaffolding, while a fully implemented client represents an artificial chess player. the framework as well as a client therefore need to be executed concurrently in order to have a running system.

the framework provides a graphical user interface that is accessible through a webbrowser, as well as several test cases to validate the implementation of a client. to let artificial chess players compete against each other, the framework furthermore provides a network interoperability through an external server.

<p align="center"><img src="http://content.coderect.com/ChessRect/Teaching/ScreenshotThumb.png" alt="ScreenshotThumb"></p>

##prerequisites
while you are able to choose between different languages to implement the client, the framework itself is written in c. therefore, the `gcc` compiler must be present to build the framework. unless you are making use of the linux lab, you might have to separately install the appropriate compiler toolchain. should you be able to use `apt-get`, you can install the following package to do so.

```
sudo apt-get install build-essential
```

should you be unable to setup the compiler toolchain correctly, i am afraid that there will not be individual support to resolve this issue. the machines in the linux lab are appropriately configured, so you always have the option to use them in favor of your personal computer.

besides the compiler toolchain, it is necessary to install `zeromq` with version `3.*` which will be used to communicate between the framework and a client. this dependency is already met by the machines in the linux lab but can easily be installed on a debian computer through the corresponding package.

```
sudo apt-get install libzmq3-dev
```

should you not be able to use `apt-get` or should you experience any issues during the installation, you can consult [zeromq.org](http://zeromq.org/intro:get-the-software) for further instructions. as with the compiler toolchain, i am afraid that there will not be individual support to resolve this issue.

##download
to download this framework, you can either use the button on the top of this page or clone the repository with the following command. the latter option is recommended as you are encouraged to manage your code in a source repository, even though you might have to install [git](http://git-scm.com) before you will be able to do so.

```
git clone https://github.com/CodeRect/teaching-minichess
```

after downloading and choosing a client, please change the name of your implementation in the main file. note that there are certain restrictions for a valid name. it must not contain non printable characters and must not exceed the length limitation of fifteen characters.

```javascript
Name = "YOUR NAME"; // CHANGE THIS - REQUIRED
```

##usage
as stated in the overview, it is necessary to use the framework together with a client. this section will accordingly outline the necessary steps for compiling and running the framework as well as the empty clients.

###`framework`
a rudimentary makefile is already provided in order to build the framework. after you open a console and navigate to the folder of the framework, you can therefore utilize the `make` command.

```
make
```

after a successful compilation, a `framework` binary should have been built that you can subsequently execute to run the framework.

```
./framework
```

once the framework has started, it is possible to access the corresponding webinterface through your webbrowser. to do so, simply navigate to the url that is stated below. note that you will initially only see a message that there is no client present, which will disappear once a client is being executed concurrently.

```
localhost:8080
```

###`client-c`
a rudimentary makefile is already provided in order to build the client. after you open a console and navigate to the folder of the client, you can therefore utilize the `make` command.

```
make
```

after a successful compilation, a `client` binary should have been built that you can subsequently execute to run the client.

```
./client
```

once the client is started, it should automatically connect to the framework. of course, a the framework needs to be executed concurrently to allow this interconnection to happen. after the client as well as the framework are being executed cooperatively, you should be able to access the webinterface and to interact with the client through the said graphical user interface.

###`client-java`
a rudimentary makefile is already provided in order to build the client. after you open a console and navigate to the folder of the client, you can therefore utilize the `make` command.

```
make
```

after a successful compilation, a `client` jar should have been built that you can subsequently execute to run the client.

```
java -ea -jar client.jar
```

once the client is started, it should automatically connect to the framework. of course, a the framework needs to be executed concurrently to allow this interconnection to happen. after the client as well as the framework are being executed cooperatively, you should be able to access the webinterface and to interact with the client through the said graphical user interface.

###`client-python`
in order to be able to use the python client, it is necessary to install the `pyzmq` module. this has already been done for the machines in the linux lab, but you can use `pip` to install it on your own machine. should you be unable to install this additional module, make sure that you have `python-dev` installed. i am afraid that there will not be individual support to resolve issues that are related to appropriately setting up your environment. as mentioned earlier, you always have the option to use the correctly configured machines in the linux lab.

```
pip install pyzmq
```

since no compilation step is necessary to run the python client, a python interpreter can accordingly be used to execute the main file.

```
python main.py
```

once the client is started, it should automatically connect to the framework. of course, a the framework needs to be executed concurrently to allow this interconnection to happen. after the client as well as the framework are being executed cooperatively, you should be able to access the webinterface and to interact with the client through the said graphical user interface.

##example
to give a better impression of what the textual format is supposed to look like, an brief example is given below.

```
			b1-c3:		a5-a4:		b2-b3:		c5-c4:		a2-a3:		a4-b3:

1 W			1 B			2 W			2 B			3 W			3 B			4 W
kqbnr		kqbnr		kqbnr		kqbnr		kqbnr		kqbnr		kqbnr
ppppp		ppppp		.pppp		.pppp		.p.pp		.p.pp		.p.pp
.....		.....		p....		p....		p.p..		p.p..		..p..
.....		..N..		..N..		.PN..		.PN..		PPN..		PpN..
PPPPP		PPPPP		PPPPP		P.PPP		P.PPP		..PPP		..PPP
RNBQK		R.BQK		R.BQK		R.BQK		R.BQK		R.BQK		R.BQK
```

##functions
to obtain a fully functioning client, it is required to implement various functions. these functions provide a well defined interface, such that the framework can communicate with a client in a well defined format.

###`chess_reset`
this function will be called in between individual games. it should be used to reset the internal variables of your implementation. the random numbers that are required for zobrist keying are one instance of internal variables that you might want to set in this function.

###`chess_boardGet`
the framework needs to be able to obtain the current state of the game from the client. in doing so, the output is expected to be in a well defined format. this function can thus be seen as a translation between your internal representation and the format that the framework expects.

```javascript
chess_reset();
chess_boardGet(charBuffer);
assert(strcmp(charBuffer, "1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n") == 0);
```

###`chess_boardSet`
the framework needs to be able to override the current state of the game within the client. in doing so, the input is being provided in a well defined format. this function can thus be seen as a translation between your internal representation and the format that the framework expects.

```javascript
chess_boardSet("18 W\n.k...\npn..r\n..p.P\n.Pp..\nP...K\nRB..Q\n");
chess_boardGet(charBuffer);
assert(strcmp(charBuffer, "18 W\n.k...\npn..r\n..p.P\n.Pp..\nP...K\nRB..Q\n") == 0);
```

###`chess_winner`
this function determines the winner of the current state, where `?` indicates that nobody has yet won while `=` indicates that the game ended in a draw. likewise, `W` is expected in case white has won while `B` is expected in case black has won. note that depending on the language that has been used to implement the client, this function either returns a character or a string.

```javascript
chess_reset();
assert(chess_winner() == '?');

chess_boardSet("15 B\n...r.\nppnQ.\n..p..\nNPPp.\nP..P.\nR...K\n");
assert(chess_winner() == 'W');

chess_boardSet("39 W\n....r\n.q...\npk...\nP....\nn....\nB....\n");
assert(chess_winner() == 'B');

chess_boardSet("41 W\n..k..\n.Q..P\nP....\n....P\n.bq..\nq..K.\n");
assert(chess_winner() == '=');
```

###`chess_isValid`
this is a function that might help to implement other features, such as the generation of moves for example. it will return whether a given coordinate is valid, id est that it points to a valid square on the board.

note that the implementation of this function has already been provided, which is why the related test cases should always pass successfully.

###`chess_isEnemy`
this is a function that might help to implement other features, such as the generation of moves for example. it will with reference to the side on move determine whether or not the provided piece is a piece from the side not on move.

```javascript
chess_reset();
assert(chess_isEnemy('k') == true);
assert(chess_isEnemy('K') == false);
assert(chess_isEnemy('.') == false);

chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_isEnemy('k') == false);
assert(chess_isEnemy('K') == true);
assert(chess_isEnemy('.') == false);
```

###`chess_isOwn`
this is a function that might help to implement other features, such as the generation of moves for example. it will with reference to the side on move determine whether or not the provided piece is a piece from the side on move.

```javascript
chess_reset();
assert(chess_isOwn('k') == false);
assert(chess_isOwn('K') == true);
assert(chess_isOwn('.') == false);

chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_isOwn('k') == true);
assert(chess_isOwn('K') == false);
assert(chess_isOwn('.') == false);
```

###`chess_isNothing`
this is a function that might help to implement other features, such as the generation of moves for example. it will with determine whether the provided piece represents an empty square.

```javascript
chess_reset();
assert(chess_isNothing('k') == false);
assert(chess_isNothing('K') == false);
assert(chess_isNothing('.') == true);

chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_isNothing('k') == false);
assert(chess_isNothing('K') == false);
assert(chess_isNothing('.') == true);
```

###`chess_eval`
this function determines the eval score of the current state, relative to the side on move. the exact implementation is up to you, but summing up the pieces for each player and calculating their difference is generally a good start. note that the related test cases are fairly tolerant, such that you are able to include arbitrary heuristics.

```javascript
chess_boardSet("1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_eval() == 0);

chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_eval() == 0);

chess_boardSet("1 W\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n");
assert(chess_eval() < 0);

chess_boardSet("1 B\nkqbnr\nppppp\n.....\n.....\nPPPPP\nRNBQ.\n");
asser(chess_eval() > 0);

chess_boardSet("1 W\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_eval() > 0);

chess_boardSet("1 B\n.qbnr\nppppp\n.....\n.....\nPPPPP\nRNBQK\n");
assert(chess_eval() < 0);
```

###`chess_moves`
this function determines all the possible moves of the current state. in doing so, the output is expected to be in a well defined format. note that depending on the language that has been used to implement the client, this function either returns a string or a string array.

```javascript
chess_reset();
intBuffer = chess_moves(charBuffer);
assert(orderless_comparison(intBuffer, charBuffer, "a2-a3\nb2-b3\nc2-c3\nd2-d3\ne2-e3\nb1-a3\nb1-c3\n") == true);

chess_boardSet("14 B\n.Rkbr\n..p..\np.Ppp\nP..P.\n..B.P\n....K\n");
intBuffer = chess_moves(charBuffer);
assert(orderless_comparison(intBuffer, charBuffer, "c6-b6\nc6-b5\nc6-d5\nd6-e5\nd6-d5\ne6-e5\ne4-e3\ne4-d3\n") == true);
```

###`chess_movesShuffled`
this function calls the moves function to retrieve the list of possible moves, before it randomly shuffles and returns them. this function will be helpful later when implementing more advanced functions.

note that the related test cases call the shuffled moves function several times on the same state and determine whether the entropy of the returned moves is sufficiently high.

###`chess_movesEvaluated`
this function calls the shuffled moves function to retrieve the randomized list of possible moves, before it sorts and returns them. this function will be helpful later when implementing more advanced functions. to perform the sort, the eval score after having performed each move individually needs to be obtained. the list of possible moves then needs to be sorted in order of increasing eval scores.

note that the related test cases call the eval function as well as the move and undo function. in doing so, it is being determined whether the returned moves are in the proper order.

###`chess_move`
this function performs the provided move, thus modifying the current state of the game accordingly. in doing so, the input is being provided in a well defined format.

```javascript
chess_reset();
chess_move("c2-c3\n");
chess_boardGet(charBuffer);
assert(strcmp(charBuffer, "1 B\nkqbnr\nppppp\n.....\n..P..\nPP.PP\nRNBQK\n") == 0);

chess_boardSet("15 B\nk..nr\np..p.\n..q..\nbp..P\nPB.QP\nR..K.\n");
chess_move("a5-a4\n");
chess_boardGet(charBuffer);
assert(strcmp(charBuffer, "16 W\nk..nr\n...p.\np.q..\nbp..P\nPB.QP\nR..K.\n") == 0);
```

###`chess_moveRandom`
this function performs a random move and returns the determined move as a string. to do this, this function may call the shuffled moves function to obtain a random valid move.

note that the related test cases call the random move function several times on the same state and determine whether the entropy of the returned moves is sufficiently high.

###`chess_moveGreedy`
this function performs a greedy move and returns the determined move as a string. to do this, this function may call the evaluated moves function to obtain the move that will put the opponent into the immediately worst state.

note that the related test cases let a greedy player compete against a random player. by doing this multiple times, the greedy player is expected to win most of the times.

###`chess_moveNegamax`
this function performs a negamax search and performs as well as returns the determined move as a string. the search will try to reach the provided depth through iterative deepening while not significantly exceeding the provided duration in milliseconds.

note that the related test cases let a negamax player compete against a greedy player. by doing this multiple times, the negamax player is expected to win most of the times.

###`chess_moveAlphabeta`
this function performs an alphabeta search and performs as well as returns the determined move as a string. the search will try to reach the provided depth through iterative deepening while not significantly exceeding the provided duration in milliseconds. within the tournament, the semantics of the depth as well as the duration argument will slightly deviate from this scheme. for further details, please consult the tournament mode section.

note that the related test cases likewise perform an alphabeta search and check whether the returned move is within the list of optimal moves.

###`chess_undo`
this function reverts the most recent move. a history of performed moves therefore needs to be kept, for which the move function needs to be modified accordingly. note that the exact implementation is up to you and there are many ways to do this. the most basic one does for example simply keep a history of states.

```javascript
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
assert(strcmp(charBuffer, "1 B\nkqbnr\nppppp\n.....\nN....\nPPPPP\nR.BQK\n") == 0);
```

##test cases
note that the more advanced test cases rely on the basic test cases to succeed. for this reason, the most advanced test case `test_moveAlphabeta` does succeed even with the provided empty clients. other test cases like `test_moveNegamax` might not halt without a correct implementation of the basic functions. the grading will therefore not only evaluate newly implemented features, but furthermore take the basic functionalities into consideration as well.

##tournament mode
to compete against other players, make sure to register or login by using the panel on the bottom left. this will make it possible to offer a game or to list existing offers and accept one of those. the player to offer a game will in this regard always play as white while the player to accept a game will always play aas black.

after a game has been started via the offer and accept principle, the framework will repeatedly call the alphabeta search of the client with a negative depth to indicate that the search is being performed within a tournament. in this case, it is up to the client to do the time management for which the duration argument should be considered as it contains the total remaining time in milliseconds. to give a better impression of this, a brief example is given below.

```javascript
chess_reset();

// should we play as black, the opponent will make his move first

chess_boardSet(charBuffer);
chess_moveAlphabeta(charBuffer, -1, 300000);
chess_boardGet(charBuffer);

// opponent will make his move

chess_boardSet(charBuffer);
chess_moveAlphabeta(charBuffer, -1, 292939);
chess_boardGet(charBuffer);

// opponent will make his move

chess_boardSet(charBuffer);
chess_moveAlphabeta(charBuffer, -1, 285878);
chess_boardGet(charBuffer);

// opponent will make his move

chess_boardSet(charBuffer);
chess_moveAlphabeta(charBuffer, -1, 278817);
chess_boardGet(charBuffer);
```

##linux lab
when connecting remotely into the linux lab, please choose one of the machines in the [first](https://cat.pdx.edu/labstatus/labs/cslinlaba/) or the [second](https://cat.pdx.edu/labstatus/labs/cslinlabb/) lab. after selecting a machine, you can use your credentials to establish a connection through ssh. note that you can alternatively use putty as well.

```
ssh <username>@<machine>.cs.pdx.edu
```

since the framework and the client use a unique port in order to communicate, a multiuser environment like the linux lab can cause certain issues. should another instance of the framework already be running on a machine, a newly executed framework will result in a segfault. it is in such a case recommended to either switch to a different machine or to modify the mentioned unique ports in the main file of the framework as well as the client.

```javascript
Webserver = 8080; // CHANGE THIS - OPTIONAL
Zeromq = 54361; // CHANGE THIS - OPTIONAL
```

in order to be able to access the webinterface of the framework on the remote machine in the linux lab, you need to establish an ssh tunnel such that you can use the browser on your local computer. there a few online resources that describe how this can be done and it eventually boils down to the following command. note that there is an equivalent way when using putty.

```
ssh <username>@<machine>.cs.pdx.edu -L 8080:localhost:8080
```

you will eventually need three ssh connections in parallel. one for the execution of the framework, one for the execution of the client as well as one for the tunnel in order to be able to access the webinterface. i am well aware that this is rather inconvenient but it is at least guaranteed to work. you are furthermore encouraged to use your own computer without connecting remotely into the linux lab. since i am afraid that there will not be individual support to get the framework to run on your own computer, this alternative had to be provided such that nobody will be left behind.

##virtual machine
using a virtual machine is always a viable option. i personally do this as well and developed this framework in a debian environment that is running within a virtual machine. note that there are quite a few free virtualizers to choose from and while i have a preferred one, i would like to take the liberty of not making any advertisements here. i would therefore recommend to read a few related online resources.

##frequently asked questions
*why does the framework segfault when it starts?* this can happen when the port it tries for the communication with the client is invalid or in use by another instance of the framework. to solve this issue, make sure that a valid port has been chosen and that there is no other running instance of the framework. make sure to read the previous section about the linux lab, should you be using this resource to work on your artificial chess player.

*there is a message from zeromq, stating that the address is already in use?* there might be another instance of the framework or the client running in the background, that prevents a newly executed framework or client from using the same port. it is therefore necessary to close the instance that has accidentally been left open. should it not be the case that there has been an instance left open, the operating system might not yet have gained back the control over a port that has previously been in use. in this case, it is recommended to retry it a few times.

*the system does not respond anymore, how can i resolve this issue?* there are many potential causes for such a behavior. while the framework has been tested extensively, it might still contain an error that causes such an issue. it is therefore recommended to restart the framework as well as the client. it is furthermore likely that the implementation of the player has an issue, so please make sure that the error resides within the framework before opening a case in the issue tracker.

*is my implementation correct if all the test cases work?* while it mathematically might be possible to prove that a certain implementation meets the specification, test cases are far from providing such a guarantee. an implementation of a player might therefore pass all the test cases while still not being able to play chess competitively.

*how meaningful are the benchmarks of the test cases?* there is a significant overhead due to the communication with the client. the test cases need to communicate quite frequently with the client, which is why the influence of this overhead is very noticeable. there is no need for an extensive communication while playing a game against another player however, which is why the communication induced overhead is usually not an issue.

##dependencies
since the framework consists of several components and each component has individual dependencies, they are being listed separately.

###`framework`
* `zeromq`
* `cjson`
* `mongoose`

###`framework-webinterface`
* `jquery` / `moment`
* `bootstrap` / `fontawesome`
* `plotly`

###`client-c`
* `zeromq`
* `cjson`

###`client-java`
* `jeromq`
* `json`

###`client-python`
* `zmq`

##images
* [cburnett](https://en.wikipedia.org/wiki/User:Cburnett)

##license
please refer to the appropriate file within this repository.