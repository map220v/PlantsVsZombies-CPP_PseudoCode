// Class: ZombossDarkLobFireballsActionHandler


/* ZombossDarkLobFireballsActionHandler::onFireLobEndEnded(std::string const&) */

void ZombossDarkLobFireballsActionHandler::onFireLobEndEnded(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler::StaticClassInit() */

void ZombossDarkLobFireballsActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDarkLobFireballsActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047224a4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkLobFireballsActionHandler::StaticGetClass() */

long * ZombossDarkLobFireballsActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDarkLobFireballsActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkLobFireballsActionHandler::GetClass() const */

long * ZombossDarkLobFireballsActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDarkLobFireballsActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkLobFireballsActionHandler::onUpdateAction() */

void __thiscall
ZombossDarkLobFireballsActionHandler::onUpdateAction(ZombossDarkLobFireballsActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  fVar2 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_01);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar4 = *(float *)(pZVar1 + 0x54);
  fVar3 = (float)ZombieZombossMech::GetStunHpFactor(this_01);
  if (fVar2 <= fVar3 * fVar4) {
    return;
  }
  ZombieZombossMech::DoStun(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler::lobFireball(Sexy::Point const&, bool) const */

void __thiscall
ZombossDarkLobFireballsActionHandler::lobFireball
          (ZombossDarkLobFireballsActionHandler *this,Point *param_1,bool param_2)

{
  RtObject *this_00;
  ZombieZombossMech *pZVar1;
  FlyingFireball *this_01;
  ZombossHydraSprayActionDefinition *pZVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar1 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this_01 = GameObject::Create<FlyingFireball>();
  Sexy::Point::Point(aPStack_10,(TPoint *)param_1);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  FlyingFireball::StartEffect
            ((FlyingFireball *)0x40000000,0x44160000,*(undefined4 *)(pZVar2 + 0x50),this_01,
             aPStack_10,pZVar1);
  FlyingFireball::SetSpawnsDragonImp(this_01,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkLobFireballsActionHandler::ZombossDarkLobFireballsActionHandler() */

void __thiscall
ZombossDarkLobFireballsActionHandler::ZombossDarkLobFireballsActionHandler
          (ZombossDarkLobFireballsActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c1870;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombossDarkLobFireballsActionHandler::StaticNew() */

ZombossDarkLobFireballsActionHandler * ZombossDarkLobFireballsActionHandler::StaticNew(void)

{
  ZombossDarkLobFireballsActionHandler *this;
  
  this = ::operator_new(0x58);
  ZombossDarkLobFireballsActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler::onFireLobStartEnded(std::string const&) */

void ZombossDarkLobFireballsActionHandler::onFireLobStartEnded(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFireLobActionEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireAttack
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler::onFireLobActionEnded(std::string const&) */

void ZombossDarkLobFireballsActionHandler::onFireLobActionEnded(string *param_1)

{
  char cVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  undefined8 uVar2;
  int *piVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(param_1 + 0x28));
  piVar3 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x40));
  (**(code **)(*(long *)param_1 + 0xa8))(param_1,uVar2,*piVar3 == 1);
  FUN_0471e204(param_1 + 0x30);
  FUN_0471e214(param_1 + 0x48);
  cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(param_1 + 0x28));
  if (cVar1 == '\0') {
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onFireLobActionEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireAttack
              ((ZombieAnimRig_ZombossMech_Hydra *)pZVar4,aRStack_50);
  }
  else {
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onFireLobEndEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireEnd
              ((ZombieAnimRig_ZombossMech_Hydra *)pZVar4,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkLobFireballsActionHandler::~ZombossDarkLobFireballsActionHandler() */

void __thiscall
ZombossDarkLobFireballsActionHandler::~ZombossDarkLobFireballsActionHandler
          (ZombossDarkLobFireballsActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c1870;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossDarkLobFireballsActionHandler::~ZombossDarkLobFireballsActionHandler() */

void __thiscall
ZombossDarkLobFireballsActionHandler::~ZombossDarkLobFireballsActionHandler
          (ZombossDarkLobFireballsActionHandler *this)

{
  ~ZombossDarkLobFireballsActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler::pickFireballSpots(std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&, int) const */

void __thiscall
ZombossDarkLobFireballsActionHandler::pickFireballSpots
          (ZombossDarkLobFireballsActionHandler *this,vector *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *pZVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  Point *pPVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int local_44;
  undefined4 local_40 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_44 = param_2;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar3 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)pZVar3 + 400))
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,pZVar3);
  iVar2 = local_20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  iVar11 = *(int *)(pZVar4 + 0x48);
  if (iVar11 < iVar2) {
    do {
      iVar9 = 0;
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        do {
          iVar1 = iVar9 + 1;
          Sexy::Point::Point((Point *)local_40,iVar11,iVar9);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)local_40)
          ;
          iVar9 = iVar1;
        } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar5,uVar6);
  uVar5 = CONCAT44(uStack_1c,local_20);
  local_40[0] = FUN_0471e184(uVar5,local_18);
  piVar7 = eastl::min_alt<int>((int *)local_40,&local_44);
  iVar11 = *piVar7;
  if (0 < iVar11) {
    lVar10 = 0;
    while( true ) {
      pPVar8 = (Point *)FUN_0471e198(uVar5,lVar10);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,pPVar8);
      if (iVar11 <= (int)(lVar10 + 1)) break;
      uVar5 = CONCAT44(uStack_1c,local_20);
      lVar10 = lVar10 + 1;
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler::onStartAction() */

void __thiscall
ZombossDarkLobFireballsActionHandler::onStartAction(ZombossDarkLobFireballsActionHandler *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  vector<int,std::allocator<int>> *this_01;
  int iVar1;
  bool bVar2;
  RtObject *this_02;
  ZombieZombossMech *this_03;
  ZombieHydraHeadAnimRig *pZVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar12 = 0;
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x28);
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x40);
  this_02 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_03 = Sexy::RtObject::Cast<ZombieZombossMech>(this_02);
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_03);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_03);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_78);
  std::string::string((string *)&local_68,"onFireLobStartEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtId *)&local_70,(string *)&local_68);
  ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireStart
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_68);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  fVar15 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x38));
  iVar14 = (int)fVar15;
  pickFireballSpots(this,(vector *)this_00,iVar14);
  fVar15 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x40));
  local_88 = (int)fVar15;
  local_84 = FUN_0471e184(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  piVar5 = eastl::min_alt<int>(&local_84,&local_88);
  iVar1 = *piVar5;
  std::vector<int,std::allocator<int>>::clear(this_01);
  if (0 < iVar14) {
    do {
      bVar2 = iVar12 < iVar1;
      iVar12 = iVar12 + 1;
      local_68 = (uint)bVar2;
      std::vector<int,std::allocator<int>>::push_back(this_01,(int *)&local_68);
    } while (iVar12 != iVar14);
  }
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_01);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_01);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar6,uVar7);
  lVar8 = FUN_0471e184(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  if ((lVar8 != 0) && (fVar15 = (float)Sexy::Rand(1.0), fVar15 < *(float *)(pZVar4 + 0x58))) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    EntityFinder::GetEntities((string *)&local_68,1);
    uVar13 = 0;
    do {
      uVar6 = CONCAT44(uStack_64,local_68);
      uVar9 = FUN_0471e174(uVar6,local_60);
      if (uVar9 <= uVar13) goto LAB_047249a0;
      FUN_0471e190(uVar6,uVar13);
      nop();
      Plant::GetType();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      bVar2 = std::operator==((string *)(lVar8 + 8),"magnetshroom");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      uVar13 = uVar13 + 1;
    } while (!bVar2);
    BoardEntity::CalcGridPosition();
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
    local_78 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar6,uVar7,&local_80);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    if (!bVar2) {
      puVar10 = (undefined8 *)FUN_0471e198(*(undefined8 *)(this + 0x28),0);
      *puVar10 = local_80;
      puVar11 = (undefined4 *)FUN_0471e1a0(*(undefined8 *)(this + 0x40),0);
      *puVar11 = 0;
    }
LAB_047249a0:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

