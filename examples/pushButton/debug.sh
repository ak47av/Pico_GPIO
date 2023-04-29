
#/bin/bash
cd ../build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make -j4
cd pushButton 
sudo openocd -f interface/cmsis-dap.cfg -f target/rp2040.cfg -c "program pushButton.elf verify reset exit"
sudo openocd -f interface/cmsis-dap.cfg -f target/rp2040.cfg

