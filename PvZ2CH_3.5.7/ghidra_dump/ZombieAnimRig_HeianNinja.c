// Class: ZombieAnimRig_HeianNinja


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianNinja::PlayDie() */

void __thiscall ZombieAnimRig_HeianNinja::PlayDie(ZombieAnimRig_HeianNinja *this)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lVar4 = *(long *)this;
  lStack_8 = ___stack_chk_guard;
  if (*(code **)(lVar4 + 0x260) == ZombieAnimRig::getDieShouldBlend) {
    cVar1 = ZombieAnimRig::getDieShouldBlend();
    pcVar3 = *(code **)(lVar4 + 0x240);
  }
  else {
    cVar1 = (**(code **)(lVar4 + 0x260))();
    lVar4 = *(long *)this;
    pcVar3 = *(code **)(lVar4 + 0x240);
  }
  if (cVar1 == '\0') {
    pcVar5 = *(code **)(lVar4 + 0x168);
    (*pcVar3)(asStack_40,this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = (*pcVar5)(this,asStack_40,3,aDStack_38);
    std::string::~string(asStack_40);
  }
  else {
    (*pcVar3)(this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::BlendTo((PopAnimRig *)0x3f000000,0,this,asStack_40,0,2,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x210) = 4;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja() */

void __thiscall ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja(ZombieAnimRig_HeianNinja *this)

{
  *(undefined ***)this = &PTR_GetClass_06768f50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianNinja_067691f0;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja() */

void __thiscall ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja(ZombieAnimRig_HeianNinja *this)

{
  ~ZombieAnimRig_HeianNinja(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja() */

void __thiscall ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja(ZombieAnimRig_HeianNinja *this)

{
  ~ZombieAnimRig_HeianNinja(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja() */

void __thiscall ZombieAnimRig_HeianNinja::~ZombieAnimRig_HeianNinja(ZombieAnimRig_HeianNinja *this)

{
  ~ZombieAnimRig_HeianNinja(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianNinja::ZombieAnimRig_HeianNinja() */

void __thiscall ZombieAnimRig_HeianNinja::ZombieAnimRig_HeianNinja(ZombieAnimRig_HeianNinja *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  this[0x240] = (ZombieAnimRig_HeianNinja)0x0;
  *(undefined ***)this = &PTR_GetClass_06768f50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianNinja_067691f0;
  return;
}


/* ZombieAnimRig_HeianNinja::StaticNew() */

ZombieAnimRig_HeianNinja * ZombieAnimRig_HeianNinja::StaticNew(void)

{
  ZombieAnimRig_HeianNinja *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_HeianNinja(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianNinja::StaticClassInit() */

void ZombieAnimRig_HeianNinja::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_HeianNinja");
    (*pcVar2)(plVar1,asStack_10,FUN_03d341c4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_HeianNinja::StaticGetClass() */

long * ZombieAnimRig_HeianNinja::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_HeianNinja::GetClass() const */

long * ZombieAnimRig_HeianNinja::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianNinja::PlayThrowSushi(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_HeianNinja::PlayThrowSushi
          (ZombieAnimRig_HeianNinja *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianNinja::getHeadLayerNames() */

void ZombieAnimRig_HeianNinja::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ad6a68 & 1;
  if (((DAT_06ad6a68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad6a68), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ad6b28,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06ad6b30,"zombie_imp_jaw");
    nop();
    std::string::string((string *)&DAT_06ad6b38,"_zombie_imp_head_top");
    nop();
    __cxa_guard_release(&DAT_06ad6a68);
    __cxa_atexit(FUN_03d338dc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ad6ad8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad6ad8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad6b88,(string *)&DAT_06ad6b28,(allocator *)&DAT_06ad6b40);
    __cxa_guard_release(&DAT_06ad6ad8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad6b88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ad6b88);
}

