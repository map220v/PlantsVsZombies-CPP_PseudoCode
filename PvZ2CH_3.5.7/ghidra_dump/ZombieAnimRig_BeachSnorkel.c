// Class: ZombieAnimRig_BeachSnorkel


/* ZombieAnimRig_BeachSnorkel::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_BeachSnorkel::onPopAnimInitialized(ZombieAnimRig_BeachSnorkel *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x248) = uVar1;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  return;
}


/* ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel() */

void __thiscall
ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel(ZombieAnimRig_BeachSnorkel *this)

{
  *(undefined ***)this = &PTR_GetClass_068863d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachSnorkel_06886648;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x250));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel() */

void __thiscall
ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel(ZombieAnimRig_BeachSnorkel *this)

{
  ~ZombieAnimRig_BeachSnorkel(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel() */

void __thiscall
ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel(ZombieAnimRig_BeachSnorkel *this)

{
  ~ZombieAnimRig_BeachSnorkel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel() */

void __thiscall
ZombieAnimRig_BeachSnorkel::~ZombieAnimRig_BeachSnorkel(ZombieAnimRig_BeachSnorkel *this)

{
  ~ZombieAnimRig_BeachSnorkel(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::StaticClassInit() */

void ZombieAnimRig_BeachSnorkel::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_BeachSnorkel");
    (*pcVar2)(plVar1,asStack_10,FUN_0464927c,0x298,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachSnorkel::StaticGetClass() */

long * ZombieAnimRig_BeachSnorkel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachSnorkel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachSnorkel::GetClass() const */

long * ZombieAnimRig_BeachSnorkel::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachSnorkel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BeachSnorkel::ZombieAnimRig_BeachSnorkel() */

void __thiscall
ZombieAnimRig_BeachSnorkel::ZombieAnimRig_BeachSnorkel(ZombieAnimRig_BeachSnorkel *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068863d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachSnorkel_06886648;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x250));
  return;
}


/* ZombieAnimRig_BeachSnorkel::StaticNew() */

ZombieAnimRig_BeachSnorkel * ZombieAnimRig_BeachSnorkel::StaticNew(void)

{
  ZombieAnimRig_BeachSnorkel *this;
  
  this = ::operator_new(0x298);
  ZombieAnimRig_BeachSnorkel(this);
  return this;
}


/* ZombieAnimRig_BeachSnorkel::PROTOTYPE_startLerp(float, float,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_BeachSnorkel::PROTOTYPE_startLerp
          (undefined4 param_1,undefined4 param_2,ZombieAnimRig_BeachSnorkel *this,
          RtReflectionDelegate *param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x244) = param_2;
  *(undefined4 *)(this + 0x240) = param_1;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x250),param_4);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x248) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::PROTOTYPE_SetSubmerged(bool) */

void __thiscall
ZombieAnimRig_BeachSnorkel::PROTOTYPE_SetSubmerged(ZombieAnimRig_BeachSnorkel *this,bool param_1)

{
  ZombieAnimRig_BeachSnorkel *pZVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pZVar1._0_4_ = (ZombieAnimRig_BeachSnorkel *)0xc1f00000;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    pZVar1._0_4_ = (ZombieAnimRig_BeachSnorkel *)0x0;
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  PROTOTYPE_startLerp(pZVar1._0_4_,(undefined4)pZVar1._0_4_,this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(undefined4 *)(this + 0x248) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BeachSnorkel::PROTOTYPE_IsLerping() const */

bool __thiscall ZombieAnimRig_BeachSnorkel::PROTOTYPE_IsLerping(ZombieAnimRig_BeachSnorkel *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  bVar1 = false;
  if (*(float *)(this + 0x248) != fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = fVar2 - *(float *)(this + 0x248) < 0.5;
  }
  return bVar1;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x046490b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieAnimRig_BeachSnorkel::PROTOTYPE_GetVerticalOffset() const */

undefined1  [16] __thiscall
ZombieAnimRig_BeachSnorkel::PROTOTYPE_GetVerticalOffset(ZombieAnimRig_BeachSnorkel *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 extraout_var [12];
  float fVar3;
  
  fVar1 = (float)PVZ_EOT();
  fVar3 = *(float *)(this + 0x248);
  if (fVar1 <= fVar3) {
    return ZEXT816(0);
  }
  auVar2 = PVZ_T();
  auVar2._0_4_ = CurveLerp<float>(auVar2,fVar3 + 0.5,auVar2._0_4_,this + 0x240,this + 0x244,3);
  auVar2._8_8_ = extraout_var._4_8_;
  auVar2._4_4_ = extraout_var._0_4_;
  return auVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::PlaySubmerge(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BeachSnorkel::PlaySubmerge
          (ZombieAnimRig_BeachSnorkel *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar1)(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,param_2);
  PROTOTYPE_startLerp((ZombieAnimRig_BeachSnorkel *)0x0,0xc1f00000,this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::PlayEmerge(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_BeachSnorkel::PlayEmerge
          (ZombieAnimRig_BeachSnorkel *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar1)(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,param_2);
  PROTOTYPE_startLerp((ZombieAnimRig_BeachSnorkel *)0xc1f00000,0,this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::onUpdate() */

void __thiscall ZombieAnimRig_BeachSnorkel::onUpdate(ZombieAnimRig_BeachSnorkel *this)

{
  RtReflectionDelegate *this_00;
  char cVar1;
  int iVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  SexyURL aSStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = (RtReflectionDelegate *)(this + 0x250);
  local_8 = ___stack_chk_guard;
  nop();
  iVar2 = ::RtReflectionDelegate::operator_cast_to_int(this_00);
  if ((iVar2 != 0) && (cVar1 = PROTOTYPE_IsLerping(this), cVar1 == '\0')) {
    Set8BytesTo0(aSStack_58);
    this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
              RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate
                        ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)this_00);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,aSStack_58);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)this_00,
               (RtReflectionDelegate *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aSStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::getHeadLayerNames() */

void ZombieAnimRig_BeachSnorkel::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c890 & 1;
  if (((DAT_06b1c890 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c890), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c860,"zombie_snorkeler_pupil");
    nop();
    std::string::string((string *)&DAT_06b1c868,"zombie_snorkeler_skull");
    nop();
    std::string::string((string *)&DAT_06b1c870,"zombie_snorkeler_skull_01");
    nop();
    std::string::string((string *)&DAT_06b1c878,"zombie_snorkeler_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1c890);
    __cxa_atexit(FUN_046489d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c850 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c850), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c778,(string *)&DAT_06b1c860,(allocator *)&DAT_06b1c880);
    __cxa_guard_release(&DAT_06b1c850);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c778,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c778);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::getArmLayerNames() */

void ZombieAnimRig_BeachSnorkel::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c8b8 & 1;
  if (((DAT_06b1c8b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c8b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c7e0,"zombie_snorkeler_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1c7e8,"zombie_snorkeler_arm_outer_lower1");
    nop();
    std::string::string((string *)&DAT_06b1c7f0,"zombie_snorkeler_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1c7f8,"zombie_snorkeler_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1c800,"zombie_snorkeler_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1c808,"zombie_snorkeler_hand_outer_1");
    nop();
    __cxa_guard_release(&DAT_06b1c8b8);
    __cxa_atexit(FUN_04648a10,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c7d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c7d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c898,(string *)&DAT_06b1c7e0,(allocator *)&DAT_06b1c810);
    __cxa_guard_release(&DAT_06b1c7d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c898,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c898);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachSnorkel::getArmReplacementPairNames() */

void ZombieAnimRig_BeachSnorkel::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c770 & 1;
  if (((DAT_06b1c770 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c770), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c790,"zombie_snorkeler_arm_outer_lower1");
    nop();
    std::string::string((string *)&DAT_06b1c798,"zombie_snorkeler_arm_outer_upper_03");
    nop();
    __cxa_guard_release(&DAT_06b1c770);
    __cxa_atexit(FUN_04648a48,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c858), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c810,(string *)&DAT_06b1c790,(allocator *)&DAT_06b1c7a0);
    __cxa_guard_release(&DAT_06b1c858);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c810,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c810);
}

