// Class: PlantAkee


/* PlantAkee::PlantAkee() */

void __thiscall PlantAkee::PlantAkee(PlantAkee *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e5050;
  return;
}


/* PlantAkee::StaticNew() */

PlantAkee * PlantAkee::StaticNew(void)

{
  PlantAkee *this;
  
  this = ::operator_new(0x28);
  PlantAkee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::StaticClassInit() */

void PlantAkee::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAkee");
    (*pcVar2)(plVar1,asStack_10,FUN_0410eee4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAkee::StaticGetClass() */

long * PlantAkee::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAkee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAkee::GetClass() const */

long * PlantAkee::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAkee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAkee::~PlantAkee() */

void __thiscall PlantAkee::~PlantAkee(PlantAkee *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5050;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAkee::~PlantAkee() */

void __thiscall PlantAkee::~PlantAkee(PlantAkee *this)

{
  ~PlantAkee(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::LaunchProjectileAt(AkeeProjectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantAkee::LaunchProjectileAt
          (PlantAkee *this,AkeeProjectile *param_1,SexyVector3 *param_2,float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = FUN_0410fcd4(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar2 + 0x2c0);
  lVar2 = FUN_0410fcd4(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar2 + 0x2c0));
  fVar3 = fVar3 + fVar5;
  lVar2 = FUN_0410fcd4(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar2 + 700);
  lVar2 = FUN_0410fcd4(*(undefined8 *)(this + 0x10));
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar2 + 700));
  fVar5 = fVar5 + fVar4;
  BoardEntity::CalcGridPosition();
  AkeeProjectile::SetInitialLaunchValues(param_1,fVar3,fVar5,local_c);
  Projectile::LaunchAt((Projectile *)param_1,param_2,fVar3,fVar5);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::findLeftmostTargetType(BoardEntityTypeFlag, int) */

void __thiscall PlantAkee::findLeftmostTargetType(PlantAkee *this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  code *pcVar10;
  RealObject *this_00;
  RealObject *pRVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  pRVar11 = (RealObject *)0x0;
  Sexy::Insets::Insets(aIStack_30,0,param_3,iVar4,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar13 = 1e+06;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar11);
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_00 = (RealObject *)*puVar7;
    cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
    if (cVar2 != '\0') {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar12 = (float)FUN_0410ec90(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                   *(undefined4 *)(this_00 + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar12);
      if (iVar5 < iVar4) {
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_00);
        if (pZVar8 == (Zombie *)0x0) {
LAB_041101b8:
          pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_00);
          if ((((pGVar9 == (GridItem *)0x0) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar9,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar9 + 0x208))(pGVar9), cVar2 != '\0')))) ||
              ((cVar2 = RealObject::IsOnTeam(pGVar9,2), cVar2 != '\0' &&
               (cVar2 = (**(code **)(*(long *)pGVar9 + 0x200))(pGVar9), cVar2 != '\0')))) &&
             (fVar12 = (float)FUN_0410ec90(*(undefined4 *)(this_00 + 0x18),
                                           *(undefined4 *)(this_00 + 0x1c),
                                           *(undefined4 *)(this_00 + 0x20)), fVar12 < fVar13)) {
            pRVar11 = this_00;
            fVar13 = fVar12;
          }
        }
        else {
          uVar6 = operator|(1,8);
          cVar3 = Zombie::MatchesAny(pZVar8,uVar6);
          if (cVar3 == '\0') {
            pcVar10 = *(code **)(*(long *)pZVar8 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar3 = (*pcVar10)(pZVar8,aRStack_38,0);
            if ((cVar3 != '\0') && (cVar3 = Zombie::HasCondition(pZVar8,0x27), cVar3 == '\0')) {
              cVar2 = Zombie::HasCondition(pZVar8,0x25);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if (cVar2 == '\0') goto LAB_041101b8;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::findBestTargetInRow(int) */

void PlantAkee::findBestTargetInRow(int param_1)

{
  long lVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findLeftmostTargetType((PlantAkee *)param_1,2,in_w1);
  if ((lVar1 == 0) && (lVar1 = findLeftmostTargetType((PlantAkee *)param_1,4,in_w1), lVar1 == 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantAkee::Fire(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
                    PlantAkee *param_4,RtWeakPtrBase *param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  char cVar2;
  int iVar3;
  AkeeProjectile *extraout_x0;
  ResourceInfo *pRVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  AkeeProjectile *pAVar8;
  Plant *pPVar9;
  code *pcVar10;
  float fVar11;
  RtMixedPtrBase aRStack_58 [8];
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 == '\0') {
    pPVar9 = *(Plant **)(param_4 + 0x10);
    iVar3 = FUN_0410ec58(pPVar9);
    if (2 < iVar3) {
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)&local_38);
      lVar7 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
      ProbabilitySet<bool>::AddItem((ProbabilitySet<bool> *)&local_38,true,*(int *)(lVar7 + 0x2b8));
      lVar7 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
      ProbabilitySet<bool>::AddItem
                ((ProbabilitySet<bool> *)&local_38,false,100 - *(int *)(lVar7 + 0x2b8));
      cVar2 = ProbabilitySet<bool>::PickItem((ProbabilitySet<bool> *)&local_38);
      if (cVar2 != '\0') {
        *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 3;
      }
      ProbabilitySet<bool>::~ProbabilitySet((ProbabilitySet<bool> *)&local_38);
      pPVar9 = *(Plant **)(param_4 + 0x10);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_38,param_5);
    Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_38,param_6,param_7);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
    PlantFramework::FindTargetZombie(aRStack_58,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_38,param_4,param_7);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    DVec3::DVec3((DVec3 *)&local_48);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 == '\0') {
      if (pRVar4 == (ResourceInfo *)0x0) {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_44 = pfVar5[1];
        local_48 = *pfVar5 + 600.0;
        local_40 = 0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_38);
        local_48 = (float)local_50;
        local_40 = 0x41c80000;
        local_44 = (float)local_4c;
      }
    }
    else {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      pcVar10 = *(code **)(*plVar6 + 0x3b0);
      lVar7 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
      local_38 = (*pcVar10)(*(undefined4 *)(lVar7 + 700),plVar6);
      local_34 = param_2;
      local_30 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,(SexyVector3 *)&local_38);
      fVar1 = local_48;
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      fVar11 = *pfVar5;
      if (fVar1 < fVar11) {
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_48 = fVar11 + (float)iVar3 * 0.5;
      }
    }
    LaunchProjectileAt(param_4,extraout_x0,(SexyVector3 *)&local_48,0.1,0.1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    pAVar8 = extraout_x0;
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pAVar8 = (AkeeProjectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pAVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&, int) */

void PlantAkee::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,RtWeakPtr *param_6,int param_7)

{
  char cVar1;
  AkeeProjectile *this;
  undefined8 uVar2;
  long lVar3;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar4 = *(Plant **)(param_4 + 0x10);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(pPVar4 + 0x150) = 1;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  Plant::Fire(pPVar4,aRStack_10,param_7,1);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = FUN_0410ec24(*(undefined8 *)(this + 0xe0));
  uVar2 = operator|(uVar2,0x2000);
  FUN_0410ec28(this + 0xe0,uVar2);
  lVar3 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
  fVar7 = *(float *)(lVar3 + 0x2c0);
  lVar3 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
  fVar5 = (float)PlantFramework::Rand(param_4,*(float *)(lVar3 + 0x2c0));
  fVar5 = fVar5 + fVar7;
  lVar3 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
  fVar6 = *(float *)(lVar3 + 700);
  lVar3 = FUN_0410fcd4(*(undefined8 *)(param_4 + 0x10));
  fVar7 = (float)PlantFramework::Rand(param_4,*(float *)(lVar3 + 700) * 0.15);
  fVar7 = fVar7 + fVar6;
  AkeeProjectile::SetInitialLaunchValues(this,fVar5,fVar7,param_7);
  Projectile::LaunchAt((Projectile *)this,(SexyVector3 *)&local_20,fVar5,fVar7);
  Projectile::SetTarget((Projectile *)this,param_6);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  if (cVar1 != '\0') {
    AkeeProjectile::RollProjectileStyle(this);
  }
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAkee::DoSpecial(int) */

void PlantAkee::DoSpecial(int param_1)

{
  bool bVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar3;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar4 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar2; iVar4 = iVar4 + 1) {
    findBestTargetInRow(param_1);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (bVar1) {
      this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this);
      local_18 = *puVar3;
      local_10 = *(undefined4 *)(puVar3 + 1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
      launchSpecialProjectile
                ((undefined4)local_18,local_18._4_4_,local_10,param_1,aRStack_20,aRStack_28,iVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

