// Class: Effect_DinoRun


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::ClearSpecifiedDinos() */

void Effect_DinoRun::ClearSpecifiedDinos(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int extraout_w1;
  string *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtrBase aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  Iterator aIStack_50 [32];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"dinoraptor");
  std::string::string(asStack_28,"dinostego");
  this = (string *)&local_8;
  std::string::string(asStack_20,"dinoptero");
  std::string::string(asStack_18,"dinoankylo");
  std::string::string(asStack_10,"dinotyranno");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_68,asStack_30,5,aIStack_50);
  do {
    this = this + -8;
    std::string::~string(this);
  } while (this != asStack_30);
  nop();
  nop();
  nop();
  nop();
  nop();
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_50,uVar3,0x2a);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_88,(RtWeakPtrBase *)&local_70);
    Sexy::RtId::~RtId((RtId *)&local_70);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      TwinsAssistPerson::GetPopAnimRig();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
      if (cVar2 != '\0') {
        uVar3 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_68);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_68);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        local_78 = std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar3,uVar4,lVar5 + 8);
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_68);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70)
        ;
        if (bVar1) {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
          (**(code **)(*plVar6 + 0x48))();
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::StaticClassInit() */

void Effect_DinoRun::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_DinoRun");
    (*pcVar2)(plVar1,asStack_10,FUN_03cde174,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_DinoRun::StaticGetClass() */

long * Effect_DinoRun::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_DinoRun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoRun::GetClass() const */

long * Effect_DinoRun::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_DinoRun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoRun::SetKeyRow(int) */

void __thiscall Effect_DinoRun::SetKeyRow(Effect_DinoRun *this,int param_1)

{
  *(int *)(this + 0xbc) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::Effect_DinoRun() */

void __thiscall Effect_DinoRun::Effect_DinoRun(Effect_DinoRun *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06760630;
  Set8BytesTo0(this + 200);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb0) = 6;
  uVar1 = _FUN_03cddf04;
  this[0xc4] = (Effect_DinoRun)0x0;
  *(undefined4 *)(this + 0xa0) = uVar2;
  *(undefined4 *)(this + 0xb8) = uVar1;
  return;
}


/* Effect_DinoRun::StaticNew() */

Effect_DinoRun * Effect_DinoRun::StaticNew(void)

{
  Effect_DinoRun *this;
  
  this = ::operator_new(0x130);
  Effect_DinoRun(this);
  return this;
}


/* Effect_DinoRun::~Effect_DinoRun() */

void __thiscall Effect_DinoRun::~Effect_DinoRun(Effect_DinoRun *this)

{
  *(undefined ***)this = &PTR_GetClass_06760630;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x118)
            );
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x100));
  std::vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>>::~vector
            ((vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>> *)
             (this + 0xe8));
  std::vector<EntityWeight,std::allocator<EntityWeight>>::~vector
            ((vector<EntityWeight,std::allocator<EntityWeight>> *)(this + 0xd0));
  std::string::~string((string *)(this + 200));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_DinoRun::~Effect_DinoRun() */

void __thiscall Effect_DinoRun::~Effect_DinoRun(Effect_DinoRun *this)

