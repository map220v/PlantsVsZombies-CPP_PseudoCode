// Class: ComponentOnDeath_SpawnZombie


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentOnDeath_SpawnZombie::StaticClassInit() */

void ComponentOnDeath_SpawnZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentOnDeath_SpawnZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_03b88388,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentOnDeath_SpawnZombie::StaticGetClass() */

long * ComponentOnDeath_SpawnZombie::StaticGetClass(void)

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
  uVar2 = ComponentOnDeath::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentOnDeath_SpawnZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentOnDeath_SpawnZombie::GetClass() const */

long * ComponentOnDeath_SpawnZombie::GetClass(void)

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
  uVar2 = ComponentOnDeath::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentOnDeath_SpawnZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentOnDeath_SpawnZombie::SetZombieTypeToSpawn(std::string, int, bool) */

void __thiscall
ComponentOnDeath_SpawnZombie::SetZombieTypeToSpawn
          (ComponentOnDeath_SpawnZombie *this,undefined8 param_2,undefined4 param_3,
          ComponentOnDeath_SpawnZombie param_4)

{
  thunk_FUN_05475e00(this + 0x30);
  *(undefined4 *)(this + 0x38) = param_3;
  this[0x3c] = param_4;
  return;
}


/* ComponentOnDeath_SpawnZombie::ComponentOnDeath_SpawnZombie() */

void __thiscall
ComponentOnDeath_SpawnZombie::ComponentOnDeath_SpawnZombie(ComponentOnDeath_SpawnZombie *this)

{
  ComponentOnDeath::ComponentOnDeath((ComponentOnDeath *)this);
  *(undefined ***)this = &PTR_GetClass_06735910;
  Set8BytesTo0(this + 0x30);
  this[0x3c] = (ComponentOnDeath_SpawnZombie)0x0;
  *(undefined4 *)(this + 0x38) = 1;
  return;
}


/* ComponentOnDeath_SpawnZombie::StaticNew() */

ComponentOnDeath_SpawnZombie * ComponentOnDeath_SpawnZombie::StaticNew(void)

{
  ComponentOnDeath_SpawnZombie *this;
  
  this = ::operator_new(0x40);
  ComponentOnDeath_SpawnZombie(this);
  return this;
}


/* ComponentOnDeath_SpawnZombie::~ComponentOnDeath_SpawnZombie() */

void __thiscall
ComponentOnDeath_SpawnZombie::~ComponentOnDeath_SpawnZombie(ComponentOnDeath_SpawnZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06735910;
  std::string::~string((string *)(this + 0x30));
  ComponentOnDeath::~ComponentOnDeath((ComponentOnDeath *)this);
  return;
}


/* ComponentOnDeath_SpawnZombie::~ComponentOnDeath_SpawnZombie() */

void __thiscall
ComponentOnDeath_SpawnZombie::~ComponentOnDeath_SpawnZombie(ComponentOnDeath_SpawnZombie *this)

{
  ~ComponentOnDeath_SpawnZombie(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentOnDeath_SpawnZombie::onDeath() */

void __thiscall ComponentOnDeath_SpawnZombie::onDeath(ComponentOnDeath_SpawnZombie *this)

{
  SexyVector3 *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  SexyVector3 *pSVar2;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetZombieType(*(string **)(gLawnApp + 0x9f0));
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(this + 0x38);
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  this_00 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_38,0xfffffffb,(SpawnZombieParams *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost(p_Var1);
  BoardEntity::PlaceOnBoard(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (this[0x3c] != (ComponentOnDeath_SpawnZombie)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var1);
    Zombie::RiseFromGround((Zombie *)this_00,pSVar2,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

