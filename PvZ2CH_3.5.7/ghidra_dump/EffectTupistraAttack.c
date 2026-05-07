// Class: EffectTupistraAttack


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectTupistraAttack::StaticClassInit() */

void EffectTupistraAttack::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectTupistraAttack");
    (*pcVar2)(plVar1,asStack_10,FUN_04158a34,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectTupistraAttack::StaticGetClass() */

long * EffectTupistraAttack::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"EffectTupistraAttack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectTupistraAttack::GetClass() const */

long * EffectTupistraAttack::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"EffectTupistraAttack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectTupistraAttack::~EffectTupistraAttack() */

void __thiscall EffectTupistraAttack::~EffectTupistraAttack(EffectTupistraAttack *this)

{
  *(undefined ***)this = &PTR_GetClass_067f0750;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* EffectTupistraAttack::~EffectTupistraAttack() */

void __thiscall EffectTupistraAttack::~EffectTupistraAttack(EffectTupistraAttack *this)

{
  ~EffectTupistraAttack(this);
  AK::FreeHook(this);
  return;
}


/* EffectTupistraAttack::EffectTupistraAttack() */

void __thiscall EffectTupistraAttack::EffectTupistraAttack(EffectTupistraAttack *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067f0750;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* EffectTupistraAttack::StaticNew() */

EffectTupistraAttack * EffectTupistraAttack::StaticNew(void)

{
  EffectTupistraAttack *this;
  
  this = ::operator_new(0x118);
  EffectTupistraAttack(this);
  return this;
}


/* EffectTupistraAttack::OnAnimCommand(std::string const&, std::string const&) */

void EffectTupistraAttack::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  PlantTupistraStalker *this;
  PlantTupistraStalker *this_00;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x110));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x110));
      nop();
      if (this_00 != (PlantTupistraStalker *)0x0) {
        PlantTupistraStalker::CallAttack(this_00);
        return;
      }
    }
  }
  else {
    bVar1 = std::operator==(param_2,"use_action2");
    if (bVar1) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x110));
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x110))
        ;
        nop();
        if (this != (PlantTupistraStalker *)0x0) {
          PlantTupistraStalker::CallPlantfoodAttack(this);
          return;
        }
      }
    }
  }
  return;
}

