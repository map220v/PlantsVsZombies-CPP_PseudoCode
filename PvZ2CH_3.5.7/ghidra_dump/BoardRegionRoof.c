// Class: BoardRegionRoof


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionRoof::StaticClassInit() */

void BoardRegionRoof::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardRegionRoof");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6fb78,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionRoof::StaticGetClass() */

long * BoardRegionRoof::StaticGetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionRoof",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionRoof::GetClass() const */

long * BoardRegionRoof::GetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionRoof",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionRoof::~BoardRegionRoof() */

void __thiscall BoardRegionRoof::~BoardRegionRoof(BoardRegionRoof *this)

{
  *(undefined ***)this = &PTR_GetClass_0676ee30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionRoof::~BoardRegionRoof() */

void __thiscall BoardRegionRoof::~BoardRegionRoof(BoardRegionRoof *this)

{
  ~BoardRegionRoof(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionRoof::BoardRegionRoof() */

void __thiscall BoardRegionRoof::BoardRegionRoof(BoardRegionRoof *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_0676ee30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,0x10);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"RoofStage");
  PVZDB::GetIdByAlias(aRStack_20,uVar2,0x14,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtId::~RtId(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionRoof::StaticNew() */

BoardRegionRoof * BoardRegionRoof::StaticNew(void)

{
  BoardRegionRoof *this;
  
  this = ::operator_new(0x30);
  BoardRegionRoof(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionRoof::onUpdate() */

void __thiscall BoardRegionRoof::onUpdate(BoardRegionRoof *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  Plant *this_00;
  long lVar4;
  long extraout_x0;
  PlantType *this_01;
  long lVar5;
  undefined8 local_60;
  undefined8 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  BoardRegion::GetContainedEntities((BoardRegion *)this,avStack_40,1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_40);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    nop();
    cVar2 = FUN_03d6f000(*(undefined4 *)(this_00 + 0x1d0));
    if ((cVar2 == '\0') && (cVar2 = Plant::IsInvincible(this_00,false), cVar2 == '\0')) {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      bVar3 = *(byte *)(lVar4 + 0x24d);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      Plant::GetType();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      bVar1 = std::operator==((string *)(lVar4 + 8),"imitater");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      if ((bVar1) && (nop(), extraout_x0 != 0)) {
        bVar3 = true;
        PlantImitater::GetImitatedPlant();
        this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        lVar4 = PlantType::GetProps(this_01);
        if (*(char *)(lVar4 + 0x24d) == '\0') {
          PlantImitater::GetImitatedPlant();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          bVar3 = std::operator==((string *)(lVar4 + 8),"flowerpot");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      }
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
      if (cVar2 != '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        cVar2 = StringRestrictionSet::IsIncluded
                          ((StringRestrictionSet *)(lVar4 + 0x158),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (cVar2 != '\0') {
          FUN_03d6fcdc(*(undefined4 *)(this_00 + 0x114),*(undefined4 *)(this_00 + 0x110));
          goto LAB_03d6fe6c;
        }
      }
      lVar4 = FUN_03d6fcdc(*(undefined4 *)(this_00 + 0x114),*(undefined4 *)(this_00 + 0x110));
      if (bVar3 < (lVar4 == 0)) {
        Plant::KillPlant(this_00,0,1,1);
      }
    }
LAB_03d6fe6c:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionRoof::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
BoardRegionRoof::GatherPlantingRestrictions
          (BoardRegionRoof *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  PlantNameMapperServerID *this_00;
  ResourceInfo *pRVar3;
  long lVar4;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (PlantType *)0x0) {
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetIdForType(this_00,param_2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x28));
    if (((pRVar3[0x24d] == (ResourceInfo)0x0) &&
        (bVar2 = std::operator==((string *)(param_2 + 8),"flowerpot"), !bVar2)) &&
       (lVar4 = FUN_03d6fcdc(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4)), lVar4 == 0)) {
      local_c = 0x68;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_c);
    }
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      cVar1 = StringRestrictionSet::IsIncluded
                        ((StringRestrictionSet *)(lVar4 + 0x130),(string *)(param_2 + 8));
      if (cVar1 != '\0') {
        local_c = 0x6b;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_c);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

