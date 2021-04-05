#!/bin/bash
set -e

OUTPUT_DIR=bin
APP_NAME=dispatcher_test

if [ -d "$OUTPUT_DIR" ]; then
  echo "[INFO] :: removing old binaries from $OUTPUT_DIR/"
  rm -fr $OUTPUT_DIR
fi

echo "[INFO] :: generating Makefile"
cmake CMakeLists.txt -B $OUTPUT_DIR

echo "[INFO] :: building binaries"
cd $OUTPUT_DIR
make

echo "[INFO] :: generate $APP_NAME in ./$OUTPUT_DIR/"
