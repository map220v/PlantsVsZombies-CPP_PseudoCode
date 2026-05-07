// Class: PlantFireShroom


/* PlantFireShroom::~PlantFireShroom() */

void __thiscall PlantFireShroom::~PlantFireShroom(PlantFireShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680d410;
  PlantIceShroom::~PlantIceShroom((PlantIceShroom *)this);
  return;
}


/* PlantFireShroom::~PlantFireShroom() */

void __thiscall PlantFireShroom::~PlantFireShroom(PlantFireShroom *this)

{
  ~PlantFireShroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::StaticClassInit() */

void PlantFireShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFireShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_0421873c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireShroom::StaticGetClass() */

long * PlantFireShroom::StaticGetClass(void)

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
  uVar2 = PlantIceShroom::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFireShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFireShroom::GetClass() const */

long * PlantFireShroom::GetClass(void)

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
  uVar2 = PlantIceShroom::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFireShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFireShroom::PlantFireShroom() */

void __thiscall PlantFireShroom::PlantFireShroom(PlantFireShroom *this)

{
  PlantIceShroom::PlantIceShroom((PlantIceShroom *)this);
  this[0x31] = (PlantFireShroom)0x0;
  *(undefined ***)this = &PTR_GetClass_0680d410;
  return;
}


/* PlantFireShroom::StaticNew() */

PlantFireShroom * PlantFireShroom::StaticNew(void)

{
  PlantFireShroom *this;
  
  this = ::operator_new(0x38);
  PlantFireShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::GetTheLeastAttactDuration() */

void __thiscall PlantFireShroom::GetTheLeastAttactDuration(PlantFireShroom *this)

{
  PopAnimRig *this_00;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"attack_stage1");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::FindTargetAndFire(PlantWeapon) */

void PlantFireShroom::FindTargetAndFire(PlantIceShroom *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    (**(code **)(*plVar5 + 0x88))();
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    lVar4 = FUN_04218524(*(undefined8 *)(lVar4 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    lVar7 = *(long *)(param_1 + 0x10);
    fVar8 = (float)FUN_04218428(*(undefined4 *)(lVar7 + 0x3cc));
    local_1c = fVar8 * *(float *)(lVar4 + 0x24);
    local_18 = (float)(**(code **)(*(long *)param_1 + 0x4c8))(param_1);
    pfVar6 = eastl::max_alt<float>(&local_1c,&local_18);
    fVar9 = *pfVar6;
    local_14 = fVar8 * *(float *)(lVar4 + 0x28);
    local_10[0] = (**(code **)(*(long *)param_1 + 0x4c8))(param_1);
    pfVar6 = eastl::max_alt<float>(&local_14,(float *)local_10);
    Sexy::FastCurve::SetOutRange((FastCurve *)(lVar7 + 0xbc),fVar9,*pfVar6);
    uVar3 = 0;
  }
  else {
    cVar1 = PlantIceShroom::isFullyGrown(param_1);
    if (cVar1 != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      iVar2 = FUN_04218434(uVar3);
      if (4 < iVar2) {
        lVar4 = FUN_04219518(uVar3);
        fVar9 = *(float *)(lVar4 + 0x310);
        fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
        if (fVar8 < fVar9) {
          lVar4 = FUN_042195f8(*(undefined8 *)(param_1 + 0x10));
          FUN_04218528(lVar4 + 0x3b9);
          param_1[0x31] = (PlantIceShroom)0x1;
        }
      }
    }
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::DoFallingStone(int) */

void __thiscall PlantFireShroom::DoFallingStone(PlantFireShroom *this,int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *extraout_x0;
  PVZ2UIButton **ppPVar7;
  long *extraout_x0_00;
  ulong uVar8;
  long lVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar10;
  Board *this_01;
  FallingStoneEffectAnim *this_02;
  ResourceInfo *pRVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  RtMixedPtrBase aRStack_a0 [8];
  RtWeakPtrBase aRStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  Insets aIStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined1 local_50 [16];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  Sexy::Insets::Insets
            (aIStack_78,iVar1 * iVar4 + 200,iVar5 * *(int *)(*(long *)(this + 0x10) + 0x110) + 0xa0,
             (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar1) * iVar4,iVar5);
  uVar6 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_68,uVar6,aIStack_78,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (!bVar2) break;
    ppPVar7 = (PVZ2UIButton **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)*ppPVar7);
    if (bVar2) {
      nop();
      cVar3 = (**(code **)(*extraout_x0 + 0x210))();
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0);
        if (cVar3 != '\0') goto LAB_0421aa80;
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*ppPVar7);
      if (bVar2) {
        nop();
        pcVar12 = *(code **)(*extraout_x0_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)local_80);
        cVar3 = (*pcVar12)(extraout_x0_00,(RtWeakPtr<Sexy::SoundResource> *)local_50,0);
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*extraout_x0_00 + 0x328))(extraout_x0_00);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*extraout_x0_00 + 0x330))(extraout_x0_00);
            if (cVar3 == '\0') {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
              goto LAB_0421aa80;
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
      }
      else {
LAB_0421aa80:
        local_80[0] = BoardEntity::CalcColumnPosition((BoardEntity *)*ppPVar7);
        auVar17 = std::make_pair<int&,PVZ2UIButton*&>((int *)local_80,ppPVar7);
        local_50 = auVar17;
        std::map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>
        ::insert<std::pair<int,BoardEntity*>,void>
                  ((map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>
                    *)amStack_38,(pair *)local_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  cVar3 = std::
          map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>::
          empty((map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>
                 *)amStack_38);
  if (cVar3 != '\0') goto LAB_0421ab38;
  FUN_04219518(*(undefined8 *)(this + 0x10));
  std::string::string((string *)local_50,"POPANIM_EFFECTS_FIRESHROOM_BULLET");
  GetPAMByName((string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  uVar8 = std::
          map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>::
          begin((map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>
                 *)amStack_38);
  local_50._0_8_ = uVar8;
  lVar9 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_50);
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(lVar9 + 8);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
  if ((cVar3 != '\0') &&
     (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0)) {
    ToolPacketData::GetProps();
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    if (cVar3 != '\0') {
      fVar14 = 0.0;
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this_00);
      fVar15 = pfVar10[1];
      fVar16 = *pfVar10;
      local_50._0_8_ = local_50._0_8_ & 0xffffffff00000000;
      pfVar10 = eastl::max_alt<float>((float *)local_50,pfVar10 + 2);
      fVar13 = *pfVar10;
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      if (this_01[0x119] != (Board)0x0) {
        fVar14 = (float)Board::calculateRoofOffsetZ(fVar16);
        this_01 = *(Board **)(gLawnApp + 0x9f0);
      }
      this_02 = Board::AddEffect<FallingStoneEffectAnim>(this_01);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_02,(PopAnim *)pRVar11,(RtClass *)0x0);
      Effect_PopAnim::SetCentered((Effect_PopAnim *)this_02,true);
      EATextSquish::Vec3::Vec3((Vec3 *)local_50,fVar16 + 10.0,(fVar15 - fVar13) - 30.0,fVar14);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)local_50,-1);
      uVar6 = SharkMinion::getRow((SharkMinion *)this_00);
      uVar6 = Board::MakeRenderOrder(0x64960,uVar6,0);
      FUN_04218408(this_02 + 0x1c,uVar6);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_50);
      if (param_1 == 0) {
        std::string::string((string *)local_80,"ANIM_STAGE4_IN");
        AnimationSequence::AddSingleAnimation
                  ((string *)local_50,(RtWeakPtr<Sexy::SoundResource> *)local_80,0);
        std::string::~string((string *)local_80);
        nop();
        std::string::string((string *)local_80,"ANIM_STAGE4");
LAB_0421ae30:
        AnimationSequence::AddSingleAnimation
                  ((string *)local_50,(RtWeakPtr<Sexy::SoundResource> *)local_80,0);
        std::string::~string((string *)local_80);
        nop();
      }
      else if (param_1 == 1) {
        std::string::string((string *)local_80,"ANIM_STAGE5_IN");
        AnimationSequence::AddSingleAnimation
                  ((string *)local_50,(RtWeakPtr<Sexy::SoundResource> *)local_80,0);
        std::string::~string((string *)local_80);
        nop();
        std::string::string((string *)local_80,"ANIM_STAGE5");
        goto LAB_0421ae30;
      }
      Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this_02,(AnimationSequence *)local_50)
      ;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_88,aRStack_98);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_80,(RtWeakPtrBase *)&local_90);
      FallingStoneEffectAnim::SetEntity
                (this_02,(RtWeakPtr<Sexy::SoundResource> *)&local_88,
                 (RtWeakPtr<Sexy::SoundResource> *)local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      AnimationSequence::~AnimationSequence((AnimationSequence *)local_50);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
LAB_0421ab38:
  std::map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>::~map
            ((map<int,BoardEntity*,std::less<int>,std::allocator<std::pair<int_const,BoardEntity*>>>
              *)amStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::NormalApplyPlantFood() */

void __thiscall PlantFireShroom::NormalApplyPlantFood(PlantFireShroom *this)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  GridItemFireWall *this_00;
  ulong uVar9;
  int iVar10;
  Board *this_01;
  float fVar11;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  local_9c = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1;
  if (-1 < local_9c) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
      Sexy::Insets::Insets
                ((Insets *)local_90,local_9c,0,1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2,
                 (Insets *)local_90);
      Sexy::Insets::Insets
                ((Insets *)local_90,local_9c,0,1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      EntityFinder::GetEntitiesInGridSquares(avStack_50,4,(Insets *)local_90);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_50);
      local_90[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_50);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_98,(__normal_iterator *)local_90), bVar2
            ) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        bVar2 = Sexy::RtObject::IsA<GridItemFireWall>((RtObject *)*puVar6);
        if (bVar2) goto LAB_0421b030;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
      }
      cVar3 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
      if (cVar3 != '\0') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_80,&local_9c);
      }
      uVar4 = FUN_04218498(local_68,local_60);
      local_90[0] = CONCAT44(local_90[0]._4_4_,uVar4);
      piVar7 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_38,(int *)local_90);
      *piVar7 = local_9c;
