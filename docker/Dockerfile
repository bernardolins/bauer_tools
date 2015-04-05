FROM bernardolins/base

MAINTAINER bernardolins28@gmail.com

ENV GTEST_VERSION 1.7.0
ENV BOOST_VERSION 1.57.0
ENV BOOST_VERSION_LINK 1_57_0
ENV YAML_CPP_VERSION 0.5.1

WORKDIR /tmp

RUN apt-get install -y unzip bzip2

#installing gtest
RUN wget https://googletest.googlecode.com/files/gtest-$GTEST_VERSION.zip \
    && unzip gtest-$GTEST_VERSION.zip \
    && cd gtest-$GTEST_VERSION \ 
    && mkdir /opt/gtest /opt/gtest/include /opt/gtest/lib \
    && ./configure --prefix=/opt/gtest \
    && make \
    && cp -a include/gtest/ /opt/gtest/include \
    && cp -a lib/.libs/* /opt/gtest/lib \
    && rm /opt/gtest/lib/libgtest.la \
    && rm /opt/gtest/lib/libgtest_main.la \
    && cp -a lib/libgtest.la /opt/gtest/lib \
    && cp -a lib/libgtest_main.la /opt/gtest/lib

#### installing boost
RUN wget http://downloads.sourceforge.net/project/boost/boost/$BOOST_VERSION/boost_$BOOST_VERSION_LINK.tar.gz \
    && tar -xvzf boost_$BOOST_VERSION_LINK.tar.gz \
    && cd boost_$BOOST_VERSION_LINK \
    && ./bootstrap.sh \
    && ./b2 \
    && ./b2 install

#### installing yaml-cpp
RUN wget https://yaml-cpp.googlecode.com/files/yaml-cpp-0.5.1.tar.gz \
    && tar -xvzf yaml-cpp-$YAML_CPP_VERSION.tar.gz \
    && cd  yaml-cpp-$YAML_CPP_VERSION \
    && mkdir build \
    && cd build \
    && cmake .. \
    && make \
    && make install

