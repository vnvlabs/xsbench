ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}

#Install xsbench
COPY . ${SOFTWARE_DIR}/xs-bench

# Wrapper around bear that injects the openmp include directory.
RUN cd ${SOFTWARE_DIR}/xs-bench/openmp-threading \
    && bear make \
    && ${VNV_MATCHER} --package XSBENCH \
                      --output Registration_XSBENCH.c \
                      --fix-omp \
                      --cache vnv.__cache__ \
                      --targetFile ${PWD}/XSBench \
                      --regFile vnv.__registration__ \
                      compile_commands.json\
    && make 

RUN python3 ${VNV_DIR}/scripts/register.py register ${SOFTWARE_DIR}/xs-bench/vnv/gui/vnv.__registration__ 





