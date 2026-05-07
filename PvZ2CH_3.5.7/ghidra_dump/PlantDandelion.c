// Class: PlantDandelion


/* PlantDandelion::PlantDandelion() */

void __thiscall PlantDandelion::PlantDandelion(PlantDandelion *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06803410;
  return;
}


/* PlantDandelion::StaticNew() */

PlantDandelion * PlantDandelion::StaticNew(void)

{
  PlantDandelion *this;
  
  this = ::operator_new(0x28);
  PlantDandelion(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDandelion::StaticClassInit() */

void PlantDandelion::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDandelion");
    (*pcVar2)(plVar1,asStack_10,FUN_041e0050,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDandelion::StaticGetClass() */

long * PlantDandelion::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDandelion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDandelion::GetClass() const */

long * PlantDandelion::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDandelion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDandelion::~PlantDandelion() */

void __thiscall PlantDandelion::~PlantDandelion(PlantDandelion *this)

{
  *(undefined ***)this = &PTR_GetClass_06803410;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDandelion::~PlantDandelion() */

void __thiscall PlantDandelion::~PlantDandelion(PlantDandelion *this)

{
  ~PlantDandelion(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDandelion::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantDandelion::Fire(PlantFramework *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ResourceInfo *pRVar6;
  long *plVar7;
  Zombie *pZVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  float *pfVar10;
  ulong uVar11;
  BoardEntity *this;
  PopAnimRig *pPVar12;
  DandelionBomb *pDVar13;
  RtObject *pRVar14;
  long lVar15;
  int extraout_w1;
  int extraout_w1_00;
  int iVar16;
  RealObject *pRVar17;
  float fVar18;
  float fVar19;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ResourceInfo *local_70 [4];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    pDVar13 = GameObject::Create<DandelionBomb>();
    iVar3 = FUN_041dfe78(*(undefined8 *)(param_1 + 0x10));
    bVar2 = false;
    if (iVar3 == 5) {
      fVar19 = (float)PlantFramework::Rand(param_1,1.0);
      lVar15 = FUN_041e0200(*(undefined8 *)(param_1 + 0x10));
      bVar2 = fVar19 <= *(float *)(lVar15 + 0x2d0);
    }
    DandelionBomb::CreateAnimRig(pDVar13,bVar2);
    DandelionBomb::SetPlantfood(pDVar13,false);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)&local_88);
    DandelionBomb::SetOwner(pDVar13,(RtWeakPtr<Sexy::SoundResource> *)local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    pfVar10 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       **)(param_1 + 0x10));
    EATextSquish::Vec3::Vec3((Vec3 *)local_70,*pfVar10 + 20.0,pfVar10[1] - 50.0,pfVar10[2]);
    DandelionBomb::SetPlantPos(pDVar13,(SexyVector3 *)local_70);
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_1 + 0x10));
    BoardEntity::PlaceOnBoard((SexyVector3 *)pDVar13);
    if (iVar3 == 2) {
      lVar15 = FUN_041e0200(*(undefined8 *)(param_1 + 0x10));
      iVar16 = (int)*(float *)(lVar15 + 0x2b8);
    }
    else {
      iVar16 = 1;
      if (2 < iVar3) {
        lVar15 = FUN_041e0200(*(undefined8 *)(param_1 + 0x10),1);
        iVar16 = (int)*(float *)(lVar15 + 700);
      }
    }
    FUN_041dfe80(pDVar13 + 0x110,iVar16);
    DandelionBomb::getAnimRig();
    pPVar12 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
    std::string::string((string *)local_70,"in");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_98);
    std::string::string((string *)&local_88,"onPlantFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)&local_90,(RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    PopAnimRig::PlayAndStop(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)local_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_88);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    std::string::~string((string *)local_70);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    goto LAB_041e0a68;
  }
  iVar3 = 5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
  do {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_a8);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)local_70,uVar4,0x29);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_70), bVar2) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)local_70);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a0,(RtWeakPtrBase *)&local_90);
      Sexy::RtId::~RtId((RtId *)&local_90);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_88);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_88);
      local_98 = std::
                 find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Sexy::RtWeakPtr<Zombie>>
                           (uVar4,uVar5,aRStack_a0);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_88);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90);
      if (!bVar2) {
        pRVar17 = *(RealObject **)(param_1 + 0x10);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
        cVar1 = RealObject::IsOnOpposingTeam(pRVar17,(RealObject *)pRVar6);
        if (cVar1 != '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
          cVar1 = (**(code **)(*plVar7 + 0x328))();
          if (cVar1 == '\0') {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
            cVar1 = (**(code **)(*plVar7 + 0x330))();
            if (cVar1 == '\0') {
              pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
              cVar1 = Zombie::IsJumping(pZVar8);
              if (cVar1 == '\0') {
                pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                cVar1 = Zombie::IsInvisible(pZVar8);
                if (cVar1 == '\0') {
                  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_a0);
                  if (bVar2) {
                    pRVar14 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                    bVar2 = Sexy::RtObject::IsA<Zomboss>(pRVar14);
                    if (bVar2) {
                      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                      cVar1 = Zombie::IsFlying(pZVar8);
                      if (cVar1 != '\0') goto LAB_041e0304;
                    }
                  }
                  p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                  pfVar10 = (float *)std::
                                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::_M_leftmost(p_Var9);
                  fVar19 = *pfVar10;
                  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_a8);
                  if (cVar1 != '\0') {
                    p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
                    pfVar10 = (float *)std::
                                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       ::_M_leftmost(p_Var9);
                    if (*pfVar10 <= fVar19) goto LAB_041e0304;
                  }
                  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a8,(RtWeakPtr *)aRStack_a0);
                }
              }
            }
          }
        }
      }
