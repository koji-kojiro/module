#pragma once

#define constructor __attribute__ ((constructor)) void

#define module(name)                                                          \
  constructor __init__##name (void);                                          \
  struct module_##name name;                                                  \
  struct module_##name