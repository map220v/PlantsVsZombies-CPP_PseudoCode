// Class: CustomLevelAds


/* CustomLevelAds::~CustomLevelAds() */

void __thiscall CustomLevelAds::~CustomLevelAds(CustomLevelAds *this)

{
  *(undefined ***)this = &PTR_GetClass_06796650;
  *(undefined ***)(this + 0x10) = &PTR__CustomLevelAds_067967f0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to CustomLevelAds::~CustomLevelAds() */

void __thiscall CustomLevelAds::~CustomLevelAds(CustomLevelAds *this)

{
  ~CustomLevelAds(this + -0x10);
  return;
}


/* CustomLevelAds::~CustomLevelAds() */

void __thiscall CustomLevelAds::~CustomLevelAds(CustomLevelAds *this)

{
  ~CustomLevelAds(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelAds::~CustomLevelAds() */

void __thiscall CustomLevelAds::~CustomLevelAds(CustomLevelAds *this)

{
  ~CustomLevelAds(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAds::onNotifyADWatchFinish(int) */

void __thiscall CustomLevelAds::onNotifyADWatchFinish(CustomLevelAds *this,int param_1)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xd) {
    if (*(int *)(this + 0x16c) == 0) {
      *(int *)(this + 0x164) = *(int *)(this + 0x164) + 1;
      Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),500);
    }
  }
  else if ((param_1 == 0xc) && (*(int *)(this + 0x16c) == 1)) {
    *(int *)(this + 0x164) = *(int *)(this + 0x164) + 1;
    EATextSquish::Vec3::Vec3(aVStack_18,600.0,460.0,0.0);
    Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)aVStack_18,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAds::StaticClassInit() */

void CustomLevelAds::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"CustomLevelAds");
    (*pcVar2)(plVar1,asStack_10,FUN_03f14764,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelAds::StaticGetClass() */

long * CustomLevelAds::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelAds",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelAds::GetClass() const */

long * CustomLevelAds::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelAds",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelAds::CustomLevelAds() */

void __thiscall CustomLevelAds::CustomLevelAds(CustomLevelAds *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined ***)this = &PTR_GetClass_06796650;
  *(undefined ***)(this + 0x10) = &PTR__CustomLevelAds_067967f0;
  *(undefined4 *)(this + 0x168) = 1;
  return;
}


/* CustomLevelAds::StaticNew() */

CustomLevelAds * CustomLevelAds::StaticNew(void)

{
  CustomLevelAds *this;
  
  this = ::operator_new(0x170);
  CustomLevelAds(this);
  return this;
}


/* CustomLevelAds::SetType(std::string const&) */

void __thiscall CustomLevelAds::SetType(CustomLevelAds *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"sunbank");
  if (bVar1) {
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined4 *)(this + 0x168) = 1;
  }
  else {
    bVar1 = std::operator==(param_1,"plantfood");
    if (bVar1) {
      *(undefined4 *)(this + 0x16c) = 1;
      *(undefined4 *)(this + 0x168) = 3;
      return;
    }
  }
  return;
}


/* CustomLevelAds::OnMouseUp(int, int) */

void CustomLevelAds::OnMouseUp(int param_1,int param_2)

{
  ulong uVar1;
  ADManager *pAVar2;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(int *)(uVar1 + 0x164) < *(int *)(uVar1 + 0x168)) {
    if (*(int *)(uVar1 + 0x16c) == 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      pAVar2 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      ADManager::ShowAD(pAVar2,0xd);
      return;
    }
    if (*(int *)(uVar1 + 0x16c) == 1) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      pAVar2 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      ADManager::ShowAD(pAVar2,0xc);
      return;
    }
  }
  return;
}


/* CustomLevelAds::registerForEvents() */

