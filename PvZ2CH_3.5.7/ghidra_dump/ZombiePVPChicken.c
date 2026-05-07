// Class: ZombiePVPChicken


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChicken::StaticClassInit() */

void ZombiePVPChicken::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPChicken");
    (*pcVar2)(plVar1,asStack_10,FUN_049a29a4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPChicken::StaticGetClass() */

long * ZombiePVPChicken::StaticGetClass(void)

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
  uVar2 = ZombieChicken::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPChicken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPChicken::GetClass() const */

long * ZombiePVPChicken::GetClass(void)

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
  uVar2 = ZombieChicken::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPChicken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPChicken::~ZombiePVPChicken() */

void __thiscall ZombiePVPChicken::~ZombiePVPChicken(ZombiePVPChicken *this)

{
  *(undefined ***)this = &PTR_GetClass_06921820;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPChicken_06922240;
  ZombieChicken::~ZombieChicken((ZombieChicken *)this);
  return;
}


/* non-virtual thunk to ZombiePVPChicken::~ZombiePVPChicken() */

void __thiscall ZombiePVPChicken::~ZombiePVPChicken(ZombiePVPChicken *this)

{
  ~ZombiePVPChicken(this + -0x10);
  return;
}


/* ZombiePVPChicken::~ZombiePVPChicken() */

void __thiscall ZombiePVPChicken::~ZombiePVPChicken(ZombiePVPChicken *this)

{
  ~ZombiePVPChicken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPChicken::~ZombiePVPChicken() */

void __thiscall ZombiePVPChicken::~ZombiePVPChicken(ZombiePVPChicken *this)

{
  ~ZombiePVPChicken(this + -0x10);
  return;
}


/* ZombiePVPChicken::ZombiePVPChicken() */

void __thiscall ZombiePVPChicken::ZombiePVPChicken(ZombiePVPChicken *this)

{
  ZombieChicken::ZombieChicken((ZombieChicken *)this);
  this[0x800] = (ZombiePVPChicken)0x0;
  *(undefined ***)this = &PTR_GetClass_06921820;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPChicken_06922240;
  return;
}


/* ZombiePVPChicken::StaticNew() */

ZombiePVPChicken * ZombiePVPChicken::StaticNew(void)

{
  ZombiePVPChicken *this;
  
  this = ::operator_new(0x808);
  ZombiePVPChicken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChicken::onAnimStopped(std::string const&) */

void __thiscall ZombiePVPChicken::onAnimStopped(ZombiePVPChicken *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(this,0x40);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x41), cVar1 == '\0')) &&
      (cVar1 = Zombie::HasCondition(this,0x60), cVar1 == '\0')) &&
     ((cVar1 = Zombie::HasCondition(this,0x42), cVar1 == '\0' &&
      (cVar1 = Zombie::HasCondition(this,0x43), cVar1 == '\0')))) {
    cVar1 = Zombie::HasCondition(this,0x44);
    if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"jump"), bVar2)) {
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      std::string::string(asStack_40,"idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      this[0x800] = (ZombiePVPChicken)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChicken::updateState_Walk() */

void __thiscall ZombiePVPChicken::updateState_Walk(ZombiePVPChicken *this)

{
  char cVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  EntityConditionTracker<Creature,CreatureConditions> *this_01;
  SexyVector3 *this_02;
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
  cVar1 = (**(code **)(*(long *)this + 0x330))(this);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar10 = *(float *)(lVar3 + 0x10);
    if (this[0x800] != (ZombiePVPChicken)0x0) {
      fVar10 = fVar10 * 0.2;
    }
    this_01 = (EntityConditionTracker<Creature,CreatureConditions> *)
              Zombie::GetConditionTracker((Zombie *)this);
    fVar5 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_01);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
    fVar7 = (float)PVZ_Dt();
    uVar8 = 0;
    uVar9 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,fVar7 * fVar6 * -((float)iVar2 * fVar5 * fVar10),0.0,0.0);
    pcVar4 = *(code **)(*(long *)this + 0x78);
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_18 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aVStack_28);
    local_14 = uVar8;
    local_10 = uVar9;
    (*pcVar4)(this,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChicken::CreateArenaSpawnEffect() */

void __thiscall ZombiePVPChicken::CreateArenaSpawnEffect(ZombiePVPChicken *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar3 = *(code **)(*plVar2 + 0x170);
  std::string::string(asStack_58,"jump");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar3)(plVar2,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  this[0x800] = (ZombiePVPChicken)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

