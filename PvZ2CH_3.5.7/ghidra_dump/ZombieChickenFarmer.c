// Class: ZombieChickenFarmer


/* ZombieChickenFarmer::ZombieChickenFarmer() */

void __thiscall ZombieChickenFarmer::ZombieChickenFarmer(ZombieChickenFarmer *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0689f350;
  *(undefined ***)(this + 0x10) = &PTR__ZombieChickenFarmer_0689fd80;
  return;
}


/* ZombieChickenFarmer::~ZombieChickenFarmer() */

void __thiscall ZombieChickenFarmer::~ZombieChickenFarmer(ZombieChickenFarmer *this)

{
  *(undefined ***)this = &PTR_GetClass_0689f350;
  *(undefined ***)(this + 0x10) = &PTR__ZombieChickenFarmer_0689fd80;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieChickenFarmer::~ZombieChickenFarmer() */

void __thiscall ZombieChickenFarmer::~ZombieChickenFarmer(ZombieChickenFarmer *this)

{
  ~ZombieChickenFarmer(this + -0x10);
  return;
}


/* ZombieChickenFarmer::~ZombieChickenFarmer() */

void __thiscall ZombieChickenFarmer::~ZombieChickenFarmer(ZombieChickenFarmer *this)

{
  ~ZombieChickenFarmer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieChickenFarmer::~ZombieChickenFarmer() */

void __thiscall ZombieChickenFarmer::~ZombieChickenFarmer(ZombieChickenFarmer *this)

{
  ~ZombieChickenFarmer(this + -0x10);
  return;
}


/* ZombieChickenFarmer::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieChickenFarmer::onChangeTeams(long *param_1)

{
  (**(code **)(*param_1 + 0xa10))();
  return;
}


/* ZombieChickenFarmer::onApplyCondition(ZombieConditions) */

void __thiscall ZombieChickenFarmer::onApplyCondition(ZombieChickenFarmer *this,int param_2)

{
  char cVar1;
  
  if ((((param_2 == 0x37) && (this[0x800] == (ZombieChickenFarmer)0x0)) &&
      (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
     ((cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0' &&
      (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')))) {
    (**(code **)(*(long *)this + 0xa10))(this);
  }
  return;
}


/* ZombieChickenFarmer::StaticNew() */

ZombieChickenFarmer * ZombieChickenFarmer::StaticNew(void)

{
  ZombieChickenFarmer *this;
  
  this = ::operator_new(0x808);
  ZombieChickenFarmer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenFarmer::StaticClassInit() */

void ZombieChickenFarmer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieChickenFarmer");
    (*pcVar2)(plVar1,asStack_10,FUN_0468b980,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChickenFarmer::StaticGetClass() */

long * ZombieChickenFarmer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenFarmer::GetClass() const */

long * ZombieChickenFarmer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenFarmer::onTakeBodyDamage(DamageInfo const&) */

void __thiscall ZombieChickenFarmer::onTakeBodyDamage(ZombieChickenFarmer *this,DamageInfo *param_1)

{
  ZombieChickenFarmer ZVar1;
  char cVar2;
  bool bVar3;
  Plant *pPVar4;
  PlantChomper *pPVar5;
  PlantHypnoShroom *pPVar6;
  ZombieChickenFarmerProps *pZVar7;
  float fVar8;
  float fVar9;
  
  if (*(RtObject **)param_1 == (RtObject *)0x0) {
    bVar3 = false;
  }
  else {
    pPVar4 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1);
    if ((pPVar4 == (Plant *)0x0) ||
       ((pPVar5 = Sexy::RtObject::Cast<PlantChomper>(*(RtObject **)(pPVar4 + 0xa8)),
        pPVar5 == (PlantChomper *)0x0 &&
        (pPVar6 = Sexy::RtObject::Cast<PlantHypnoShroom>(*(RtObject **)(pPVar4 + 0xa8)),
        pPVar6 == (PlantHypnoShroom *)0x0)))) {
      ZVar1 = this[0x800];
      bVar3 = false;
      goto joined_r0x0468cdd8;
    }
    bVar3 = true;
  }
  ZVar1 = this[0x800];
joined_r0x0468cdd8:
  if (ZVar1 == (ZombieChickenFarmer)0x0) {
    fVar8 = (float)FUN_0468b678(*(undefined4 *)(this + 0x280));
    fVar9 = (float)FUN_0468b67c(*(undefined4 *)(this + 0x284));
    pZVar7 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
    if ((((fVar8 / fVar9 <= *(float *)(pZVar7 + 0x210)) &&
         (cVar2 = Zombie::IsSuspended((Zombie *)this), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
       (((cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0' && (!bVar3)) &&
        (bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x20000), !bVar3)))) {
      (**(code **)(*(long *)this + 0xa10))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenFarmer::tryStartChickening() */

void __thiscall ZombieChickenFarmer::tryStartChickening(ZombieChickenFarmer *this)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ZombieHydraHeadAnimRig *pZVar6;
  ZombieChickenFarmerProps *pZVar7;
  ZombieChickenSubsystem *pZVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  this[0x800] = (ZombieChickenFarmer)0x1;
  cVar2 = (**(code **)(*(long *)this + 0x9f8))(this);
  if ((((cVar2 == '\0') && (cVar2 = Zombie::HasCondition(this,0x40), cVar2 == '\0')) &&
      (cVar2 = Zombie::HasCondition(this,0x41), cVar2 == '\0')) &&
     (((cVar2 = Zombie::HasCondition(this,0x42), cVar2 == '\0' &&
       (cVar2 = Zombie::HasCondition(this,0x43), cVar2 == '\0')) &&
      (cVar2 = Zombie::HasCondition(this,0x44), cVar2 == '\0')))) {
    pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)pZVar6,false);
    pZVar7 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
    pZVar8 = Board::GetGameSubSystem<ZombieChickenSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    pcVar11 = *(code **)(*(long *)pZVar8 + 0x88);
    puVar9 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    uVar16 = *puVar9;
    uVar3 = SharkMinion::getRow((SharkMinion *)this);
    uVar4 = FUN_0468b670(*(undefined4 *)(this + 0x24));
    if (cVar1 == '\0') {
      uVar12 = *(undefined4 *)(pZVar7 + 0x228);
      uVar13 = *(undefined4 *)(pZVar7 + 0x22c);
      uVar14 = *(undefined4 *)(pZVar7 + 0x230);
      uVar15 = *(undefined4 *)(pZVar7 + 0x234);
    }
    else {
      uVar13 = 0;
      uVar14 = 0x3e4ccccd;
      uVar12 = 0x3fb33333;
      uVar15 = 0;
    }
    cVar1 = Zombie::HasCondition(this,0x19);
    uVar10 = 0x19;
    if (cVar1 == '\0') {
      uVar10 = 0xffffffff;
    }
    uVar5 = FUN_0468b674(*(undefined4 *)(this + 0x50));
    (*pcVar11)(uVar16,uVar12,uVar13,uVar14,uVar15,pZVar8,pZVar7 + 0x218,uVar3,uVar4,uVar10,uVar5,1,0
               ,0);
    pZVar7 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar7 + 0x220),0.0);
    cVar1 = Zombie::isInState((Zombie *)this,1);
    if (cVar1 != '\0') {
      pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar11 = *(code **)(*(long *)pZVar6 + 0x118);
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate(aRStack_50);
      (*pcVar11)(pZVar6,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    std::string::string(asStack_58,"Play_ChickenAction");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    cVar1 = Zombie::isInState((Zombie *)this,1);
    if (cVar1 != '\0') {
      pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar11 = *(code **)(*(long *)pZVar6 + 0x118);
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate(aRStack_50);
      (*pcVar11)(pZVar6,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChickenFarmer::updateState_Eat() */

void __thiscall ZombieChickenFarmer::updateState_Eat(ZombieChickenFarmer *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *pPVar2;
  PlantHypnoShroom *pPVar3;
  
  if ((((this[0x800] == (ZombieChickenFarmer)0x0) &&
       (cVar1 = (**(code **)(*(long *)this + 0xa18))(), cVar1 != '\0')) &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0)
      ) && ((pPVar2 = Sexy::RtObject::Cast<Plant>(this_00), pPVar2 != (Plant *)0x0 &&
            (pPVar3 = Sexy::RtObject::Cast<PlantHypnoShroom>(*(RtObject **)(pPVar2 + 0xa8)),
            pPVar3 == (PlantHypnoShroom *)0x0)))) {
    (**(code **)(*(long *)this + 0xa10))(this);
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  Zombie::updateState_Eat((Zombie *)this);
  return;
}

