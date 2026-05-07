// Class: ZombossWalkActionDefinition


/* ZombossWalkActionDefinition::~ZombossWalkActionDefinition() */

void __thiscall
ZombossWalkActionDefinition::~ZombossWalkActionDefinition(ZombossWalkActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5df0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossWalkActionDefinition::~ZombossWalkActionDefinition() */

void __thiscall
ZombossWalkActionDefinition::~ZombossWalkActionDefinition(ZombossWalkActionDefinition *this)

{
  ~ZombossWalkActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* ZombossWalkActionDefinition::ZombossWalkActionDefinition() */

void __thiscall
ZombossWalkActionDefinition::ZombossWalkActionDefinition(ZombossWalkActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_068c5df0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossWalkActionDefinition::StaticClassInit() */

void ZombossWalkActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossWalkActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0473621c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossWalkActionDefinition::StaticGetClass() */

long * ZombossWalkActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossWalkActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossWalkActionDefinition::GetClass() const */

long * ZombossWalkActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossWalkActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossWalkActionDefinition::StaticNew() */

ZombossWalkActionDefinition * ZombossWalkActionDefinition::StaticNew(void)

{
  ZombossWalkActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombossWalkActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossWalkActionDefinition::PickWalkTarget(ZombieZombossMech*, Sexy::Point&,
   ZombossWalkDirection&) const */

void __thiscall
ZombossWalkActionDefinition::PickWalkTarget
          (ZombossWalkActionDefinition *this,ZombieZombossMech *param_1,Point *param_2,
          ZombossWalkDirection *param_3)

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
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  fVar10 = (float)Sexy::Rand(1.0);
  if (fVar10 < *(float *)(this + 0x38)) {
    ZombieZombossMech::GatherValidAdjacentPositions(SUB81(param_1,0),true);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_48);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(avStack_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::
    insert<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,void>
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,local_40,uVar3,uVar4);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
    cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
    if (cVar1 == '\0') goto LAB_0473e380;
  }
  ZombieZombossMech::GatherValidAdjacentPositions(SUB81(param_1,0),false);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_40,(__normal_iterator *)&local_48);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::
  insert<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,void>
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,local_40,uVar3,uVar4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
LAB_0473e380:
  fVar10 = (float)Sexy::Rand(1.0);
  if (fVar10 < *(float *)(this + 0x3c)) {
    uVar9 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_20);
    uVar3 = local_38;
    lVar6 = FUN_04735be0(local_38,local_30);
    if (lVar6 != 0) {
      do {
        pPVar7 = (Point *)FUN_04735bec(uVar3,uVar9);
        cVar1 = ZombieZombossMech::IsPositionOverAttackTarget(param_1,pPVar7);
        if (cVar1 != '\0') {
          pPVar7 = (Point *)FUN_04735bec(local_38,uVar9);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,pPVar7);
        }
        uVar3 = local_38;
        uVar9 = uVar9 + 1;
        uVar8 = FUN_04735be0(local_38,local_30);
      } while (uVar9 < uVar8);
    }
    cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
    if (cVar1 == '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(vector *)avStack_20);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  }
  uVar3 = 0;
  cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (cVar1 == '\0') {
    iVar2 = FUN_04735be0(local_38,local_30);
    iVar2 = Sexy::Rand(iVar2);
    puVar5 = (undefined8 *)FUN_04735bec(local_38,(long)iVar2);
    uVar3 = *puVar5;
    *(undefined8 *)param_2 = uVar3;
    iVar2 = (int)uVar3;
    if (iVar2 < local_50) {
      uVar3 = 1;
      *(undefined4 *)param_3 = 2;
    }
    else if (local_50 < iVar2) {
      uVar3 = 1;
      *(undefined4 *)param_3 = 3;
    }
    else if (*(int *)(param_2 + 4) < local_4c) {
      *(undefined4 *)param_3 = 0;
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      if (local_4c < *(int *)(param_2 + 4)) {
        *(undefined4 *)param_3 = 1;
      }
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0473e614 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossWalkActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossWalkActionDefinition::TryStartAction
          (ZombossWalkActionDefinition *this,RtWeakPtrBase *param_2,RtObject *param_3)

{
  bool bVar1;
  ZombieZombossMech *pZVar2;
  ZombieWithActions *pZVar3;
  ZombossWalkActionHandler *pZVar4;
  undefined4 local_1c;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18);
  local_1c = 2;
  if (param_3 == (RtObject *)0x0) {
    pZVar2 = (ZombieZombossMech *)0x0;
  }
  else {
    pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(param_3);
  }
  pZVar3 = (ZombieWithActions *)
           PickWalkTarget(this,pZVar2,aPStack_18,(ZombossWalkDirection *)&local_1c);
  bVar1 = ((ulong)pZVar3 & 0xff) != 0;
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pZVar4 = ZombieWithActions::QueueAction<ZombossWalkActionHandler>(pZVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombossWalkActionHandler::SetWalkTarget(pZVar4,aPStack_18,local_1c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

