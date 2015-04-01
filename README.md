# bauer_tools

### Dependencies:

#### gtest framewok
To run tests you should install gtest
>unzip gtest-1.7.0.zip<br />
>cd gtest-1.7.0<br />
>sudo mkdir /opt/gtest /opt/gtest/include /opt/gtest/lib<br />
>./configure --prefix=/opt/gtest<br />
>make<br />
>sudo cp -a include/gtest/ /opt/gtest/include<br />
>sudo cp -a lib/.libs/* /opt/gtest/lib<br />
>rm /opt/gtest/lib/libgtest.la<br />
>rm /opt/gtest/lib/libgtest_main.la<br />
>sudo cp -a lib/libgtest.la /opt/gtest/lib<br />
>sudo cp -a lib/libgtest_main.la /opt/gtest/lib<br />

#### boost-cpp
To install boost library, you just have to download it at 
>http://www.boost.org/users/history/version_1_57_0.html
Then, extract and cd to boost root directory. Now you just need to run
>./bootstrap.sh
>./b2
If you want to install boost to your system, just run
>sudo ./b2 install
Boost will be installed under /usr/local
#### cpp-yaml
After installing boost, you can install cpp-yaml. Make sure cmake is installed in your system:
>apt-get install cmake
Then, cd to cpp-yaml root directory and run
>mkdir build
>cd build
>cmake ..
>make
cpp-yaml will be builded. If you want, install it to your system running
>sudo make install
Then you are ready to go!