LAB_0421b030:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
      local_9c = local_9c + -1;
    } while (-1 < local_9c);
  }
  cVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     amStack_38);
  if (cVar3 == '\0') {
    std::
    map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
    ::rbegin((map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              *)amStack_38);
    lVar8 = std::
            reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::operator->((reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)avStack_50);
    iVar5 = *(int *)(lVar8 + 4);
    std::
    map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
    ::rbegin((map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              *)amStack_38);
    piVar7 = (int *)std::
                    reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                    ::operator->((reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                                  *)avStack_50);
    if (*piVar7 == 0) {
      iVar5 = PlantFramework::Rand((PlantFramework *)this);
      uVar9 = FUN_04218474(local_80,local_78);
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = (ulong)(long)iVar5 / uVar9;
      }
      piVar7 = (int *)FUN_042184a4(local_80,(long)iVar5 - uVar1 * uVar9);
      iVar5 = *piVar7;
    }
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(this_01 + 0xfc)) {
      iVar10 = 0;
      do {
        std::string::string((string *)avStack_50,"gridFireWall");
        Board::AddGridItem(this_01,(string *)avStack_50,iVar5,iVar10,1);
        nop();
        std::string::~string((string *)avStack_50);
        nop();
        if (this_00 != (GridItemFireWall *)0x0) {
          bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          GridItemFireWall::SetAvatar(this_00,bVar2);
          fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
          SnakeNode::setCurrentStep((SnakeNode *)this_00,fVar11);
        }
        iVar10 = iVar10 + 1;
        this_01 = *(Board **)(gLawnApp + 0x9f0);
      } while (iVar10 < *(int *)(this_01 + 0xfc));
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantFireShroom::Initialize() */

void __thiscall PlantFireShroom::Initialize(PlantFireShroom *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  Plant *pPVar5;
  float fVar6;
  
  PlantIceShroom::Initialize((PlantIceShroom *)this);
  lVar3 = FUN_04219518(*(undefined8 *)(this + 0x10));
  cVar1 = std::vector<IceShroomProps::AdvanceInfo,std::allocator<IceShroomProps::AdvanceInfo>>::
          empty((vector<IceShroomProps::AdvanceInfo,std::allocator<IceShroomProps::AdvanceInfo>> *)
                (lVar3 + 0x2d0));
  if (cVar1 != '\0') {
    return;
  }
  pPVar5 = *(Plant **)(this + 0x10);
  iVar2 = FUN_04218434(pPVar5);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    lVar3 = FUN_04219518(pPVar5);
    uVar4 = FUN_04218484(*(undefined8 *)(lVar3 + 0x2d0),*(undefined8 *)(lVar3 + 0x2d8));
    if ((ulong)(long)iVar2 < uVar4) {
      pPVar5 = *(Plant **)(this + 0x10);
      fVar6 = (float)PVZ_EOT();
      lVar3 = FUN_04219518(pPVar5);
      lVar3 = FUN_04218490(*(undefined8 *)(lVar3 + 0x2d0),(long)iVar2);
      Plant::SetAttackUpValue(pPVar5,true,fVar6,*(float *)(lVar3 + 4));
      return;
    }
    pPVar5 = *(Plant **)(this + 0x10);
  }
  fVar6 = (float)PVZ_EOT();
  Plant::SetAttackUpValue(pPVar5,true,fVar6,0.0);
  return;
}


