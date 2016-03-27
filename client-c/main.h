#ifndef MAIN_H_LOCK
#define MAIN_H_LOCK

#include <assert.h>
#include <limits.h>
#include <pthread.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

#include "cjson.h"
#include <zmq.h> // sudo apt-get install libzmq3-dev

#include "chess.h"
#include "zeromq.h"

static inline int minimum(int intA, int intB) {
	if (intA < intB) {
		return intA;
	}
	
	return intB;
}

static inline int maximum(int intA, int intB) {
	if (intA > intB) {
		return intA;
	}
	
	return intB;
}

static inline unsigned long long milliseconds() {
	struct timeval timevalHandle = { };
	
	gettimeofday(&timevalHandle, NULL);
	
	return (timevalHandle.tv_sec * 1000) + (timevalHandle.tv_usec / 1000);
}

static inline unsigned long long rdtscp() {
	unsigned long long longRax = 0;
	unsigned long long longRdx = 0;
	
	__asm volatile("rdtscp" : "=a" (longRax), "=d" (longRdx));
	
	return (longRdx << 32) + (longRax << 0);
}

#endif
