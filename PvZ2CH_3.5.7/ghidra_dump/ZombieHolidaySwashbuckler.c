// Class: ZombieHolidaySwashbuckler


/* ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler() */

void __thiscall
ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler(ZombieHolidaySwashbuckler *this)

{
  *(undefined ***)this = &PTR_GetClass_068b5450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHolidaySwashbuckler_068b5eb8;
  ZombieSwashbuckler::~ZombieSwashbuckler((ZombieSwashbuckler *)this);
  return;
}


/* non-virtual thunk to ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler() */

void __thiscall
ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler(ZombieHolidaySwashbuckler *this)

{
  ~ZombieHolidaySwashbuckler(this + -0x10);
  return;
}


/* ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler() */

void __thiscall
ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler(ZombieHolidaySwashbuckler *this)

{
  ~ZombieHolidaySwashbuckler(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler() */

void __thiscall
ZombieHolidaySwashbuckler::~ZombieHolidaySwashbuckler(ZombieHolidaySwashbuckler *this)

{
  ~ZombieHolidaySwashbuckler(this + -0x10);
  return;
}


/* ZombieHolidaySwashbuckler::ZombieHolidaySwashbuckler() */

void __thiscall
ZombieHolidaySwashbuckler::ZombieHolidaySwashbuckler(ZombieHolidaySwashbuckler *this)

{
  undefined4 uVar1;
  
  ZombieSwashbuckler::ZombieSwashbuckler((ZombieSwashbuckler *)this);
  this[0x804] = (ZombieHolidaySwashbuckler)0x0;
  *(undefined ***)this = &PTR_GetClass_068b5450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHolidaySwashbuckler_068b5eb8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar1;
  return;
}


/* ZombieHolidaySwashbuckler::StaticNew() */

ZombieHolidaySwashbuckler * ZombieHolidaySwashbuckler::StaticNew(void)

{
  ZombieHolidaySwashbuckler *this;
  
  this = ::operator_new(0x810);
  ZombieHolidaySwashbuckler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHolidaySwashbuckler::StaticClassInit() */

void ZombieHolidaySwashbuckler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieHolidaySwashbuckler");
    (*pcVar2)(plVar1,asStack_10,FUN_046d6e30,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHolidaySwashbuckler::onExitState_Eat(ZombieState) */

void __thiscall ZombieHolidaySwashbuckler::onExitState_Eat(ZombieHolidaySwashbuckler *this)

{
  ZombieAnimRig *this_00;
  float fVar1;
  
  nop();
  if (this[0x804] == (ZombieHolidaySwashbuckler)0x0) {
    return;
  }
  Zombie::SetFacing((Zombie *)this,1);
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar1 = (float)Zombie::GetWalkSpeed((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,fVar1 + fVar1);
    return;
  }
  fVar1 = (float)(**(code **)(*(long *)this + 0x1d8))();
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,fVar1 + fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHolidaySwashbuckler::onZombieInitialize() */

void __thiscall ZombieHolidaySwashbuckler::onZombieInitialize(ZombieHolidaySwashbuckler *this)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieSwashbuckler::onZombieInitialize((ZombieSwashbuckler *)this);
  this[0x804] = (ZombieHolidaySwashbuckler)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar2;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_10,"custon_02");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_10,"cuton_01");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHolidaySwashbuckler::onEnterState_Eat(ZombieState) */

void ZombieHolidaySwashbuckler::onEnterState_Eat(long param_1)

{
  float fVar1;
  
  Zombie::onEnterState_Winning();
  if (*(char *)(param_1 + 0x804) != '\0') {
    fVar1 = (float)PVZ_T();
    *(float *)(param_1 + 0x808) = fVar1 + 1.8;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHolidaySwashbuckler::updateState_Eat() */

void __thiscall ZombieHolidaySwashbuckler::updateState_Eat(ZombieHolidaySwashbuckler *this)

{
  bool bVar1;
  RtObject *this_00;
  GridItemChristmasProtect *this_01;
  PopAnimRig *pPVar2;
  float fVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::updateState_Eat((Zombie *)this);
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x808) < fVar3) {
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x808) = uVar4;
    if (this[0x804] != (ZombieHolidaySwashbuckler)0x0) {
      this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
      if ((this_00 != (RtObject *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<GridItemChristmasProtect>(this_00), bVar1)) {
        this_01 = Sexy::RtObject::Cast<GridItemChristmasProtect>(this_00);
        GridItemChristmasProtect::TakeStealed(this_01);
        pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_10,"custon_02");
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_10,"cuton_01");
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,true);
        std::string::~string(asStack_10);
        nop();
      }
      (**(code **)(*(long *)this + 0x260))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHolidaySwashbuckler::DropAllLoot() */

void __thiscall ZombieHolidaySwashbuckler::DropAllLoot(ZombieHolidaySwashbuckler *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  Collectable *this_00;
  string *extraout_x0;
  long lVar4;
  string *extraout_x0_00;
  string *psVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  undefined4 local_50;
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  DVec3 aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)FUN_046d3fb8(*(undefined4 *)(this + 0x280));
  if (((fVar6 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
     (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_58 = *puVar3;
    local_50 = *(undefined4 *)(puVar3 + 1);
    psVar5 = *(string **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"vasebreaker_packet");
    this_00 = (Collectable *)
              Board::AddCollectableWithDefaultMotion(psVar5,(SexyVector3 *)asStack_18);
    std::string::~string(asStack_18);
    nop();
    iVar2 = FUN_046d3fb4(*(undefined4 *)(this + 0x2b0));
    if (iVar2 == -5) {
      std::string::string((string *)aDStack_28,"splitpea");
      nop();
      lVar4 = FUN_046d5978(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      if (lVar4 != 0) {
        ChristmasProtectIntro::GetIntroPlant();
        FUN_05474278(aDStack_28,asStack_18);
        std::string::~string(asStack_18);
      }
      nop();
      CollectableSeedPacket::SetSeedType(extraout_x0_00);
      std::string::~string((string *)aDStack_28);
    }
    else {
      Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
      nop();
      iVar2 = Sexy::LazySingleton<FestivalManager>::GetInstance();
      FestivalManager::GetChristmasProtectDropPlantName(iVar2);
      CollectableSeedPacket::SetSeedType(extraout_x0);
      std::string::~string(asStack_18);
    }
    uVar8 = 0;
    uVar7 = 0;
    EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,0.0);
    local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)aVStack_48);
    local_34 = uVar7;
    local_30 = uVar8;
    DVec3::DVec3(aDStack_28);
    DVec3::DVec3((DVec3 *)asStack_18);
    CalculateTossVelocity
              ((SexyVector3 *)&local_58,(SexyVector3 *)&local_38,40.0,0.6,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)asStack_18);
    Collectable::SetMotionNewtonian
              (this_00,(SexyVector3 *)aDStack_28,(SexyVector3 *)asStack_18,true);
    Collectable::SetKeepOnBoard(this_00,true);
    Collectable::SetNeverExpire(this_00,true);
  }
  Zombie::DropAllLoot((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHolidaySwashbuckler::StaticGetClass() */

long * ZombieHolidaySwashbuckler::StaticGetClass(void)

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
  uVar2 = ZombieSwashbuckler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieHolidaySwashbuckler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHolidaySwashbuckler::GetClass() const */

long * ZombieHolidaySwashbuckler::GetClass(void)

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
  uVar2 = ZombieSwashbuckler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieHolidaySwashbuckler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHolidaySwashbuckler::findTarget() */

RtObject * __thiscall ZombieHolidaySwashbuckler::findTarget(ZombieHolidaySwashbuckler *this)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  
  if ((this[0x800] != (ZombieHolidaySwashbuckler)0x0) ||
     (iVar2 = Zombie::GetFacing((Zombie *)this), iVar2 == 1)) {
    return (RtObject *)0x0;
  }
  this_00 = (RtObject *)ZombiePVPSeagull::findTarget((ZombiePVPSeagull *)this);
  if (this_00 == (RtObject *)0x0) {
    this[0x804] = (ZombieHolidaySwashbuckler)0x0;
    return (RtObject *)0x0;
  }
  bVar1 = Sexy::RtObject::IsA<GridItemChristmasProtect>(this_00);
  if (bVar1) {
    this[0x804] = (ZombieHolidaySwashbuckler)0x1;
    return this_00;
  }
  this[0x804] = (ZombieHolidaySwashbuckler)0x0;
  return this_00;
}

