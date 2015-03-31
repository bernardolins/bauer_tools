# bauer_tools

# Dependencies:

### Test - google test framework
To run tests you should gtest
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

### YAML parsing - cpp-yaml

