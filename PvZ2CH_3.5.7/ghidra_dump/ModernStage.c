// Class: ModernStage


/* ModernStage::ModernStage() */

void __thiscall ModernStage::ModernStage(ModernStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06762df0;
  Set8BytesTo0(this + 0xe8);
  return;
}


/* ModernStage::StaticNew() */

ModernStage * ModernStage::StaticNew(void)

{
  ModernStage *this;
  
  this = ::operator_new(0xf0);
  ModernStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernStage::StaticClassInit() */

void ModernStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"ModernStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03d02f90,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModernStage::StaticGetClass() */

long * ModernStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"ModernStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernStage::onZombieAddedToBoard(Zombie*) */

void __thiscall ModernStage::onZombieAddedToBoard(ModernStage *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator!=((string *)(this + 0xe8),"");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x290))(asStack_10,param_1);
    cVar2 = std::operator==((string *)(this + 0xe8),asStack_10);
    std::string::~string(asStack_10);
    if ((cVar2 != '\0') && (*(code **)(*(long *)param_1 + 0x280) != Zombie::StartJamming)) {
      (**(code **)(*(long *)param_1 + 0x280))(param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernStage::determineJam() */

void __thiscall ModernStage::determineJam(ModernStage *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::append((string *)(this + 0xe8),"",___stack_chk_guard);
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  local_20 = FUN_03d03220(*(undefined8 *)(lVar2 + 0x88));
  local_18 = FUN_03d03270(*(undefined8 *)(lVar2 + 0x90));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar1 = Sexy::RtObject::IsA<WaveManagerModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        nop();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_10,(RtWeakPtrBase *)(extraout_x0 + 0x40));
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
        if (bVar1) {
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          thunk_FUN_05475e00((string *)(this + 0xe8),lVar2 + 0x68);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModernStage::initializeModule() */

void __thiscall ModernStage::initializeModule(ModernStage *this)

{
  StageModule::initializeModule((StageModule *)this);
  this[0xe4] = (ModernStage)0x1;
  determineJam(this);
  return;
}


/* ModernStage::registerForEvents() */

void __thiscall ModernStage::registerForEvents(ModernStage *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  StageModule::registerForEvents((StageModule *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ModernStage,void(ModernStage::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  return;
}


/* ModernStage::renderBackground(Sexy::Graphics*) */

void __thiscall ModernStage::renderBackground(ModernStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  StageModule::renderBackground((StageModule *)this,param_1);
  if (this[0xe4] == (ModernStage)0x0) {
    return;
  }
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5950);
  iVar1 = FUN_03d02bd4(0xb6);
  iVar2 = FUN_03d02bd4(0x9d);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar1,iVar2);
  return;
}


/* ModernStage::~ModernStage() */

void __thiscall ModernStage::~ModernStage(ModernStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06762df0;
  std::string::~string((string *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* ModernStage::~ModernStage() */

void __thiscall ModernStage::~ModernStage(ModernStage *this)

{
  ~ModernStage(this);
  AK::FreeHook(this);
  return;
}

