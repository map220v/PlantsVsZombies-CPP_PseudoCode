// Class: ZombieWeaselHoarderElite


/* ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite() */

void __thiscall ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite(ZombieWeaselHoarderElite *this)

{
  *(undefined ***)this = &PTR_GetClass_068a0940;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeaselHoarderElite_068a1378;
  ZombieWeaselHoarder::~ZombieWeaselHoarder((ZombieWeaselHoarder *)this);
  return;
}


/* non-virtual thunk to ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite() */

void __thiscall ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite(ZombieWeaselHoarderElite *this)

{
  ~ZombieWeaselHoarderElite(this + -0x10);
  return;
}


/* ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite() */

void __thiscall ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite(ZombieWeaselHoarderElite *this)

{
  ~ZombieWeaselHoarderElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite() */

void __thiscall ZombieWeaselHoarderElite::~ZombieWeaselHoarderElite(ZombieWeaselHoarderElite *this)

{
  ~ZombieWeaselHoarderElite(this + -0x10);
  return;
}


/* ZombieWeaselHoarderElite::ZombieWeaselHoarderElite() */

void __thiscall ZombieWeaselHoarderElite::ZombieWeaselHoarderElite(ZombieWeaselHoarderElite *this)

{
  ZombieWeaselHoarder::ZombieWeaselHoarder((ZombieWeaselHoarder *)this);
  *(undefined ***)this = &PTR_GetClass_068a0940;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeaselHoarderElite_068a1378;
  return;
}


/* ZombieWeaselHoarderElite::StaticNew() */

ZombieWeaselHoarderElite * ZombieWeaselHoarderElite::StaticNew(void)

{
  ZombieWeaselHoarderElite *this;
  
  this = ::operator_new(0x808);
  ZombieWeaselHoarderElite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarderElite::StaticClassInit() */

void ZombieWeaselHoarderElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWeaselHoarderElite");
    (*pcVar2)(plVar1,asStack_10,FUN_0468c6c4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarderElite::StaticGetClass() */

long * ZombieWeaselHoarderElite::StaticGetClass(void)

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
  uVar2 = ZombieWeaselHoarder::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeaselHoarderElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeaselHoarderElite::GetClass() const */

long * ZombieWeaselHoarderElite::GetClass(void)

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
  uVar2 = ZombieWeaselHoarder::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeaselHoarderElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarderElite::onWeaselAttackEnd(std::string const&) */

void ZombieWeaselHoarderElite::onWeaselAttackEnd(string *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    pcVar3 = *(code **)(*(long *)pZVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarderElite::tryStartChickening() */

void __thiscall ZombieWeaselHoarderElite::tryStartChickening(ZombieWeaselHoarderElite *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(this,0x19);
  if ((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x77), cVar1 == '\0')) {
    if (this[0x800] == (ZombieWeaselHoarderElite)0x0) {
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xa20);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<ZombieWeaselHoarderElite,void(ZombieWeaselHoarderElite::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      ZombieAnimRig_WeaselHoarder::PlayWeaselAttackSpecial
                ((ZombieAnimRig_WeaselHoarder *)pZVar2,aDStack_38);
    }
    else {
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xa20);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<ZombieWeaselHoarderElite,void(ZombieWeaselHoarderElite::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      ZombieAnimRig_WeaselHoarder::PlayWeaselAttack
                ((ZombieAnimRig_WeaselHoarder *)pZVar2,aDStack_38);
    }
  }
  this[0x801] = (ZombieWeaselHoarderElite)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarderElite::onTakeBodyDamage(DamageInfo const&) */

void __thiscall
ZombieWeaselHoarderElite::onTakeBodyDamage(ZombieWeaselHoarderElite *this,DamageInfo *param_1)

{
  ZombieWeaselHoarderElite ZVar1;
  char cVar2;
  bool bVar3;
  Plant *pPVar4;
  PlantChomper *pPVar5;
  PlantHypnoShroom *pPVar6;
  ZombieChickenFarmerProps *pZVar7;
  ZombieHydraHeadAnimRig *this_00;
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
      goto joined_r0x0468d398;
    }
    bVar3 = true;
  }
  ZVar1 = this[0x800];
joined_r0x0468d398:
  if (ZVar1 == (ZombieWeaselHoarderElite)0x0) {
    fVar8 = (float)FUN_0468b678(*(undefined4 *)(this + 0x280));
    fVar9 = (float)FUN_0468b67c(*(undefined4 *)(this + 0x284));
    pZVar7 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
    if ((((fVar8 / fVar9 <= *(float *)(pZVar7 + 0x210)) &&
         (cVar2 = Zombie::IsSuspended((Zombie *)this), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
       (((cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0' && (!bVar3)) &&
        (bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x20000), !bVar3)))) {
      this[0x800] = (ZombieWeaselHoarderElite)0x1;
      this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this_00,false);
      (**(code **)(*(long *)this + 0xa10))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarderElite::SpawnWeasel() */

void __thiscall ZombieWeaselHoarderElite::SpawnWeasel(ZombieWeaselHoarderElite *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieChickenFarmerProps *pZVar5;
  ZombieChickenEliteSubsystem *pZVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(this,0x40);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x41), cVar1 == '\0')) &&
      (cVar1 = Zombie::HasCondition(this,0x42), cVar1 == '\0')) &&
     (cVar1 = Zombie::HasCondition(this,0x43), cVar1 == '\0')) {
    cVar1 = Zombie::HasCondition(this,0x44);
    if (cVar1 == '\0') {
      pZVar5 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
      pZVar6 = Board::GetGameSubSystem<ZombieChickenEliteSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      pcVar9 = *(code **)(*(long *)pZVar6 + 0x88);
      puVar7 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      uVar10 = *puVar7;
      uVar2 = SharkMinion::getRow((SharkMinion *)this);
      uVar3 = FUN_0468b670(*(undefined4 *)(this + 0x24));
      uVar11 = *(undefined4 *)(pZVar5 + 0x228);
      uVar12 = *(undefined4 *)(pZVar5 + 0x22c);
      uVar13 = *(undefined4 *)(pZVar5 + 0x230);
      uVar14 = *(undefined4 *)(pZVar5 + 0x234);
      cVar1 = Zombie::HasCondition(this,0x19);
      uVar8 = 0x19;
      if (cVar1 == '\0') {
        uVar8 = 0xffffffff;
      }
      uVar4 = FUN_0468b674(*(undefined4 *)(this + 0x50));
      (*pcVar9)(uVar10,uVar11,uVar12,uVar13,uVar14,pZVar6,pZVar5 + 0x218,uVar2,uVar3,uVar8,uVar4,1,0
                ,0);
      pZVar5 = Zombie::GetProps<ZombieChickenFarmerProps>((Zombie *)this);
      RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar5 + 0x220),0.0);
      std::string::string(asStack_10,"Play_ChickenAction");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarderElite::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieWeaselHoarderElite::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    ZombieWeaselHoarder::onPopAnimCommand(param_1,param_2,param_3,param_4);
    return;
  }
  SpawnWeasel((ZombieWeaselHoarderElite *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarderElite::onZombieInitialize() */

void __thiscall ZombieWeaselHoarderElite::onZombieInitialize(ZombieWeaselHoarderElite *this)

{
  ZombieWeaselHoarderEliteProps *pZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieStrongBronze::onZombieInitialize((ZombieStrongBronze *)this);
  fVar3 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieWeaselHoarderEliteProps>((Zombie *)this);
  *(float *)(this + 0x804) = fVar3 + *(float *)(pZVar1 + 0x238);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieAnimRig_WeaselHoarder::SetZombie((ZombieAnimRig_WeaselHoarder *)pZVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarderElite::updateState_Walk() */

void __thiscall ZombieWeaselHoarderElite::updateState_Walk(ZombieWeaselHoarderElite *this)

{
  ZombieWeaselHoarderEliteProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if ((*(float *)(this + 0x804) < fVar2) && (this[0x800] == (ZombieWeaselHoarderElite)0x0)) {
    (**(code **)(*(long *)this + 0xa10))(this);
    fVar2 = (float)PVZ_T();
    pZVar1 = Zombie::GetProps<ZombieWeaselHoarderEliteProps>((Zombie *)this);
    *(float *)(this + 0x804) = fVar2 + *(float *)(pZVar1 + 0x238);
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieWeaselHoarderElite::updateState_Eat() */

void __thiscall ZombieWeaselHoarderElite::updateState_Eat(ZombieWeaselHoarderElite *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *pPVar2;
  PlantHypnoShroom *pPVar3;
  ZombieWeaselHoarderEliteProps *pZVar4;
  float fVar5;
  
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x804) < fVar5) {
    if (*(code **)(*(long *)this + 0xa18) == ZombieWeaselHoarder::shouldSpawnChickensOnEatAttack) {
      cVar1 = ZombieWeaselHoarder::shouldSpawnChickensOnEatAttack();
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0xa18))(this);
    }
    if ((((cVar1 != '\0') && (this[0x800] == (ZombieWeaselHoarderElite)0x0)) &&
        (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this),
        this_00 != (RtObject *)0x0)) &&
       ((pPVar2 = Sexy::RtObject::Cast<Plant>(this_00), pPVar2 != (Plant *)0x0 &&
        (pPVar3 = Sexy::RtObject::Cast<PlantHypnoShroom>(*(RtObject **)(pPVar2 + 0xa8)),
        pPVar3 == (PlantHypnoShroom *)0x0)))) {
      (**(code **)(*(long *)this + 0xa10))(this);
      fVar5 = (float)PVZ_T();
      pZVar4 = Zombie::GetProps<ZombieWeaselHoarderEliteProps>((Zombie *)this);
      *(float *)(this + 0x804) = fVar5 + *(float *)(pZVar4 + 0x238);
      ZombieChickenFarmer::updateState_Eat((ZombieChickenFarmer *)this);
      return;
    }
  }
  ZombieChickenFarmer::updateState_Eat((ZombieChickenFarmer *)this);
  return;
}

