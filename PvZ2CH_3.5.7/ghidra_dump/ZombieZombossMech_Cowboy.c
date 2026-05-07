// Class: ZombieZombossMech_Cowboy


/* ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy() */

void __thiscall ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy(ZombieZombossMech_Cowboy *this)

{
  *(undefined ***)this = &PTR_GetClass_068be240;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Cowboy_068bee00;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy() */

void __thiscall ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy(ZombieZombossMech_Cowboy *this)

{
  ~ZombieZombossMech_Cowboy(this + -0x10);
  return;
}


/* ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy() */

void __thiscall ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy(ZombieZombossMech_Cowboy *this)

{
  ~ZombieZombossMech_Cowboy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy() */

void __thiscall ZombieZombossMech_Cowboy::~ZombieZombossMech_Cowboy(ZombieZombossMech_Cowboy *this)

{
  ~ZombieZombossMech_Cowboy(this + -0x10);
  return;
}


/* ZombieZombossMech_Cowboy::ZombieZombossMech_Cowboy() */

void __thiscall ZombieZombossMech_Cowboy::ZombieZombossMech_Cowboy(ZombieZombossMech_Cowboy *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068be240;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Cowboy_068bee00;
  return;
}


/* ZombieZombossMech_Cowboy::StaticNew() */

ZombieZombossMech_Cowboy * ZombieZombossMech_Cowboy::StaticNew(void)

{
  ZombieZombossMech_Cowboy *this;
  
  this = ::operator_new(0x960);
  ZombieZombossMech_Cowboy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Cowboy::StaticClassInit() */

void ZombieZombossMech_Cowboy::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Cowboy");
    (*pcVar2)(plVar1,asStack_10,FUN_04719ca4,0x960,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Cowboy::StaticGetClass() */

long * ZombieZombossMech_Cowboy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMech_Cowboy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Cowboy::GetClass() const */

long * ZombieZombossMech_Cowboy::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMech_Cowboy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Cowboy::OnRocketHitGround(ZombossRocket*) */

void __thiscall
ZombieZombossMech_Cowboy::OnRocketHitGround(ZombieZombossMech_Cowboy *this,ZombossRocket *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  ZombieZombossMechProps *pZVar5;
  ZombieZombossMechProps *pZVar6;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined4 *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,*puVar2,puVar2[1]);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if (pPVar4 != (Plant *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
      Plant::TakeSmashAttack(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    FUN_04719d84((exception_ptr *)&local_38);
  }
  pZVar5 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  pZVar6 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  ZombossRocket::CreateExplosionEffect
            (param_1,(string *)(pZVar5 + 0x220),(string *)(pZVar6 + 0x238));
  std::string::string((string *)&local_28,"Play_Zomb_WildWest_Zomboss_Attack_Projectile_Impact");
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

