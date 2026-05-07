// Class: CustomLevelTab


/* CustomLevelTab::~CustomLevelTab() */

void __thiscall CustomLevelTab::~CustomLevelTab(CustomLevelTab *this)

{
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelTab_06661868;
  *(undefined ***)this = &PTR_GetClass_06661500;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06661890;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to CustomLevelTab::~CustomLevelTab() */

void __thiscall CustomLevelTab::~CustomLevelTab(CustomLevelTab *this)

{
  ~CustomLevelTab(this + -0x198);
  return;
}


/* CustomLevelTab::~CustomLevelTab() */

void __thiscall CustomLevelTab::~CustomLevelTab(CustomLevelTab *this)

{
  ~CustomLevelTab(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelTab::~CustomLevelTab() */

void __thiscall CustomLevelTab::~CustomLevelTab(CustomLevelTab *this)

{
  ~CustomLevelTab(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTab::SelectTab(int) */

void __thiscall CustomLevelTab::SelectTab(CustomLevelTab *this,int param_1)

{
  undefined8 uVar1;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x308) == param_1) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x340),2);
    uVar1 = *(undefined8 *)(this + 0x340);
  }
  else {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x348),2);
    uVar1 = *(undefined8 *)(this + 0x348);
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar1,2);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTab::InitView(int) */

void __thiscall CustomLevelTab::InitView(CustomLevelTab *this,int param_1)

{
  undefined8 uVar1;
  string asStack_88 [8];
  string asStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_CUSTOM_LEVEL_TAB_TAB_%d",asStack_88);
  uVar1 = StringHelper::ToImage(asStack_88,false);
  *(undefined8 *)(this + 0x340) = uVar1;
  Sexy::StrFormat("IMAGE_UI_CUSTOM_LEVEL_TAB_TAB_%d_DOWN",asStack_80,(ulong)(uint)param_1);
  uVar1 = StringHelper::ToImage(asStack_80,false);
  *(undefined8 *)(this + 0x348) = uVar1;
  if (param_1 == 0) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x340),2);
    uVar1 = *(undefined8 *)(this + 0x340);
  }
  else {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar1,2);
    uVar1 = *(undefined8 *)(this + 0x348);
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar1,2);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelTab::ButtonDepress(int) */

void __thiscall CustomLevelTab::ButtonDepress(CustomLevelTab *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0xd4) == param_1) &&
     (iVar1 = FUN_035e5c44(*(undefined8 *)(this + 0x318),*(undefined8 *)(this + 0x328)), iVar1 != 0)
     ) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x310));
    return;
  }
  return;
}


/* non-virtual thunk to CustomLevelTab::ButtonDepress(int) */

void __thiscall CustomLevelTab::ButtonDepress(CustomLevelTab *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTab::CustomLevelTab(int) */

void __thiscall CustomLevelTab::CustomLevelTab(CustomLevelTab *this,int param_1)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_28,&DAT_056f11a8,auStack_30);
  Sexy::Color::Color((Color *)&local_20,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1 + 2000,(ButtonListener *)(this + 0x300),awStack_28,
             (Color *)&local_20);
  FUN_05476c50(awStack_28);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06661500;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelTab_06661868;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06661890;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x310),(DummyInit *)0x0);
  *(int *)(this + 0x308) = param_1;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SelectTab);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<CustomLevelTab,void(CustomLevelTab::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectTab,&local_50);
  InitView(this,*(int *)(this + 0x308));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTab::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelTab::Draw(CustomLevelTab *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this[0x2f9] == (CustomLevelTab)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
    if ((this[0x6e] == (CustomLevelTab)0x0) && (this[0x2c8] == (CustomLevelTab)0x0)) {
      PVZ2UIButton::internalDraw((PVZ2UIButton *)this,param_1);
    }
    else {
      pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06afd1e0);
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
        PVZ2UIButton::internalDraw((PVZ2UIButton *)this,param_1);
        Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
      }
      Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    }
    (**(code **)(*(long *)this + 0x340))(this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

