// Class: CthulhuEyeballEffect


/* CthulhuEyeballEffect::SetCthulhuEasyButton(Sexy::RtWeakPtr<CthulhuEasyButton>) */

void __thiscall
CthulhuEyeballEffect::SetCthulhuEasyButton(CthulhuEyeballEffect *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEffect::StaticClassInit() */

void CthulhuEyeballEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"CthulhuEyeballEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_04d6ddb8,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEffect::StaticGetClass() */

long * CthulhuEyeballEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuEyeballEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuEyeballEffect::GetClass() const */

long * CthulhuEyeballEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuEyeballEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuEyeballEffect::~CthulhuEyeballEffect() */

void __thiscall CthulhuEyeballEffect::~CthulhuEyeballEffect(CthulhuEyeballEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_069b65c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* CthulhuEyeballEffect::~CthulhuEyeballEffect() */

void __thiscall CthulhuEyeballEffect::~CthulhuEyeballEffect(CthulhuEyeballEffect *this)

{
  ~CthulhuEyeballEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEffect::CthulhuEyeballEffect() */

void __thiscall CthulhuEyeballEffect::CthulhuEyeballEffect(CthulhuEyeballEffect *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_069b65c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEffect::StaticNew() */

CthulhuEyeballEffect * CthulhuEyeballEffect::StaticNew(void)

{
  CthulhuEyeballEffect *this;
  
  this = ::operator_new(0x118);
  CthulhuEyeballEffect(this);
  return this;
}


/* CthulhuEyeballEffect::onAnimStopped(std::string const&) */

void __thiscall CthulhuEyeballEffect::onAnimStopped(CthulhuEyeballEffect *this,string *param_1)

{
  char cVar1;
  long *plVar2;
  
  Effect_PopAnim::onAnimStopped((string *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    (**(code **)(*plVar2 + 0x220))(plVar2,param_1);
  }
  return;
}

