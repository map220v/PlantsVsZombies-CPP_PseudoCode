// Class: RiftThemePlantSeed


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeed::StaticClassInit() */

void RiftThemePlantSeed::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemePlantSeed");
    (*pcVar2)(plVar1,asStack_10,FUN_036ff06c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePlantSeed::StaticGetClass() */

long * RiftThemePlantSeed::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemePlantSeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePlantSeed::GetClass() const */

long * RiftThemePlantSeed::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemePlantSeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePlantSeed::~RiftThemePlantSeed() */

void __thiscall RiftThemePlantSeed::~RiftThemePlantSeed(RiftThemePlantSeed *this)

{
  *(undefined ***)this = &PTR_GetClass_066886d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemePlantSeed::~RiftThemePlantSeed() */

void __thiscall RiftThemePlantSeed::~RiftThemePlantSeed(RiftThemePlantSeed *this)

{
  ~RiftThemePlantSeed(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemePlantSeed::RiftThemePlantSeed() */

void __thiscall RiftThemePlantSeed::RiftThemePlantSeed(RiftThemePlantSeed *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_066886d0;
  return;
}


/* RiftThemePlantSeed::StaticNew() */

RiftThemePlantSeed * RiftThemePlantSeed::StaticNew(void)

{
  RiftThemePlantSeed *this;
  
  this = ::operator_new(0x20);
  RiftThemePlantSeed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeed::handlePlantDied(Plant*) */

void __thiscall RiftThemePlantSeed::handlePlantDied(RiftThemePlantSeed *this,Plant *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Plant *pPVar5;
  RtObject *this_00;
  Board *pBVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  if ((((-1 < iVar1) && (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 <= iVar3)) &&
      (-1 < iVar2)) &&
     ((iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar2 <= iVar3 &&
      (lVar4 = FUN_0370bb60(iVar1,iVar2), lVar4 == 0)))) {
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar5 = (Plant *)Board::GetPlantAt(pBVar6,iVar1,iVar2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pPVar5 == param_1) {
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"rift_theme_plant_seed");
      this_00 = (RtObject *)Board::AddGridItem(pBVar6,asStack_10,iVar1,iVar2,1);
      Sexy::RtObject::Cast<RiftThemePlantSeed>(this_00);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeed::onPlantLost(Plant*) */

void __thiscall RiftThemePlantSeed::onPlantLost(RiftThemePlantSeed *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtObject *this_01;
  RiftThemePlantSeedProperties *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(gLawnApp + 0x9f0) == 0) || (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0')
     ) {
    EntityComponent_GroundEffect::GetEffect();
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    pRVar3 = Sexy::RtObject::Cast<RiftThemePlantSeedProperties>(this_01);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(pRVar3 + 0x20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 8);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (!bVar1) {
      std::string::string((string *)&local_10,"xiu");
      cVar2 = Plant::HasTag(param_1,(string *)&local_10);
      std::string::~string((string *)&local_10);
      nop();
      if (cVar2 == '\0') {
        handlePlantDied(this,param_1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePlantSeed::Activate() */

void __thiscall RiftThemePlantSeed::Activate(RiftThemePlantSeed *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<RiftThemePlantSeed,void(RiftThemePlantSeed::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_40);
  return;
}

