# Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
# See LICENSE file.

CXX=clang++
CXXFLAGS=-std=c++11
LDFLAGS=-g

SRC=functions.cpp

all:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(SRC)

check:
	$(CXX) $(CXXFLAGS) --analyze $(SRC)