/* PlantFireShroom::CancelPlantfood() */

void __thiscall PlantFireShroom::CancelPlantfood(PlantFireShroom *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  NormalApplyPlantFood(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::ApplyPlantfood() */

void __thiscall PlantFireShroom::ApplyPlantfood(PlantFireShroom *this)

{
  char cVar1;
  PlantFireShroom PVar2;
  PlantAnimRig_IceShroom *extraout_x0;
  undefined4 uVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  cVar1 = PlantIceShroom::isFullyGrown((PlantIceShroom *)this);
  if (cVar1 == '\0') {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar3;
    PVar2 = (PlantFireShroom)PlantIceShroom::getMaxGrowthStage((PlantIceShroom *)this);
    this[0x30] = PVar2;
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlantAnimRig_IceShroom::SetGrowthStage(extraout_x0,3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireShroom::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantFireShroom::Fire
          (PlantFireShroom *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    cVar1 = LawnApp::IsInModule(gLawnApp,1);
    if ((cVar1 == '\0') &&
       (cVar1 = PlantIceShroom::isFullyGrown((PlantIceShroom *)this), cVar1 != '\0')) {
      if (this[0x31] != (PlantFireShroom)0x0) {
        DoFallingStone(this,1);
        this[0x31] = (PlantFireShroom)0x0;
      }
      uVar2 = 0;
      DoFallingStone(this,0);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      uVar2 = PlantIceShroom::Fire(this,aRStack_10,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

