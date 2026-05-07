// Class: ZombieZombossMech_Future


/* ZombieZombossMech_Future::EMPeachStun(float) */

void ZombieZombossMech_Future::EMPeachStun(float param_1)

{
  char cVar1;
  ZombieZombossMech *in_x0;
  
  cVar1 = ZombieZombossMech::canBeStunned(in_x0);
  if (cVar1 == '\0') {
    return;
  }
  ZombieZombossMech::DoStun(in_x0);
  return;
}


/* ZombieZombossMech_Future::~ZombieZombossMech_Future() */

void __thiscall ZombieZombossMech_Future::~ZombieZombossMech_Future(ZombieZombossMech_Future *this)

{
  *(undefined ***)this = &PTR_GetClass_068c0920;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Future_068c14e0;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Future::~ZombieZombossMech_Future() */

void __thiscall ZombieZombossMech_Future::~ZombieZombossMech_Future(ZombieZombossMech_Future *this)

{
  ~ZombieZombossMech_Future(this + -0x10);
  return;
}


/* ZombieZombossMech_Future::~ZombieZombossMech_Future() */

void __thiscall ZombieZombossMech_Future::~ZombieZombossMech_Future(ZombieZombossMech_Future *this)

{
  ~ZombieZombossMech_Future(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Future::~ZombieZombossMech_Future() */

void __thiscall ZombieZombossMech_Future::~ZombieZombossMech_Future(ZombieZombossMech_Future *this)

{
  ~ZombieZombossMech_Future(this + -0x10);
  return;
}


/* ZombieZombossMech_Future::ZombieZombossMech_Future() */

void __thiscall ZombieZombossMech_Future::ZombieZombossMech_Future(ZombieZombossMech_Future *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068c0920;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Future_068c14e0;
  return;
}


/* ZombieZombossMech_Future::StaticNew() */

ZombieZombossMech_Future * ZombieZombossMech_Future::StaticNew(void)

{
  ZombieZombossMech_Future *this;
  
  this = ::operator_new(0x960);
  ZombieZombossMech_Future(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Future::StaticClassInit() */

void ZombieZombossMech_Future::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Future");
    (*pcVar2)(plVar1,asStack_10,FUN_0471d9f4,0x960,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Future::StaticGetClass() */

long * ZombieZombossMech_Future::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Future",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Future::GetClass() const */

long * ZombieZombossMech_Future::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Future",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Future::OnRocketHitGround(ZombossRocket*) */

void __thiscall
ZombieZombossMech_Future::OnRocketHitGround(ZombieZombossMech_Future *this,ZombossRocket *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  PowerTileSubsystem *pPVar5;
  ZombieZombossMechProps *pZVar6;
  ZombieZombossMechProps *pZVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined4 *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,*puVar2,puVar2[1]);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if (pPVar4 != (Plant *)0x0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
      Plant::TakeSmashAttack
                (pPVar4,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    FUN_0471dad4((exception_ptr *)&local_30);
  }
  pPVar5 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)pPVar5 + 0x88))(pPVar5,puVar2);
  pZVar6 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  pZVar7 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  ZombossRocket::CreateExplosionEffect
            (param_1,(string *)(pZVar6 + 0x220),(string *)(pZVar7 + 0x238));
  std::string::string((string *)&local_28,"Play_Zomb_Future_Zomboss_Attack_Projectile_Impact");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_28,0.0);
  std::string::~string((string *)&local_28);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Future::onPlantPlantfooded(Plant*) */

void ZombieZombossMech_Future::onPlantPlantfooded(Plant *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  PowerTileSubsystem *pPVar3;
  long lVar4;
  Point aPStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  pPVar3 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar4 = PowerTileSubsystem::FindPowerTileAt(pPVar3,aPStack_40);
  if (lVar4 != 0) {
    uVar2 = GridItemPowerTile::GetTileClass();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pPVar3 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    PowerTileSubsystem::FindPowerTilesByClass(pPVar3,uVar2,avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      GridItem::GetGridLocation();
      ZombieZombossMech::CounterRocketTargeting((ZombieZombossMech *)param_1,aPStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::vector<GridItemPowerTile*,std::allocator<GridItemPowerTile*>>::~vector
              ((vector<GridItemPowerTile*,std::allocator<GridItemPowerTile*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Future::registerForEvents() */

void __thiscall ZombieZombossMech_Future::registerForEvents(ZombieZombossMech_Future *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ZombieZombossMech::registerForEvents((ZombieZombossMech *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlantfooded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombieZombossMech_Future,void(ZombieZombossMech_Future::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_40);
  return;
}

