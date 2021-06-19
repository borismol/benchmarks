#include <benchmark/benchmark.h>

#include "example.h"

static void BM_sum(benchmark::State& state) {
  for (auto _ : state) benchmark::DoNotOptimize(sum(1234, 5678));
}

static void BM_sum_asm(benchmark::State& state) {
  for (auto _ : state) benchmark::DoNotOptimize(sum_asm(1234, 5678));
}

BENCHMARK(BM_sum);
BENCHMARK(BM_sum_asm);
