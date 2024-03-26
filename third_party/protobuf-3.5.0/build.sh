sudo apt-get install autoconf automake libtool curl make g++ unzip

./autogen.sh

PROTO_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)
echo "PROTO_DIR: ${PROTO_DIR}"

./configure --prefix=${PROTO_DIR}/output
make
make check
sudo make install
sudo ldconfig

