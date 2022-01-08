#!/bin/bash
set -eu -o pipefail

script_dir="$(dirname "$0")"
pushd "$script_dir" &>/dev/null

cd ..
mkdir -p build
cd build
cmake ..
make

popd &>/dev/null
