// Class: ZombossFanPullActionDefinition


/* ZombossFanPullActionDefinition::~ZombossFanPullActionDefinition() */

void __thiscall
ZombossFanPullActionDefinition::~ZombossFanPullActionDefinition
          (ZombossFanPullActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06909330;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossFanPullActionDefinition::~ZombossFanPullActionDefinition() */

void __thiscall
ZombossFanPullActionDefinition::~ZombossFanPullActionDefinition
          (ZombossFanPullActionDefinition *this)

{
  ~ZombossFanPullActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionDefinition::StaticClassInit() */

void ZombossFanPullActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossFanPullActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0483fdcc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionDefinition::StaticGetClass() */

long * ZombossFanPullActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossFanPullActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFanPullActionDefinition::GetClass() const */

long * ZombossFanPullActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossFanPullActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFanPullActionDefinition::ZombossFanPullActionDefinition() */

void __thiscall
ZombossFanPullActionDefinition::ZombossFanPullActionDefinition(ZombossFanPullActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_06909330;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x3c) = 0x42c80000;
  *(undefined4 *)(this + 0x40) = 0x3dcccccd;
  return;
}


/* ZombossFanPullActionDefinition::StaticNew() */

ZombossFanPullActionDefinition * ZombossFanPullActionDefinition::StaticNew(void)

{
  ZombossFanPullActionDefinition *this;
  
  this = ::operator_new(0x50);
  ZombossFanPullActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionDefinition::FindTargetsInFrontOfFan(ZombieZombossMech_Beach*,
   BoardEntityTypeFlag, std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) const */

void __thiscall
ZombossFanPullActionDefinition::FindTargetsInFrontOfFan
          (undefined8 param_1_00,ZombieZombossMech_Beach *param_1,undefined4 param_3,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ZombieZombossMech_Beach *local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48[0] = param_1;
  ZombieZombossMech_Beach::CalcBellyFootprint(param_1);
  Sexy::Insets::Insets(aIStack_18,-2,local_24,local_28 + 3,local_1c);
  EntityFinder::GetEntitiesInGridSquares(param_4,param_3,aIStack_18);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_4);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_4);
  local_38 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,ZombieZombossMech_Beach*>
                       (uVar2,uVar3,local_48);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_4);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_30,(__normal_iterator *)&local_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_4,local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04846c2c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossFanPullActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossFanPullActionDefinition::TryStartAction
          (ZombossFanPullActionDefinition *this,RtWeakPtrBase *param_2)

{
  undefined8 extraout_x0;
  ZombieWithActions *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  nop();
  FindTargetsInFrontOfFan
            (this,extraout_x0,1,
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pZVar1 = (ZombieWithActions *)FUN_0483f250(local_20,local_18);
  if (pZVar1 != (ZombieWithActions *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
    ZombieWithActions::QueueAction<ZombossFanPullActionHandler>(pZVar1,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar1 != (ZombieWithActions *)0x0);
}

