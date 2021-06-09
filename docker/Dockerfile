

from vnv:latest

#Install XS-BENCH
RUN cd /vnv-mount/applications/xs-bench/openmp-threading && bear make && ${VNV_MATCHER} --package XSBENCH --output Registration --extension c compile_commands.json && make 

