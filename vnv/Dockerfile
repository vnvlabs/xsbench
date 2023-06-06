ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}

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


RUN echo ${SOURCE_DIR}/xs-bench/vnv/gui/vnv.__registration__  >> ${HOME}/.vnv






