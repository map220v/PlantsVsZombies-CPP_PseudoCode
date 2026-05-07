// Class: ElectricCurrantFence


/* ElectricCurrantFence::HasNode(Sexy::Point) */

void __thiscall ElectricCurrantFence::HasNode(ElectricCurrantFence *this,TPoint<int> *param_2)

{
  char cVar1;
  
  cVar1 = Sexy::TPoint<int>::operator==(param_2,(TPoint *)(this + 0x10));
  if (cVar1 == '\0') {
    Sexy::TPoint<int>::operator==(param_2,(TPoint *)(this + 0x18));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFence::StaticClassInit() */

void ElectricCurrantFence::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricCurrantFence");
    (*pcVar2)(plVar1,asStack_10,FUN_0419bfac,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricCurrantFence::StaticGetClass() */

long * ElectricCurrantFence::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricCurrantFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricCurrantFence::GetClass() const */

long * ElectricCurrantFence::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricCurrantFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFence::ApplyPlantfood() */

void __thiscall ElectricCurrantFence::ApplyPlantfood(ElectricCurrantFence *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  GridSquareElectricCurrantFencePiece *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this[0x38] = (ElectricCurrantFence)0x1;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x20));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x20));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar2);
    this_00 = (GridSquareElectricCurrantFencePiece *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    GridSquareElectricCurrantFencePiece::ApplyPlantfood(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    FUN_04199d64((exception_ptr *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFence::ElectricCurrantFence() */

void __thiscall ElectricCurrantFence::ElectricCurrantFence(ElectricCurrantFence *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_067fd330;
  _ElectricCurrantLocation::_ElectricCurrantLocation((_ElectricCurrantLocation *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  *(undefined8 *)(this + 0x10) = local_10;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  *(undefined8 *)(this + 0x18) = local_10;
  std::
  vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
  ::clear((vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
           *)(this + 0x20));
  this[0x38] = (ElectricCurrantFence)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x39] = (ElectricCurrantFence)0x0;
  this[0x3a] = (ElectricCurrantFence)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricCurrantFence::StaticNew() */

ElectricCurrantFence * ElectricCurrantFence::StaticNew(void)

{
  ElectricCurrantFence *this;
  
  this = ::operator_new(0x40);
  ElectricCurrantFence(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFence::DestroyFence() */

void __thiscall ElectricCurrantFence::DestroyFence(ElectricCurrantFence *this)

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
  vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
  ::clear((vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
           *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricCurrantFence::~ElectricCurrantFence() */

void __thiscall ElectricCurrantFence::~ElectricCurrantFence(ElectricCurrantFence *this)

{
  *(undefined ***)this = &PTR_GetClass_067fd330;
  DestroyFence(this);
  std::
  vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
             *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* ElectricCurrantFence::~ElectricCurrantFence() */

void __thiscall ElectricCurrantFence::~ElectricCurrantFence(ElectricCurrantFence *this)

{
  ~ElectricCurrantFence(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFence::CreateFence(Sexy::Point, Sexy::Point, bool, bool) */

void __thiscall
ElectricCurrantFence::CreateFence
          (ElectricCurrantFence *this,TPoint<int> *param_2,int *param_3,ElectricCurrantFence param_4
          ,ElectricCurrantFence param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  GridSquareElectricCurrantFencePiece *pGVar5;
  Point aPStack_28 [8];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_3;
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)param_2;
  iVar2 = *param_3;
  this[0x39] = param_5;
  this[0x38] = param_4;
  this[0x3a] = (ElectricCurrantFence)(iVar1 == iVar2);
  cVar3 = FUN_041987a4();
  Sexy::Point::Point(aPStack_28,(uint)(cVar3 == '\0'),(uint)(cVar3 != '\0'));
  Sexy::TPoint<int>::operator+(param_2,(TPoint *)aPStack_28);
  Sexy::Point::Point((Point *)&local_20,(TPoint *)aRStack_10);
  while( true ) {
    if ((local_20 == *param_3) && (local_1c == param_3[1])) break;
    GameObject::Create<GridSquareElectricCurrantFencePiece>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pGVar5 = (GridSquareElectricCurrantFencePiece *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::Point::Point((Point *)aRStack_10,(TPoint *)&local_20);
    uVar4 = FUN_041987a4(this[0x3a]);
    GridSquareElectricCurrantFencePiece::StartEffect(pGVar5,aRStack_10,param_4,param_5,uVar4);
    std::
    vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
    ::push_back((vector<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>,std::allocator<Sexy::RtWeakPtr<GridSquareElectricCurrantFencePiece>>>
                 *)(this + 0x20),(RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aPStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

