// Class: ZombiePiano


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePiano::onEnterState_Walk(ZombieState) */

void ZombiePiano::onEnterState_Walk(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePiano::~ZombiePiano() */

void __thiscall ZombiePiano::~ZombiePiano(ZombiePiano *this)

{
  *(undefined ***)this = &PTR_GetClass_068aaa70;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePiano_068ab488;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePiano::~ZombiePiano() */

void __thiscall ZombiePiano::~ZombiePiano(ZombiePiano *this)

{
  ~ZombiePiano(this + -0x10);
  return;
}


/* ZombiePiano::~ZombiePiano() */

void __thiscall ZombiePiano::~ZombiePiano(ZombiePiano *this)

{
  ~ZombiePiano(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePiano::~ZombiePiano() */

void __thiscall ZombiePiano::~ZombiePiano(ZombiePiano *this)

{
  ~ZombiePiano(this + -0x10);
  return;
}


/* ZombiePiano::ZombiePiano() */

void __thiscall ZombiePiano::ZombiePiano(ZombiePiano *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068aaa70;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePiano_068ab488;
  return;
}


/* ZombiePiano::StaticNew() */

ZombiePiano * ZombiePiano::StaticNew(void)

{
  ZombiePiano *this;
  
  this = ::operator_new(0x800);
  ZombiePiano(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePiano::StaticClassInit() */

void ZombiePiano::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePiano");
    (*pcVar2)(plVar1,asStack_10,FUN_046a8264,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePiano::StaticGetClass() */

long * ZombiePiano::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePiano",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePiano::GetClass() const */

long * ZombiePiano::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePiano",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePiano::onLostArm() */

void __thiscall ZombiePiano::onLostArm(ZombiePiano *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Piano::SetDamaged((ZombieAnimRig_Piano *)this_00);
  return;
}


/* ZombiePiano::onRegrowArm() */

void __thiscall ZombiePiano::onRegrowArm(ZombiePiano *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Piano::SetUndamaged((ZombieAnimRig_Piano *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePiano::onInitialized() */

void __thiscall ZombiePiano::onInitialized(ZombiePiano *this)

{
  ZombiePianoSubsystem *pZVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onInitialized((Zombie *)this);
  pZVar1 = Board::GetGameSubSystem<ZombiePianoSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePiano::onUpdate() */

void __thiscall ZombiePiano::onUpdate(ZombiePiano *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  Zombie::onUpdate((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Piano::UpdatePiano((ZombieAnimRig_Piano *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePiano::updateState_Walk() */

void __thiscall ZombiePiano::updateState_Walk(ZombiePiano *this)

{
  int iVar1;
  SexyVector3 *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar2;
  EntityConditionTracker<Creature,CreatureConditions> *this_02;
  ZombiePianoProps *pZVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::updateState_Walk((Zombie *)this);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  if (760.0 < *(float *)this_00) {
    pZVar3 = Zombie::GetProps<ZombiePianoProps>((Zombie *)this);
    fVar10 = *(float *)(pZVar3 + 0x210);
  }
  else {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    fVar10 = *(float *)(lVar2 + 0x10);
  }
  this_02 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar5 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_02);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  fVar7 = (float)PVZ_Dt();
  uVar8 = 0;
  uVar9 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,fVar7 * fVar6 * -((float)iVar1 * fVar5 * fVar10),0.0,0.0);
  pcVar4 = *(code **)(*(long *)this + 0x78);
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_14 = uVar8;
  local_10 = uVar9;
  (*pcVar4)(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePiano::updateState_Eat() */

void __thiscall ZombiePiano::updateState_Eat(ZombiePiano *this)

{
  bool bVar1;
  RtObject *this_00;
  PlantGroup *this_01;
  long lVar2;
  PlantSpikeweed *pPVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 != (RtObject *)0x0) &&
     (this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00), this_01 != (PlantGroup *)0x0)) {
    PlantGroup::GetPlantAtLayer(aRStack_10,this_01,1);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      pPVar3 = Sexy::RtObject::Cast<PlantSpikeweed>(*(RtObject **)(lVar2 + 0xa8));
      if (pPVar3 != (PlantSpikeweed *)0x0) {
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
        Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)pRVar4);
        PlantGroup::TakeSmashAttack(this_01,(BoardEntity *)this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_046a86c4;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Zombie::updateState_Eat((Zombie *)this);
LAB_046a86c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePiano::onTakeFatalDamage(DamageInfo const&) */

void ZombiePiano::onTakeFatalDamage(DamageInfo *param_1)

{
  char *pcVar1;
  
  Zombie::onTakeFatalDamage(param_1);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zomb_WildWest_Pianist_Death");
  return;
}