{
  ~Effect_DinoRun(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::DinoSearchTargetPlants(Sexy::RtWeakPtr<DinosaurRunner>) */

void __thiscall Effect_DinoRun::DinoSearchTargetPlants(Effect_DinoRun *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  DinosaurRunner *pDVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtMixedPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pDVar3 = (DinosaurRunner *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = DinosaurRunner::CanAttackPlants(pDVar3);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      DinosaurRunner::FindTargetPlant();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar1 != '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x118);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                             (uVar4,uVar5,aRStack_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar2) {
          std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                     this_00,(RtWeakPtr *)aRStack_20);
          pDVar3 = (DinosaurRunner *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          DinosaurRunner::NumPlantsKilledInc(pDVar3);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::DinoSearchTargetZombies(Sexy::RtWeakPtr<DinosaurRunner>) */

void __thiscall
Effect_DinoRun::DinoSearchTargetZombies(Effect_DinoRun *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  DinosaurRunner *pDVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtMixedPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pDVar3 = (DinosaurRunner *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = DinosaurRunner::CanAttackZombies(pDVar3);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      DinosaurRunner::FindTargetZombie();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar1 != '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x100);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                             (uVar4,uVar5,aRStack_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar2) {
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     this_00,(RtWeakPtr *)aRStack_20);
          pDVar3 = (DinosaurRunner *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          DinosaurRunner::NumZombiesKilledInc(pDVar3);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::applyDamage() */

void __thiscall Effect_DinoRun::applyDamage(Effect_DinoRun *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *this_01;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  DinosaurRunner *this_02;
  RtWeakPtr *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  RtObject *pRVar6;
  Plant *pPVar7;
  Zombie *pZVar8;
  code *pcVar9;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
            (this + 0x100);
  this_01 = (vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear(this_01);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe8));
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0xe8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      nop();
      if (this_02 != (DinosaurRunner *)0x0) {
        cVar2 = DinosaurRunner::CanAttackPlants(this_02);
        if (cVar2 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_70);
          DinoSearchTargetPlants(this,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        }
        cVar2 = DinosaurRunner::CanAttackZombies(this_02);
        if (cVar2 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_70);
          DinoSearchTargetZombies(this,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_01);
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_01);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
    if (bVar1) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
      if (pPVar7 != (Plant *)0x0) {
        pcVar9 = *(code **)(*(long *)pPVar7 + 0x120);
        Sexy::Point::Point((Point *)aRStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(RtWeakPtr<Sexy::SoundResource> *)local_68,4,
                   0,(Point *)aRStack_78,0);
        (*pcVar9)(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
    if (bVar1) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      pZVar8 = Sexy::RtObject::Cast<Zombie>(pRVar6);
      if (pZVar8 != (Zombie *)0x0) {
        pcVar9 = *(code **)(*(long *)pZVar8 + 0x120);
        Sexy::Point::Point((Point *)aRStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(RtWeakPtr<Sexy::SoundResource> *)local_68,4,
                   0,(Point *)aRStack_78,0);
        (*pcVar9)(pZVar8,(RtWeakPtr<Sexy::SoundResource> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::pickRandRow() */

void __thiscall Effect_DinoRun::pickRandRow(Effect_DinoRun *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  iVar3 = *(int *)(this + 0xbc);
  if (iVar3 < 0) {
    *(undefined4 *)(this + 0xbc) = 0;
    iVar3 = 2;
    iVar2 = 0;
  }
  else {
    if (iVar3 != 0) {
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar3 < iVar2 + -1) {
        iVar2 = *(int *)(this + 0xbc) + -1;
        iVar3 = *(int *)(this + 0xbc) + 1;
        goto LAB_03cdf0fc;
      }
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      iVar2 = iVar2 + -3;
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      iVar3 = iVar3 + -1;
      goto LAB_03cdf0fc;
    }
    iVar3 = 2;
    iVar2 = 0;
  }
  do {
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar2,0x19);
    iVar2 = iVar2 + 1;
LAB_03cdf0fc:
  } while (iVar2 <= iVar3);
  uVar1 = ProbabilitySet<int>::PickItemIgnoring
                    ((ProbabilitySet<int> *)aPStack_38,(int *)(this + 0xc0));
  *(undefined4 *)(this + 0xc0) = uVar1;
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::SpawnDino(std::string const&) */

void Effect_DinoRun::SpawnDino(string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  string *psVar4;
  CreatureType *this;
  undefined8 uVar5;
  undefined8 uVar6;
  Board *pBVar7;
  undefined1 auStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_58), cVar2 != '\0')) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this = (CreatureType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    CreatureType::AddInGameResourceRequirements(this,(set *)amStack_38);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                      ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                       amStack_38);
    uVar6 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::
    vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar5,uVar6,auStack_60);
    Board::LoadResourceGroupsForGameplay(pBVar7,(vector *)avStack_50);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    uVar3 = pickRandRow((Effect_DinoRun *)param_1);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_50,(RtWeakPtrBase *)aRStack_58);
    uVar5 = Board::AddCreatureInRow(pBVar7,avStack_50,uVar3,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_50);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  else {
    uVar5 = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::onInitialized() */

void __thiscall Effect_DinoRun::onInitialized(Effect_DinoRun *this)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  EntityWeight aEStack_28 [16];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"dinostegorunner");
  std::string::string(asStack_40,"dinoraptorrunner");
  std::string::string(asStack_38,"dinoankylorunner");
  uVar6 = 0;
  std::string::string(asStack_30,"dinotyrannorunner");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_78,asStack_48,4,aEStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  nop();
  nop();
  nop();
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_60,&DAT_05752590,4,aEStack_28);
  uVar1 = FUN_03cdd8e4(local_78,local_70);
  if (uVar1 != 0) {
    do {
      EntityWeight::EntityWeight(aEStack_28);
      uVar2 = FUN_03cdd8f0(local_78,uVar6);
      thunk_FUN_05475e00(auStack_18,uVar2);
      uVar2 = local_60;
      uVar3 = FUN_03cdd8cc(local_60,local_58);
      if (uVar6 < uVar3) {
        puVar4 = (undefined4 *)FUN_03cdd8f8(uVar2,uVar6);
        local_10 = *puVar4;
      }
      else {
        puVar4 = (undefined4 *)FUN_03cdd8f8(uVar2,0);
        local_10 = *puVar4;
      }
      uVar6 = uVar6 + 1;
      std::vector<EntityWeight,std::allocator<EntityWeight>>::push_back
                ((vector<EntityWeight,std::allocator<EntityWeight>> *)(this + 0xd0),aEStack_28);
      EntityWeight::~EntityWeight(aEStack_28);
    } while (uVar6 != uVar1);
  }
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xac) = fVar7 + 10.0;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xa0) = fVar7 + 0.5;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xa4) = fVar7 + 0.75;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xa8) = fVar7 + 4.25;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_Zomb_Dino_Extra_Tyrannosaurus_Run");
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_60);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::pickDinoTypeName() */

