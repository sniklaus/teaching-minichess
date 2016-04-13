#teaching-minichess
this project provides the framework for the advanced artificial intelligence class, in which an artificial chess player is ought to be implemented.

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
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_boardGet`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_boardSet`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_winner`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_isValid`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_isEnemy`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_isOwn`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_isNothing`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_eval`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_moves`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_movesShuffled`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_movesEvaluated`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_move`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_moveRandom`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_moveGreedy`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_moveNegamax`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_moveAlphabeta`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

###`chess_undo`
this section is still under construction. you can in the meantime consult the slides for a description of this function.

##test cases
note that the more advanced test cases rely on the basic test cases to succeed. for this reason, the most advanced test case `test_moveAlphabeta` does succeed even with the provided empty clients. other test cases like `test_moveNegamax` might not halt without a correct implementation of the basic functions. the grading will therefore not only evaluate newly implemented features, but furthermore take the basic functionalities into consideration as well.

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

##alternative workarounds
using a virtual machine is always a viable option. i personally do this as well and developed this framework in a debian environment that is running within a virtual machine. note that there are quite a few free virtualizers to choose from and while i have a preferred one, i would like to take the liberty of not making any advertisements here. i would therefore recommend to read a few related online resources.

should you only be having trouble building the framework, you can try the corresponding binary within the binaries folder of this repository. note however, that even a binary might not work in case some dependencies are not met. there so far is furthermore only one prebuilt binary for linux.

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

###`client-c`
* `zeromq`
* `cjson`

###`client-java`
* `jeromq`
* `json`

###`client-python`
* `zmq`

##license
please refer to the appropriate file within this repository.