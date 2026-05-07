// Class: GridItemspear


/* GridItemspear::CalcRenderOrder() const */

void __thiscall GridItemspear::CalcRenderOrder(GridItemspear *this)

{
  Board::MakeRenderOrder(0x61a81,*(undefined4 *)(this + 0x1ac),*(undefined4 *)(this + 0x1a8));
  return;
}


/* non-virtual thunk to GridItemspear::CalcRenderOrder() const */

void __thiscall GridItemspear::CalcRenderOrder(GridItemspear *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::StaticClassInit() */

void GridItemspear::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AttackMatrix");
    (*pcVar3)(plVar2,asStack_10,FUN_04e49fac,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemspear");
    (*pcVar3)(plVar2,asStack_10,FUN_04e48920,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemspear::StaticGetClass() */

long * GridItemspear::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemspear",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemspear::GetClass() const */

long * GridItemspear::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemspear",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::onAnimation(std::string const&) */

void __thiscall GridItemspear::onAnimation(GridItemspear *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"02");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"2_2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    (**(code **)(*(long *)this + 0x2a8))(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemspear::GridItemspear() */

void __thiscall GridItemspear::GridItemspear(GridItemspear *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069df3a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemspear_069df660;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* GridItemspear::StaticNew() */

GridItemspear * GridItemspear::StaticNew(void)

{
  GridItemspear *this;
  
  this = ::operator_new(0x1d0);
  GridItemspear(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::setState(GridItemspearState) */

void __thiscall GridItemspear::setState(GridItemspear *this,int param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1b0) = param_2;
  if ((param_2 == 1) || (param_2 == 4)) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"02");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimation");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemspear::~GridItemspear() */

void __thiscall GridItemspear::~GridItemspear(GridItemspear *this)

{
  *(undefined ***)this = &PTR_GetClass_069df3a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemspear_069df660;
  std::vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>>::~vector
            ((vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>> *)
             (this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemspear::~GridItemspear() */

void __thiscall GridItemspear::~GridItemspear(GridItemspear *this)

{
  ~GridItemspear(this + -0x10);
  return;
}


/* GridItemspear::~GridItemspear() */

void __thiscall GridItemspear::~GridItemspear(GridItemspear *this)

{
  ~GridItemspear(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemspear::~GridItemspear() */

void __thiscall GridItemspear::~GridItemspear(GridItemspear *this)

{
  ~GridItemspear(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::causeDamage(GridItemspear::AttackMatrix&) */

void __thiscall GridItemspear::causeDamage(GridItemspear *this,AttackMatrix *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  RtMixedPtrBase *this_00;
  ulong uVar5;
  undefined8 *puVar6;
  Zombie *this_01;
  RtWeakPtrBase *pRVar7;
  PlantSpartanBamboo *extraout_x0;
  long *extraout_x0_00;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar8;
  SexyVector3 *pSVar9;
  undefined4 *puVar10;
  SpartanBambooMatrixSystem *this_03;
  ulong uVar11;
  RtObject *this_04;
  undefined8 uVar12;
  PlantSpartanBamboo *this_05;
  DamageInfo *pDVar13;
  undefined8 local_110;
  undefined8 local_108;
  string asStack_100 [8];
  RtWeakPtr aRStack_f8 [8];
  Insets local_f0 [16];
  Point aPStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 uStack_64;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetProps<GridItemspearrainProps>();
  uVar11 = 0;
                    /* WARNING: Load size is inaccurate */
  pDVar13._0_4_ = *(DamageInfo **)(param_1 + 8);
  Sexy::Point::Point(aPStack_e0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
  DamageInfo::DamageInfo(pDVar13._0_4_,local_68,uStack_64,aDStack_c8,aPStack_e0,0);
  Sexy::Insets::Insets(local_f0);
  Sexy::Insets::Insets
            ((Insets *)&local_68,*(int *)(this + 0x1a8) + -1,*(int *)(this + 0x1ac) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_e0);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(aPStack_e0,uVar3,local_f0);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = FUN_04e43a00(uVar12,*(undefined8 *)(param_1 + 0x20));
  if (lVar4 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_04e43a18(uVar12,uVar11);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        pRVar7 = (RtWeakPtrBase *)FUN_04e43a18(*(undefined8 *)(param_1 + 0x18),uVar11);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_68,pRVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        nop();
        if (extraout_x0 != (PlantSpartanBamboo *)0x0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          this_05 = extraout_x0;
          goto LAB_04e497b8;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      }
      uVar11 = uVar11 + 1;
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = FUN_04e43a00(uVar12,*(undefined8 *)(param_1 + 0x20));
    } while (uVar11 < uVar5);
  }
  this_05 = (PlantSpartanBamboo *)0x0;
LAB_04e497b8:
  local_110 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aPStack_e0);
  local_108 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aPStack_e0);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_110,(__normal_iterator *)&local_108);
  if (bVar2) {
    do {
      puVar6 = (undefined8 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
      this_04 = (RtObject *)*puVar6;
      DamageInfo::DamageInfo((DamageInfo *)&local_68,aDStack_c8);
      if ((this_05 != (PlantSpartanBamboo *)0x0) &&
         (cVar1 = PlantSpartanBamboo::isSpecialTarget(this_05,(BoardEntity *)this_04), cVar1 != '\0'
         )) {
        local_60 = local_60 * 44.0;
      }
      if (this_04 != (RtObject *)0x0) {
        bVar2 = Sexy::RtObject::IsA<Zombie>(this_04);
        if (bVar2) {
          this_01 = Sexy::RtObject::Cast<Zombie>(this_04);
          if (this_01 != (Zombie *)0x0) {
            if ((this_05 != (PlantSpartanBamboo *)0x0) &&
               (cVar1 = PlantSpartanBamboo::canKill(this_05,this_01), cVar1 != '\0')) {
              local_60 = (float)FUN_04e439d4(*(undefined4 *)(this_01 + 0x280));
            }
            uVar3 = operator|(1,8);
            cVar1 = Zombie::MatchesAny(this_01,uVar3);
            if (((cVar1 == '\0') && (cVar1 = Zombie::IsFlying(this_01), cVar1 == '\0')) &&
               (cVar1 = RealObject::IsOnTeam(this_01,1), cVar1 == '\0')) {
              (**(code **)(*(long *)this_01 + 0x110))(this_01,(FastCurve *)&local_68);
              std::string::string(asStack_100,"POPANIM_EFFECTS_SPARTANBAMBOO_EFFECT");
              nop();
              this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
              GetPAMByName(asStack_100);
              pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_f8);
              Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar8,(RtClass *)0x0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
              Effect_PopAnim::SetCentered(this_02,true);
              pSVar9 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this_01);
              StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,pSVar9,-1);
              FUN_04e43900(this_02 + 0x1c,0x61e69);
              std::string::string((string *)aRStack_f8,"sj02");
              Effect_PopAnim::PlaySingleAnimation(this_02,aRStack_f8,2);
              std::string::~string((string *)aRStack_f8);
              nop();
              puVar10 = (undefined4 *)Zombie::GetFlag(this_01);
              bVar2 = TestFlag<VaseFlags>(*puVar10,4);
              if (bVar2) {
                this_03 = Board::GetGameSubSystem<SpartanBambooMatrixSystem>
                                    (*(Board **)(gLawnApp + 0x9f0));
                SpartanBambooMatrixSystem::OnKillZombie(this_03,*(int *)param_1,this_01);
              }
              std::string::~string(asStack_100);
            }
          }
        }
        else {
          bVar2 = Sexy::RtObject::IsA<GridItem>(this_04);
          if (bVar2) {
            nop();
            cVar1 = (**(code **)(*extraout_x0_00 + 0x200))();
            if (cVar1 != '\0') {
              (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,(FastCurve *)&local_68);
              if (*(code **)(*extraout_x0_00 + 0x1d8) != GridItem::GetHitpoints) {
                (**(code **)(*extraout_x0_00 + 0x1d8))(extraout_x0_00);
              }
            }
          }
        }
      }
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_110,(__normal_iterator *)&local_108)
      ;
    } while (bVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_e0);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::SetPlantMatrix(int, float, float, int, std::vector<Sexy::RtWeakPtr<Plant>,
   std::allocator<Sexy::RtWeakPtr<Plant> > >) */

void __thiscall
GridItemspear::SetPlantMatrix
          (undefined4 param_2,undefined4 param_3,GridItemspear *this,undefined4 param_1,
          undefined4 param_4,vector *param_6)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AttackMatrix::AttackMatrix((AttackMatrix *)&local_38);
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_28 = PVZ_T();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::operator=
            (avStack_20,param_6);
  std::vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>>::push_back
            ((vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>> *)
             (this + 0x1b8),(AttackMatrix *)&local_38);
  (**(code **)(*(long *)this + 0x2a8))(this,1);
  AttackMatrix::~AttackMatrix((AttackMatrix *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::onGridItemInitialize() */

void __thiscall GridItemspear::onGridItemInitialize(GridItemspear *this)

{
  long lVar1;
  BoardTransforms *this_00;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  *(undefined8 *)(this + 0x1a8) = local_10;
  std::vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>>::clear
            ((vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>> *)
             (this + 0x1b8));
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x2a8))(this,0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspear::onUpdate() */

void __thiscall GridItemspear::onUpdate(GridItemspear *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  long lVar3;
  AttackMatrix *pAVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1b0) != 2) {
LAB_04e4e35c:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar2) {
        lVar3 = FUN_04e43a4c(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
        if (lVar3 == 0) {
          (**(code **)(*(long *)this + 0x2a8))(this,4);
          (**(code **)(*(long *)this + 0x48))(this);
        }
        goto LAB_04e4e35c;
      }
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      fVar6 = *(float *)(lVar3 + 0x10);
      fVar5 = (float)PVZ_T();
      if (fVar6 <= fVar5) {
        pAVar4 = (AttackMatrix *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        causeDamage(this,pAVar4);
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) + *(float *)(lVar3 + 4);
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        iVar1 = *(int *)(lVar3 + 0xc);
      }
      else {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        iVar1 = *(int *)(lVar3 + 0xc);
      }
      if (iVar1 < 1) break;
      std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>>
               ::erase((vector<GridItemspear::AttackMatrix,std::allocator<GridItemspear::AttackMatrix>>
                        *)this_00,local_10);
  } while( true );
}

