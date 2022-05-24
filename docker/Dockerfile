ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}:latest

ARG COMMIT_HASH=unknown
LABEL vnv.version.xsbench=${COMMIT_HASH}


#Install xsbench
COPY . ${SOURCE_DIR}/xs-bench

# Wrapper around bear that injects the openmp include directory.
RUN cd ${SOURCE_DIR}/xs-bench/openmp-threading \
    && bear make \
    && ${VNV_MATCHER} --package XSBENCH \
                      --output Registration_XSBENCH.c \
                      --fix-omp \
                      --cache vnv.__cache__ \
                      --targetFile ${PWD}/XSBench \
                      --regFile vnv.__registration__ \
                      compile_commands.json\
    && make 


ENV VNV_CONFIG=${VNV_CONFIG}:${SOURCE_DIR}/xs-bench/vnv.__registration__
ENV VNV_CONFIG=${VNV_CONFIG}:${SOURCE_DIR}/xs-bench/docker/config/vnv.__registration__




