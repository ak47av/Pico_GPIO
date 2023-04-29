#/bin/bash
cd ../build
cmake ..
make -j4
cd pushButton 
sudo openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program pushButton.elf verify reset exit"
