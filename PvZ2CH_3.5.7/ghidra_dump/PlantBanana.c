// Class: PlantBanana


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::GetPlantAttackRect(PlantWeapon) */

void PlantBanana::GetPlantAttackRect(Insets *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::IsArenaBattle();
  if ((cVar1 == '\0') || (param_3 != 0)) {
    PlantFramework::GetPlantAttackRect(param_1,param_2);
  }
  else {
    Sexy::Insets::Insets((Insets *)&local_18);
    local_18 = 0;
    local_10 = 800;
    local_14 = 0;
    local_c = 600;
    Sexy::Insets::Insets(param_1,(Insets *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantBanana::unregisterForEvents() */

void __thiscall PlantBanana::unregisterForEvents(PlantBanana *this)

{
  char cVar1;
  
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* PlantBanana::NotifySetHidden(bool, bool) */

void __thiscall PlantBanana::NotifySetHidden(PlantBanana *this,bool param_1,bool param_2)

{
  char cVar1;
  
  if (((param_2 < param_1) && (*(BaseCursor **)(this + 0x30) != (BaseCursor *)0x0)) &&
     (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x30)), cVar1 == '\0')) {
    BaseCursor::Destroy(*(BaseCursor **)(this + 0x30));
    return;
  }
  return;
}


/* PlantBanana::PlantBanana() */

void __thiscall PlantBanana::PlantBanana(PlantBanana *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined8 *)(this + 0x30) = 0;
  this[0x28] = (PlantBanana)0x0;
  this[0x29] = (PlantBanana)0x0;
  *(undefined ***)this = &PTR_GetClass_068051a0;
  return;
}


/* PlantBanana::StaticNew() */

PlantBanana * PlantBanana::StaticNew(void)

{
  PlantBanana *this;
  
  this = ::operator_new(0x38);
  PlantBanana(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::StaticClassInit() */

void PlantBanana::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBanana");
    (*pcVar2)(plVar1,asStack_10,FUN_041eda88,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBanana::StaticGetClass() */

long * PlantBanana::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBanana",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBanana::GetClass() const */

long * PlantBanana::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBanana",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBanana::~PlantBanana() */

void __thiscall PlantBanana::~PlantBanana(PlantBanana *this)

{
  *(undefined ***)this = &PTR_GetClass_068051a0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBanana::~PlantBanana() */

void __thiscall PlantBanana::~PlantBanana(PlantBanana *this)

{
  ~PlantBanana(this);
  AK::FreeHook(this);
  return;
}


/* PlantBanana::IsMeetShowPlayLv5() */

char __thiscall PlantBanana::IsMeetShowPlayLv5(PlantBanana *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_041ed490(*(undefined8 *)(this + 0x10));
  if ((((cVar1 == '\0') || (gLawnApp == 0)) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) ||
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* PlantBanana::SetPlayingLevel5(bool) */

void __thiscall PlantBanana::SetPlayingLevel5(PlantBanana *this,bool param_1)

{
  RtObject *this_00;
  PlantAnimRig_Banana *pPVar1;
  
  this[0x2a] = (PlantBanana)param_1;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(this_00);
  if (pPVar1 != (PlantAnimRig_Banana *)0x0) {
    FUN_041ed4c4(pPVar1 + 0x3c0,this[0x2a]);
    return;
  }
  return;
}


/* PlantBanana::RandomPlayLevel5() */

void __thiscall PlantBanana::RandomPlayLevel5(PlantBanana *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_041ed490(uVar4);
  bVar3 = false;
  if (cVar1 != '\0') {
    lVar2 = FUN_041efad8(uVar4);
    fVar6 = *(float *)(lVar2 + 0x2e8);
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    bVar3 = fVar5 < fVar6;
  }
  SetPlayingLevel5(this,bVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::registerForEvents() */

void __thiscall PlantBanana::registerForEvents(PlantBanana *this)

{
  undefined *puVar1;
  char cVar2;
  Board *pBVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = PlantFramework::IsArenaBattle();
  if (cVar2 == '\0') {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantBanana,bool(PlantBanana::*)(Sexy::Touch_const&)>
              (aDStack_68,(CBMemberTranslatorX *)&local_80);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,6,aRStack_88,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    local_b0 = local_80;
    uStack_a8 = uStack_78;
    local_a0 = local_70;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantBanana,void(PlantBanana::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::Idle() */

void __thiscall PlantBanana::Idle(PlantBanana *this)

{
  UIEasyButtonWidget *this_00;
  long *plVar1;
  RtObject *this_01;
  PlantAnimRig_Banana *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) - 0xbU < 2) {
    this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(this_01);
    if (pPVar2 != (PlantAnimRig_Banana *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Banana::PlayRecoverStart(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else {
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar1 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::canFire() const */

void PlantBanana::canFire(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  long in_x0;
  wchar16 *pwVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::IsWatering(*(Plant **)(in_x0 + 0x10));
  if ((cVar2 != '\0') ||
     (iVar1 = *(int *)(*(long *)(in_x0 + 0x10) + 200), uVar3 = iVar1 == 10 || iVar1 == 1,
     iVar1 != 10 && iVar1 != 1)) {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_18;
    std::string::string(asStack_10,"FreePlanting");
    uVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::setState(int) */

void __thiscall PlantBanana::setState(PlantBanana *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  RtObject *pRVar5;
  PlantAnimRig_Banana *pPVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  float *pfVar10;
  UIEasyButtonWidget *pUVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  pUVar11 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if ((*(int *)(pUVar11 + 200) == param_1) && (param_1 != 0xb)) goto switchD_041f1864_caseD_2;
  *(int *)(pUVar11 + 200) = param_1;
  switch(param_1) {
  case 1:
    plVar9 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    (**(code **)(*plVar9 + 0x118))();
    break;
  case 10:
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar8,"Play_Plant_Banana_Attack_Activate");
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    break;
  case 0xb:
    pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(pRVar5);
    lVar3 = *(long *)(this + 0x10);
    uVar15 = PVZ_T();
    uVar7 = *(undefined8 *)(this + 0x10);
    *(undefined4 *)(lVar3 + 0x128) = uVar15;
    iVar2 = FUN_041ed488(uVar7);
    if (iVar2 == 2) {
      fVar13 = 1.0200001;
    }
    else if (iVar2 < 3) {
      fVar13 = 1.2;
    }
    else {
      fVar13 = 0.84000003;
    }
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      cVar1 = FUN_041ed4c0(this[0x2a]);
      if (cVar1 == '\0') {
        pcVar8 = "special";
      }
      else {
        pcVar8 = "special2";
      }
      std::string::string(asStack_58,pcVar8);
      nop();
      fVar14 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar6,asStack_58);
      pcVar12 = *(code **)(*(long *)pPVar6 + 0x130);
      *(float *)(*(long *)(this + 0x10) + 0x128) =
           *(float *)(*(long *)(this + 0x10) + 0x128) + fVar13 * fVar14;
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      (*pcVar12)(pPVar6,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
    }
    else {
      std::string::string(asStack_58,"plantfood");
      fVar14 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar6,asStack_58);
      *(float *)(*(long *)(this + 0x10) + 0x128) =
           *(float *)(*(long *)(this + 0x10) + 0x128) + fVar13 * fVar14;
      std::string::~string(asStack_58);
      nop();
    }
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    break;
  case 0xc:
    iVar2 = FUN_041ed488(pUVar11);
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
LAB_041f189c:
      fVar13 = (float)PVZ_T();
      pUVar11 = *(UIEasyButtonWidget **)(this + 0x10);
      fVar14 = (float)FUN_041ed478(*(undefined4 *)(pUVar11 + 0x420));
      *(float *)(pUVar11 + 0x128) = fVar13 + fVar14 * 26.0;
    }
    else {
      lVar3 = FUN_041efad8(pUVar11);
      uVar4 = FUN_041ed4cc(*(undefined8 *)(lVar3 + 0x2d0),*(undefined8 *)(lVar3 + 0x2d8));
      if (uVar4 <= (ulong)(long)iVar2) goto LAB_041f189c;
      fVar13 = (float)PVZ_T();
      lVar3 = FUN_041efad8(*(undefined8 *)(this + 0x10));
      pfVar10 = (float *)FUN_041ed4f0(*(undefined8 *)(lVar3 + 0x2d0),(long)iVar2);
      pUVar11 = *(UIEasyButtonWidget **)(this + 0x10);
      fVar14 = (float)FUN_041ed478(*(undefined4 *)(pUVar11 + 0x420));
      *(float *)(pUVar11 + 0x128) = fVar13 + fVar14 * *pfVar10;
    }
    pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar11);
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(pRVar5);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Banana::PlayRecoverStart(pPVar6,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
switchD_041f1864_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBanana::Initialize() */

void __thiscall PlantBanana::Initialize(PlantBanana *this)

{
  RtObject *this_00;
  PlantAnimRig_Banana *pPVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,1);
  this[0x2a] = (PlantBanana)0x0;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(this_00);
  if (pPVar1 != (PlantAnimRig_Banana *)0x0) {
    *(PlantBanana **)(pPVar1 + 0x3b8) = this;
  }
  return;
}


/* PlantBanana::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBanana::onAnimStoppedCallback(PlantBanana *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  PlantAnimRig_Banana *this_01;
  
  bVar1 = std::operator==(param_1,"reload_end");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"reload_end2"), !bVar1)) {
    bVar1 = std::operator==(param_1,"reload");
    if (!bVar1) {
      return;
    }
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_01 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(this_00);
    PlantAnimRig_Banana::PlayRecoverLoop(this_01);
    return;
  }
  setState(this,1);
  return;
}


/* PlantBanana::CancelPlantfood() */

void __thiscall PlantBanana::CancelPlantfood(PlantBanana *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xc);
  return;
}


/* PlantBanana::select() */

bool __thiscall PlantBanana::select(PlantBanana *this)

{
  int iVar1;
  RtObject *this_00;
  PlantAnimRig_Banana *this_01;
  bool bVar2;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (iVar1 == 0xc) {
    bVar2 = false;
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
  }
  else {
    bVar2 = iVar1 == 1 || iVar1 == 0xd;
    if (iVar1 == 1 || iVar1 == 0xd) {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(this_00);
      PlantAnimRig_Banana::PlaySelected(this_01);
      setState(this,10);
    }
  }
  return bVar2;
}


/* PlantBanana::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantBanana::onTouchEvent(PlantBanana *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  TRect<int> *this_00;
  BananaTargetCursor *this_01;
  Plant *this_02;
  Board *this_03;
  float fVar3;
  float fVar4;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_02 = *(Plant **)(this + 0x10);
    cVar1 = FUN_041ed474(this_02[0x278]);
    if ((((cVar1 == '\0') && (cVar1 = Plant::IsWatering(this_02), cVar1 == '\0')) &&
        (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) &&
       (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17), cVar1 == '\0')) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      cVar1 = Board::IsPlaying(this_03);
      if (((cVar1 == '\0') || (cVar1 = FUN_041ed47c(this_03[0x887]), cVar1 == '\0')) &&
         (this[0x29] == (PlantBanana)0x0)) {
        return '\0';
      }
      fVar3 = (float)FUN_041ed8dc((float)*(int *)(param_1 + 0x10));
      fVar4 = (float)FUN_041ed8dc((float)*(int *)(param_1 + 0x14));
      this_00 = (TRect<int> *)
                (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar3,(int)fVar4);
      if (*(int *)(param_1 + 0x30) != 0) {
        return '\0';
      }
      cVar2 = canFire();
      if (cVar2 == '\0') {
        return '\0';
      }
      if (cVar1 == '\0') {
        return '\0';
      }
      if ((*(BaseCursor **)(this + 0x30) != (BaseCursor *)0x0) &&
         (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x30)), cVar1 == '\0')) {
        return '\0';
      }
      cVar1 = select(this);
      if (cVar1 == '\0') {
        return '\0';
      }
      this_01 = ::operator_new(0x50);
      BananaTargetCursor::BananaTargetCursor(this_01,param_1,this);
      cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_01,true);
      if (cVar1 == '\0') {
        return '\0';
      }
      *(BananaTargetCursor **)(this + 0x30) = this_01;
      return cVar1;
    }
  }
  return '\0';
}


/* PlantBanana::deselect() */

void __thiscall PlantBanana::deselect(PlantBanana *this)

{
  char *pcVar1;
  
  setState(this,1);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Banana_Attack_Disarm");
  return;
}


/* PlantBanana::onCursorDestroyed(BaseCursor*) */

void __thiscall PlantBanana::onCursorDestroyed(PlantBanana *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(BaseCursor **)(this + 0x30) != param_1) {
    return;
  }
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    deselect(this);
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}


/* PlantBanana::queueShot(float, Sexy::Point const&, bool) */

void __thiscall PlantBanana::queueShot(PlantBanana *this,float param_1,Point *param_2,bool param_3)

{
  BananaLauncherSubSystem *this_00;
  
  this_00 = Board::GetGameSubSystem<BananaLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  BananaLauncherSubSystem::QueueShot(this_00,this,param_1,param_2,param_3);
  return;
}


/* PlantBanana::addShot(float, int&, Sexy::Point const&, bool) */

void __thiscall
PlantBanana::addShot(PlantBanana *this,float param_1,int *param_2,Point *param_3,bool param_4)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  queueShot(this,fVar1 + param_1 * (float)(*param_2 + 1),param_3,param_4);
  *param_2 = *param_2 + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::ApplyPlantfood() */

void PlantBanana::ApplyPlantfood(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  PlantFramework *in_x0;
  RealObject *this;
  long lVar6;
  long *extraout_x0;
  undefined8 uVar7;
  undefined8 uVar8;
  long *extraout_x0_00;
  BoardTransforms *pBVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float fVar15;
  int local_9c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  undefined1 local_88 [8];
  TPoint<int> aTStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood(in_x0);
  cVar2 = IsMeetShowPlayLv5((PlantBanana *)in_x0);
  if (cVar2 == '\0') {
    if (*(BaseCursor **)(in_x0 + 0x30) != (BaseCursor *)0x0) {
      cVar2 = BaseCursor::IsCachedCursor(*(BaseCursor **)(in_x0 + 0x30));
      if (cVar2 == '\0') {
        BaseCursor::Destroy(*(BaseCursor **)(in_x0 + 0x30));
      }
      else {
        Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
      }
    }
    SetPlayingLevel5((PlantBanana *)in_x0,false);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
               (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,0xffffffff,0xffffffff);
    uVar7 = local_50;
    iVar5 = FUN_041ed4dc(local_50,local_48);
    uVar1 = iVar5 - 1;
    if (-1 < (int)uVar1) {
      lVar11 = (long)(int)uVar1 + -1;
      lVar6 = lVar11;
      lVar14 = (long)(int)uVar1;
      do {
        lVar12 = lVar6;
        FUN_041ed4e8(uVar7,lVar14);
        nop();
        cVar2 = (**(code **)(*(long *)this + 0x328))();
        if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0'))
        {
          uVar7 = local_50;
          if (*(RealObject **)(in_x0 + 0x10) != (RealObject *)0x0) {
            bVar3 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(in_x0 + 0x10));
            if (bVar3 == 0) goto LAB_041f2fa8;
            uVar7 = local_50;
            if (*(long *)(in_x0 + 0x10) == 0) goto joined_r0x041f2fe4;
            plVar10 = *(long **)(*(long *)(in_x0 + 0x10) + 0xa8);
            pcVar13 = *(code **)(*plVar10 + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_98);
            cVar2 = (*pcVar13)(plVar10,aRStack_90,0);
            if (cVar2 == '\0') {
              if (bVar3 != 0) goto LAB_041f30e8;
LAB_041f34c0:
              bVar3 = 0;
            }
            else {
              if (*(long *)(in_x0 + 0x10) == 0) {
                bVar3 = 0;
                if (cVar2 == '\0') goto LAB_041f34c0;
              }
              else {
                pcVar13 = *(code **)(*(long *)this + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)local_38);
                bVar3 = (*pcVar13)(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                         *)&local_20,0);
                bVar3 = bVar3 ^ 1;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
              }
LAB_041f30e8:
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
            }
            uVar7 = local_50;
            if (bVar3 != 0) goto LAB_041f2fa8;
          }
        }
        else {
LAB_041f2fa8:
          local_60 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_50);
          local_38[0] = __gnu_cxx::
                        __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                     *)&local_60,lVar14);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)local_38);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_20);
          uVar7 = local_50;
        }
joined_r0x041f2fe4:
        local_50 = uVar7;
        if (lVar12 == lVar11 - (ulong)uVar1) break;
        lVar6 = lVar12 + -1;
        lVar14 = lVar12;
      } while( true );
    }
    lVar6 = FUN_041efad8(*(undefined8 *)(in_x0 + 0x10));
    local_9c = 0;
    fVar15 = *(float *)(lVar6 + 0x2c0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
    while ((lVar6 = FUN_041efad8(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar6 + 0x2b8)
           && (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                                 ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20),
              cVar2 == '\0'))) {
      iVar5 = FUN_041ed4dc(local_20,local_18);
      iVar5 = PlantFramework::Rand(in_x0,iVar5);
      FUN_041ed4e8(local_20,(long)iVar5);
      nop();
      pBVar9 = (BoardTransforms *)
               (**(code **)(*extraout_x0 + 0x3a8))((float)(local_9c + 1) * fVar15);
      local_60 = CONCAT44(in_s1,extraout_s0);
      BoardTransforms::BoardSpaceToGrid(pBVar9,extraout_s0,in_s1);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_38);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_38);
      local_78 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar7,uVar8,aTStack_80);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_38);
      bVar4 = __gnu_cxx::operator==((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
      if (bVar4) {
        Sexy::Point::Point((Point *)&local_68,-1,-1);
        cVar2 = Sexy::TPoint<int>::operator!=(aTStack_80,(TPoint *)&local_68);
        if (cVar2 != '\0') {
          addShot((PlantBanana *)in_x0,fVar15,&local_9c,(Point *)aTStack_80,false);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,(Point *)aTStack_80
                    );
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_50);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
          local_70 = std::
                     remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                               (uVar7,uVar8,local_88);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_68,(__normal_iterator *)&local_70);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_68);
        }
      }
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_70 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_78,(long)iVar5);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_70);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_68);
    }
    while (((lVar6 = FUN_041efad8(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar6 + 0x2b8)
            && (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50),
               cVar2 == '\0')) &&
           (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20),
           cVar2 == '\0'))) {
      iVar5 = FUN_041ed4dc(local_50,local_48);
      iVar5 = PlantFramework::Rand(in_x0,iVar5);
      FUN_041ed4e8(local_20,(long)iVar5);
      nop();
      pBVar9 = (BoardTransforms *)
               (**(code **)(*extraout_x0_00 + 0x3a8))((float)(local_9c + 1) * fVar15);
      local_60 = CONCAT44(in_s1,extraout_s0_00);
      BoardTransforms::BoardSpaceToGrid(pBVar9,extraout_s0_00,in_s1);
      addShot((PlantBanana *)in_x0,fVar15,&local_9c,(Point *)aTStack_80,false);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
      local_70 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_78,(long)iVar5);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_70);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_68);
    }
    while (lVar6 = FUN_041efad8(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar6 + 0x2b8))
    {
      Sexy::Point::Point((Point *)&local_60,-1,-1);
      addShot((PlantBanana *)in_x0,fVar15,&local_9c,(Point *)&local_60,false);
    }
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
    if (cVar2 != '\0') {
      Sexy::Point::Point((Point *)&local_60,-1,-1);
      addShot((PlantBanana *)in_x0,fVar15,&local_9c,(Point *)&local_60,true);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  }
  else {
    SetPlayingLevel5((PlantBanana *)in_x0,true);
    Sexy::Point::Point((Point *)&local_20,4,0);
    fVar15 = (float)PVZ_T();
    lVar6 = FUN_041efad8(*(undefined8 *)(in_x0 + 0x10));
    queueShot((PlantBanana *)in_x0,fVar15 + *(float *)(lVar6 + 700),(Point *)&local_20,false);
  }
  setState((PlantBanana *)in_x0,0xb);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::ChooseTarget2Fire(Sexy::Point const&) */

