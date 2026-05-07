// Class: NarcissusShooter_Effect_PopAnim


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusShooter_Effect_PopAnim::StaticClassInit() */

void NarcissusShooter_Effect_PopAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"NarcissusShooter_Effect_PopAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_04250050,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusShooter_Effect_PopAnim::StaticGetClass() */

long * NarcissusShooter_Effect_PopAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusShooter_Effect_PopAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusShooter_Effect_PopAnim::GetClass() const */

long * NarcissusShooter_Effect_PopAnim::GetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusShooter_Effect_PopAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusShooter_Effect_PopAnim::~NarcissusShooter_Effect_PopAnim() */

void __thiscall
NarcissusShooter_Effect_PopAnim::~NarcissusShooter_Effect_PopAnim
          (NarcissusShooter_Effect_PopAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_068186e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* NarcissusShooter_Effect_PopAnim::~NarcissusShooter_Effect_PopAnim() */

void __thiscall
NarcissusShooter_Effect_PopAnim::~NarcissusShooter_Effect_PopAnim
          (NarcissusShooter_Effect_PopAnim *this)

{
  ~NarcissusShooter_Effect_PopAnim(this);
  AK::FreeHook(this);
  return;
}


/* NarcissusShooter_Effect_PopAnim::NarcissusShooter_Effect_PopAnim() */

void __thiscall
NarcissusShooter_Effect_PopAnim::NarcissusShooter_Effect_PopAnim
          (NarcissusShooter_Effect_PopAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_068186e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* NarcissusShooter_Effect_PopAnim::StaticNew() */

NarcissusShooter_Effect_PopAnim * NarcissusShooter_Effect_PopAnim::StaticNew(void)

{
  NarcissusShooter_Effect_PopAnim *this;
  
  this = ::operator_new(0x118);
  NarcissusShooter_Effect_PopAnim(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusShooter_Effect_PopAnim::SetPlant(Plant*) */

void NarcissusShooter_Effect_PopAnim::SetPlant(Plant *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x110),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusShooter_Effect_PopAnim::DoubleAttackCallBack(std::string const&) */

void NarcissusShooter_Effect_PopAnim::DoubleAttackCallBack(string *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  long lVar3;
  Plant *this_00;
  
  this = (RtMixedPtrBase *)(param_1 + 0x110);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar2 = FUN_0424d214(*(undefined1 *)(lVar3 + 0x299));
    if (iVar2 == 0) {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      Plant::PlayAttackAnimation(this_00);
      return;
    }
  }
  return;
}

