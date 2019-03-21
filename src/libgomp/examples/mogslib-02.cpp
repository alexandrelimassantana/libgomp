#include <stdlib.h>
#include <stdio.h>

#include <vector>

#include <mogslib/mogslib.h>

int main(void)
{
  omp_set_schedule(omp_sched_mogslib, 0);
  omp_set_num_threads(2);

  
  std::vector<unsigned> workload = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  MOGSLib::Context::OmpDelayTest::set_loads(workload);
#pragma omp parallel for schedule(runtime)
  for (size_t i = 0; i < 16; i++) {
    printf("Thread %i executing iteration %i (workload %u).\n",
           omp_get_thread_num(),
           i,
           workload[i]);
  }

  printf("-----------------------------------------------------\n");

  std::vector<unsigned> workload2 = { 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1};
  MOGSLib::Context::OmpDelayTest::set_loads(workload2);
#pragma omp parallel for schedule(runtime)
  for (size_t i = 0; i < 16; i++) {
    printf("Thread %i executing iteration %i (workload %u).\n",
           omp_get_thread_num(),
           i,
           workload2[i]);
  }

  printf("-----------------------------------------------------\n");

  MOGSLib::Context::OmpDelayTest::set_loads(workload2);
#pragma omp parallel for schedule(runtime)
  for (size_t i = 0; i < 16; i++) {
    printf("Thread %i executing iteration %i (workload %u).\n",
           omp_get_thread_num(),
           i,
           workload2[i]);
  }

  return EXIT_SUCCESS;
}