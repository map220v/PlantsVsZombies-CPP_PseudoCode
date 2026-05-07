// Class: __cxxabiv1


/* __cxxabiv1::__terminate(void (*)()) */

void __cxxabiv1::__terminate(_func_void *param_1)

{
                    /* try { // try from 05479984 to 0547998b has its CatchHandler @ 0547998c */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}


/* __cxxabiv1::__unexpected(void (*)()) */

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

