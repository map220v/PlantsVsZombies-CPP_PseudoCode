// Class: ScratchImage


/* ScratchImage::ScratchImage() */

void __thiscall ScratchImage::ScratchImage(ScratchImage *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DeviceImage *pDVar3;
  code *pcVar4;
  
  *(undefined8 *)this = 0;
  FUN_03b6fc74(this + 8);
  pDVar3 = DAT_06acc310;
  *(undefined4 *)(this + 0x10) = m_transitionAlpha;
  if (pDVar3 == (DeviceImage *)0x0) {
    pDVar3 = ::operator_new(0x160);
    Sexy::DeviceImage::DeviceImage(pDVar3,gLawnApp);
    DAT_06acc310 = pDVar3;
    FUN_03b6fc9c(pDVar3 + 0x18);
    uVar1 = *(undefined4 *)(gLawnApp + 0x724);
    uVar2 = *(undefined4 *)(gLawnApp + 0x728);
    *(undefined8 *)(pDVar3 + 0x70) = 0;
    *(undefined4 *)(pDVar3 + 0x38) = uVar1;
    pcVar4 = *(code **)(*(long *)pDVar3 + 0x130);
    *(undefined4 *)(pDVar3 + 0x3c) = uVar2;
    (*pcVar4)(pDVar3,1,1);
  }
  if (m_targetOwned == '\0') {
    *(DeviceImage **)this = DAT_06acc310;
    m_targetOwned = '\x01';
  }
  return;
}


/* ScratchImage::DeleteRenderTarget() */

void ScratchImage::DeleteRenderTarget(void)

{
  if (DAT_06acc310 != (long *)0x0) {
    (**(code **)(*DAT_06acc310 + 0x18))();
  }
  DAT_06acc310 = (long *)0x0;
  return;
}


/* ScratchImage::SetTransitionAlpha(int) */

void ScratchImage::SetTransitionAlpha(int param_1)

{
  m_transitionAlpha = param_1;
  return;
}


/* ScratchImage::~ScratchImage() */

void __thiscall ScratchImage::~ScratchImage(ScratchImage *this)

{
  if ((m_targetOwned != '\0') && (*(long *)this != 0)) {
    m_targetOwned = '\0';
    *(undefined8 *)this = 0;
  }
  std::unique_ptr<Sexy::Graphics,std::default_delete<Sexy::Graphics>>::~unique_ptr
            ((unique_ptr<Sexy::Graphics,std::default_delete<Sexy::Graphics>> *)(this + 8));
  return;
}


/* ScratchImage::SetMinAlpha(int) */

void __thiscall ScratchImage::SetMinAlpha(ScratchImage *this,int param_1)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  piVar1 = eastl::min_alt<int>(&local_4,(int *)(this + 0x10));
  *(int *)(this + 0x10) = *piVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScratchImage::StartDraw() */

void __thiscall ScratchImage::StartDraw(ScratchImage *this)

{
  unique_ptr *this_00;
  bool bVar1;
  Graphics *pGVar2;
  Graphics3D *this_01;
  undefined8 uVar3;
  ulong extraout_x1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (m_targetOwned == '\0') {
    uVar3 = 0;
  }
  else {
    this_00 = (unique_ptr *)(this + 8);
    bVar1 = std::unique_ptr::operator_cast_to_bool(this_00);
    if (!bVar1) {
      pGVar2 = Sexy::Graphics::operator_new((Graphics *)0xc8,extraout_x1);
      Sexy::Graphics::Graphics(pGVar2,DAT_06acc310);
      std::unique_ptr<Sexy::Graphics,std::default_delete<Sexy::Graphics>>::reset
                ((unique_ptr<Sexy::Graphics,std::default_delete<Sexy::Graphics>> *)this_00,pGVar2);
    }
    pGVar2 = (Graphics *)
             std::unique_ptr<Sexy::Graphics,std::default_delete<Sexy::Graphics>>::operator->
                       ((unique_ptr<Sexy::Graphics,std::default_delete<Sexy::Graphics>> *)this_00);
    this_01 = (Graphics3D *)Sexy::Graphics::Get3D(pGVar2);
    Sexy::Insets::Insets(aIStack_18,0,0,0,0);
    Sexy::Graphics3D::ClearColorBuffer(this_01,(Color *)aIStack_18);
    uVar3 = std::
            unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
            ::get((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                   *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScratchImage::FinishDraw(Sexy::Graphics*) */

void __thiscall ScratchImage::FinishDraw(ScratchImage *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)this != 0) {
    Sexy::Graphics::PushState(param_1);
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06acc328);
    pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar4)(pRVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      Sexy::Insets::Insets(aIStack_30,0xff,0xff,0xff,*(int *)(this + 0x10));
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_30);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Graphics::DrawImage(param_1,*(Image **)this,0,0);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    Sexy::Graphics::PopState(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

