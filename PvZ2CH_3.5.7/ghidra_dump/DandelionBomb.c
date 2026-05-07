// Class: DandelionBomb


/* DandelionBomb::getAnimRig() */

RtWeakPtr<Sexy::SoundResource> * DandelionBomb::getAnimRig(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xb0));
  return in_x8;
}


/* DandelionBomb::SetPlantPos(Sexy::SexyVector3 const&) */

void __thiscall DandelionBomb::SetPlantPos(DandelionBomb *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xe0),param_1);
  return;
}


/* DandelionBomb::SetTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall DandelionBomb::SetTarget(DandelionBomb *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),param_2);
  return;
}


/* DandelionBomb::onDieFinished(std::string const&) */

void DandelionBomb::onDieFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* DandelionBomb::CalcRenderOrder() const */

void DandelionBomb::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x64960,4,0);
  return;
}


/* non-virtual thunk to DandelionBomb::CalcRenderOrder() const */

void __thiscall DandelionBomb::CalcRenderOrder(DandelionBomb *this)

{
  CalcRenderOrder();
  return;
}


/* DandelionBomb::onPlaceOnBoard() */

void __thiscall DandelionBomb::onPlaceOnBoard(DandelionBomb *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = pfVar1[2];
    fVar2 = (float)Board::calculateRoofOffsetZ(*pfVar1);
    *(float *)(this + 0x148) = fVar3 - fVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::StaticClassInit() */

void DandelionBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"DandelionBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_041e14ac,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DandelionBomb::StaticGetClass() */

long * DandelionBomb::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"DandelionBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DandelionBomb::GetClass() const */

long * DandelionBomb::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"DandelionBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DandelionBomb::onDestroy() */

void __thiscall DandelionBomb::onDestroy(DandelionBomb *this)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  (**(code **)(*plVar1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::onDraw(Sexy::Graphics*) */

void __thiscall DandelionBomb::onDraw(DandelionBomb *this,Graphics *param_1)

{
  PopAnimRig *this_00;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  uVar1 = FUN_041e0dc0(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  fVar2 = (float)FUN_041e0efc(uVar1);
  uVar1 = *(undefined4 *)(this + 0x1c);
  FUN_041e0dc0(*(undefined4 *)(this + 0x18),uVar1,*(undefined4 *)(this + 0x20));
  fVar3 = (float)FUN_041e0efc(uVar1);
  Sexy::Graphics::Translate(param_1,(int)fVar2,(int)fVar3);
  fVar2 = (float)FUN_041e0efc(0x42be0000);
  fVar3 = (float)FUN_041e0efc(0x43020000);
  Sexy::Graphics::Translate(param_1,(int)-fVar2,(int)-fVar3);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  PopAnimRig::Draw(this_00,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DandelionBomb::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall DandelionBomb::SetOwner(DandelionBomb *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long extraout_x0;
  long extraout_x0_00;
  long extraout_x0_01;
  long extraout_x0_02;
  Plant *this_01;
  long extraout_x0_03;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xb8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    uVar2 = FUN_041e0d50(*(undefined4 *)(lVar3 + 0x24));
    *(undefined4 *)(this + 0x24) = uVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    nop();
    *(undefined4 *)(this + 0x108) = *(undefined4 *)(extraout_x0 + 0x110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    nop();
    *(undefined4 *)(this + 0x10c) = *(undefined4 *)(extraout_x0_00 + 0x114);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar4 = (float)FUN_041e0d54(*(undefined4 *)(extraout_x0_01 + 0xf4),
                                *(undefined4 *)(extraout_x0_01 + 0x100),
                                *(undefined4 *)(extraout_x0_01 + 0x104),
                                *(undefined4 *)(extraout_x0_01 + 0x3b8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar5 = (float)FUN_041e0d64(*(undefined4 *)(extraout_x0_02 + 0x3bc));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar6 = (float)Plant::GetExtraDPSmodifier(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar7 = (float)FUN_041e0d68(*(undefined4 *)(extraout_x0_03 + 0x424));
    *(float *)(this + 0x11c) = fVar5 * fVar4 * fVar6 * fVar7;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::onBombRespawn(std::string const&) */

void DandelionBomb::onBombRespawn(string *param_1)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x138] == (string)0x0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    __s = "idle";
  }
  else {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    __s = "idle_avatar";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,2,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::CreateAnimRig(bool) */

void __thiscall DandelionBomb::CreateAnimRig(DandelionBomb *this,bool param_1)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  CachedResourcePtr *this_00;
  
  this[0x140] = (DandelionBomb)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (CachedResourcePtr *)&DAT_06af2988;
  }
  else {
    this_00 = (CachedResourcePtr *)&DAT_06af29b8;
  }
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_(this_00);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DandelionBomb::~DandelionBomb() */

void __thiscall DandelionBomb::~DandelionBomb(DandelionBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_06803950;
  *(undefined ***)(this + 0x10) = &PTR__DandelionBomb_06803b38;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x120));
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0xf0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to DandelionBomb::~DandelionBomb() */

void __thiscall DandelionBomb::~DandelionBomb(DandelionBomb *this)

{
  ~DandelionBomb(this + -0x10);
  return;
}


/* DandelionBomb::~DandelionBomb() */

void __thiscall DandelionBomb::~DandelionBomb(DandelionBomb *this)

{
  ~DandelionBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DandelionBomb::~DandelionBomb() */

void __thiscall DandelionBomb::~DandelionBomb(DandelionBomb *this)

{
  ~DandelionBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::DandelionBomb() */

void __thiscall DandelionBomb::DandelionBomb(DandelionBomb *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  string *psVar4;
  ResourceInfo *pRVar5;
  long extraout_x0;
  _func_void *extraout_x1;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06803950;
  *(undefined ***)(this + 0x10) = &PTR__DandelionBomb_06803b38;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  DVec3::DVec3((DVec3 *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"dandelion");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar5 + 0x28));
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x2cc);
  uVar2 = *(undefined4 *)(extraout_x0 + 0x2c8);
  *(undefined4 *)(this + 0x11c) = 0x3f800000;
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar2;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 200));
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)asStack_18,extraout_x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xc0),(RtId *)asStack_18);
  Sexy::RtId::~RtId((RtId *)asStack_18);
  DVec3::DVec3((DVec3 *)asStack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xe0),(SexyVector3 *)asStack_18);
  lVar3 = ___stack_chk_guard;
  uVar1 = *(undefined4 *)(extraout_x0 + 0x2d4);
  this[0x138] = (DandelionBomb)0x0;
  this[0x139] = (DandelionBomb)0x0;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 1;
  this[0x140] = (DandelionBomb)0x0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x144) = uVar1;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DandelionBomb::StaticNew() */

DandelionBomb * DandelionBomb::StaticNew(void)

{
  DandelionBomb *this;
  
  this = ::operator_new(0x150);
  DandelionBomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::findTarget() */

void __thiscall DandelionBomb::findTarget(DandelionBomb *this)

{
  RtWeakPtr<CthulhuPropertySheet> *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ResourceInfo *pRVar11;
  long *plVar12;
  Zombie *pZVar13;
  RtObject *pRVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var15;
  float *pfVar16;
  long lVar17;
  RtObject *this_01;
  _func_void *extraout_x1;
  ulong uVar18;
  float fVar19;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  this_00 = (RtWeakPtr<CthulhuPropertySheet> *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)this_00);
  uVar18 = 0;
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 200);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_20,extraout_x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=(this_00,(RtId *)&local_20);
  Sexy::RtId::~RtId((RtId *)&local_20);
  iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  local_30[0] = CONCAT44(local_30[0]._4_4_,1);
  local_20 = BoardConstants::NUMBER_OF_COLUMNS();
  local_20 = local_20 - iVar5;
  piVar6 = eastl::max_alt<int>((int *)local_30,&local_20);
  iVar2 = *piVar6;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets((Insets *)local_30,iVar5,*(int *)(this + 0x108),iVar2,1);
  EntityFinder::GetEntitiesInGridSquares((exception_ptr *)&local_20,2,(Insets *)local_30);
  while( true ) {
    uVar8 = CONCAT44(uStack_1c,local_20);
    uVar7 = FUN_041e0d80(uVar8,local_18);
    if (uVar7 <= uVar18) break;
    FUN_041e0d8c(uVar8,uVar18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    uVar10 = FUN_041e0d8c(CONCAT44(uStack_1c,local_20),uVar18);
    local_38 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,BoardEntity*>
                         (uVar8,uVar9,uVar10);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
    if (!bVar3) {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
      cVar4 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar11);
      if (cVar4 != '\0') {
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        cVar4 = (**(code **)(*plVar12 + 0x328))();
        if (cVar4 == '\0') {
          plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          cVar4 = (**(code **)(*plVar12 + 0x330))();
          if (cVar4 == '\0') {
            pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            cVar4 = Zombie::IsInvisible(pZVar13);
            if (cVar4 == '\0') {
              plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              cVar4 = (**(code **)(*plVar12 + 0x4d8))();
              if (cVar4 != '\0') {
                pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                cVar4 = Zombie::IsFlying(pZVar13);
                if (cVar4 != '\0') goto LAB_041e2904;
              }
              pRVar14 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              bVar3 = Sexy::RtObject::IsA<Zomboss>(pRVar14);
              if (bVar3) {
                pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                cVar4 = Zombie::IsFlying(pZVar13);
                if (cVar4 != '\0') goto LAB_041e2904;
              }
              pRVar14 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar14);
              if (bVar3) {
                pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                cVar4 = Zombie::IsFlying(pZVar13);
                if (cVar4 != '\0') goto LAB_041e2904;
              }
              p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              pfVar16 = (float *)std::
                                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::_M_leftmost(p_Var15);
              fVar19 = *pfVar16;
              lVar17 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
              if (fVar19 <= *(float *)(lVar17 + 0x10)) {
                cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
                if (cVar4 == '\0') {
LAB_041e2ad8:
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,
                             (RtWeakPtrBase *)aRStack_40);
                }
                else {
                  cVar4 = Sexy::RtWeakPtrBase::operator!=
                                    ((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_40);
                  if (cVar4 != '\0') {
                    p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                    pfVar16 = (float *)std::
                                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       ::_M_leftmost(p_Var15);
                    fVar19 = *pfVar16;
                    p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                    pfVar16 = (float *)std::
                                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       ::_M_leftmost(p_Var15);
                    if (*pfVar16 < fVar19) goto LAB_041e2ad8;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_041e2904:
    uVar18 = uVar18 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar4 == '\0') {
    uVar18 = 0;
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 200);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    Sexy::Insets::Insets((Insets *)local_30,iVar5,*(int *)(this + 0x108),9 - iVar5,1);
    EntityFinder::GetEntitiesInGridSquares((exception_ptr *)&local_20,4,(Insets *)local_30);
    while( true ) {
      uVar8 = CONCAT44(uStack_1c,local_20);
      uVar7 = FUN_041e0d80(uVar8,local_18);
      if (uVar7 <= uVar18) break;
      FUN_041e0d8c(uVar8,uVar18);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      uVar10 = FUN_041e0d8c(CONCAT44(uStack_1c,local_20),uVar18);
      local_38 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,BoardEntity*>
                           (uVar8,uVar9,uVar10);
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar1);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
      if ((((!bVar3) && (cVar4 = (**(code **)(*(long *)this_01 + 0x200))(this_01), cVar4 != '\0'))
          && (cVar4 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_01),
             cVar4 != '\0')) && (bVar3 = Sexy::RtObject::IsA<GridItemFlame>(this_01), !bVar3)) {
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
        if (bVar3) {
          p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          pfVar16 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var15);
          fVar19 = *pfVar16;
          p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          pfVar16 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var15);
          if (fVar19 < *pfVar16) goto LAB_041e2b40;
        }
        cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
        if (cVar4 == '\0') {
LAB_041e2c88:
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
        }
        else {
          cVar4 = Sexy::RtWeakPtrBase::operator!=
                            ((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_40);
          if (cVar4 != '\0') {
            p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pfVar16 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(p_Var15);
            fVar19 = *pfVar16;
            p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            pfVar16 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(p_Var15);
            if (*pfVar16 < fVar19) goto LAB_041e2c88;
          }
        }
      }
LAB_041e2b40:
      uVar18 = uVar18 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if (cVar4 != '\0') {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 200),(RtWeakPtr *)this_00);
    }
  }
  else {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 200),(RtWeakPtr *)this_00);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DandelionBomb::setState(unsigned int) */

void __thiscall DandelionBomb::setState(DandelionBomb *this,uint param_1)

{
  if ((*(uint *)(this + 0xa4) != param_1) &&
     ((*(uint *)(this + 0xa4) = param_1, param_1 == 0xb ||
      ((param_1 == 0xd && (this[0x139] != (DandelionBomb)0x0)))))) {
    findTarget(this);
    return;
  }
  return;
}


/* DandelionBomb::SetPlantfood(bool) */

void __thiscall DandelionBomb::SetPlantfood(DandelionBomb *this,bool param_1)

{
  this[0x138] = (DandelionBomb)param_1;
  if (!param_1) {
    setState(this,10);
    return;
  }
  setState(this,0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::onPlantFinished(std::string const&) */

void DandelionBomb::onPlantFinished(string *param_1)

{
  string sVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x138] == (string)0x0) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    sVar1 = param_1[0x138];
  }
  else {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    std::string::string(asStack_40,"idle_avatar");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    sVar1 = param_1[0x138];
  }
  if (sVar1 == (string)0x0) {
    setState((DandelionBomb *)param_1,0xb);
  }
  else {
    setState((DandelionBomb *)param_1,0xd);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::calcAreaDamage(int, int) */

void __thiscall DandelionBomb::calcAreaDamage(DandelionBomb *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  string *psVar6;
  ResourceInfo *pRVar7;
  long extraout_x0;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  GridItem *this_01;
  Zombie *this_02;
  undefined8 uVar11;
  SharkMinion *this_03;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *pcVar15;
  DamageInfo *pDVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  Point aPStack_a0 [8];
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 800) {
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)&local_80,"dandelion");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    std::string::~string((string *)&local_80);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar7 + 0x28));
    nop();
    lVar8 = FUN_041e0da0(*(undefined8 *)(extraout_x0 + 0x70),0);
    Sexy::Insets::Insets((Insets *)&local_90,(Insets *)(lVar8 + 0x58));
    uVar13 = 0;
    local_90 = local_90 + param_1;
    local_8c = local_8c + param_2;
    if ((this[0x138] != (DandelionBomb)0x0) && (uVar13 = 2, this[0x139] == (DandelionBomb)0x0)) {
      uVar13 = 1;
    }
    lVar8 = FUN_041e0da0(*(undefined8 *)(extraout_x0 + 0x70),uVar13);
    pDVar16._0_4_ = (DamageInfo *)((float)*(int *)(lVar8 + 0x2c) * *(float *)(this + 0x11c));
    if (this[0x140] != (DandelionBomb)0x0) {
      pDVar16._0_4_ = (DamageInfo *)((float)pDVar16._0_4_ * *(float *)(this + 0x144));
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x120);
    lVar8 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    iVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar8 + 4) + 30.0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(2,4);
    EntityFinder::GetEntitiesTouchingRectangle
              ((string *)&local_80,uVar4,(Insets *)&local_90,0xffffffff,0xffffffff);
    for (uVar14 = 0; uVar13 = local_80, uVar9 = FUN_041e0d80(local_80,local_78), uVar14 < uVar9;
        uVar14 = uVar14 + 1) {
      FUN_041e0d8c(uVar13,uVar14);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a8,(RtWeakPtrBase *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      puVar10 = (undefined8 *)FUN_041e0d8c(local_80,uVar14);
      this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
      puVar10 = (undefined8 *)FUN_041e0d8c(local_80,uVar14);
      this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a8);
      if ((cVar1 != '\0') &&
         ((this_02 == (Zombie *)0x0 || (cVar1 = Zombie::IsInvisible(this_02), cVar1 == '\0')))) {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a8);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar7);
        if (cVar1 != '\0') {
          uVar13 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
          uVar11 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
          local_98 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                               (uVar13,uVar11,aRStack_a8);
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_00);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
          if (!bVar2) {
            this_03 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
            iVar5 = SharkMinion::getRow(this_03);
            if ((iVar3 == iVar5) &&
               ((this_01 == (GridItem *)0x0 ||
                (bVar2 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_01), !bVar2)))) {
              plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
              pcVar15 = *(code **)(*plVar12 + 0x110);
              pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb8));
              Sexy::Point::Point(aPStack_a0,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar16._0_4_,(undefined4)local_98,local_98._4_4_,(RtWeakPtr *)local_68,
                         pRVar7,aPStack_a0,0);
              (*pcVar15)(plVar12,(RtWeakPtr *)local_68);
              DamageInfo::~DamageInfo((DamageInfo *)local_68);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)this_00,(RtWeakPtr *)aRStack_a8);
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::onBombExplode(StandaloneEffect*) */

