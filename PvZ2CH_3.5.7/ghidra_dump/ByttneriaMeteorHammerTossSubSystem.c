// Class: ByttneriaMeteorHammerTossSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByttneriaMeteorHammerTossSubSystem::StaticClassInit() */

void ByttneriaMeteorHammerTossSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ByttneriaMeteorHammerTossSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03b2e09c,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ByttneriaMeteorHammerTossSubSystem::StaticGetClass() */

long * ByttneriaMeteorHammerTossSubSystem::StaticGetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ByttneriaMeteorHammerTossSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ByttneriaMeteorHammerTossSubSystem::GetClass() const */

long * ByttneriaMeteorHammerTossSubSystem::GetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ByttneriaMeteorHammerTossSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ByttneriaMeteorHammerTossSubSystem::ByttneriaMeteorHammerTossSubSystem() */

void __thiscall
ByttneriaMeteorHammerTossSubSystem::ByttneriaMeteorHammerTossSubSystem
          (ByttneriaMeteorHammerTossSubSystem *this)

{
  ZombieTosserSubSystem::ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0672f1d0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xa0));
  return;
}


/* ByttneriaMeteorHammerTossSubSystem::StaticNew() */

ByttneriaMeteorHammerTossSubSystem * ByttneriaMeteorHammerTossSubSystem::StaticNew(void)

{
  ByttneriaMeteorHammerTossSubSystem *this;
  
  this = ::operator_new(0xd0);
  ByttneriaMeteorHammerTossSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByttneriaMeteorHammerTossSubSystem::refreshMap() */

void __thiscall
ByttneriaMeteorHammerTossSubSystem::refreshMap(ByttneriaMeteorHammerTossSubSystem *this)

{
  map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
             *)(this + 0x70);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
             ::begin(this_00);
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      pRVar3 = (RtWeakPtrBase *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
      if (cVar2 == '\0') break;
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
      lVar4 = ZombieTosserSubSystem::findTossedZombie((Zombie *)this);
      if (lVar4 == 0) break;
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    }
    local_18 = std::
               map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
               ::erase_abi_cxx11_(this_00,local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  } while( true );
}


/* ByttneriaMeteorHammerTossSubSystem::~ByttneriaMeteorHammerTossSubSystem() */

void __thiscall
ByttneriaMeteorHammerTossSubSystem::~ByttneriaMeteorHammerTossSubSystem
          (ByttneriaMeteorHammerTossSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0672f1d0;
  std::
  map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
  ::~map((map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
          *)(this + 0xa0));
  std::
  map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
  ::~map((map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
          *)(this + 0x70));
  ZombieTosserSubSystem::~ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  return;
}


/* ByttneriaMeteorHammerTossSubSystem::~ByttneriaMeteorHammerTossSubSystem() */

void __thiscall
ByttneriaMeteorHammerTossSubSystem::~ByttneriaMeteorHammerTossSubSystem
          (ByttneriaMeteorHammerTossSubSystem *this)

