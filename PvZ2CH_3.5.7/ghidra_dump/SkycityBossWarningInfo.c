// Class: SkycityBossWarningInfo


/* SkycityBossWarningInfo::Update() */

void __thiscall SkycityBossWarningInfo::Update(SkycityBossWarningInfo *this)

{
  float fVar1;
  
  if (this[0xd8] == (SkycityBossWarningInfo)0x0) {
    fVar1 = *(float *)(this + 0xd4) - 0.05;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
      this[0xd8] = (SkycityBossWarningInfo)0x1;
    }
  }
  else {
    fVar1 = *(float *)(this + 0xd4) + 0.05;
    if (1.0 <= fVar1) {
      *(undefined4 *)(this + 0xd4) = 0x3f800000;
      this[0xd8] = (SkycityBossWarningInfo)0x0;
      return;
    }
  }
  *(float *)(this + 0xd4) = fVar1;
  return;
}


/* SkycityBossWarningInfo::~SkycityBossWarningInfo() */

void __thiscall SkycityBossWarningInfo::~SkycityBossWarningInfo(SkycityBossWarningInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_068e2fa0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SkycityBossWarningInfo::~SkycityBossWarningInfo() */

void __thiscall SkycityBossWarningInfo::~SkycityBossWarningInfo(SkycityBossWarningInfo *this)

{
  ~SkycityBossWarningInfo(this);
  AK::FreeHook(this);
  return;
}


/* SkycityBossWarningInfo::SkycityBossWarningInfo() */

void __thiscall SkycityBossWarningInfo::SkycityBossWarningInfo(SkycityBossWarningInfo *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd8] = (SkycityBossWarningInfo)0x1;
  *(undefined ***)this = &PTR_GetClass_068e2fa0;
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkycityBossWarningInfo::DrawRedLayer(Sexy::Graphics*) */

void __thiscall SkycityBossWarningInfo::DrawRedLayer(SkycityBossWarningInfo *this,Graphics *param_1)

{
  float fVar1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  fVar1 = *(float *)(this + 0xd4);
  Sexy::Graphics::ClearClipRect(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  Sexy::Insets::Insets(aIStack_18,0xff,0,0,(int)(fVar1 * 128.0));
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkycityBossWarningInfo::DrawRedImg(Sexy::Graphics*) */

void __thiscall SkycityBossWarningInfo::DrawRedImg(SkycityBossWarningInfo *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  long lVar5;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  Sexy::Graphics::SetDrawMode(param_1,1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Color::Color(aCStack_18,1);
  local_c = (int)(*(float *)(this + 0xd4) * 255.0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b25ea0);
  iVar1 = *(int *)(gLawnApp + 0x724);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b25ea0);
  iVar2 = *(int *)(lVar5 + 0x38);
  iVar3 = *(int *)(gLawnApp + 0x728);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b25ea0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar1 - iVar2) / 2,(iVar3 - *(int *)(lVar5 + 0x3c)) / 2)
  ;
  Sexy::Graphics::SetDrawMode(param_1,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkycityBossWarningInfo::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
SkycityBossWarningInfo::DrawAll(SkycityBossWarningInfo *this,ModalFlags *param_1,Graphics *param_2)

{
  DrawRedLayer(this,param_2);
  DrawRedImg(this,param_2);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}

