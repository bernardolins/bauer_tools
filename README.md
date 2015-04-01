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

#### boost-cpp<br />
To install boost library, you just have to download it at<br /> 
>http://www.boost.org/users/history/version_1_57_0.html<br />

Then, extract and cd to boost root directory. Now you just need to run<br />

>./bootstrap.sh<br />
>./b2<br />

If you want to install boost to your system, just run<br />

>sudo ./b2 install<br />

Boost will be installed under /usr/local<br />

#### cpp-yaml<br />
After installing boost, you can install cpp-yaml. Make sure cmake is installed in your system:<br />

>apt-get install cmake<br />

Then, cd to cpp-yaml root directory and run<br />

>mkdir build<br />
>cd build<br />
>cmake ..<br />
>make<br />

cpp-yaml will be builded. If you want, install it to your system running<br />

>sudo make install<br />

Then you are ready to go!<br />
