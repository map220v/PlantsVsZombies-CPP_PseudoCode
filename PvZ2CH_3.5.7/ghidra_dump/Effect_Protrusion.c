// Class: Effect_Protrusion


/* Effect_Protrusion::SetInstigator(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall Effect_Protrusion::SetInstigator(Effect_Protrusion *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Protrusion::StaticClassInit() */

void Effect_Protrusion::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_Protrusion");
    (*pcVar2)(plVar1,asStack_10,FUN_04e4fdf0,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Protrusion::StaticGetClass() */

long * Effect_Protrusion::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_Protrusion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_Protrusion::GetClass() const */

long * Effect_Protrusion::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_Protrusion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_Protrusion::OnAnimCommand(std::string const&, std::string const&) */

void Effect_Protrusion::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  ResourceInfo *pRVar4;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x110));
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x110));
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x178));
      if (cVar2 != '\0') {
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x178));
        *(ResourceInfo **)(param_1 + 0x118) = pRVar4;
      }
      (**(code **)(*plVar3 + 0x110))(plVar3,param_1 + 0x118);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Protrusion::Effect_Protrusion() */

void __thiscall Effect_Protrusion::Effect_Protrusion(Effect_Protrusion *this)

{
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_069e09f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_10,local_c,this + 0x118,aPStack_18,0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Protrusion::StaticNew() */

Effect_Protrusion * Effect_Protrusion::StaticNew(void)

{
  Effect_Protrusion *this;
  
  this = ::operator_new(0x180);
  Effect_Protrusion(this);
  return this;
}


/* Effect_Protrusion::~Effect_Protrusion() */

void __thiscall Effect_Protrusion::~Effect_Protrusion(Effect_Protrusion *this)

{
  *(undefined ***)this = &PTR_GetClass_069e09f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_Protrusion::~Effect_Protrusion() */

void __thiscall Effect_Protrusion::~Effect_Protrusion(Effect_Protrusion *this)

{
  ~Effect_Protrusion(this);
  AK::FreeHook(this);
  return;
}


/* Effect_Protrusion::Setzombiedamage(Sexy::RtWeakPtr<BoardEntity>, DamageInfo) */

void __thiscall
Effect_Protrusion::Setzombiedamage(Effect_Protrusion *this,RtWeakPtr *param_2,DamageInfo *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),param_2);
  DamageInfo::operator=((DamageInfo *)(this + 0x118),param_3);
  return;
}

