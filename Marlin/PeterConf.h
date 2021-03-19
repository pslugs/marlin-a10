#pragma once

#define PETER_BFPTOUCH 0
#define PETER_INDUCTIVE 0
#define PETER_ROBSCAR 1

#define PETER_PROBE (PETER_BFPTOUCH || PETER_INDUCTIVE || PETER_ROBSCAR)

// sanity check
#if (PETER_BFPTOUCH + PETER_INDUCTIVE + PETER_ROBSCAR) > 1
#error "only 1 type of probe allowed"
#endif