{
  ~ByttneriaMeteorHammerTossSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByttneriaMeteorHammerTossSubSystem::onLandedCallback(Zombie*) */

void __thiscall
ByttneriaMeteorHammerTossSubSystem::onLandedCallback
          (ByttneriaMeteorHammerTossSubSystem *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) {
      iVar2 = Zombie::GetSizeType(param_1);
      if (iVar2 == 2) {
        uVar3 = 0x3fc00000;
      }
      else {
        uVar3 = 0x40400000;
      }
      (**(code **)(*(long *)param_1 + 0x298))(uVar3,param_1);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
    ::erase((RtWeakPtr *)(this + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
    ::erase((RtWeakPtr *)(this + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByttneriaMeteorHammerTossSubSystem::tossZombie(Zombie*, Sexy::SexyVector3, std::function<void
   (BoardEntity*)>) */

void ByttneriaMeteorHammerTossSubSystem::tossZombie
               (undefined4 param_1_00,float param_2,undefined4 param_3,long param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5,function *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SexyVector3 *this;
  ByttneriaMeteorHammerTossSubSystem *pBVar4;
  SexyVector3 *extraout_x1;
  undefined8 uVar5;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  int local_bc;
  int local_b4;
  RtMixedPtr aRStack_b0 [8];
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_98;
  float local_94;
  undefined4 local_90;
  RtId aRStack_88 [24];
  string asStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_e0 = param_1_00;
  local_dc = param_2;
  local_d8 = param_3;
  if (param_5 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) goto LAB_03b31440;
  BoardEntity::CalcGridPosition();
  BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)&local_e0,extraout_x1);
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(param_5);
  local_a8 = (float)Sexy::SexyVector3::operator-(this,(SexyVector3 *)&local_e0);
  local_98 = *(float *)this;
  local_94 = *(float *)(this + 4);
  local_90 = *(undefined4 *)(this + 8);
  local_a4 = param_2;
  local_a0 = param_3;
  if (local_b4 == local_bc) {
LAB_03b31478:
    local_98 = local_98 + 64.0;
    fVar1 = local_94;
  }
  else {
    param_2 = param_2 / local_a8;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar1 = ABS((float)iVar2);
    if ((long)(double)param_2 < 0) {
      fVar1 = -fVar1;
    }
    local_94 = fVar1 + local_94;
    if (local_b4 == local_bc) goto LAB_03b31478;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_98 = (float)iVar2 / ABS(param_2) + local_98;
    fVar1 = local_94;
  }
  local_94 = fVar1;
  if (160.0 <= fVar1) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (fVar1 <= (float)(iVar2 * iVar3 + 0xa0)) {
      pBVar4 = Board::GetGameSubSystem<ByttneriaMeteorHammerTossSubSystem>
                         (*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
      std::string::string(asStack_70,"onLandedCallback");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_88,asStack_70)
      ;
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pBVar4,param_5,&local_98,aRStack_50,
                 1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      ToolPacketData::GetProps();
      std::make_pair<Sexy::RtWeakPtr<GameObject>,std::function<void(BoardEntity*)>&>
                ((RtWeakPtr *)asStack_70,param_6);
      std::
      map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
      ::insert<std::pair<Sexy::RtWeakPtr<GameObject>,std::function<void(BoardEntity*)>>,void>
                ((map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
                  *)(param_1 + 0x70),(pair *)aRStack_50);
      std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>::~pair
                ((pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>> *)aRStack_50)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
      ToolPacketData::GetProps();
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_88);
      std::
      make_pair<Sexy::RtWeakPtr<GameObject>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>
                ((RtWeakPtr *)aRStack_b0,(vector *)aRStack_88);
      std::
      map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
      ::
      insert<std::pair<Sexy::RtWeakPtr<GameObject>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,void>
                ((map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
                  *)(param_1 + 0xa0),(pair *)asStack_70);
      MagnetShroomSubSystemOwnershipRecord::~MagnetShroomSubSystemOwnershipRecord
                ((MagnetShroomSubSystemOwnershipRecord *)asStack_70);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      goto LAB_03b31440;
    }
  }
  iVar2 = Zombie::GetSizeType((Zombie *)param_5);
  if (iVar2 == 2) {
    uVar5 = 0x3fc00000;
  }
  else {
    uVar5 = 0x40400000;
  }
  (**(code **)(*(long *)param_5 + 0x298))(uVar5,param_5);
LAB_03b31440:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByttneriaMeteorHammerTossSubSystem::onUpdate() */

void __thiscall
ByttneriaMeteorHammerTossSubSystem::onUpdate(ByttneriaMeteorHammerTossSubSystem *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ResourceInfo *this_00;
  undefined8 *puVar7;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 uVar8;
  GridItem *pGVar9;
  GridItem *pGVar10;
  function *pfVar11;
  long lVar12;
  undefined8 uVar13;
  RtObject *this_02;
  undefined8 local_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<void(BoardEntity*)> afStack_28 [32];
  long local_8;
  
  uVar13 = *(undefined8 *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03b2baf4(uVar13,*(undefined8 *)(this + 0x48));
  iVar2 = iVar2 + -1;
  lVar12 = (long)iVar2;
  if (iVar2 < 0) {
LAB_03b333f4:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  do {
    lVar6 = FUN_03b2bb08(uVar13,lVar12);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 0x40));
    if (this_00 != (ResourceInfo *)0x0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
      uVar3 = operator|(2,4);
      (**(code **)(*(long *)this_00 + 0xb0))((RtWeakPtr<Sexy::SoundResource> *)local_50,this_00);
      uVar4 = SharkMinion::getRow((SharkMinion *)this_00);
      uVar5 = SharkMinion::getRow((SharkMinion *)this_00);
      EntityFinder::GetEntitiesTouchingRectangle
                (avStack_40,uVar3,(RtWeakPtr<Sexy::SoundResource> *)local_50,uVar4,uVar5);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_40);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_40);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68),
            bVar1) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
        this_02 = (RtObject *)*puVar7;
        if (this_02 != (RtObject *)this_00) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)&local_58);
          this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)std::
                       map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
                       ::operator[]((map<Sexy::RtWeakPtr<Zombie>,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>>
                                     *)(this + 0xa0),(RtWeakPtr *)local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          uVar13 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_01);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_01);
          ToolPacketData::GetProps();
          local_58 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                               (uVar13,uVar8,aRStack_60);
          local_50[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_01);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
          if (!bVar1) {
            pGVar9 = (GridItem *)Sexy::RtObject::Cast<Zombie>(this_02);
            pGVar10 = Sexy::RtObject::Cast<GridItem>(this_02);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)&local_58);
            pfVar11 = (function *)
                      std::
                      map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
                      ::operator[]((map<Sexy::RtWeakPtr<Zombie>,std::function<void(BoardEntity*)>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>const,std::function<void(BoardEntity*)>>>>
                                    *)(this + 0x70),(RtWeakPtr *)local_50);
            std::function<void(BoardEntity*)>::function(afStack_28,pfVar11);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            if (pGVar9 == (GridItem *)0x0) {
              if ((pGVar10 != (GridItem *)0x0) &&
                 (bVar1 = std::function::operator_cast_to_bool((function *)afStack_28),
                 pGVar9 = pGVar10, bVar1)) goto LAB_03b33358;
            }
            else {
              bVar1 = std::function::operator_cast_to_bool((function *)afStack_28);
              if (bVar1) {
LAB_03b33358:
                std::function<void(BoardEntity*)>::operator()(afStack_28,(BoardEntity *)pGVar9);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)&local_58);
                std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)this_01,(RtWeakPtr *)local_50);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              }
            }
            std::function<bool(Sexy::Touch_const&)>::~function
                      ((function<bool(Sexy::Touch_const&)> *)afStack_28);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_40);
    }
    iVar2 = iVar2 + -1;
    lVar12 = lVar12 + -1;
    if (iVar2 == -1) goto LAB_03b333f4;
    uVar13 = *(undefined8 *)(this + 0x40);
  } while( true );
}


/* ByttneriaMeteorHammerTossSubSystem::Update() */

void __thiscall ByttneriaMeteorHammerTossSubSystem::Update(ByttneriaMeteorHammerTossSubSystem *this)

{
  ZombieTosserSubSystem::Update();
  onUpdate(this);
  refreshMap(this);
  return;
}

