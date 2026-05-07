// Class: ElectricArcStream


/* ElectricArcStream::setPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall ElectricArcStream::setPlant(ElectricArcStream *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricArcStream::StaticClassInit() */

void ElectricArcStream::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricArcStream");
    (*pcVar2)(plVar1,asStack_10,FUN_03c1bcb0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricArcStream::StaticGetClass() */

long * ElectricArcStream::StaticGetClass(void)

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
  uVar2 = LightningBolt::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricArcStream",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricArcStream::GetClass() const */

long * ElectricArcStream::GetClass(void)

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
  uVar2 = LightningBolt::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricArcStream",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricArcStream::ElectricArcStream() */

void __thiscall ElectricArcStream::ElectricArcStream(ElectricArcStream *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LightningBolt::LightningBolt((LightningBolt *)this);
  *(undefined ***)this = &PTR_GetClass_06749810;
  *(undefined ***)(this + 0x10) = &PTR__ElectricArcStream_06749a08;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x130));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricArcStream::StaticNew() */

ElectricArcStream * ElectricArcStream::StaticNew(void)

{
  ElectricArcStream *this;
  
  this = ::operator_new(0x138);
  ElectricArcStream(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricArcStream::causeDamage(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall ElectricArcStream::causeDamage(ElectricArcStream *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  long *plVar5;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar6;
  long lVar7;
  long extraout_x0;
  long extraout_x0_00;
  ulong uVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  code *pcVar10;
  float fVar11;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_00);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pcVar10 = *(code **)(*plVar5 + 0x110);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb0));
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x42c80000,local_70,local_6c,aDStack_68,0x80,pRVar6,aPStack_78,0);
      (*pcVar10)(plVar5,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      cVar2 = FUN_0547419c(this + 0x110);
      goto joined_r0x03c1d110;
    }
  }
  cVar2 = FUN_0547419c(this + 0x110);
