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
                      compile_commands.json\
    && make 

RUN ${VNV_REGISTER} gui xs-bench ${SOFTWARE_DIR}/xs-bench/vnv/gui/vnv.__registration__ 