void Effect_DinoRun::pickDinoTypeName(void)

{
  bool bVar1;
  long in_x0;
  EntityWeight *pEVar2;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  EntityWeight aEStack_58 [16];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0xd0));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0xd0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pEVar2 = (EntityWeight *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70)
    ;
    EntityWeight::EntityWeight(aEStack_58,pEVar2);
    FUN_05475d88(asStack_60,auStack_48);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)aPStack_38,asStack_60,local_40);
    std::string::~string(asStack_60);
    EntityWeight::~EntityWeight(aEStack_58);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
  }
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_38);
  thunk_FUN_05475e00(in_x0 + 200,aEStack_58);
  FUN_05475d88();
  std::string::~string((string *)aEStack_58);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun::onUpdate() */

void __thiscall Effect_DinoRun::onUpdate(Effect_DinoRun *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  DinosaurRunner *this_00;
  char *pcVar6;
  string *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  EffectObjectType *this_01;
  Board *pBVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50 [3];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xa0) <= fVar11) {
    if (*(int *)(this + 0xb4) < 6) {
      pickDinoTypeName();
      lVar4 = SpawnDino((string *)this);
      if (lVar4 != 0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)local_50);
        std::vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>> *)
                   (this + 0xe8),(RtWeakPtr *)local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      }
      *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 1;
      fVar11 = (float)PVZ_T();
      *(float *)(this + 0xa0) = fVar11 + *(float *)(this + 0xb8);
      std::string::~string(asStack_58);
    }
    else {
      fVar11 = (float)PVZ_T();
      if (*(float *)(this + 0xa4) <= fVar11) {
        fVar11 = (float)PVZ_T();
        *(float *)(this + 0xa4) = fVar11 + 0.25;
        applyDamage(this);
      }
    }
  }
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xa8) <= fVar11) {
    uVar12 = PVZ_EOT();
    *(undefined4 *)(this + 0xa8) = uVar12;
    bVar3 = false;
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0xe8));
    while( true ) {
      local_38[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0xe8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_50,(__normal_iterator *)local_38);
      if (!bVar2) break;
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_38,pRVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_38);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        nop();
        if (this_00 != (DinosaurRunner *)0x0) {
          cVar1 = DinosaurRunner::CanBeScaredAway(this_00);
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
            this[0xc4] = (Effect_DinoRun)0x1;
            goto LAB_03cdf7d0;
          }
          bVar3 = true;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
    }
    if (bVar3) {
      this[0xc4] = (Effect_DinoRun)0x0;
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)local_38);
      psVar7 = (string *)
               Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
      std::string::string((string *)local_50,"effect_dinoshadow");
      ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(psVar7);
      std::string::~string((string *)local_50);
      nop();
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_58);
      if (bVar3) {
        this_01 = (EffectObjectType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
        EffectObjectType::AddResourceRequirements(this_01,(set *)local_38);
      }
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      uVar8 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                        ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                         local_38);
      uVar9 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)local_38);
      std::vector<std::string,std::allocator<std::string>>::
      vector<std::_Rb_tree_const_iterator<std::string>,void>
                ((exception_ptr *)local_50,uVar8,uVar9,auStack_60);
      Board::LoadResourceGroupsForGameplay(pBVar10,(vector *)local_50);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)local_50);
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)local_50,"effect_dinoshadow");
      lVar4 = Board::AddEffectObject(pBVar10,(string *)local_50,0,0);
      std::string::~string((string *)local_50);
      nop();
      uVar12 = Board::MakeRenderOrder(0x64d48,5,10);
      FUN_03cdd8c0(lVar4 + 0x1c,uVar12);
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Stop_Zomb_Dino_Extra_Tyrannosaurus_Run");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)local_38);
    }
    else {
      this[0xc4] = (Effect_DinoRun)0x1;
    }
  }
LAB_03cdf7d0:
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xac) <= fVar11) {
    uVar12 = PVZ_EOT();
    *(undefined4 *)(this + 0xac) = uVar12;
    if (this[0xc4] != (Effect_DinoRun)0x0) {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Stop_Zomb_Dino_Extra_Tyrannosaurus_Run");
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

