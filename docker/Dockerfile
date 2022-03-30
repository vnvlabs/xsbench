ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}:latest


#Install xsbench
COPY . ./xs-bench

# Wrapper around bear that injects the openmp include directory.
RUN cd ./xs-bench/openmp-threading && python3 bear.py /usr/lib/gcc/x86_64-linux-gnu/9/include make 

RUN cd ./xs-bench/openmp-threading && ${VNV_MATCHER} --package XSBENCH --output Registration_XSBENCH.c --cache vnv.__cache__ compile_commands.json && make 

RUN cd ./xs-bench/openmp-threading && ./XSBench 

ARG COMMIT_HASH=unknown
LABEL vnv.version.xsbench=${COMMIT_HASH}

ENV VNV_CONFIG=${VNV_CONFIG}:/xs-bench/.vnv-config.json