void DandelionBomb::onBombExplode(StandaloneEffect *param_1)

{
  float *pfVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"Play_CherryBomb");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_10,0.0);
  std::string::~string((string *)&local_10);
  nop();
  pfVar1 = (float *)FUN_041e0d94(*(undefined8 *)(param_1 + 0xf0),0);
  calcAreaDamage((DandelionBomb *)param_1,(int)(*pfVar1 + 95.0),(int)(pfVar1[1] + 130.0));
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_1[0x140] == (StandaloneEffect)0x0) {
    __s = "POPANIM_EFFECTS_DANDELION_BOMB";
  }
  else {
    __s = "POPANIM_EFFECTS_DANDELION_BOMB_LEVEL5";
  }
  std::string::string((string *)&local_18,__s);
  GetPAMByName((string *)&local_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string((string *)&local_18);
  nop();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(param_1 + 0xf0);
  pSVar3 = (SexyVector3 *)FUN_041e0d94(*(undefined8 *)this_00,0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,pSVar3,-1);
  FUN_041e0db0(this + 0x1c);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,true);
  std::string::string((string *)&local_10,"anim_bigbang");
  Effect_PopAnim::PlaySingleAnimation(this,(string *)&local_10,0);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::erase
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)this_00,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::dropBomb() */

void __thiscall DandelionBomb::dropBomb(DandelionBomb *this)

