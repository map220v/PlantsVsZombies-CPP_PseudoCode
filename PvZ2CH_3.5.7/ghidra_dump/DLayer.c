// Class: DLayer


/* DLayer::DLayer() */

void __thiscall DLayer::DLayer(DLayer *this)

{
  DTransformNode::DTransformNode((DTransformNode *)this);
  *(undefined ***)this = &PTR__DLayer_06a23310;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a23650;
  return;
}


/* DLayer::~DLayer() */

void __thiscall DLayer::~DLayer(DLayer *this)

{
  *(undefined ***)this = &PTR__DLayer_06a23310;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a23650;
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DLayer::~DLayer() */

void __thiscall DLayer::~DLayer(DLayer *this)

{
  ~DLayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DLayer::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DLayer::draw(DLayer *this,DMatrix *param_1,Graphics *param_2)

{
  Graphics3D *pGVar1;
  TRect *pTVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::PushState(param_2);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
  Sexy::SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)param_1);
  Sexy::Graphics3D::PushTransform(pGVar1,aSStack_30,true);
  Sexy::Graphics::SetColor(param_2,(Color *)(this + 0x28));
  Sexy::Graphics::ClearClipRect(param_2);
  pcVar3 = *(code **)(*(long *)this + 0x1f8);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  pTVar2 = (TRect *)(*pcVar3)(this);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_40,pTVar2);
  fVar4 = (float)FUN_04f74568(local_40);
  local_40 = fVar4;
  fVar5 = (float)FUN_04f74568(local_3c);
  local_3c = fVar5;
  fVar6 = (float)FUN_04f74568(local_38);
  local_38 = fVar6;
  local_34 = (float)FUN_04f74568(local_34);
  Sexy::Graphics::FillRect(param_2,(int)fVar4,(int)fVar5,(int)fVar6,(int)local_34);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
  Sexy::Graphics3D::PopTransform(pGVar1);
  Sexy::Graphics::PopState(param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

