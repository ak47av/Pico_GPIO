
#/bin/bash
cd examples/build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make -j4
cd pushButton 
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program pushButton.elf verify reset exit"
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg

