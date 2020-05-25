FROM ubuntu:latest

ENV env /usr/src
ENV LANG C.UTF-8

WORKDIR /usr/src

COPY helloworld.c .

RUN sed -i 's#http://archive.ubuntu.com/#http://mirrors.tuna.tsinghua.edu.cn/#' /etc/apt/sources.list \
&& apt-get update \
&& apt-get install -y gcc --fix-missing \
&& apt-get install -y make --fix-missing \
&& gcc -g -Wall helloworld.c -o helloworld

ENTRYPOINT ["./helloworld"]