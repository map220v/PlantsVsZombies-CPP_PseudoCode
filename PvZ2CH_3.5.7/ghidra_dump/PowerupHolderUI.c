// Class: PowerupHolderUI


/* PowerupHolderUI::~PowerupHolderUI() */

void __thiscall PowerupHolderUI::~PowerupHolderUI(PowerupHolderUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06831e60;
  *(undefined ***)(this + 0x10) = &PTR__PowerupHolderUI_06832000;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PowerupHolderUI::~PowerupHolderUI() */

void __thiscall PowerupHolderUI::~PowerupHolderUI(PowerupHolderUI *this)

{
  ~PowerupHolderUI(this + -0x10);
  return;
}


/* PowerupHolderUI::~PowerupHolderUI() */

void __thiscall PowerupHolderUI::~PowerupHolderUI(PowerupHolderUI *this)

{
  ~PowerupHolderUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PowerupHolderUI::~PowerupHolderUI() */

void __thiscall PowerupHolderUI::~PowerupHolderUI(PowerupHolderUI *this)

{
  ~PowerupHolderUI(this + -0x10);
  return;
}


/* PowerupHolderUI::StaticGetClass() */

long * PowerupHolderUI::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupHolderUI",uVar2,StaticNew);
  return sClass;
}


/* PowerupHolderUI::GetClass() const */

long * PowerupHolderUI::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupHolderUI",uVar2,StaticNew);
  return sClass;
}


/* PowerupHolderUI::PowerupHolderUI() */

void __thiscall PowerupHolderUI::PowerupHolderUI(PowerupHolderUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06831e60;
  *(undefined ***)(this + 0x10) = &PTR__PowerupHolderUI_06832000;
  return;
}


/* PowerupHolderUI::StaticNew() */

PowerupHolderUI * PowerupHolderUI::StaticNew(void)

{
  PowerupHolderUI *this;
  
  this = ::operator_new(0x168);
  PowerupHolderUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupHolderUI::AddPowerup(Sexy::RtWeakPtr<PowerupType>, bool) */

void __thiscall
PowerupHolderUI::AddPowerup(PowerupHolderUI *this,RtWeakPtrBase *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PowerupUI *this_00;
  float fVar6;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName((RtName *)&local_18,L"UIPowerup");
  lVar5 = UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
  PowerupUI::SetPowerupType(this_00,(RtName *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  PowerupUI::SetIsLocked(this_00,param_3);
  iVar1 = UIWidget::GetChildCount((UIWidget *)this);
  iVar2 = FUN_04306f14(0xf);
  fVar6 = (float)FUN_04306f28((float)iVar1 * 12.5);
  iVar3 = FUN_04306f10(*(undefined4 *)(lVar5 + 0x38));
  iVar4 = FUN_04306f14(0xfffffff1);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,((float)iVar2 - fVar6) - (float)(iVar3 * iVar1),(float)iVar4);
  fVar6 = (float)FUN_04306f28((float)iVar1 * 12.5);
  iVar2 = FUN_04306f10(*(undefined4 *)(lVar5 + 0x38));
  *(float *)(this + 0x164) = -((float)(iVar2 * iVar1) + fVar6);
  UIWidget::SetParentWidget((UIWidget *)this_00,(UIWidget *)this);
  UIWidget::SetPositionOffset(local_18,local_14,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupHolderUI::Draw(Sexy::Graphics*) */

void __thiscall PowerupHolderUI::Draw(PowerupHolderUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  Image *pIVar3;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04307050(*(undefined4 *)(this + 0x68));
  if (cVar1 == '\0') {
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
  if (cVar1 == '\0') {
    iVar2 = UIWidget::GetChildCount((UIWidget *)this);
    if (iVar2 < 2) {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af85b8);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
    }
    else {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af85e8);
      Sexy::Graphics::DrawImage(param_1,pIVar3,(int)*(float *)(this + 0x164),0);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PowerupHolderUI::Draw(Sexy::Graphics*) */

void __thiscall PowerupHolderUI::Draw(PowerupHolderUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

