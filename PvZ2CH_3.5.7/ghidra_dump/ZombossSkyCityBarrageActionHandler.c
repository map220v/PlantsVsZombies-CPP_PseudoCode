// Class: ZombossSkyCityBarrageActionHandler


/* ZombossSkyCityBarrageActionHandler::onBarrageEnded(std::string const&) */

void ZombossSkyCityBarrageActionHandler::onBarrageEnded(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* ZombossSkyCityBarrageActionHandler::onStartAction() */

void __thiscall
ZombossSkyCityBarrageActionHandler::onStartAction(ZombossSkyCityBarrageActionHandler *this)

{
  this[0x22] = (ZombossSkyCityBarrageActionHandler)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x21] = (ZombossSkyCityBarrageActionHandler)0x1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  LawnApp::ShowSkycityBossWarnig(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageActionHandler::StaticClassInit() */

void ZombossSkyCityBarrageActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityBarrageActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0472b3d4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityBarrageActionHandler::StaticGetClass() */

long * ZombossSkyCityBarrageActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityBarrageActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityBarrageActionHandler::GetClass() const */

long * ZombossSkyCityBarrageActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityBarrageActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityBarrageActionHandler::ZombossSkyCityBarrageActionHandler() */

void __thiscall
ZombossSkyCityBarrageActionHandler::ZombossSkyCityBarrageActionHandler
          (ZombossSkyCityBarrageActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c3740;
  return;
}


/* ZombossSkyCityBarrageActionHandler::StaticNew() */

ZombossSkyCityBarrageActionHandler * ZombossSkyCityBarrageActionHandler::StaticNew(void)

{
  ZombossSkyCityBarrageActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombossSkyCityBarrageActionHandler(this);
  return this;
}


/* ZombossSkyCityBarrageActionHandler::~ZombossSkyCityBarrageActionHandler() */

void __thiscall
ZombossSkyCityBarrageActionHandler::~ZombossSkyCityBarrageActionHandler
          (ZombossSkyCityBarrageActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3740;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSkyCityBarrageActionHandler::~ZombossSkyCityBarrageActionHandler() */

void __thiscall
ZombossSkyCityBarrageActionHandler::~ZombossSkyCityBarrageActionHandler
          (ZombossSkyCityBarrageActionHandler *this)

{
  ~ZombossSkyCityBarrageActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageActionHandler::onSendProjectile() */

void __thiscall
ZombossSkyCityBarrageActionHandler::onSendProjectile(ZombossSkyCityBarrageActionHandler *this)

{
  int iVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  undefined8 *puVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  undefined8 uVar4;
  Projectile *this_02;
  DVec3 *this_03;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Board *pBVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_01);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  iVar1 = *(int *)(pZVar3 + 0x40);
  iVar5 = *(int *)(this + 0x2c);
  fVar10 = *(float *)((long)puVar2 + 4);
                    /* WARNING: Load size is inaccurate */
  pBVar11._0_4_ = *puVar2;
  if (iVar5 == (iVar5 / 3) * 3) {
    fVar9 = 225.0;
    fVar6 = 195.0;
  }
  else if (iVar5 % 3 == 1) {
    fVar9 = 195.0;
    fVar6 = 165.0;
  }
  else {
    fVar9 = 165.0;
    fVar6 = 135.0;
  }
  fVar6 = (float)RandRangeFloat(fVar6,fVar9);
  iVar5 = 0;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"ZombossSkyCityBarrageDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar4,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  if (0 < iVar1) {
    do {
      uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
      this_02 = (Projectile *)
                Board::AddProjectile(pBVar11._0_4_,fVar10 - 50.0,0,uVar4,aRStack_18,this_01,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Projectile::SetShadow(this_02,false);
      DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_02,0xf0);
      fVar9 = (float)iVar5;
      iVar5 = iVar5 + 1;
      fVar9 = (float)Sexy::SexyMath::DegToRad((fVar6 + (float)iVar1 * 2.5) - fVar9 * 5.0);
      fVar7 = cosf(fVar9);
      this_03 = (DVec3 *)Projectile::GetVelocity(this_02);
      fVar8 = (float)DVec3::getLength(this_03);
      fVar9 = sinf(fVar9);
      Projectile::SetVelocity(this_02,fVar8 * fVar7,-(fVar9 * fVar8),0.0);
      RealObject::JoinTeam((RealObject *)this_02,2);
    } while (iVar5 != iVar1);
  }
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageActionHandler::onStartCollectEnergy() */

void __thiscall
ZombossSkyCityBarrageActionHandler::onStartCollectEnergy(ZombossSkyCityBarrageActionHandler *this)

{
  long lVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillSkycityBossWarnig(gLawnApp);
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCollectEnergyEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_SkyCity::PlayCollectEnergy
            ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this[0x21] = (ZombossSkyCityBarrageActionHandler)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x22] = (ZombossSkyCityBarrageActionHandler)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageActionHandler::onUpdateAction() */

void __thiscall
ZombossSkyCityBarrageActionHandler::onUpdateAction(ZombossSkyCityBarrageActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x21] != (ZombossSkyCityBarrageActionHandler)0x0) {
    fVar3 = (float)PVZ_Dt();
    fVar5 = *(float *)(this + 0x28);
    *(float *)(this + 0x28) = fVar3 + fVar5;
    if (3.0 <= fVar3 + fVar5) {
      onStartCollectEnergy(this);
    }
  }
  if (this[0x22] != (ZombossSkyCityBarrageActionHandler)0x0) {
    pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar3 = (float)PVZ_Dt();
    fVar5 = *(float *)(this + 0x28);
    fVar6 = *(float *)(pZVar1 + 0x3c);
    *(float *)(this + 0x28) = fVar3 + fVar5;
    if (fVar6 <= fVar3 + fVar5) {
      this[0x22] = (ZombossSkyCityBarrageActionHandler)0x0;
      this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onBarrageEnded");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_ZombossMech_SkyCity::PlayBarrageEnd
                ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      fVar3 = (float)PVZ_T();
      if (*(float *)(pZVar1 + 0x38) <= fVar3 - *(float *)(this + 0x24)) {
        uVar4 = PVZ_T();
        *(undefined4 *)(this + 0x24) = uVar4;
        onSendProjectile(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityBarrageActionHandler::onCollectEnergyEnded(std::string const&) */

void ZombossSkyCityBarrageActionHandler::onCollectEnergyEnded(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *this_01;
  char *pcVar1;
  
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ZombieAnimRig_ZombossMech_SkyCity::PlayBarrage((ZombieAnimRig_ZombossMech_SkyCity *)this_01);
  param_1[0x22] = (string)0x1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zomb_SkyCity_Zomboss_Attack_Rarrage");
  return;
}

