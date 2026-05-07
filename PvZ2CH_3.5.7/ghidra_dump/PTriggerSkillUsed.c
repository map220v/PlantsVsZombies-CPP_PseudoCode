// Class: PTriggerSkillUsed


/* PTriggerSkillUsed::~PTriggerSkillUsed() */

void __thiscall PTriggerSkillUsed::~PTriggerSkillUsed(PTriggerSkillUsed *this)

{
  *(undefined ***)this = &PTR_GetClass_06948cf0;
  std::string::~string((string *)(this + 0x10));
  PTrigger::~PTrigger((PTrigger *)this);
  return;
}


/* PTriggerSkillUsed::~PTriggerSkillUsed() */

void __thiscall PTriggerSkillUsed::~PTriggerSkillUsed(PTriggerSkillUsed *this)

{
  ~PTriggerSkillUsed(this);
  AK::FreeHook(this);
  return;
}


/* PTriggerSkillUsed::PTriggerSkillUsed() */

void __thiscall PTriggerSkillUsed::PTriggerSkillUsed(PTriggerSkillUsed *this)

{
  PTrigger::PTrigger((PTrigger *)this,0x745f736b);
  *(undefined ***)this = &PTR_GetClass_06948cf0;
  Set8BytesTo0(this + 0x10);
  DVec3::DVec3((DVec3 *)(this + 0x18));
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* PTriggerSkillUsed::StaticNew() */

PTriggerSkillUsed * PTriggerSkillUsed::StaticNew(void)

{
  PTriggerSkillUsed *this;
  
  this = ::operator_new(0x28);
  PTriggerSkillUsed(this);
  return this;
}


/* PTriggerSkillUsed::SetSkill(Zombie*, int) */

void __thiscall PTriggerSkillUsed::SetSkill(PTriggerSkillUsed *this,Zombie *param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  SexyVector3 *pSVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  thunk_FUN_05475e00(this + 0x10,lVar1 + 8);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x18),pSVar2);
  *(int *)(this + 0x24) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerSkillUsed::DoTrigger() */

void __thiscall PTriggerSkillUsed::DoTrigger(PTriggerSkillUsed *this)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  SeedPacket *this_00;
  SeedPacket_PVPSkill *this_01;
  RtMixedPtrBase aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04abc184(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar2 != 0) {
    PVPSeedBankModule::GetSkillSeedBank();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    else {
      psVar3 = (string *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      SeedBankNew::GetPacket(psVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar1 != '\0') {
        this_00 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        SeedPacket::CheckResourceLoaded(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        nop();
        if (this_01 != (SeedPacket_PVPSkill *)0x0) {
          SeedPacket_PVPSkill::UseSkill(this_01,(SexyVector3 *)(this + 0x18),*(int *)(this + 0x24));
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerSkillUsed::StaticClassInit() */

void PTriggerSkillUsed::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  string *this_00;
  code *in_x2;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PTriggerSkillUsed");
    in_x2 = FUN_04abf2f8;
    (*pcVar2)(plVar1,asStack_10,FUN_04abf2f8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  this_00 = (string *)
            std::
            map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
            ::operator[]((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
                          *)k_TriggerTypeToString,&TypeValue);
  std::string::append(this_00,"PTriggerSkillUsed",(size_t)in_x2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PTriggerSkillUsed::StaticGetClass() */

long * PTriggerSkillUsed::StaticGetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerSkillUsed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PTriggerSkillUsed::GetClass() const */

long * PTriggerSkillUsed::GetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerSkillUsed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

