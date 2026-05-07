// Class: ZombiePVPSkill_Bomb


/* ZombiePVPSkill_Bomb::onAnimationDone(std::string const&) */

void ZombiePVPSkill_Bomb::onAnimationDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Bomb::findTarget() */

void __thiscall ZombiePVPSkill_Bomb::findTarget(ZombiePVPSkill_Bomb *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  uVar3 = Board::GetPlantAt(this_00,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Bomb::StaticClassInit() */

void ZombiePVPSkill_Bomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkill_Bomb");
    (*pcVar2)(plVar1,asStack_10,FUN_04a954dc,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Bomb::StaticGetClass() */

long * ZombiePVPSkill_Bomb::StaticGetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_Bomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Bomb::GetClass() const */

long * ZombiePVPSkill_Bomb::GetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_Bomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb() */

void __thiscall ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb(ZombiePVPSkill_Bomb *this)

{
  *(undefined ***)this = &PTR_GetClass_069437b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Bomb_069441e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  ZombiePVPSkill::~ZombiePVPSkill((ZombiePVPSkill *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb() */

void __thiscall ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb(ZombiePVPSkill_Bomb *this)

{
  ~ZombiePVPSkill_Bomb(this + -0x10);
  return;
}


/* ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb() */

void __thiscall ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb(ZombiePVPSkill_Bomb *this)

{
  ~ZombiePVPSkill_Bomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb() */

void __thiscall ZombiePVPSkill_Bomb::~ZombiePVPSkill_Bomb(ZombiePVPSkill_Bomb *this)

{
  ~ZombiePVPSkill_Bomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Bomb::onEnterState_Playing(ZombieState) */

void ZombiePVPSkill_Bomb::onEnterState_Playing(Zombie *param_1)

{
  PopAnimRig *this;
  PVPSkillBombRocket *this_00;
  float fVar1;
  float fVar2;
  string asStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetDisabled(this,true);
  this_00 = GameObject::Create<PVPSkillBombRocket>();
  if (this_00 != (PVPSkillBombRocket *)0x0) {
    fVar2 = *(float *)(param_1 + 0x1c);
    fVar1 = (float)FUN_04a949b0(*(undefined4 *)(param_1 + 0x18),fVar2,
                                *(undefined4 *)(param_1 + 0x20));
    Sexy::Point::Point(aPStack_10,(int)fVar1,(int)fVar2);
    CannonRocket::InitializeRocketController((CannonRocket *)this_00,aPStack_10,0.0);
    std::string::string(asStack_18,"POPANIM_ZOMBIE_ZOMBIE_PVPSKILL_BOMB_ROCKET");
    std::string::string((string *)aPStack_10,"idle");
    CannonRocket::StartRocketEffect
              ((CannonRocket *)this_00,asStack_18,(string *)aPStack_10,1.2,500.0);
    std::string::~string((string *)aPStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x800),(RtWeakPtrBase *)aPStack_10
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Bomb::ZombiePVPSkill_Bomb() */

void __thiscall ZombiePVPSkill_Bomb::ZombiePVPSkill_Bomb(ZombiePVPSkill_Bomb *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ZombiePVPSkill::ZombiePVPSkill((ZombiePVPSkill *)this);
  *(undefined ***)this = &PTR_GetClass_069437b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Bomb_069441e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPSkillBombRocketExploded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<PVPSkillBombRocket*,Sexy::CBMemberTranslatorX<ZombiePVPSkill_Bomb,void(ZombiePVPSkill_Bomb::*)(PVPSkillBombRocket*)>>
            ((MessageRouter *)puVar1,Message::PVPSkillBombRocketExploded,&local_40);
  return;
}


/* ZombiePVPSkill_Bomb::StaticNew() */

ZombiePVPSkill_Bomb * ZombiePVPSkill_Bomb::StaticNew(void)

{
  ZombiePVPSkill_Bomb *this;
  
  this = ::operator_new(0x808);
  ZombiePVPSkill_Bomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Bomb::onPVPSkillBombRocketExploded(PVPSkillBombRocket*) */

void __thiscall
ZombiePVPSkill_Bomb::onPVPSkillBombRocketExploded
          (ZombiePVPSkill_Bomb *this,PVPSkillBombRocket *param_1)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  RtObject *this_00;
  PopAnimRig *this_01;
  long *plVar4;
  Plant *pPVar5;
  code *pcVar6;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
  if ((cVar1 != '\0') &&
     (pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x800)),
     param_1 == (PVPSkillBombRocket *)pRVar3)) {
    this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
    if ((this_00 != (RtObject *)0x0) && (bVar2 = Sexy::RtObject::IsA<Plant>(this_00), bVar2)) {
      pcVar6 = *(code **)(*(long *)this + 0x978);
      pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
      (*pcVar6)(this,pPVar5);
    }
    this_01 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    PopAnimRig::SetDisabled(this_01,false);
    plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar6 = *(code **)(*plVar4 + 0x170);
    std::string::string(asStack_58,"attack");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    (*pcVar6)(plVar4,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

