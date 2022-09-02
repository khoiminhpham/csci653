# Using Containers to Accelerate HPC
Project outline:
## Problem description
Within just the past few years, the use of containers has revolutionized the way in which industries and enterprises have developed and deployed computational software and distributed systems. The containerization model has gained traction within the HPC community as well with the promise of improved reliability, reproducibility, portability and levels of customization that were previously not possible on supercomputers. This adoption has been enabled by a number of HPC container runtimes that have emerged including Singularity, Shifter, Enroot, Charliecloud and others.

## Simulation method
1. Select proper container images 
2. Deploy containers on HPC, using Singularity to control, setting up sharing resources between host and containers 
3. Try MPI/GPU applications in a container
4. Optimization process: speed up containers, testing MPI applicaitons on runtime, improve container images reproducibilities.

## Expected Results
This project will demonstrate a method to utilize containers with HPC resources through Shifter/Singularity.

Source (SC20):
https://sc20.supercomputing.org/presentation/?id=tut129&sess=sess271
ps: I'm checking out other paper and tutoorials on SC22, but at this moment, this topic captures my interest (to try) more than others.
