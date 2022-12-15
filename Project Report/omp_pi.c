// We shold choose pure openMP program because MPI is data transferring, 
// in computational benchmark, data transferringis always a bottle neck.

#include <stdio.h>
#include <omp.h>
//#include <time.h>
#define NBIN 2000000000
#define MAX_THREADS 4

void main() {
	//clock_t begin = clock();
	int nthreads,tid;
	double step;//,sum[MAX_THREADS],pi;
	omp_set_num_threads(4);

	step = 1.0/NBIN;

// for (int i = 0; i < 5; i++) {	
double pi=0.0, sum[MAX_THREADS]={0.0};
#pragma omp parallel private(tid)
	{
		// int i;
		double x;
		nthreads = omp_get_num_threads();
		// printf("numthreads = %d\n",nthreads);
		tid = omp_get_thread_num();
		for (long i=tid; i<NBIN; i+=nthreads) {
			x = (i+0.5)*step;
			sum[tid] += 4.0/(1.0+x*x);
		}
	}
	for(tid=0; tid<nthreads; tid++)
		pi += sum[tid]*step;
	printf("PI = %f\n",pi);
	
// }
	//clock_t end = clock();
	//double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	//printf("execution time = %f\n",time_spent);
}

//  cc omp_pi.c -fopenmp -lm -o ompi
//  time ./ompi

// 1 thread: 19secs
// 2 threads: 

