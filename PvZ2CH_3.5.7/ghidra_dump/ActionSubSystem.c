// Class: ActionSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::StaticClassInit() */

void ActionSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActionSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_049f6a6c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionSubSystem::StaticGetClass() */

long * ActionSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionSubSystem::GetClass() const */

long * ActionSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionSubSystem::ActionSubSystem() */

void __thiscall ActionSubSystem::ActionSubSystem(ActionSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0692d110;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ActionSubSystem::StaticNew() */

ActionSubSystem * ActionSubSystem::StaticNew(void)

{
  ActionSubSystem *this;
  
  this = ::operator_new(0x40);
  ActionSubSystem(this);
  return this;
}


/* ActionSubSystem::~ActionSubSystem() */

void __thiscall ActionSubSystem::~ActionSubSystem(ActionSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  *(undefined ***)this = &PTR_GetClass_0692d110;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  FUN_049f7c84(uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_049f7ce0(uVar1,uVar2);
  std::vector<ActionBase*,std::allocator<ActionBase*>>::clear
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_01);
  std::vector<ActionBase*,std::allocator<ActionBase*>>::clear
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_00);
  std::vector<ActionBase*,std::allocator<ActionBase*>>::~vector
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_00);
  std::vector<ActionBase*,std::allocator<ActionBase*>>::~vector
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_01);
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ActionSubSystem::~ActionSubSystem() */

void __thiscall ActionSubSystem::~ActionSubSystem(ActionSubSystem *this)

{
  ~ActionSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::Update() */

void __thiscall ActionSubSystem::Update(ActionSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Delegate1wRet<bool,SexyURL_const&> *this_02;
  ResourceInfo *pRVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  uVar13 = PVZ_Dt();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  std::vector<ActionBase*,std::allocator<ActionBase*>>::
  insert<__gnu_cxx::__normal_iterator<ActionBase**,std::vector<ActionBase*,std::allocator<ActionBase*>>>,void>
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_00,local_10,uVar5,uVar6);
  std::vector<ActionBase*,std::allocator<ActionBase*>>::clear
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_01);
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar4 = FUN_049f604c(uVar5,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar10 = (long)(int)uVar1 + -1;
    lVar2 = lVar10;
    lVar12 = (long)(int)uVar1;
    while( true ) {
      lVar11 = lVar2;
      puVar7 = (undefined8 *)FUN_049f6058(uVar5,lVar12);
      plVar9 = (long *)*puVar7;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x58))(uVar13,plVar9);
        cVar3 = (**(code **)(*plVar9 + 0x48))(plVar9);
        if (cVar3 != '\0') {
          if (*(code **)(*plVar9 + 0x50) != ActionBase::stop) {
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          iVar4 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(plVar9 + 1))
          ;
          if (iVar4 != 0) {
            this_02 = (Delegate1wRet<bool,SexyURL_const&> *)
                      RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::GetDelegate
                                ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(plVar9 + 1))
            ;
            pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(plVar9 + 10));
            Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_02,(SexyURL *)pRVar8);
          }
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_20,lVar12);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<ActionBase*,std::allocator<ActionBase*>>::erase
                    ((vector<ActionBase*,std::allocator<ActionBase*>> *)this_00,local_10);
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      if (lVar11 == lVar10 - (ulong)uVar1) break;
      uVar5 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar11 + -1;
      lVar12 = lVar11;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::AddActionMoveTo(Sexy::RtWeakPtr<RealObject>, float, Sexy::SexyVector3 const&,
   RtReflectionDelegate<Sexy::Delegate1<RealObject*> >) */

void __thiscall
ActionSubSystem::AddActionMoveTo
          (undefined8 param_1,ActionSubSystem *this,RtWeakPtrBase *param_3,undefined8 param_4,
          RtReflectionDelegate *param_5)

