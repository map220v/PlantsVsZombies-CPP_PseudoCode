// Class: DFixedLayer


/* DFixedLayer::setFixedRect(float, float, float, float) */

void __thiscall
DFixedLayer::setFixedRect(DFixedLayer *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x14c) = param_1;
  *(float *)(this + 0x150) = param_2;
  *(float *)(this + 0x154) = param_3;
  *(float *)(this + 0x158) = param_4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFixedLayer::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DFixedLayer::draw(DFixedLayer *this,DMatrix *param_1,Graphics *param_2)

{
  int iVar1;
  MatrixPusher *this_00;
  Graphics3D *pGVar2;
  TRect *pTVar3;
  code *pcVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float extraout_s0;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::PushState(param_2);
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  fVar6 = (float)FUN_03575240(*(undefined4 *)(lVar5 + 0xb58));
  fVar7 = (float)FUN_03575244(*(undefined4 *)(lVar5 + 0xb5c));
  this_00 = (MatrixPusher *)FUN_03575248(*(undefined4 *)(lVar5 + 0xb60));
  MatrixPusher::CalcTransformMatrix(this_00,fVar6,fVar7,extraout_s0);
  pGVar2 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
  Sexy::Graphics3D::PushTransform(pGVar2,aSStack_30,true);
  Sexy::Graphics::SetColor(param_2,(Color *)(this + 0x28));
  Sexy::Graphics::ClearClipRect(param_2);
  pcVar4 = *(code **)(*(long *)this + 0x1f8);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  *(float *)(param_2 + 0x10) = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  *(float *)(param_2 + 0x14) = (float)iVar1;
  pTVar3 = (TRect *)(*pcVar4)(this);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_70,pTVar3);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_60,(TRect *)(this + 0x14c));
  fVar6 = (float)FUN_035791ac(local_60);
  local_60 = fVar6;
  fVar7 = (float)FUN_035791ac(local_5c);
  local_5c = fVar7;
  local_58 = (float)FUN_035791ac(local_58);
  local_54 = (float)FUN_035791ac(local_54);
  if (local_6c <= fVar7) {
    Sexy::SexyVector4::SexyVector4((SexyVector4 *)&local_40);
    local_34 = local_5c - local_6c;
    local_40 = local_70;
    local_3c = local_6c;
    local_38 = local_68;
    Sexy::Graphics::FillRect(param_2,(int)local_70,(int)local_6c,(int)local_68,(int)local_34);
    if (local_60 < local_70) goto LAB_0357a488;
  }
  else if (fVar6 < local_70) goto LAB_0357a488;
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)&local_40);
  local_38 = local_60 - local_70;
  local_34 = (local_6c + local_64) - local_5c;
  local_40 = local_70;
  local_3c = local_5c;
  Sexy::Graphics::FillRect(param_2,(int)local_70,(int)local_5c,(int)local_38,(int)local_34);
  if ((local_70 <= local_60) && (local_6c <= local_5c)) {
    Sexy::SexyVector4::SexyVector4((SexyVector4 *)&local_50);
    local_4c = local_54 + local_5c;
    local_48 = (local_70 + local_68) - local_60;
    local_44 = ((local_6c - local_5c) - local_54) + local_64;
    local_50 = local_60;
    Sexy::Graphics::FillRect(param_2,(int)local_60,(int)local_4c,(int)local_48,(int)local_44);
    Sexy::SexyVector4::SexyVector4((SexyVector4 *)&local_40);
    local_40 = local_58 + local_60;
    local_38 = ((local_70 - local_60) - local_58) + local_68;
    local_3c = local_5c;
    local_34 = local_54;
    Sexy::Graphics::FillRect(param_2,(int)local_40,(int)local_5c,(int)local_38,(int)local_54);
  }
LAB_0357a488:
  pGVar2 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
  Sexy::Graphics3D::PopTransform(pGVar2);
  Sexy::Graphics::PopState(param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DFixedLayer::~DFixedLayer() */

void __thiscall DFixedLayer::~DFixedLayer(DFixedLayer *this)

{
  *(undefined ***)this = &PTR__DFixedLayer_0665bd00;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665c040;
  DLayer::~DLayer((DLayer *)this);
  return;
}


/* DFixedLayer::~DFixedLayer() */

void __thiscall DFixedLayer::~DFixedLayer(DFixedLayer *this)

{
  ~DFixedLayer(this);
  AK::FreeHook(this);
  return;
}


/* DFixedLayer::DFixedLayer() */

void __thiscall DFixedLayer::DFixedLayer(DFixedLayer *this)

{
  DLayer::DLayer((DLayer *)this);
  *(undefined ***)this = &PTR__DFixedLayer_0665bd00;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665c040;
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x14c));
  return;
}

