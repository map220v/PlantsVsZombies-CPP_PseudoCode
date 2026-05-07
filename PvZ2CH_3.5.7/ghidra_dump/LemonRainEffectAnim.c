// Class: LemonRainEffectAnim


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonRainEffectAnim::StaticClassInit() */

void LemonRainEffectAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"LemonRainEffectAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_04095d94,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonRainEffectAnim::StaticGetClass() */

long * LemonRainEffectAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LemonRainEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonRainEffectAnim::GetClass() const */

long * LemonRainEffectAnim::GetClass(void)

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
  (*pcVar3)(plVar1,"LemonRainEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonRainEffectAnim::SetEntity(Sexy::RtWeakPtr<BoardEntity>, Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
LemonRainEffectAnim::SetEntity(LemonRainEffectAnim *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),param_3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_2);
  return;
}


/* LemonRainEffectAnim::LemonRainEffectAnim() */

void __thiscall LemonRainEffectAnim::LemonRainEffectAnim(LemonRainEffectAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067ceab0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  return;
}


/* LemonRainEffectAnim::StaticNew() */

LemonRainEffectAnim * LemonRainEffectAnim::StaticNew(void)

{
  LemonRainEffectAnim *this;
  
  this = ::operator_new(0x120);
  LemonRainEffectAnim(this);
  return this;
}


/* LemonRainEffectAnim::~LemonRainEffectAnim() */

void __thiscall LemonRainEffectAnim::~LemonRainEffectAnim(LemonRainEffectAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_067ceab0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* LemonRainEffectAnim::~LemonRainEffectAnim() */

void __thiscall LemonRainEffectAnim::~LemonRainEffectAnim(LemonRainEffectAnim *this)

{
  ~LemonRainEffectAnim(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonRainEffectAnim::onAnimStopped(std::string const&) */

void __thiscall LemonRainEffectAnim::onAnimStopped(LemonRainEffectAnim *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  Plant *pPVar4;
  PlantLemon *this_00;
  undefined8 uVar5;
  ResourceInfo *pRVar6;
  BoardEntity *pBVar7;
  code *pcVar8;
  DamageInfo *pDVar9;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  pBVar7 = (BoardEntity *)0x0;
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onAnimStopped((string *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  else {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    pBVar7 = Sexy::RtObject::Cast<BoardEntity>(pRVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  if (cVar1 == '\0') {
    this_00 = (PlantLemon *)0x0;
    bVar2 = std::operator==(param_1,"PLANTFOOD");
  }
  else {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    pPVar4 = Sexy::RtObject::Cast<Plant>(pRVar3);
    this_00 = Sexy::RtObject::Cast<PlantLemon>(*(RtObject **)(pPVar4 + 0xa8));
    bVar2 = std::operator==(param_1,"PLANTFOOD");
  }
  if (bVar2) {
    cVar1 = LemonPlantFoodCounter::TargetIsValid(pBVar7);
    if ((cVar1 != '\0') && (this_00 != (PlantLemon *)0x0)) {
      pcVar8 = *(code **)(*(long *)pBVar7 + 0x110);
      pDVar9._0_4_ = (DamageInfo *)PlantLemon::GetLemonAcidDamage(this_00);
      uVar5 = operator|(0x800000000000,0x400000000);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x118));
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo(pDVar9._0_4_,local_70,local_6c,aDStack_68,uVar5,pRVar6,aPStack_78,0);
      (*pcVar8)(pBVar7,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

