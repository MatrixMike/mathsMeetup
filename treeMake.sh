#!/bin/bash
# treemake to create file structure for my makefile creation
# give directory name as first argument
cd ~/  || exit
mkdir "$1"
cd "$1" || exit
mkdir lib
mkdir include
mkdir src
cd src || exit
mkdir obj