void __thiscall PlantBanana::ChooseTarget2Fire(PlantBanana *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined8 local_30;
  ulong local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ___stack_chk_guard;
  if (this[0x29] == (PlantBanana)0x0) {
    lVar4 = *(long *)(gLawnApp + 0x9f0);
    cVar1 = FUN_041ed47c(*(undefined1 *)(lVar4 + 0x887));
    if ((cVar1 == '\0') || (cVar1 = FUN_041ed480(*(undefined1 *)(lVar4 + 0x888)), cVar1 == '\0'))
    goto LAB_041f35b0;
  }
  iVar3 = (int)lVar2;
  cVar1 = FUN_041eec28(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
  if ((cVar1 != '\0') || (cVar1 = canFire(), cVar1 == '\0')) goto LAB_041f35b0;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),iVar3);
  if (this[0x28] == (PlantBanana)0x0) {
    if (((int)local_30 == -1) || (local_30._4_4_ == -1)) {
LAB_041f36d0:
      deselect(this);
      goto LAB_041f35b0;
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,local_30 & 0xffffffff,local_30._4_4_);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (cVar1 != '\0') {
      Sexy::Point::Point((Point *)&local_28,-1,-1);
      local_30 = local_28;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (((int)local_30 == -1) || (local_30._4_4_ == -1)) {
      if (this[0x28] != (PlantBanana)0x0) goto LAB_041f35b0;
      goto LAB_041f36d0;
    }
  }
  fVar5 = (float)PVZ_T();
  lVar2 = FUN_041efad8(*(undefined8 *)(this + 0x10));
  queueShot(this,fVar5 + *(float *)(lVar2 + 700),(Point *)&local_30,false);
  setState(this,0xb);
LAB_041f35b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBanana::UpdateActions() */

void __thiscall PlantBanana::UpdateActions(PlantBanana *this)

{
  int iVar1;
  char cVar2;
  ResourceInfo *this_00;
  float *pfVar3;
  RtObject *this_01;
  PlantAnimRig_Banana *pPVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xb) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar5) {
      setState(this,0xc);
    }
  }
  else if (iVar1 == 0xc) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar5) {
      RandomPlayLevel5(this);
      setState(this,0xd);
      this_01 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Banana>(this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 (string *)aRStack_58);
      PlantAnimRig_Banana::PlayRecoverEnd(pPVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else if ((iVar1 == 1) && (cVar2 = PlantFramework::IsArenaBattle(), cVar2 != '\0')) {
    Plant::FindTargetInRow
              (aRStack_58,*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    if (this_00 != (ResourceInfo *)0x0) {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      Sexy::Point::Point((Point *)aRStack_58,(int)*pfVar3,(int)pfVar3[1]);
      ChooseTarget2Fire(this,(Point *)aRStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

