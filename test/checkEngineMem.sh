#!/bin/bash

valgrind --log-file=engineMemory.log --leak-check=full --tool=memcheck ../engine