joined_r0x03c1d110:
  if (cVar2 == '\0') {
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)(this + 0x110));
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aDStack_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    std::string::string((string *)aDStack_68,"idle");
                    /* WARNING: Load size is inaccurate */
    Effect_PopAnim::PlayLoopingAnimation
              (*(Effect_PopAnim **)(this + 0x120),this_01,(RtWeakPtr *)aDStack_68,2);
    std::string::~string((string *)aDStack_68);
    nop();
    fVar11 = 0.0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      fVar11 = (float)Board::calculateRoofOffsetZ(*(float *)(this + 0xb8) - (float)iVar4 * 1.5);
      fVar11 = (float)(int)fVar11;
    }
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aDStack_68,*(float *)(this + 0xb8) - (float)iVar4 * 1.5,
               *(float *)(this + 0xbc) - (float)iVar3 * 1.5,fVar11);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aDStack_68,-1);
    iVar4 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_03c17e44(this_01 + 0x1c,iVar4 + 1);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 200),param_2);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x130));
  }
  else {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 200),param_2);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x130));
  }
  if (cVar2 != '\0') {
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
    iVar4 = FUN_03c17e54(*(undefined1 *)(lVar7 + 0x299));
    if (iVar4 == 0) {
      uVar9 = 0;
      while( true ) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        nop();
        uVar8 = FUN_03c17f94(*(undefined8 *)(extraout_x0_00 + 0x28),
                             *(undefined8 *)(extraout_x0_00 + 0x30));
        bVar1 = uVar8 <= uVar9;
        uVar9 = uVar9 + 1;
        if (bVar1) break;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        nop();
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(extraout_x0 + 0x28),param_2);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ElectricArcStream::~ElectricArcStream() */

void __thiscall ElectricArcStream::~ElectricArcStream(ElectricArcStream *this)

{
  *(undefined ***)this = &PTR_GetClass_06749810;
  *(undefined ***)(this + 0x10) = &PTR__ElectricArcStream_06749a08;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  LightningBolt::~LightningBolt((LightningBolt *)this);
  return;
}


/* non-virtual thunk to ElectricArcStream::~ElectricArcStream() */

void __thiscall ElectricArcStream::~ElectricArcStream(ElectricArcStream *this)

{
  ~ElectricArcStream(this + -0x10);
  return;
}


/* ElectricArcStream::~ElectricArcStream() */

void __thiscall ElectricArcStream::~ElectricArcStream(ElectricArcStream *this)

{
  ~ElectricArcStream(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricArcStream::~ElectricArcStream() */

void __thiscall ElectricArcStream::~ElectricArcStream(ElectricArcStream *this)

{
  ~ElectricArcStream(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricArcStream::createBounce() */

void __thiscall ElectricArcStream::createBounce(ElectricArcStream *this)

{
  int iVar1;
  ElectricArcStream EVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  Zombie *pZVar13;
  GridItem *pGVar14;
  ElectricArcStream *this_00;
  string *psVar15;
  long lVar16;
  long extraout_x0;
  ulong uVar17;
  long extraout_x0_00;
  RtWeakPtr *pRVar18;
  ResourceInfo *pRVar19;
  code *pcVar20;
  ulong uVar21;
  RtObject *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  bool bVar22;
  undefined8 local_50;
  string asStack_48 [8];
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0xb8));
  iVar8 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0xbc));
  local_38 = iVar7 + -1;
  local_20._0_4_ = 0;
  piVar11 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar10 = *piVar11;
  local_38 = iVar8 + -1;
  local_20 = (ulong)local_20._4_4_ << 0x20;
  piVar11 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar1 = *piVar11;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  uVar9 = operator|(4,2);
  Sexy::Insets::Insets((Insets *)&local_20,iVar10,iVar1,(iVar7 - iVar10) + 2,(iVar8 - iVar1) + 2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,uVar9,
             (Insets *)&local_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
LAB_03c1f5e8:
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_20);
  do {
    if (!bVar3) {
      cVar5 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      if (cVar5 == '\0') {
        iVar10 = FUN_03c17f4c(CONCAT44(uStack_34,local_38),local_30);
        iVar10 = Sexy::Rand(iVar10);
        FUN_03c17f44(CONCAT44(uStack_34,local_38),(long)iVar10);
        this_00 = GameObject::Create<ElectricArcStream>();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(this + 0x130));
        setPlant(this_00,(Insets *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        LightningBolt::SetPopAnim
                  ((LightningBolt *)this_00,(string *)(this + 0x100),(string *)(this + 0x108),
                   (string *)(this + 0x110));
        FUN_03c17ebc(this_00 + 0x118,*(undefined4 *)(this + 0x118));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(this + 0xb0));
        TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_00,(Insets *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        FUN_03c17ec4(*(undefined4 *)(this + 0x11c),*(undefined4 *)(this + 0x120),this_00 + 0x11c,
                     this_00 + 0x120);
        FUN_03c17eb4(this_00 + 0xa4,*(int *)(this + 0xa4) + 1);
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20,(vector *)(this + 200));
        LightningBolt::SetHitTargets((LightningBolt *)this_00,(Insets *)&local_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_20);
        EVar2 = this[0xa9];
        this_00[0xa8] = this[0xa8];
        this_00[0xa9] = EVar2;
        LightningBolt::SetPopAnim
                  ((LightningBolt *)this_00,(string *)(this + 0x100),(string *)(this + 0x108),
                   (string *)(this + 0x110));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_40);
        LightningBolt::SetInitialTarget((LightningBolt *)this_00,(Insets *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_01 = (RtObject *)*puVar12;
    pZVar13 = Sexy::RtObject::Cast<Zombie>(this_01);
    pGVar14 = Sexy::RtObject::Cast<GridItem>(this_01);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 200));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 200));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_20), bVar4)
    {
      pRVar18 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar18);
      if (this_01 == (RtObject *)pRVar19) {
        bVar4 = true;
        bVar22 = true;
        cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x130));
        goto joined_r0x03c1f690;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x130));
    bVar4 = false;
    bVar22 = false;
joined_r0x03c1f690:
    if (cVar5 == '\0') {
LAB_03c1f694:
      cVar5 = bVar3;
      if ((bVar4) ||
         ((pGVar14 != (GridItem *)0x0 &&
          (cVar6 = (**(code **)(*(long *)pGVar14 + 0x200))(), cVar6 == '\0')))) goto LAB_03c1f6bc;
      if (pZVar13 == (Zombie *)0x0) break;
      cVar6 = (**(code **)(*(long *)pZVar13 + 0x328))(pZVar13);
      if (cVar6 != '\0') goto LAB_03c1f6bc;
      pcVar20 = *(code **)(*(long *)pZVar13 + 0x3d0);
      psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_48,"lightningreed");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_40);
      cVar5 = (*pcVar20)(pZVar13,(Insets *)&local_20,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string(asStack_48);
      nop();
      if (cVar5 == '\x01') break;
    }
    else {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130);
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      iVar10 = FUN_03c17e54(*(undefined1 *)(lVar16 + 0x299));
      bVar4 = bVar22;
      if (iVar10 != 0) goto LAB_03c1f694;
      uVar21 = 0;
      do {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        nop();
        uVar17 = FUN_03c17f94(*(undefined8 *)(extraout_x0 + 0x28),
                              *(undefined8 *)(extraout_x0 + 0x30));
        if (uVar17 <= uVar21) goto LAB_03c1f694;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        nop();
        pRVar18 = (RtWeakPtr *)FUN_03c17fa0(*(undefined8 *)(extraout_x0_00 + 0x28),uVar21);
        pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar18);
        uVar21 = uVar21 + 1;
      } while (this_01 != (RtObject *)pRVar19);
LAB_03c1f6bc:
      if (cVar5 == '\0') break;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_50);
    local_50 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,local_20);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_20);
  } while( true );
  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  goto LAB_03c1f5e8;
}