void __thiscall CustomLevelAds::registerForEvents(CustomLevelAds *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyADWatchFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<CustomLevelAds,void(CustomLevelAds::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelAds::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelAds::Draw(CustomLevelAds *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  RenderEffectDefinition *pRVar6;
  RenderEffect *pRVar7;
  Image *pIVar8;
  code *pcVar9;
  GraphicsAutoState aGStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [16];
  int local_48;
  int local_44;
  Color aCStack_40 [16];
  Color aCStack_30 [16];
  wstring awStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_70,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  if (*(int *)(this + 0x164) < *(int *)(this + 0x168)) {
    if (*(int *)(this + 0x16c) == 0) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2808);
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,local_48,local_44);
    }
    else if (*(int *)(this + 0x16c) == 1) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2788);
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,local_48,local_44);
    }
    FUN_05478178(awStack_20,L"[RECONSTRUCTION_COMPONENT_NUM]",aCStack_30);
    TodReplaceNumberString(awStack_20,L"{NUMBER1}",*(int *)(this + 0x168) - *(int *)(this + 0x164));
    FUN_05476c50(awStack_20);
    nop();
    TodReplaceNumberString(awStack_60,L"{NUMBER2}",*(int *)(this + 0x168));
    FUN_054766c8(awStack_60,awStack_20);
    FUN_05476c50(awStack_20);
    TodStringTranslate(L"[FESTIVALGAME_LEFTTIMES]");
    std::operator+(awStack_58,awStack_60);
    iVar3 = local_48 * 3;
    iVar1 = local_48 + 3;
    if (-1 < local_48) {
      iVar1 = local_48;
    }
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    Sexy::Insets::Insets((Insets *)awStack_20,iVar1 >> 2,local_44 / 2,iVar2 >> 2,local_44 / 2);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
    Sexy::Color::Color(aCStack_30,0x66,0x37,0);
    WriteWordInRect(param_1,aCStack_40,awStack_20,uVar5,aCStack_30,5,1);
    FUN_05476c50(aCStack_40);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  else {
    pRVar6 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06ae2760);
    pRVar7 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar6);
    pcVar9 = *(code **)(*(long *)pRVar7 + 0x38);
    std::string::string((string *)awStack_20,"Default");
    (*pcVar9)(pRVar7,(string *)awStack_20,1);
    std::string::~string((string *)awStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)awStack_20,param_1,pRVar7,1);
    while (bVar4 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)awStack_20), bVar4) {
      if (*(int *)(this + 0x16c) == 0) {
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2808);
        Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,local_48,local_44);
      }
      else if (*(int *)(this + 0x16c) == 1) {
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2788);
        Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,local_48,local_44);
      }
      FUN_05478178((wstring *)aCStack_30,L"[RECONSTRUCTION_COMPONENT_NUM]",aCStack_40);
      TodReplaceNumberString
                ((wstring *)aCStack_30,L"{NUMBER1}",*(int *)(this + 0x168) - *(int *)(this + 0x164))
      ;
      FUN_05476c50((wstring *)aCStack_30);
      nop();
      TodReplaceNumberString(awStack_68,L"{NUMBER2}",*(int *)(this + 0x168));
      FUN_054766c8(awStack_68,(wstring *)aCStack_30);
      FUN_05476c50((wstring *)aCStack_30);
      TodStringTranslate(L"[FESTIVALGAME_LEFTTIMES]");
      std::operator+(awStack_60,awStack_68);
      iVar3 = local_48 * 3;
      iVar1 = local_48 + 3;
      if (-1 < local_48) {
        iVar1 = local_48;
      }
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      Sexy::Insets::Insets((Insets *)aCStack_30,iVar1 >> 2,local_44 / 2,iVar2 >> 2,local_44 / 2);
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
      Sexy::Color::Color(aCStack_40,0x66,0x37,0);
      WriteWordInRect(param_1,awStack_58,(wstring *)aCStack_30,uVar5,aCStack_40,5,1);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)awStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)awStack_20);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CustomLevelAds::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelAds::Draw(CustomLevelAds *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

