FROM ubuntu:18.04

RUN apt update \
  && apt install --yes \
  build-essential \
  cmake \
  vim \
  && rm -rf /var/lib/apt/lists/*

COPY . /workspace/helloworld
RUN mkdir /workspace/helloworld/build \
  && cd /workspace/helloworld/build \
  && cmake .. \
  && make

WORKDIR /workspace/helloworld/build

