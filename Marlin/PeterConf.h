#pragma once

#define PETER_BFPTOUCH 1
#define PETER_INDUCTIVE 0

#define PETER_PROBE (PETER_BFPTOUCH || PETER_INDUCTIVE)

#if PETER_BFPTOUCH && PETER_INDUCTIVE
#error "only 1 type of probe allowed"
#endif