{
  undefined8 *puVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  char *__s;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_58 = *(undefined4 *)(puVar1 + 1);
  local_60 = (float)*puVar1;
  fStack_5c = (float)((ulong)*puVar1 >> 0x20);
  _local_60 = CONCAT44(fStack_5c - 130.0,local_60 - 95.0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (this[0x140] == (DandelionBomb)0x0) {
    __s = "POPANIM_EFFECTS_DANDELION_BOMB";
  }
  else {
    __s = "POPANIM_EFFECTS_DANDELION_BOMB_LEVEL5";
  }
  std::string::string(asStack_70,__s);
  GetPAMByName(asStack_70);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,-1);
  FUN_041e0db0(this_00 + 0x1c);
  if (this[0x138] == (DandelionBomb)0x0) {
    std::string::string((string *)aRStack_68,"anim_fall");
  }
  else {
    std::string::string((string *)aRStack_68,"anim_fall_avatar");
  }
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_68,0);
  std::string::~string((string *)aRStack_68);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"onBombExplode");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0xf0),
             (SexyVector3 *)&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionBomb::onUpdate() */

void DandelionBomb::onUpdate(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  PopAnimRig *pPVar7;
  SexyVector3 *pSVar8;
  float *pfVar9;
  RtMixedPtr *this_01;
  Vec3 *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  SexyVector3 *this_03;
  RtObject *this_04;
  Zombie *this_05;
  long lVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float in_s2;
  float local_b0 [2];
  float local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined8 local_60;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xb0);
  local_8 = ___stack_chk_guard;
  pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar13 = (float)PVZ_T();
  fVar14 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(pPVar7,fVar13,fVar14);
  switch(*(undefined4 *)(in_x0 + 0xa4)) {
  case 10:
switchD_041e3738_caseD_a:
    pSVar8 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x0);
    local_90 = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0xe0),pSVar8);
    local_8c = fVar14;
    local_88 = in_s2;
    fVar13 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_90);
    uVar16 = 0x3f800000;
    if (fVar13 <= 1.0) goto switchD_041e3738_default;
    pcVar12 = *(code **)(*(long *)in_x0 + 0x78);
    local_80 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_90);
    fVar13 = *(float *)(in_x0 + 0xa8);
    local_7c = uVar16;
    local_78 = in_s2;
    local_a8[0] = (float)PVZ_Dt();
    local_a8[0] = local_a8[0] * fVar13;
    uVar15 = DVec3::getLength((DVec3 *)&local_90);
    local_a0 = CONCAT44(local_a0._4_4_,uVar15);
    pfVar9 = eastl::min_alt<float>(local_a8,(float *)&local_a0);
    local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,*pfVar9);
    break;
  case 0xb:
    this_00 = (RtWeakPtr *)(in_x0 + 0xc0);
    DVec3::DVec3((DVec3 *)&local_90);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_04 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_05 = Sexy::RtObject::Cast<Zombie>(this_04);
      if (this_05 == (Zombie *)0x0) goto LAB_041e3aa4;
      bVar3 = Zombie::IsInvisible(this_05);
      bVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (bVar4 <= bVar3) goto LAB_041e3d64;
