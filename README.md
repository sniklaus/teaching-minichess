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

besides the compiler toolchain, it is necessary to install `zeromq` which will be used to communicate between the framework and a client. this dependency is already met by the machines in the linux lab but can easily be installed on a debian computer through the corresponding package.

```
sudo apt-get install libzmq3-dev
```

should you not be able to use `apt-get` or should you experience any issues during the installation, you can consult [zeromq.org](http://zeromq.org/intro:get-the-software) for further instructions. as with the compiler toolchain, i am afraid that there will not be individual support to resolve this issue.

##download
to download this framework, you can either use the button on the top of this page or by cloning the repository with the following command. the latter option is recommended as you are encouraged to manage your code in a source repository, even though you might have to install [git](http://git-scm.com) before you will be able to do so.

```
git clone https://github.com/CodeRect/teaching-minichess
```

after downloading and choosing a client, please change the name of your implementation in the main file of the client. note that there are certain restrictions for a valid name. it must not contain non printable characters and must not exceed the length limitation of fifteen characters.

```javascript
"YOUR NAME" // please change
```

##usage
as stated in the overview, it is necessary to use the framework together with a client. this section will accordingly outline the necessary steps for compiling and running the framework as well as the empty clients.

###`framework`
in order to be able to compile the framework, it is necessary to install the `libzmq3-dev` library. this has already been done for the machines in the linux lab, but you can use `apt-get` to install it on your own machine. should you be unable to install this additional library, i am afraid that there will not be individual support to resolve this issue. as mentioned earlier, you always have the option to use the machines in the linux lab.

```
sudo apt-get install libzmq3-dev
```

a simple makefile is already provided in order to build the framework. after you open a console and navigate to the folder of the framework, you can therefore utilize the `make` command.

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
in order to be able to compile the c client, it is necessary to install the `libzmq3-dev` library. this has already been done for the machines in the linux lab, but you can use `apt-get` to install it on your own machine. should you be unable to install this additional library, i am afraid that there will not be individual support to resolve this issue. as mentioned earlier, you always have the option to use the machines in the linux lab.

```
sudo apt-get install libzmq3-dev
```

a simple makefile is already provided in order to build the client. after you open a console and navigate to the folder of the client, you can therefore utilize the `make` command.

```
make
```

after a successful compilation, a `client` binary should have been built that you can subsequently execute to run the client.

```
./client
```

once the client is started, it should automatically connect to the framework. of course, a the framework needs to be executed concurrently to allow this interconnection to happen. after the client as well as the framework are being executed cooperatively, you should be able to access the webinterface and to interact with the client through the said graphical user interface.

###`client-java`
a simple makefile is already provided in order to build the clent. after you open a console and navigate to the folder of the client, you can therefore utilize the `make` command.

```
make
```

after a successful compilation, a `client` jar should have been built that you can subsequently execute to run the client.

```
java -ea -jar client.jar
```

once the client is started, it should automatically connect to the framework. of course, a the framework needs to be executed concurrently to allow this interconnection to happen. after the client as well as the framework are being executed cooperatively, you should be able to access the webinterface and to interact with the client through the said graphical user interface.

###`client-python`
in order to be able to use the python client, it is necessary to install the `pyzmq` module. this has already been done for the machines in the linux lab, but you can use `pip` to install it on your own machine. should you be unable to install this additional module, i am afraid that there will not be individual support to resolve this issue. as mentioned earlier, you always have the option to use the machines in the linux lab.

```
sudo pip install pyzmq
```

since no compilation step is necessary to run the python client, a python interpreter can accordingly be used to execute the main file.

```
python main.py
```

once the client is started, it should automatically connect to the framework. of course, a the framework needs to be executed concurrently to allow this interconnection to happen. after the client as well as the framework are being executed cooperatively, you should be able to access the webinterface and to interact with the client through the said graphical user interface.

##frequently asked questions
*the system does not respond anymore, how can i resolve this issue?* there are many potential causes for such a behavior. while the framework has been tested extensively, it might still contain an error that cause such an issue. it is therefore recommended to restart the framework as well as the client. it is furthermore likely that the implementation of the player has an issue, so please make sure that the error resides within the framework before creating a case in the issue tracker.

*is my implementation correct if all the test cases work?* while it mathematically might be possible to prove that a certain implementation meets the specification, test cases are far from providing such a gurantee. an implementation of a player might therefore pass all the test cases while still not being able to play chess competitively.

*how meaningful are the benchmarks of the test cases?* there is a significant overhead due to the communication with the client. the test cases need to communicate quite frequently with the client, which is why the influence of this overhead is very noticable. there is no need for an extensive communication while playing a game against another player however, which is why the communication induced overhead is usually not an issue.

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