LAB_041e0304:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)local_70,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_70);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_a8);
    if (cVar1 != '\0') {
      local_70[0] = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_a8);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88,
                 (BoardEntity **)local_70);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar11 = FUN_041dfe90(local_88,local_80);
  if (uVar11 < 5) {
    iVar3 = 0;
    do {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_b0);
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)local_70,uVar4,0x2f);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_70), bVar2)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)local_70);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_a8,(RtWeakPtrBase *)&local_90);
        Sexy::RtId::~RtId((RtId *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a0,(RtWeakPtrBase *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_88);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_88);
        local_98 = std::
                   find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Sexy::RtWeakPtr<GridItem>>
                             (uVar4,uVar5,aRStack_a0);
        local_90 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_88);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90)
        ;
        if (!bVar2) {
          pRVar17 = *(RealObject **)(param_1 + 0x10);
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
          cVar1 = RealObject::IsOnOpposingTeam(pRVar17,(RealObject *)pRVar6);
          if (cVar1 != '\0') {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
            cVar1 = (**(code **)(*plVar7 + 0x200))();
            if (cVar1 != '\0') {
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_a0);
              if (bVar2) {
                pRVar14 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                bVar2 = Sexy::RtObject::IsA<GridItemFlame>(pRVar14);
                if (bVar2) goto LAB_041e04c8;
              }
              this = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
              cVar1 = BoardEntity::IsOnScreen(this);
              if (cVar1 != '\0') {
                cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_b0);
                if (cVar1 != '\0') {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
                  GridItem::GetGridLocation();
                  iVar16 = (int)local_98;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                  GridItem::GetGridLocation();
                  if ((int)local_90 <= iVar16) goto LAB_041e04c8;
                }
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)aRStack_a0);
              }
            }
          }
        }
LAB_041e04c8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8)
        ;
        Sexy::RtDbTable::Iterator::operator++((Iterator *)local_70,extraout_w1_00);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_70);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_b0);
      if (cVar1 != '\0') {
        local_70[0] = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_b0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88,
                   (BoardEntity **)local_70);
      }
      iVar3 = iVar3 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
    } while (iVar3 != 5 - (int)uVar11);
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    iVar3 = FUN_041dfe90(local_88,local_80);
    if (0 < iVar3) goto LAB_041e065c;
  }
  else {
    iVar3 = 5;
LAB_041e065c:
    uVar11 = 0;
    do {
      pDVar13 = GameObject::Create<DandelionBomb>();
      DandelionBomb::CreateAnimRig(pDVar13,false);
      DandelionBomb::SetPlantfood(pDVar13,true);
      if (cVar1 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)&local_90);
        DandelionBomb::SetOwner(pDVar13,(Iterator *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        fVar19 = (float)PlantFramework::Rand(param_1,20.0);
      }
      else {
        fVar19 = 20.0;
        FUN_041dfea4(pDVar13 + 0x139);
        FUN_041dfe88(pDVar13 + 0x13c,uVar11 & 0xffffffff);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)&local_90);
        DandelionBomb::SetOwner(pDVar13,(Iterator *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      }
      fVar18 = (float)PlantFramework::Rand(param_1,20.0);
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         **)(param_1 + 0x10));
      EATextSquish::Vec3::Vec3
                ((Vec3 *)local_70,fVar19 + *pfVar10,(pfVar10[1] + -30.0) - fVar18,pfVar10[2]);
      DandelionBomb::SetPlantPos(pDVar13,(SexyVector3 *)local_70);
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_1 + 0x10));
      BoardEntity::PlaceOnBoard((SexyVector3 *)pDVar13);
      if (cVar1 == '\0') {
        FUN_041dfe9c(local_88,uVar11);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)&local_90);
        DandelionBomb::SetTarget(pDVar13,(Iterator *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      }
      uVar11 = uVar11 + 1;
      DandelionBomb::getAnimRig();
      pPVar12 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
      std::string::string((string *)local_70,"in_avatar");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_a0);
      std::string::string((string *)&local_90,"onPlantFinished");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_98,(RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      PopAnimRig::PlayAndStop(pPVar12,(Iterator *)local_70,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_90);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
      std::string::~string((string *)local_70);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
    } while ((int)uVar11 < iVar3);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88);
LAB_041e0a68:
  pRVar17 = *(RealObject **)(param_1 + 0x10);
  std::string::string((string *)local_70,"Play_CabbagePult_Throw");
  RealObject::PlayPositionalSound(pRVar17,(string *)local_70,0.0);
  std::string::~string((string *)local_70);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

