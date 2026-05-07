// Class: ZombossBeachDiveActionDefinition


/* ZombossBeachDiveActionDefinition::~ZombossBeachDiveActionDefinition() */

void __thiscall
ZombossBeachDiveActionDefinition::~ZombossBeachDiveActionDefinition
          (ZombossBeachDiveActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_069091d0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossBeachDiveActionDefinition::~ZombossBeachDiveActionDefinition() */

void __thiscall
ZombossBeachDiveActionDefinition::~ZombossBeachDiveActionDefinition
          (ZombossBeachDiveActionDefinition *this)

{
  ~ZombossBeachDiveActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBeachDiveActionDefinition::StaticClassInit() */

void ZombossBeachDiveActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossBeachDiveActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0483f97c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBeachDiveActionDefinition::StaticGetClass() */

long * ZombossBeachDiveActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBeachDiveActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBeachDiveActionDefinition::GetClass() const */

long * ZombossBeachDiveActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBeachDiveActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBeachDiveActionDefinition::ZombossBeachDiveActionDefinition() */

void __thiscall
ZombossBeachDiveActionDefinition::ZombossBeachDiveActionDefinition
          (ZombossBeachDiveActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_069091d0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* ZombossBeachDiveActionDefinition::StaticNew() */

ZombossBeachDiveActionDefinition * ZombossBeachDiveActionDefinition::StaticNew(void)

{
  ZombossBeachDiveActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombossBeachDiveActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBeachDiveActionDefinition::PickEmergePosition(ZombieZombossMech*, Sexy::Point&) const */

void __thiscall
ZombossBeachDiveActionDefinition::PickEmergePosition
          (ZombossBeachDiveActionDefinition *this,ZombieZombossMech *param_1,Point *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  Point *pPVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  ZombieZombossMech::GatherValidAdjacentPositions(SUB81(param_1,0),true);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_20,(__normal_iterator *)&local_58);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_38);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::
  insert<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,void>
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,local_20[0],uVar3,uVar4);
  fVar10 = (float)Sexy::Rand(1.0);
  if (fVar10 < *(float *)(this + 0x3c)) {
    uVar9 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    uVar3 = local_50;
    lVar6 = FUN_0483f238(local_50,local_48);
    if (lVar6 != 0) {
      do {
        pPVar7 = (Point *)FUN_0483f244(uVar3,uVar9);
        cVar1 = ZombieZombossMech::IsPositionOverAttackTarget(param_1,pPVar7);
        if (cVar1 != '\0') {
          pPVar7 = (Point *)FUN_0483f244(local_50,uVar9);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20,pPVar7);
        }
        uVar3 = local_50;
        uVar9 = uVar9 + 1;
        uVar8 = FUN_0483f238(local_50,local_48);
      } while (uVar9 < uVar8);
    }
    cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
    if (cVar1 == '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,(vector *)local_20);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  }
  cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
  if (cVar1 == '\0') {
    iVar2 = FUN_0483f238(local_50,local_48);
    iVar2 = Sexy::Rand(iVar2);
    puVar5 = (undefined8 *)FUN_0483f244(local_50,(long)iVar2);
    *(undefined8 *)param_2 = *puVar5;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x048475c0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossBeachDiveActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossBeachDiveActionDefinition::TryStartAction
          (ZombossBeachDiveActionDefinition *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  ZombieZombossMech *extraout_x0;
  ZombieWithActions *pZVar2;
  ZombossBeachDiveActionHandler *this_00;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18);
  nop();
  pZVar2 = (ZombieWithActions *)PickEmergePosition(this,extraout_x0,aPStack_18);
  bVar1 = ((ulong)pZVar2 & 0xff) != 0;
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    this_00 = ZombieWithActions::QueueAction<ZombossBeachDiveActionHandler>(pZVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombossBeachDiveActionHandler::SetEmergeTarget(this_00,aPStack_18,*(float *)(this + 0x38));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

