// Class: FontFusionMemObject


/* FontFusionMemObject::SetAllocatorCallbacks(void* (*)(unsigned long), void (*)(void*), void*
   (*)(void*, int)) */

void FontFusionMemObject::SetAllocatorCallbacks
               (_func_void_ptr_ulong *param_1,_func_void_void_ptr *param_2,
               _func_void_ptr_void_ptr_int *param_3)

{
  FontFusion::gAllocCallback = param_1;
  FontFusion::gFreeCallback = param_2;
  FontFusion::gReallocCallback = param_3;
  return;
}

