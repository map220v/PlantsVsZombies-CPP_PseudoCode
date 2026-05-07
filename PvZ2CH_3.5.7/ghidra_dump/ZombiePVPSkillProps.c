// Class: ZombiePVPSkillProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkillProps::StaticClassInit() */

void ZombiePVPSkillProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkillProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04a91e40,0x280,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkillProps::StaticGetClass() */

long * ZombiePVPSkillProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkillProps::GetClass() const */

long * ZombiePVPSkillProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkillProps::GetReduceCost(int) */

undefined4 __thiscall ZombiePVPSkillProps::GetReduceCost(ZombiePVPSkillProps *this,int param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x268);
    uVar1 = FUN_04a917b0(uVar3,*(undefined8 *)(this + 0x270));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined4 *)FUN_04a917c4(uVar3,(long)param_1);
      return *puVar2;
    }
  }
  return 0;
}


/* ZombiePVPSkillProps::GetMaxLevel() */

void __thiscall ZombiePVPSkillProps::GetMaxLevel(ZombiePVPSkillProps *this)

{
  FUN_04a917a4(*(undefined8 *)(this + 0x238),*(undefined8 *)(this + 0x240));
  return;
}


/* ZombiePVPSkillProps::ZombiePVPSkillProps() */

void __thiscall ZombiePVPSkillProps::ZombiePVPSkillProps(ZombiePVPSkillProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetClass_06942830;
  *(undefined4 *)(this + 0x214) = 0x3f800000;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x268));
  return;
}


/* ZombiePVPSkillProps::StaticNew() */

ZombiePVPSkillProps * ZombiePVPSkillProps::StaticNew(void)

{
  ZombiePVPSkillProps *this;
  
  this = ::operator_new(0x280);
  ZombiePVPSkillProps(this);
  return this;
}


/* ZombiePVPSkillProps::~ZombiePVPSkillProps() */

void __thiscall ZombiePVPSkillProps::~ZombiePVPSkillProps(ZombiePVPSkillProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06942830;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x268));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x250));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x238));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x220));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePVPSkillProps::~ZombiePVPSkillProps() */

void __thiscall ZombiePVPSkillProps::~ZombiePVPSkillProps(ZombiePVPSkillProps *this)

{
  ~ZombiePVPSkillProps(this);
  AK::FreeHook(this);
  return;
}

