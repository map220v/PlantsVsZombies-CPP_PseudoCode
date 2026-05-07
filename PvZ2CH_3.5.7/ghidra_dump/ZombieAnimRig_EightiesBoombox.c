// Class: ZombieAnimRig_EightiesBoombox


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::GetHeadOffset() */

void __thiscall ZombieAnimRig_EightiesBoombox::GetHeadOffset(ZombieAnimRig_EightiesBoombox *this)

{
  char cVar1;
  ResistenceValueInfo local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_18);
  std::string::string(asStack_10,"zombie_egypt_ra_skull");
  cVar1 = PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"zombie_egypt_ra_skull_power");
    PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_4_,local_18._4_4_);
}


/* ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox() */

void __thiscall
ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox(ZombieAnimRig_EightiesBoombox *this)

{
  *(undefined ***)this = &PTR_GetClass_068f0f50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBoombox_068f11c8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox() */

void __thiscall
ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox(ZombieAnimRig_EightiesBoombox *this)

{
  ~ZombieAnimRig_EightiesBoombox(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox() */

void __thiscall
ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox(ZombieAnimRig_EightiesBoombox *this)

{
  ~ZombieAnimRig_EightiesBoombox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox() */

void __thiscall
ZombieAnimRig_EightiesBoombox::~ZombieAnimRig_EightiesBoombox(ZombieAnimRig_EightiesBoombox *this)

{
  ~ZombieAnimRig_EightiesBoombox(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBoombox::ZombieAnimRig_EightiesBoombox() */

void __thiscall
ZombieAnimRig_EightiesBoombox::ZombieAnimRig_EightiesBoombox(ZombieAnimRig_EightiesBoombox *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068f0f50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBoombox_068f11c8;
  return;
}


/* ZombieAnimRig_EightiesBoombox::StaticNew() */

ZombieAnimRig_EightiesBoombox * ZombieAnimRig_EightiesBoombox::StaticNew(void)

{
  ZombieAnimRig_EightiesBoombox *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_EightiesBoombox(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::RaiseBoombox(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBoombox::RaiseBoombox
          (ZombieAnimRig_EightiesBoombox *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) != 8) {
    pcVar1 = *(code **)(*(long *)this + 0x170);
    std::string::string(asStack_58,"power_up");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    (*pcVar1)(this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::StopJamming(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBoombox::StopJamming
          (ZombieAnimRig_EightiesBoombox *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) != 10) {
    pcVar1 = *(code **)(*(long *)this + 0x170);
    std::string::string(asStack_58,"power_down");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    (*pcVar1)(this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(this + 0x210) = 10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::StartJamming() */

void __thiscall ZombieAnimRig_EightiesBoombox::StartJamming(ZombieAnimRig_EightiesBoombox *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) != 9) {
    std::string::string(asStack_40,"power");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined4 *)(this + 0x210) = 9;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::getHeadLayerNames() */

void ZombieAnimRig_EightiesBoombox::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27c10 & 1;
  if (((DAT_06b27c10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27c10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27d28,"zombie_egypt_ra_skull");
    nop();
    std::string::string((string *)&DAT_06b27d30,"zombie_egypt_ra_skull_power");
    nop();
    std::string::string((string *)&DAT_06b27d38,"zombie_egypt_ra_jaw");
    nop();
    __cxa_guard_release(&DAT_06b27c10);
    __cxa_atexit(FUN_047e26f8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27bc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27bc0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27bc8,(string *)&DAT_06b27d28,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b27bc0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27bc8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27bc8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::getArmLayerNames() */

void ZombieAnimRig_EightiesBoombox::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27c08 & 1;
  if (((DAT_06b27c08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27c08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27c60,"zombie_egypt_ra_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b27c68,"zombie_egypt_ra_hand_outer2");
    nop();
    std::string::string((string *)&DAT_06b27c70,"zombie_egypt_ra_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b27c08);
    __cxa_atexit(FUN_047e272c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27c48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27c48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27c88,(string *)&DAT_06b27c60,(allocator *)&DAT_06b27c78);
    __cxa_guard_release(&DAT_06b27c48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27c88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27c88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::getArmReplacementPairNames() */

void ZombieAnimRig_EightiesBoombox::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27bf8 & 1;
  if (((DAT_06b27bf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27bf8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27ce8,"zombie_egypt_ra_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b27cf0,"zombie_egypt_ra_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b27bf8);
    __cxa_atexit(FUN_047e2760,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27d10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27d10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27cf8,(string *)&DAT_06b27ce8,(allocator *)&DAT_06b27cf8);
    __cxa_guard_release(&DAT_06b27d10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27cf8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27cf8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBoombox::StaticClassInit() */

void ZombieAnimRig_EightiesBoombox::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ZOMBIEANIM_BOOMBOX_START_JAMMING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 9;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ZOMBIEANIM_BOOMBOX_JAMMING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ZOMBIEANIM_BOOMBOX_STOP_JAMMING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"ZombieAnimRigState_EightiesBoombox");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ZombieAnimRig_EightiesBoombox");
    (*pcVar3)(plVar2,avStack_20,FUN_047e41d8,0x240,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesBoombox::StaticGetClass() */

long * ZombieAnimRig_EightiesBoombox::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBoombox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesBoombox::GetClass() const */

long * ZombieAnimRig_EightiesBoombox::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBoombox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

