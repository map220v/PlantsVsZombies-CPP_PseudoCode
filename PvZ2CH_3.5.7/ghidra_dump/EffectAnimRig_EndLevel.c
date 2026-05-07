// Class: EffectAnimRig_EndLevel


/* EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel() */

void __thiscall EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel(EffectAnimRig_EndLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_0675e5d0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_EndLevel_0675e6f0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel() */

void __thiscall EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel(EffectAnimRig_EndLevel *this)

{
  ~EffectAnimRig_EndLevel(this + -0x10);
  return;
}


/* EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel() */

void __thiscall EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel(EffectAnimRig_EndLevel *this)

{
  ~EffectAnimRig_EndLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel() */

void __thiscall EffectAnimRig_EndLevel::~EffectAnimRig_EndLevel(EffectAnimRig_EndLevel *this)

{
  ~EffectAnimRig_EndLevel(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevel::StaticClassInit() */

void EffectAnimRig_EndLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_EndLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbcf00,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevel::StaticGetClass() */

long * EffectAnimRig_EndLevel::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_EndLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_EndLevel::GetClass() const */

long * EffectAnimRig_EndLevel::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_EndLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_EndLevel::EffectAnimRig_EndLevel() */

void __thiscall EffectAnimRig_EndLevel::EffectAnimRig_EndLevel(EffectAnimRig_EndLevel *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetClass_0675e5d0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_EndLevel_0675e6f0;
  this[0x218] = (EffectAnimRig_EndLevel)0x0;
  this[0x219] = (EffectAnimRig_EndLevel)0x1;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x224));
  *(undefined8 *)(this + 0x230) = 0;
  return;
}


/* EffectAnimRig_EndLevel::StaticNew() */

EffectAnimRig_EndLevel * EffectAnimRig_EndLevel::StaticNew(void)

{
  EffectAnimRig_EndLevel *this;
  
  this = ::operator_new(0x238);
  EffectAnimRig_EndLevel(this);
  return this;
}


/* EffectAnimRig_EndLevel::setParentEndLevelUI(EndLevelUI*) */

void __thiscall
EffectAnimRig_EndLevel::setParentEndLevelUI(EffectAnimRig_EndLevel *this,EndLevelUI *param_1)

{
  EffectAnimRig_EndLevel EVar1;
  undefined8 uVar2;
  
  *(EndLevelUI **)(this + 0x230) = param_1;
  uVar2 = FUN_03cbcd6c(*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(this + 0x210) = uVar2;
  EVar1 = (EffectAnimRig_EndLevel)FUN_03cbcd70(param_1[0x150]);
  this[0x219] = EVar1;
  return;
}


/* EffectAnimRig_EndLevel::adjustParentSize(int, int) */

void __thiscall
EffectAnimRig_EndLevel::adjustParentSize(EffectAnimRig_EndLevel *this,int param_1,int param_2)

{
  *(int *)(this + 0x21c) = param_1;
  *(int *)(this + 0x220) = param_2;
  return;
}


/* EffectAnimRig_EndLevel::onBoxOutAnimStopped() */

void __thiscall EffectAnimRig_EndLevel::onBoxOutAnimStopped(EffectAnimRig_EndLevel *this)

{
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    FUN_03cbcd88(*(long *)(this + 0x230) + 0x158);
    return;
  }
  return;
}


/* EffectAnimRig_EndLevel::WindowsOutAnimStop() */

void __thiscall EffectAnimRig_EndLevel::WindowsOutAnimStop(EffectAnimRig_EndLevel *this)

{
  FUN_03cbcd88(*(long *)(this + 0x230) + 0x158);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevel::playWindowsIn() */

void __thiscall EffectAnimRig_EndLevel::playWindowsIn(EffectAnimRig_EndLevel *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"windows_in");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevel::playWindowsOut() */

void __thiscall EffectAnimRig_EndLevel::playWindowsOut(EffectAnimRig_EndLevel *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x218] = (EffectAnimRig_EndLevel)0x0;
  local_8 = ___stack_chk_guard;
  if (*(EndLevelUI **)(this + 0x230) != (EndLevelUI *)0x0) {
    EndLevelUI::OutState(*(EndLevelUI **)(this + 0x230));
  }
  std::string::string(asStack_40,"windows_out");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevel::EndLevel() */

bool __thiscall EffectAnimRig_EndLevel::EndLevel(EffectAnimRig_EndLevel *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_03cbcd68(*(undefined8 *)(this + 0x20));
  bVar1 = std::operator==((string *)(lVar2 + 0x48),"windows_loop");
  if (bVar1) {
    playWindowsOut(this);
  }
  return bVar1;
}


/* EffectAnimRig_EndLevel::onPopAnimCommand(float, std::string const&, std::string const&) */

void EffectAnimRig_EndLevel::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  
  bVar1 = std::operator==(param_3,"goldin");
  if (!bVar1) {
    bVar1 = std::operator==(param_3,"pieces_in");
    if (((!bVar1) && (bVar1 = std::operator==(param_3,"button_in"), bVar1)) &&
       (plVar3 = *(long **)(param_2 + 0x210), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x158))(plVar3,1);
    }
    return;
  }
  cVar2 = CustomLevelUtils::IsCustomLevel();
  if (cVar2 == '\0') {
    Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
    cVar2 = PennyClassroomManager::IsPennyClassroomLevel();
    if (cVar2 != '\0') {
      EndLevelUI::OnPennyClassroomEnd(*(EndLevelUI **)(param_2 + 0x230));
      return;
    }
    EndLevelUI::CoinIn(*(EndLevelUI **)(param_2 + 0x230));
    return;
  }
  EndLevelUI::OnCustomLevelEnd(*(EndLevelUI **)(param_2 + 0x230));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevel::WindowsInAnimStop() */

void __thiscall EffectAnimRig_EndLevel::WindowsInAnimStop(EffectAnimRig_EndLevel *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"windows_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  EndLevelUI::ShowAds();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevel::onAnimStopped() */

void __thiscall EffectAnimRig_EndLevel::onAnimStopped(EffectAnimRig_EndLevel *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_03cbcd68(*(undefined8 *)(this + 0x20));
  bVar1 = std::operator==((string *)(lVar2 + 0x48),"windows_in");
  if (bVar1) {
    WindowsInAnimStop(this);
    return;
  }
  lVar2 = FUN_03cbcd68(*(undefined8 *)(this + 0x20));
  bVar1 = std::operator==((string *)(lVar2 + 0x48),"windows_out");
  if (!bVar1) {
    return;
  }
  WindowsOutAnimStop(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevel::setAchieveStarNum(int) */

void __thiscall EffectAnimRig_EndLevel::setAchieveStarNum(EffectAnimRig_EndLevel *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  if (param_1 == 1) {
    uVar6 = DAT_06ad3770 & 1;
    if (((DAT_06ad3770 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad3770), iVar3 != 0)) {
      std::string::string((string *)&DAT_06ad3750,"yellow_star_bmp");
      nop();
      std::string::string((string *)&DAT_06ad3758,"win_BG_3.png");
      nop();
      __cxa_guard_release(&DAT_06ad3770);
      __cxa_atexit(FUN_03cbccdc,uVar6,&DAT_06a88000);
    }
    if (((DAT_06ad3788 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ad3788), iVar3 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06ad3920,(string *)&DAT_06ad3750,(allocator *)&sClass);
      __cxa_guard_release(&DAT_06ad3788);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad3920,
                   &DAT_06a88000);
    }
    uVar6 = 0;
    while( true ) {
      uVar1 = DAT_06ad3920;
      uVar5 = FUN_03cbcd74(DAT_06ad3920,DAT_06ad3928);
      if (uVar5 <= uVar6) break;
      psVar4 = (string *)FUN_03cbcd80(uVar1,uVar6);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      uVar6 = uVar6 + 1;
    }
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

