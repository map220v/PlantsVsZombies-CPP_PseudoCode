// Class: CarrotMissileSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissileSubsystem::StaticClassInit() */

void CarrotMissileSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarrotMissileSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0408e2b4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarrotMissileSubsystem::StaticGetClass() */

long * CarrotMissileSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"CarrotMissileSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarrotMissileSubsystem::GetClass() const */

long * CarrotMissileSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"CarrotMissileSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissileSubsystem::HasMissileOnSameSquare(Sexy::RtWeakPtr<CarrotMissile>) */

void __thiscall
CarrotMissileSubsystem::HasMissileOnSameSquare
          (CarrotMissileSubsystem *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  RtWeakPtr *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar3 = FUN_0408bf78(*(undefined4 *)(lVar6 + 200));
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar4 = FUN_0408bf7c(*(undefined4 *)(lVar6 + 0xcc));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0408cd94:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0')
       ) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar5 = FUN_0408bf78(*(undefined4 *)(lVar6 + 200));
      if (iVar5 == iVar3) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar5 = FUN_0408bf7c(*(undefined4 *)(lVar6 + 0xcc));
        if (iVar5 == iVar4) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar5 = FUN_0408bf74(*(undefined4 *)(lVar6 + 0xa4));
          if (iVar5 == 3) {
            bVar1 = true;
            goto LAB_0408cd94;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissileSubsystem::onMissileDropped(CarrotMissile*) */

void CarrotMissileSubsystem::onMissileDropped(CarrotMissile *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this;
  long *plVar3;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar2 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        (**(code **)(*plVar3 + 0x48))();
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarrotMissileSubsystem::CarrotMissileSubsystem() */

void __thiscall CarrotMissileSubsystem::CarrotMissileSubsystem(CarrotMissileSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067cd280;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissileDropped);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<CarrotMissile*,Sexy::CBMemberTranslatorX<CarrotMissileSubsystem,void(CarrotMissileSubsystem::*)(CarrotMissile*)>>
            ((MessageRouter *)puVar1,Message::MissileDropped,&local_40);
  return;
}


/* CarrotMissileSubsystem::StaticNew() */

CarrotMissileSubsystem * CarrotMissileSubsystem::StaticNew(void)

{
  CarrotMissileSubsystem *this;
  
  this = ::operator_new(0x28);
  CarrotMissileSubsystem(this);
  return this;
}


/* CarrotMissileSubsystem::~CarrotMissileSubsystem() */

void __thiscall CarrotMissileSubsystem::~CarrotMissileSubsystem(CarrotMissileSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067cd280;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<CarrotMissile>,std::allocator<Sexy::RtWeakPtr<CarrotMissile>>>::
  ~vector((vector<Sexy::RtWeakPtr<CarrotMissile>,std::allocator<Sexy::RtWeakPtr<CarrotMissile>>> *)
          (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* CarrotMissileSubsystem::~CarrotMissileSubsystem() */

void __thiscall CarrotMissileSubsystem::~CarrotMissileSubsystem(CarrotMissileSubsystem *this)

{
  ~CarrotMissileSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissileSubsystem::ActivateCarrotMissile(bool, float, int, int, float, bool) */

void __thiscall
CarrotMissileSubsystem::ActivateCarrotMissile
          (CarrotMissileSubsystem *this,bool param_1,float param_2,int param_3,int param_4,
          float param_5,bool param_6)

{
  CarrotMissile *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Create<CarrotMissile>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (CarrotMissile *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  CarrotMissile::Activate(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
  std::vector<Sexy::RtWeakPtr<CarrotMissile>,std::allocator<Sexy::RtWeakPtr<CarrotMissile>>>::
  push_back((vector<Sexy::RtWeakPtr<CarrotMissile>,std::allocator<Sexy::RtWeakPtr<CarrotMissile>>> *
            )(this + 0x10),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

