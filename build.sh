set -e
cd third_party/Fast-DDS-2.5.0
bash build.sh
cd -

cd third_party/iceoryx-1.90.0
bash build.sh
cd -

cd third_party/protobuf-3.5.0
bash build.sh
cd -

mkdir -p build 
cmake --build build
