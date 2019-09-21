FROM ubuntu:18.04

RUN apt update \
  && apt install --yes \
  build-essential \
  cmake \
  vim \
  wget \
  && rm -rf /var/lib/apt/lists/*

COPY . /workspace/helloworld
RUN cd /workspace/helloworld/ \
  && ./build.sh

WORKDIR /workspace/helloworld/build

