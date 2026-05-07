// Class: EffectCrackerDrop


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectCrackerDrop::StaticClassInit() */

void EffectCrackerDrop::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectCrackerDrop");
    (*pcVar2)(plVar1,asStack_10,FUN_040a478c,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectCrackerDrop::StaticGetClass() */

long * EffectCrackerDrop::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectCrackerDrop",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectCrackerDrop::GetClass() const */

long * EffectCrackerDrop::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectCrackerDrop",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectCrackerDrop::SetDate(Sexy::RtWeakPtr<BoardEntity>, Sexy::Point) */

void __thiscall
EffectCrackerDrop::SetDate(EffectCrackerDrop *this,RtWeakPtr *param_2,undefined8 *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_2);
  *(undefined8 *)(this + 0x10c) = *param_3;
  return;
}


/* EffectCrackerDrop::EffectCrackerDrop() */

void __thiscall EffectCrackerDrop::EffectCrackerDrop(EffectCrackerDrop *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067d0f00;
  Sexy::Point::Point((Point *)(this + 0x10c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  return;
}


/* EffectCrackerDrop::StaticNew() */

EffectCrackerDrop * EffectCrackerDrop::StaticNew(void)

{
  EffectCrackerDrop *this;
  
  this = ::operator_new(0x120);
  EffectCrackerDrop(this);
  return this;
}


/* EffectCrackerDrop::~EffectCrackerDrop() */

void __thiscall EffectCrackerDrop::~EffectCrackerDrop(EffectCrackerDrop *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0f00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* EffectCrackerDrop::~EffectCrackerDrop() */

void __thiscall EffectCrackerDrop::~EffectCrackerDrop(EffectCrackerDrop *this)

{
  ~EffectCrackerDrop(this);
  AK::FreeHook(this);
  return;
}


/* EffectCrackerDrop::OnAnimCommand(std::string const&, std::string const&) */

void EffectCrackerDrop::OnAnimCommand(string *param_1,string *param_2)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  Plant *pPVar4;
  PlantCracker *this_00;
  
  bVar1 = std::operator==(param_2,"attack_bomb");
  if (bVar1) {
    this = (RtMixedPtrBase *)(param_1 + 0x118);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pPVar4 = Sexy::RtObject::Cast<Plant>(pRVar3);
      if (pPVar4 != (Plant *)0x0) {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pPVar4 = Sexy::RtObject::Cast<Plant>(pRVar3);
        this_00 = Sexy::RtObject::Cast<PlantCracker>(*(RtObject **)(pPVar4 + 0xa8));
        PlantCracker::DoCrackerPieceExplode(this_00,(Point *)(param_1 + 0x10c));
        PlantCracker::CheckAndKill(this_00);
        return;
      }
    }
  }
  return;
}