LAB_041e3ab8:
      p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_02 = (Vec3 *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var10);
    }
    else {
LAB_041e3aa4:
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar2 != '\0') goto LAB_041e3ab8;
LAB_041e3d64:
      this_02 = (Vec3 *)&local_70;
      findTarget((DandelionBomb *)in_x0);
      fVar14 = 0.0;
      in_s2 = 0.0;
      EATextSquish::Vec3::Vec3(this_02,950.0,0.0,0.0);
    }
    pSVar8 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x0);
    uVar16 = Sexy::SexyVector3::operator-((SexyVector3 *)this_02,pSVar8);
    local_60 = CONCAT44(fVar14,uVar16);
    local_58 = in_s2;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_90,(SexyVector3 *)&local_60);
    local_8c = 0.0;
    local_88 = 0.0;
    fVar13 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_90);
    uVar16 = 0x40a00000;
    if (5.0 < fVar13) {
      pcVar12 = *(code **)(*(long *)in_x0 + 0x78);
      pSVar8 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(in_x0);
      local_80 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_90);
      fVar13 = *(float *)(in_x0 + 0xac);
      local_7c = uVar16;
      local_78 = in_s2;
      local_a8[0] = (float)PVZ_Dt();
      local_a8[0] = local_a8[0] * fVar13;
      uVar15 = DVec3::getLength((DVec3 *)&local_90);
      local_a0 = CONCAT44(local_a0._4_4_,uVar15);
      pfVar9 = eastl::min_alt<float>(local_a8,(float *)&local_a0);
      local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,*pfVar9);
      local_6c = uVar16;
      local_68 = in_s2;
      uVar15 = Sexy::SexyVector3::operator+(pSVar8,(SexyVector3 *)&local_70);
      local_60 = CONCAT44(uVar16,uVar15);
      local_58 = in_s2;
      (*pcVar12)();
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        local_60 = *(undefined8 *)pSVar8;
        local_58 = *(float *)(pSVar8 + 8);
        local_58 = (float)Board::calculateRoofOffsetZ(*(float *)pSVar8);
        local_58 = local_58 + *(float *)(in_x0 + 0x148);
        (**(code **)(*(long *)in_x0 + 0x78))();
      }
      goto switchD_041e3738_default;
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if (cVar2 != '\0') {
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      fVar13 = *pfVar9;
      lVar11 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      if (fVar13 <= *(float *)(lVar11 + 0x10)) {
        dropBomb((DandelionBomb *)in_x0);
        iVar5 = *(int *)(in_x0 + 0x110);
        *(int *)(in_x0 + 0x110) = iVar5 + -1;
        if (iVar5 + -1 != 0) {
          findTarget((DandelionBomb *)in_x0);
          goto switchD_041e3738_default;
        }
        this_01 = (RtMixedPtr *)&local_a0;
        setState((DandelionBomb *)in_x0,0xe);
        pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        std::string::string((string *)&local_60,"out");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(this_01);
        std::string::string((string *)&local_70,"onDieFinished");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (RtId *)&local_80,(string *)&local_70);
        PopAnimRig::PlayAndStop(pPVar7,(string *)&local_60,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_70);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_80);
        goto LAB_041e3974;
      }
    }
    lVar11 = *(long *)in_x0;
    goto LAB_041e3b2c;
  case 0xc:
    if (in_x0[0x139] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) goto switchD_041e3738_caseD_a;
    local_a0 = *(undefined8 *)(in_x0 + 0xe0);
    iVar5 = *(int *)(in_x0 + 0x13c);
    local_98 = *(undefined4 *)(in_x0 + 0xe8);
    iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_a0 = CONCAT44((float)(iVar5 * iVar6 + 0xa0),(float)local_a0);
    pSVar8 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x0);
    local_90 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_a0,pSVar8);
    local_8c = fVar14;
    local_88 = in_s2;
    fVar13 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_90);
    uVar16 = 0x3f800000;
    if (fVar13 <= 1.0) goto switchD_041e3738_default;
    pcVar12 = *(code **)(*(long *)in_x0 + 0x78);
    local_80 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_90);
    fVar13 = *(float *)(in_x0 + 0xa8);
    local_7c = uVar16;
    local_78 = in_s2;
    local_b0[0] = (float)PVZ_Dt();
    local_b0[0] = local_b0[0] * fVar13;
    local_a8[0] = (float)DVec3::getLength((DVec3 *)&local_90);
    pfVar9 = eastl::min_alt<float>(local_b0,local_a8);
    local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,*pfVar9);
    break;
  case 0xd:
    if (in_x0[0x139] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0xc0));
      if (cVar2 == '\0') {
        fVar13 = (float)Sexy::Rand(200.0);
        fVar14 = 0.0;
        fVar13 = fVar13 + 100.0;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_a0,950.0,fVar13,0.0);
        pSVar8 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(in_x0);
        local_90 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_a0,pSVar8);
        local_8c = fVar13;
        local_88 = fVar14;
        fVar13 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_90);
        uVar16 = 0x40a00000;
        lVar11 = *(long *)in_x0;
        if (fVar13 <= 5.0) goto LAB_041e3b2c;
        pcVar12 = *(code **)(lVar11 + 0x78);
        local_80 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_90);
        fVar13 = *(float *)(in_x0 + 0xac);
        local_7c = uVar16;
        local_78 = fVar14;
        local_b0[0] = (float)PVZ_Dt();
        local_b0[0] = (fVar13 + fVar13) * local_b0[0];
        local_a8[0] = (float)DVec3::getLength((DVec3 *)&local_90);
        pfVar9 = eastl::min_alt<float>(local_b0,local_a8);
        local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,*pfVar9);
        local_6c = uVar16;
        local_68 = fVar14;
        uVar15 = Sexy::SexyVector3::operator+(pSVar8,(SexyVector3 *)&local_70);
        local_60 = CONCAT44(uVar16,uVar15);
        local_58 = fVar14;
        (*pcVar12)();
      }
      else {
        p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xc0));
        this_03 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var10);
        pSVar8 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(in_x0);
        local_90 = Sexy::SexyVector3::operator-(this_03,pSVar8);
        local_8c = fVar14 - 60.0;
        local_88 = in_s2;
        fVar13 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_90);
        uVar16 = 0x40a00000;
        if (fVar13 <= 5.0) {
          dropBomb((DandelionBomb *)in_x0);
          setState((DandelionBomb *)in_x0,0xe);
          pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          std::string::string((string *)&local_60,"out_avatar");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_a0);
          std::string::string((string *)&local_70,"onDieFinished");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     (RtId *)&local_80,(string *)&local_70);
          PopAnimRig::PlayAndStop(pPVar7,(string *)&local_60,0,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)&local_70);
          nop();
          Sexy::RtId::~RtId((RtId *)&local_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
          std::string::~string((string *)&local_60);
          nop();
          goto switchD_041e3738_default;
        }
        pcVar12 = *(code **)(*(long *)in_x0 + 0x78);
        local_80 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_90);
        fVar13 = *(float *)(in_x0 + 0xac);
        local_7c = uVar16;
        local_78 = in_s2;
        local_a8[0] = (float)PVZ_Dt();
        local_a8[0] = (fVar13 + fVar13) * local_a8[0];
        uVar15 = DVec3::getLength((DVec3 *)&local_90);
        local_a0 = CONCAT44(local_a0._4_4_,uVar15);
        pfVar9 = eastl::min_alt<float>(local_a8,(float *)&local_a0);
        local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,*pfVar9);
        local_6c = uVar16;
        local_68 = in_s2;
        uVar15 = Sexy::SexyVector3::operator+(pSVar8,(SexyVector3 *)&local_70);
        local_60 = CONCAT44(uVar16,uVar15);
        local_58 = in_s2;
        (*pcVar12)();
      }
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        local_60 = *(undefined8 *)pSVar8;
        local_58 = *(float *)(pSVar8 + 8);
        local_58 = (float)Board::calculateRoofOffsetZ(*(float *)pSVar8);
        local_58 = local_58 + *(float *)(in_x0 + 0x148);
        (**(code **)(*(long *)in_x0 + 0x78))();
      }
      goto switchD_041e3738_default;
    }
    fVar14 = 0.0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_a0,950.0,0.0,0.0);
    pSVar8 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x0);
    local_90 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_a0,pSVar8);
    local_8c = 0.0;
    local_88 = fVar14;
    fVar13 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_90);
    uVar16 = 0x40a00000;
    lVar11 = *(long *)in_x0;
    if (5.0 < fVar13) {
      pcVar12 = *(code **)(lVar11 + 0x78);
      this_01 = (RtMixedPtr *)local_a8;
      local_80 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_90);
      fVar13 = *(float *)(in_x0 + 0xac);
      local_7c = uVar16;
      local_78 = fVar14;
      local_b0[0] = (float)PVZ_Dt();
      local_b0[0] = local_b0[0] * fVar13;
      local_a8[0] = (float)DVec3::getLength((DVec3 *)&local_90);
      pfVar9 = eastl::min_alt<float>(local_b0,(float *)this_01);
      local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,*pfVar9);
      local_6c = uVar16;
      local_68 = fVar14;
      uVar15 = Sexy::SexyVector3::operator+(pSVar8,(SexyVector3 *)&local_70);
      local_60 = CONCAT44(uVar16,uVar15);
      local_58 = fVar14;
      (*pcVar12)();
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        local_60 = *(undefined8 *)pSVar8;
        local_58 = *(float *)(pSVar8 + 8);
        local_58 = (float)Board::calculateRoofOffsetZ(*(float *)pSVar8);
        local_58 = local_58 + *(float *)(in_x0 + 0x148);
        (**(code **)(*(long *)in_x0 + 0x78))();
      }
      iVar5 = BoardTransforms::BoardSpaceToGridX(*(float *)pSVar8);
      iVar6 = BoardTransforms::GridToBoardSpaceX(iVar5);
      if (((*(int *)(in_x0 + 0x10c) == iVar5) || (*(float *)pSVar8 <= (float)iVar6)) ||
         (*(int *)(in_x0 + 0x114) == iVar5)) goto switchD_041e3738_default;
      dropBomb((DandelionBomb *)in_x0);
      *(int *)(in_x0 + 0x114) = iVar5;
      pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      std::string::string((string *)&local_60,"attack_avatar");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(this_01);
      std::string::string((string *)&local_70,"onBombRespawn");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (SexyVector3 *)&local_80,(string *)&local_70);
      PopAnimRig::PlayAndStop(pPVar7,(string *)&local_60,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_70);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_80);
LAB_041e3974:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      std::string::~string((string *)&local_60);
      nop();
      goto switchD_041e3738_default;
    }
LAB_041e3b2c:
    (**(code **)(lVar11 + 0x48))();
  default:
    goto switchD_041e3738_default;
  }
  local_6c = uVar16;
  local_68 = in_s2;
  uVar15 = Sexy::SexyVector3::operator+(pSVar8,(SexyVector3 *)&local_70);
  local_60 = CONCAT44(uVar16,uVar15);
  local_58 = in_s2;
  (*pcVar12)();
switchD_041e3738_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

