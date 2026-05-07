// Class: Sexy::NullRenderDevice


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NullRenderDevice::CreateContext(Sexy::Image*, Sexy::HRenderContext const&) */

void Sexy::NullRenderDevice::CreateContext(Image *param_1,HRenderContext *param_2)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HRenderContext::HRenderContext((HRenderContext *)&local_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}

