
#/bin/bash
cd ../build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make -j4
cd Blink
sudo openocd -f interface/cmsis-dap.cfg -f target/rp2040.cfg -c "adapter speed 5000" -c "program Blink.elf verify reset exit"
sudo openocd -f interface/cmsis-dap.cfg -f target/rp2040.cfg -c "adapter speed 5000"

