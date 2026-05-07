// Class: AlarmSagittifoliaFence


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFence::StaticClassInit() */

void AlarmSagittifoliaFence::StaticClassInit(void)

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
    std::string::string(asStack_10,"AlarmSagittifoliaFence");
    (*pcVar2)(plVar1,asStack_10,FUN_03c1dc4c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaFence::StaticGetClass() */

long * AlarmSagittifoliaFence::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AlarmSagittifoliaFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AlarmSagittifoliaFence::GetClass() const */

long * AlarmSagittifoliaFence::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AlarmSagittifoliaFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFence::AlarmSagittifoliaFence() */

void __thiscall AlarmSagittifoliaFence::AlarmSagittifoliaFence(AlarmSagittifoliaFence *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06748c30;
  _ElectricCurrantLocation::_ElectricCurrantLocation((_ElectricCurrantLocation *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  *(undefined8 *)(this + 0x10) = local_10;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  *(undefined8 *)(this + 0x18) = local_10;
  std::
  vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
  ::clear((vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
           *)(this + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaFence::StaticNew() */

AlarmSagittifoliaFence * AlarmSagittifoliaFence::StaticNew(void)

{
  AlarmSagittifoliaFence *this;
  
  this = ::operator_new(0x38);
  AlarmSagittifoliaFence(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFence::DestroyFence() */

void __thiscall AlarmSagittifoliaFence::DestroyFence(AlarmSagittifoliaFence *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  long *plVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      (**(code **)(*plVar3 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::
  vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
  ::clear((vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
           *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaFence::~AlarmSagittifoliaFence() */

void __thiscall AlarmSagittifoliaFence::~AlarmSagittifoliaFence(AlarmSagittifoliaFence *this)

{
  *(undefined ***)this = &PTR_GetClass_06748c30;
  DestroyFence(this);
  std::
  vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
             *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* AlarmSagittifoliaFence::~AlarmSagittifoliaFence() */

void __thiscall AlarmSagittifoliaFence::~AlarmSagittifoliaFence(AlarmSagittifoliaFence *this)

{
  ~AlarmSagittifoliaFence(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFence::CreateFence(Sexy::Point, Sexy::Point) */

void __thiscall
AlarmSagittifoliaFence::CreateFence
          (AlarmSagittifoliaFence *this,TPoint<int> *param_2,undefined8 *param_3)

{
  GridSquareAlarmSagittifoliaFencePiece *pGVar1;
  Point aPStack_28 [8];
  Point aPStack_20 [4];
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_2;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x18) = *param_3;
  Sexy::Point::Point(aPStack_28,0,1);
  Sexy::TPoint<int>::operator+(param_2,(TPoint *)aPStack_28);
  Sexy::Point::Point(aPStack_20,(TPoint *)aRStack_10);
  if (local_1c != *(int *)((long)param_3 + 4)) {
    do {
      GameObject::Create<GridSquareAlarmSagittifoliaFencePiece>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pGVar1 = (GridSquareAlarmSagittifoliaFencePiece *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      Sexy::Point::Point((Point *)aRStack_10,(TPoint *)aPStack_20);
      GridSquareAlarmSagittifoliaFencePiece::StartEffect(pGVar1,aRStack_10);
      std::
      vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
      ::push_back((vector<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareAlarmSagittifoliaFencePiece>>>
                   *)(this + 0x20),(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::TPoint<int>::operator+=((TPoint<int> *)aPStack_20,(TPoint *)aPStack_28);
    } while (local_1c != *(int *)((long)param_3 + 4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

