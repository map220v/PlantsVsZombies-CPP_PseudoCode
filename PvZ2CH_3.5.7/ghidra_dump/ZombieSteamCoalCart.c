// Class: ZombieSteamCoalCart


/* ZombieSteamCoalCart::registerForEvents() */

void __thiscall ZombieSteamCoalCart::registerForEvents(ZombieSteamCoalCart *this)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Zombie::onStreetLampChanged);
  uStack_30 = uStack_8;
  uStack_40 = uStack_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<PlantFramework*,int,Sexy::CBMemberTranslatorX<Zombie,void(Zombie::*)(PlantFramework*,int)>>
            ((MessageRouter *)puVar1,Message::NotifyWhenChanged,&uStack_40);
  return;
}


/* ZombieSteamCoalCart::~ZombieSteamCoalCart() */

void __thiscall ZombieSteamCoalCart::~ZombieSteamCoalCart(ZombieSteamCoalCart *this)

{
  *(undefined ***)this = &PTR_GetClass_068fe9a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSteamCoalCart_068ff3e8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSteamCoalCart::~ZombieSteamCoalCart() */

void __thiscall ZombieSteamCoalCart::~ZombieSteamCoalCart(ZombieSteamCoalCart *this)

{
  ~ZombieSteamCoalCart(this + -0x10);
  return;
}


/* ZombieSteamCoalCart::~ZombieSteamCoalCart() */

void __thiscall ZombieSteamCoalCart::~ZombieSteamCoalCart(ZombieSteamCoalCart *this)

{
  ~ZombieSteamCoalCart(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSteamCoalCart::~ZombieSteamCoalCart() */

void __thiscall ZombieSteamCoalCart::~ZombieSteamCoalCart(ZombieSteamCoalCart *this)

{
  ~ZombieSteamCoalCart(this + -0x10);
  return;
}


/* ZombieSteamCoalCart::CalcProgressMeterHitpoints() const */

int __thiscall ZombieSteamCoalCart::CalcProgressMeterHitpoints(ZombieSteamCoalCart *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_04809edc(*(undefined4 *)(this + 0x280));
  fVar2 = (float)Zombie::GetArmorHitpoints((Zombie *)this);
  return (int)(fVar2 + fVar1);
}


/* ZombieSteamCoalCart::ZombieSteamCoalCart() */

void __thiscall ZombieSteamCoalCart::ZombieSteamCoalCart(ZombieSteamCoalCart *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068fe9a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSteamCoalCart_068ff3e8;
  return;
}


/* ZombieSteamCoalCart::StaticNew() */

ZombieSteamCoalCart * ZombieSteamCoalCart::StaticNew(void)

{
  ZombieSteamCoalCart *this;
  
  this = ::operator_new(0x800);
  ZombieSteamCoalCart(this);
  return this;
}


/* ZombieSteamCoalCart::onArmorDropped(std::string) */

void __thiscall ZombieSteamCoalCart::onArmorDropped(ZombieSteamCoalCart *this,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"CoalCart");
  if (!bVar1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieSteamCoalCart::onScaredComplete(std::string const&) */

void __thiscall ZombieSteamCoalCart::onScaredComplete(ZombieSteamCoalCart *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"scared_ash"), bVar2)) {
    (**(code **)(*(long *)this + 0x260))(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalCart::onUnloadCartComplete(std::string const&) */

void __thiscall ZombieSteamCoalCart::onUnloadCartComplete(ZombieSteamCoalCart *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  Board *pBVar3;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"unload"), bVar2)) {
    (**(code **)(*(long *)this + 0x260))(this);
    BoardEntity::CalcGridPosition();
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"GridItemCoal");
    Board::AddGridItem(pBVar3,asStack_10,local_18,local_14,1);
    std::string::~string(asStack_10);
    nop();
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"GridItemCoalCart");
    Board::AddGridItem(pBVar3,asStack_10,local_18,local_14,1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalCart::onCartCrashComplete(std::string const&) */

void __thiscall ZombieSteamCoalCart::onCartCrashComplete(ZombieSteamCoalCart *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  Board *this_00;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"scared_crash"), bVar2)) {
    (**(code **)(*(long *)this + 0x260))(this);
    BoardEntity::CalcGridPosition();
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"GridItemCoal");
    Board::AddGridItem(this_00,asStack_10,local_18,local_14,1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalCart::onEnterState_Scared(SteamCoalCartZombieState) */

void ZombieSteamCoalCart::onEnterState_Scared(Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  RtWeakPtrBase *pRVar4;
  CoalCartDefault *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x178));
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x178));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    if (!bVar1) {
LAB_0480ae28:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Armor::GetArmorType();
    bVar1 = std::operator==(asStack_58,"CoalCart");
    std::string::~string(asStack_58);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      nop();
      cVar2 = CoalCartDefault::IsBurnt(this);
      if (cVar2 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onCartCrashComplete");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        ZombieAnimRig_CoalCart::CartCrash((ZombieAnimRig_CoalCart *)pZVar3,aRStack_50);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onScaredComplete");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        ZombieAnimRig_CoalCart::ScaredByCartBurnt((ZombieAnimRig_CoalCart *)pZVar3,aRStack_50);
      }
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      goto LAB_0480ae28;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalCart::StaticClassInit() */

void ZombieSteamCoalCart::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<SteamCoalCartZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SteamCoalCartZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieSteamCoalCart");
      (*pcVar4)(plVar1,asStack_150,FUN_0480bd00,0x800,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<SteamCoalCartZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<SteamCoalCartZombieState>::
  Delegate1<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)(SteamCoalCartZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<SteamCoalCartZombieState>::
  Delegate1<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)(SteamCoalCartZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCZS_COALCART_SCARED");
  StateDefinition<SteamCoalCartZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0480b8c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<SteamCoalCartZombieState>::
  Delegate1<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)(SteamCoalCartZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<SteamCoalCartZombieState>::
  Delegate1<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)(SteamCoalCartZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCZS_COALCART_UNLOAD");
  StateDefinition<SteamCoalCartZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0480b8c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSteamCoalCart::StaticGetClass() */

long * ZombieSteamCoalCart::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamCoalCart",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalCart::GetClass() const */

long * ZombieSteamCoalCart::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamCoalCart",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalCart::onZombieInitialize() */

void __thiscall ZombieSteamCoalCart::onZombieInitialize(ZombieSteamCoalCart *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar1 + 0x1f8))();
  return;
}

