## AFL++-DiPri

This branch is for integrating AFLpp-DiPri into Magma v1.2.
We prepared this branch because the Magma-v1.2's patch on `aflpp_driver.c` does not work 
well on afl++v4.06. 
Some Hunk errors occur when executing the patch part of the `fetch.sh` script, which is a 
of the scripts for `magma/fuzzers/aflplusplus`.
