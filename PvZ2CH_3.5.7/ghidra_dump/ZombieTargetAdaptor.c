// Class: ZombieTargetAdaptor


/* ZombieTargetAdaptor::setTargetPosition(Sexy::Point const&) */

void __thiscall ZombieTargetAdaptor::setTargetPosition(ZombieTargetAdaptor *this,Point *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetAdaptor::StaticClassInit() */

void ZombieTargetAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTargetAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_0360479c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetAdaptor::StaticGetClass() */

long * ZombieTargetAdaptor::StaticGetClass(void)

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
  uVar2 = CardTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetAdaptor::ZombieTargetAdaptor() */

void __thiscall ZombieTargetAdaptor::ZombieTargetAdaptor(ZombieTargetAdaptor *this)

{
  CardTargetAdaptor::CardTargetAdaptor((CardTargetAdaptor *)this);
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_06666b10;
  Sexy::Point::Point((Point *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  return;
}


/* ZombieTargetAdaptor::StaticNew() */

ZombieTargetAdaptor * ZombieTargetAdaptor::StaticNew(void)

{
  ZombieTargetAdaptor *this;
  
  this = ::operator_new(0x30);
  ZombieTargetAdaptor(this);
  return this;
}


/* ZombieTargetAdaptor::~ZombieTargetAdaptor() */

void __thiscall ZombieTargetAdaptor::~ZombieTargetAdaptor(ZombieTargetAdaptor *this)

{
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_06666b10;
  CardTargetAdaptor::~CardTargetAdaptor((CardTargetAdaptor *)this);
  return;
}


/* ZombieTargetAdaptor::~ZombieTargetAdaptor() */

void __thiscall ZombieTargetAdaptor::~ZombieTargetAdaptor(ZombieTargetAdaptor *this)

{
  ~ZombieTargetAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetAdaptor::GetTargetList() */

void ZombieTargetAdaptor::GetTargetList(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CardTargetAdaptor *in_x0;
  ZombieTargetProperty *pZVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  int iVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  Insets local_40 [16];
  RtWeakPtr<Sexy::SoundResource> local_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar8 = 0;
  Sexy::Insets::Insets(local_40,0,0,iVar3,iVar4);
  pZVar5 = CardTargetAdaptor::GetProps<ZombieTargetProperty>(in_x0);
  if (pZVar5[0x11] == (ZombieTargetProperty)0x0) {
    BoardTransforms::BoardSpaceToGrid
              ((BoardTransforms *)(ulong)*(uint *)(in_x0 + 8),*(int *)(in_x0 + 0xc),iVar8);
    Sexy::Insets::Insets((Insets *)local_30,local_48,local_44,1,1);
  }
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,local_40);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if (pZVar7 != (Zombie *)0x0) {
      pZVar5 = CardTargetAdaptor::GetProps<ZombieTargetProperty>(in_x0);
      cVar1 = RealObject::IsOnTeam(pZVar7,*(undefined4 *)(pZVar5 + 0x14));
      if (cVar1 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_30,(RtWeakPtrBase *)&local_48);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)in_x8,
                   (RtWeakPtr *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

