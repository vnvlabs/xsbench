

from vnv:latest

#Install XS-BENCH
COPY . ./xs-bench
RUN cd ./xs-bench/openmp-threading && bear make && ${VNV_MATCHER} --package XSBENCH --output Registration --extension c compile_commands.json && make 

