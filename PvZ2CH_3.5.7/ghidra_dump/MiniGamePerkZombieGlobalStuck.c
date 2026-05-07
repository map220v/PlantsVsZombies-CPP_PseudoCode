// Class: MiniGamePerkZombieGlobalStuck


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieGlobalStuck::StaticClassInit() */

void MiniGamePerkZombieGlobalStuck::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkZombieGlobalStuck");
    (*pcVar2)(plVar1,asStack_10,FUN_0389759c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkZombieGlobalStuck::StaticGetClass() */

long * MiniGamePerkZombieGlobalStuck::StaticGetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkZombieGlobalStuck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieGlobalStuck::GetClass() const */

long * MiniGamePerkZombieGlobalStuck::GetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkZombieGlobalStuck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieGlobalStuck::GetStuckDuration() */

undefined4 __thiscall
MiniGamePerkZombieGlobalStuck::GetStuckDuration(MiniGamePerkZombieGlobalStuck *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_03896018(this[0x20]);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(this + 0x28);
  }
  return uVar2;
}


/* MiniGamePerkZombieGlobalStuck::~MiniGamePerkZombieGlobalStuck() */

void __thiscall
MiniGamePerkZombieGlobalStuck::~MiniGamePerkZombieGlobalStuck(MiniGamePerkZombieGlobalStuck *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0050;
  MiniGamePerk::~MiniGamePerk((MiniGamePerk *)this);
  return;
}


/* MiniGamePerkZombieGlobalStuck::~MiniGamePerkZombieGlobalStuck() */

void __thiscall
MiniGamePerkZombieGlobalStuck::~MiniGamePerkZombieGlobalStuck(MiniGamePerkZombieGlobalStuck *this)

{
  ~MiniGamePerkZombieGlobalStuck(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkZombieGlobalStuck::MiniGamePerkZombieGlobalStuck() */

void __thiscall
MiniGamePerkZombieGlobalStuck::MiniGamePerkZombieGlobalStuck(MiniGamePerkZombieGlobalStuck *this)

{
  undefined4 uVar1;
  
  MiniGamePerk::MiniGamePerk((MiniGamePerk *)this);
  *(undefined ***)this = &PTR_GetClass_066b0050;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* MiniGamePerkZombieGlobalStuck::StaticNew() */

MiniGamePerkZombieGlobalStuck * MiniGamePerkZombieGlobalStuck::StaticNew(void)

{
  MiniGamePerkZombieGlobalStuck *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkZombieGlobalStuck(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieGlobalStuck::tryAffectZombies() */

void __thiscall MiniGamePerkZombieGlobalStuck::tryAffectZombies(MiniGamePerkZombieGlobalStuck *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  long extraout_x0;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar3);
    if ((((bVar1) &&
         (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), pZVar4 != (Zombie *)0x0)) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0')) &&
       (((cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)pZVar4 + 0x4d8))(pZVar4), cVar2 == '\0')) &&
        ((cVar2 = (**(code **)(*(long *)pZVar4 + 0x508))(pZVar4), cVar2 == '\0' &&
         (cVar2 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar2 != '\0')))))) {
      MiniGamePerk::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      cVar2 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(extraout_x0 + 0x60),pZVar4);
      if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
        uVar5 = 1;
        Zombie::ApplyCondition(*(Zombie **)(this + 0x28),0,pZVar4,0x18,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* MiniGamePerkZombieGlobalStuck::Update() */

void __thiscall MiniGamePerkZombieGlobalStuck::Update(MiniGamePerkZombieGlobalStuck *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if ((*(float *)(this + 0x2c) <= fVar2) && (cVar1 = tryAffectZombies(this), cVar1 != '\0')) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar2 + *(float *)(this + 0x24);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieGlobalStuck::Activate() */

void __thiscall MiniGamePerkZombieGlobalStuck::Activate(MiniGamePerkZombieGlobalStuck *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  long extraout_x0;
  undefined4 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::Activate((MiniGamePerk *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  puVar4 = (undefined4 *)
           FUN_0389638c(*(undefined8 *)(extraout_x0 + 0x48),(long)*(int *)(this + 0x10));
  uVar1 = puVar4[1];
  uVar2 = *puVar4;
  bVar3 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

