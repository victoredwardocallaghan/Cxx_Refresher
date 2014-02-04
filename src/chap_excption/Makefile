# Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
# See LICENSE file.

CXX=clang++
CXXFLAGS=-std=c++11
LDFLAGS=-g

SRC=exception.cpp

all:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(SRC)

check:
	clang++ --analyze $(SRC)
