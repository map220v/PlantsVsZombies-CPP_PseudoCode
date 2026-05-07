// Class: Sexy::RenderDevice


/* Sexy::RenderDevice::BltMatrixOptimized(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void Sexy::RenderDevice::BltMatrixOptimized
               (Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,TRect *param_5,
               Color *param_6,int param_7,bool param_8,bool param_9)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderDevice::FillScanLines(Sexy::RenderDevice::Span*, int, Sexy::Color const&, int) */

void __thiscall
Sexy::RenderDevice::FillScanLines
          (RenderDevice *this,Span *param_1,int param_2,Color *param_3,int param_4)

{
  Span *pSVar1;
  Span *pSVar2;
  code *pcVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_2) {
    pSVar2 = param_1 + 4;
    do {
      pSVar1 = pSVar2 + 0xc;
      pcVar3 = *(code **)(*(long *)this + 0x58);
      Insets::Insets(aIStack_18,*(int *)pSVar2,*(int *)(pSVar2 + -4),*(int *)(pSVar2 + 4),1);
      (*pcVar3)(this,aIStack_18,param_3,param_4);
      pSVar2 = pSVar1;
    } while (pSVar1 != param_1 + (ulong)(param_2 - 1) * 0xc + 0x10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderDevice::DrawRect(Sexy::TRect<int> const&, Sexy::Color const&, int) */

void __thiscall
Sexy::RenderDevice::DrawRect(RenderDevice *this,TRect *param_1,Color *param_2,int param_3)

{
  code *pcVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x58);
  Insets::Insets(aIStack_18,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8) + 1,1);
  (*pcVar1)(this,aIStack_18,param_2,param_3);
  pcVar1 = *(code **)(*(long *)this + 0x58);
  Insets::Insets(aIStack_18,*(int *)param_1,*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc),
                 *(int *)(param_1 + 8) + 1,1);
  (*pcVar1)(this,aIStack_18,param_2,param_3);
  pcVar1 = *(code **)(*(long *)this + 0x58);
  Insets::Insets(aIStack_18,*(int *)param_1,*(int *)(param_1 + 4) + 1,1,*(int *)(param_1 + 0xc) + -1
                );
  (*pcVar1)(this,aIStack_18,param_2,param_3);
  pcVar1 = *(code **)(*(long *)this + 0x58);
  Insets::Insets(aIStack_18,*(int *)param_1 + *(int *)(param_1 + 8),*(int *)(param_1 + 4) + 1,1,
                 *(int *)(param_1 + 0xc) + -1);
  (*pcVar1)(this,aIStack_18,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RenderDevice::RenderDevice() */

void __thiscall Sexy::RenderDevice::RenderDevice(RenderDevice *this)

{
  *(undefined **)this = &DAT_06a2e500;
  return;
}