{
  ActionMoveTo *this_00;
  ActionMoveTo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x88);
  ActionMoveTo::ActionMoveTo(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3);
  ActionMoveTo::InitWithTarget(param_1,this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this_00 + 8),param_5);
  local_10 = this_00;
  std::vector<ActionBase*,std::allocator<ActionBase*>>::push_back
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)(this + 0x28),
             (ActionBase **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::AddActionBezierBy(Sexy::RtWeakPtr<RealObject>, float, _ccBezierConfig const&,
   RtReflectionDelegate<Sexy::Delegate1<RealObject*> >) */

void __thiscall
ActionSubSystem::AddActionBezierBy
          (ActionBezierBy *param_1,ActionSubSystem *this,RtWeakPtrBase *param_3,undefined8 param_4,
          RtReflectionDelegate *param_5)

{
  ActionBezierBy *this_00;
  ActionBezierBy *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x98);
  ActionBezierBy::ActionBezierBy(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3);
  ActionBezierBy::InitWithTarget
            (param_1,this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this_00 + 8),param_5);
  local_10 = this_00;
  std::vector<ActionBase*,std::allocator<ActionBase*>>::push_back
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)(this + 0x28),
             (ActionBase **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::AddActionBezierTo(Sexy::RtWeakPtr<RealObject>, float, _ccBezierConfig const&,
   RtReflectionDelegate<Sexy::Delegate1<RealObject*> >) */

void __thiscall
ActionSubSystem::AddActionBezierTo
          (ActionBezierTo *param_1,ActionSubSystem *this,RtWeakPtrBase *param_3,undefined8 param_4,
          RtReflectionDelegate *param_5)

{
  ActionBezierTo *this_00;
  ActionBezierTo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xb0);
  ActionBezierTo::ActionBezierTo(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3);
  ActionBezierTo::InitWithTarget
            (param_1,this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this_00 + 8),param_5);
  local_10 = this_00;
  std::vector<ActionBase*,std::allocator<ActionBase*>>::push_back
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)(this + 0x28),
             (ActionBase **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::AddActionEntityFade(Sexy::RtWeakPtr<RealObject>, float, bool,
   RtReflectionDelegate<Sexy::Delegate1<RealObject*> >) */

void __thiscall
ActionSubSystem::AddActionEntityFade
          (ActionEntityFade *param_1,ActionSubSystem *this,RtWeakPtrBase *param_3,undefined1 param_4
          ,RtReflectionDelegate *param_5)

{
  ActionEntityFade *this_00;
  ActionEntityFade *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x68);
  ActionEntityFade::ActionEntityFade(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3);
  ActionEntityFade::InitWithTarget
            (param_1,this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this_00 + 8),param_5);
  local_10 = this_00;
  std::vector<ActionBase*,std::allocator<ActionBase*>>::push_back
            ((vector<ActionBase*,std::allocator<ActionBase*>> *)(this + 0x28),
             (ActionBase **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionSubSystem::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall ActionSubSystem::Serialize(ActionSubSystem *this,RtSerializeContext *param_1)

{
  char cVar1;
  RtSerialRtonSync *pRVar2;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Serialize((GameObject *)this,param_1);
  pRVar2 = (RtSerialRtonSync *)FUN_049f5ff0(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"actions");
  cVar1 = Sexy::RtSerialRtonSync::SyncBeginObject(pRVar2,aRStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (cVar1 != '\0') {
    std::string::string((string *)aRStack_10,"m_Actions");
    SerializeArrayDataPoint<ActionBase>((string *)aRStack_10,(vector *)(this + 0x10),param_1);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::string((string *)aRStack_10,"m_newActions");
    SerializeArrayDataPoint<ActionBase>((string *)aRStack_10,(vector *)(this + 0x28),param_1);
    std::string::~string((string *)aRStack_10);
    nop();
    pRVar2 = (RtSerialRtonSync *)FUN_049f5ff0(*(undefined8 *)(param_1 + 8));
    Sexy::RtSerialRtonSync::SyncEndObject(pRVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

