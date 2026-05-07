// Class: eastl::iter_swap_impl<true>


/* void eastl::iter_swap_impl<true>::iter_swap<unsigned long*, unsigned long*>(unsigned long*,
   unsigned long*) */

void eastl::iter_swap_impl<true>::iter_swap<unsigned_long*,unsigned_long*>
               (ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

