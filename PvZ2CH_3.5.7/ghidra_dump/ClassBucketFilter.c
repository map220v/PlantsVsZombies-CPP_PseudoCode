// Class: ClassBucketFilter


/* ClassBucketFilter::size() */

void __thiscall ClassBucketFilter::size(ClassBucketFilter *this)

{
  FUN_042746cc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* ClassBucketFilter::ClassBucketFilter() */

void __thiscall ClassBucketFilter::ClassBucketFilter(ClassBucketFilter *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06830f60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* ClassBucketFilter::~ClassBucketFilter() */

void __thiscall ClassBucketFilter::~ClassBucketFilter(ClassBucketFilter *this)

{
  *(undefined ***)this = &PTR_GetClass_06830f60;
  std::vector<ClassRestrictionSet,std::allocator<ClassRestrictionSet>>::~vector
            ((vector<ClassRestrictionSet,std::allocator<ClassRestrictionSet>> *)(this + 8));
  nop();
  return;
}


/* ClassBucketFilter::~ClassBucketFilter() */

void __thiscall ClassBucketFilter::~ClassBucketFilter(ClassBucketFilter *this)

{
  ~ClassBucketFilter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClassBucketFilter::StaticClassInit() */

void ClassBucketFilter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ClassBucketFilter");
    (*pcVar2)(plVar1,asStack_10,FUN_042e533c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ClassBucketFilter::StaticGetClass() */

long * ClassBucketFilter::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ClassBucketFilter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ClassBucketFilter::GetClass() const */

long * ClassBucketFilter::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ClassBucketFilter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClassBucketFilter::GetBucket(BoardEntity const*) */

void __thiscall ClassBucketFilter::GetBucket(ClassBucketFilter *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  ClassRestrictionSet *this_00;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (ClassRestrictionSet *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ClassRestrictionSet::IsIncluded(this_00,(GameObject *)param_1);
    if (cVar1 != '\0') break;
    iVar3 = iVar3 + 1;
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* ClassBucketFilter::StaticNew() */

ClassBucketFilter * ClassBucketFilter::StaticNew(void)

{
  ClassBucketFilter *this;
  
  this = ::operator_new(0x20);
  ClassBucketFilter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClassBucketFilter::FilterToBuckets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&) */

void ClassBucketFilter::FilterToBuckets(vector *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  BoardEntity *pBVar4;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  RtWeakPtr *pRVar5;
  ulong uVar6;
  undefined8 *in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar7;
  undefined8 uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  lVar3 = FUN_042e4fe0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  std::
  vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
  ::reserve((vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
             *)in_x8,lVar3 + 1);
  while( true ) {
    lVar3 = FUN_042e4fe0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    bVar1 = lVar3 + 1U <= uVar7;
    uVar7 = uVar7 + 1;
    if (bVar1) break;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::
    vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
    ::push_back((vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
                 *)in_x8,(vector *)avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
  }
  uVar7 = 0;
  while( true ) {
    uVar8 = *in_x1;
    uVar6 = FUN_042e4ff4(uVar8,in_x1[1]);
    if (uVar6 <= uVar7) break;
    this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_042e5000(uVar8,uVar7);
    pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar2 = GetBucket((ClassBucketFilter *)param_1,pBVar4);
    this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              FUN_042e5008(*(undefined8 *)in_x8,(long)iVar2);
    pRVar5 = (RtWeakPtr *)FUN_042e5000(*in_x1,uVar7);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back(this_00,pRVar5);
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClassBucketFilter::FilterToList(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&, bool) */

void ClassBucketFilter::FilterToList(vector *param_1,bool param_2)

{
  bool bVar1;
  ulong uVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar3;
  RtWeakPtr *pRVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FilterToBuckets(param_1);
  if (in_w2 != '\0') {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar3);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar3);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
                (uVar5,uVar6);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar2 = FUN_042e4ff4(*(undefined8 *)(ulong)param_2,((undefined8 *)(ulong)param_2)[1]);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::reserve
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             in_x8,uVar2);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  if (bVar1) {
    do {
      pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar3);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar3);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        pRVar4 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)in_x8,pRVar4);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar1);
  }
  std::
  vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
             *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

