// Class: PlantSmallChestnut


/* PlantSmallChestnut::CalcRenderOrder() */

void __thiscall PlantSmallChestnut::CalcRenderOrder(PlantSmallChestnut *this)

{
  Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::PlayAttackAnimation() */

void __thiscall PlantSmallChestnut::PlayAttackAnimation(PlantSmallChestnut *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Chestnut_Hip");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::StaticClassInit() */

void PlantSmallChestnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSmallChestnut");
    (*pcVar2)(plVar1,asStack_10,FUN_040c7274,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallChestnut::StaticGetClass() */

long * PlantSmallChestnut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSmallChestnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSmallChestnut::GetClass() const */

long * PlantSmallChestnut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSmallChestnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSmallChestnut::SetPositioinOffset(Sexy::SexyVector2 const&) */

void __thiscall
PlantSmallChestnut::SetPositioinOffset(PlantSmallChestnut *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 0x38) = *(undefined8 *)param_1;
  return;
}


/* PlantSmallChestnut::SetDirectionLeft(bool) */

void __thiscall PlantSmallChestnut::SetDirectionLeft(PlantSmallChestnut *this,bool param_1)

{
  this[0x28] = (PlantSmallChestnut)param_1;
  *(bool *)(*(long *)(this + 0x10) + 0x14c) = param_1;
  return;
}


/* PlantSmallChestnut::SetPositionAndUpdateRowColumn(Sexy::SexyVector3 const&, Sexy::SexyVector3
   const&) */

void __thiscall
PlantSmallChestnut::SetPositionAndUpdateRowColumn
          (PlantSmallChestnut *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  undefined4 uVar1;
  BoardEntity *this_00;
  SharkMinion *this_01;
  
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),param_2);
  this_01 = *(SharkMinion **)(this + 0x10);
  uVar1 = SharkMinion::getRow(this_01);
  this_00 = *(BoardEntity **)(this + 0x10);
  *(undefined4 *)(this_01 + 0x110) = uVar1;
  uVar1 = BoardEntity::CalcColumnPosition(this_00);
  *(undefined4 *)(this_00 + 0x114) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::GetMoveSpeed() */

void PlantSmallChestnut::GetMoveSpeed(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,70.0,0.0,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* PlantSmallChestnut::~PlantSmallChestnut() */

void __thiscall PlantSmallChestnut::~PlantSmallChestnut(PlantSmallChestnut *this)

{
  *(undefined ***)this = &PTR_GetClass_067d8ac0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSmallChestnut::~PlantSmallChestnut() */

void __thiscall PlantSmallChestnut::~PlantSmallChestnut(PlantSmallChestnut *this)

{
  ~PlantSmallChestnut(this);
  AK::FreeHook(this);
  return;
}


/* PlantSmallChestnut::PlantSmallChestnut() */

void __thiscall PlantSmallChestnut::PlantSmallChestnut(PlantSmallChestnut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantSmallChestnut)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_067d8ac0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  return;
}


/* PlantSmallChestnut::StaticNew() */

PlantSmallChestnut * PlantSmallChestnut::StaticNew(void)

{
  PlantSmallChestnut *this;
  
  this = ::operator_new(0x40);
  PlantSmallChestnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::GetMoveRange() */

void __thiscall PlantSmallChestnut::GetMoveRange(PlantSmallChestnut *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float fVar6;
  float fVar7;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar6 = *(float *)(this + 0x38);
  fVar7 = *pfVar4;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    DVec2::DVec2((DVec2 *)&local_10,fVar7,fVar7);
  }
  else {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    iVar3 = *(int *)(this + 0x2c);
    fVar7 = *pfVar4;
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_14 = (float)(iVar3 * iVar2) + fVar7;
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
    local_10 = (float)iVar3;
    pfVar4 = eastl::min_alt<float>(&local_14,&local_10);
    fVar7 = *pfVar4;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    DVec2::DVec2((DVec2 *)&local_10,fVar6 + *pfVar4,fVar7 + fVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,uStack_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::PlayHitEffect() */

void __thiscall PlantSmallChestnut::PlayHitEffect(PlantSmallChestnut *this)

{
  undefined4 uVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,30.0,-50.0);
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = pfVar2[2];
  uVar1 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(this_01 + 0x110),0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_SMALL_CHESTNUT_HIT");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_28 + fVar4),(float)(int)(local_24 + fVar5),
             (float)(int)fVar6);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_040c61b4(this_00 + 0x1c,uVar1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallChestnut::Initialize() */

void __thiscall PlantSmallChestnut::Initialize(PlantSmallChestnut *this)

{
  long *plVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  plVar1 = (long *)FUN_040c6e5c(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  this[0x28] = (PlantSmallChestnut)0x0;
  return;
}


/* PlantSmallChestnut::MoveLeft() */

void __thiscall PlantSmallChestnut::MoveLeft(PlantSmallChestnut *this)

{
  PlantAnimRig_SmallChestnut *this_00;
  
  SetDirectionLeft(this,true);
  this_00 = (PlantAnimRig_SmallChestnut *)FUN_040c6e5c(*(undefined8 *)(this + 0x10));
  PlantAnimRig_SmallChestnut::PlayRunLooped(this_00);
  return;
}


/* PlantSmallChestnut::MoveRight() */

void __thiscall PlantSmallChestnut::MoveRight(PlantSmallChestnut *this)

{
  PlantAnimRig_SmallChestnut *this_00;
  
  SetDirectionLeft(this,false);
  this_00 = (PlantAnimRig_SmallChestnut *)FUN_040c6e5c(*(undefined8 *)(this + 0x10));
  PlantAnimRig_SmallChestnut::PlayRunLooped(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::FindThreatInLeft() */

void __thiscall PlantSmallChestnut::FindThreatInLeft(PlantSmallChestnut *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  RealObject *this_00;
  undefined1 uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [8];
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
  if (cVar1 != '\0') {
    fVar9 = (float)GetMoveRange(this);
    uVar3 = (**(code **)(*(long *)this + 400))(this,0);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar11 = *pfVar6;
    fVar10 = pfVar6[1];
    iVar4 = Plant::GetHeight();
    iVar5 = Plant::GetHeight();
    Sexy::Insets::Insets
              (aIStack_30,(int)fVar9,(int)(fVar10 - (float)iVar4),(int)(fVar11 - fVar9),iVar5);
    if (local_28 != 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntitiesTouchingRectangle
                (avStack_20,2,aIStack_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            uVar7 = 0, bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        nop();
        if (((this_00 != (RealObject *)0x0) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 == '\0')) &&
           (cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)),
           cVar1 != '\0')) {
          pcVar8 = *(code **)(*(long *)this + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
          cVar1 = (*pcVar8)(this,aRStack_38,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if (cVar1 != '\0') {
            pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar1 = (*pcVar8)(this_00,aRStack_38,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if ((cVar1 != '\0') &&
               (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar3), cVar1 != '\0')) {
              uVar7 = 1;
              break;
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      goto LAB_040c6f4c;
    }
  }
  uVar7 = 0;
LAB_040c6f4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::OnAnimCommand(std::string const&, std::string const&) */

void PlantSmallChestnut::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  BoardEntity *this;
  long *plVar5;
  RealObject *this_00;
  RtMixedPtrBase aRStack_78 [8];
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"hit");
  if (bVar1) {
    Plant::FindTarget(aRStack_78,*(undefined8 *)(param_1 + 0x10),0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
    if (cVar2 != '\0') {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      FUN_040c61d0(*(undefined8 *)(lVar4 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      this = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      iVar3 = BoardEntity::CalcColumnPosition(this);
      Sexy::Point::Point((Point *)&local_70,iVar3,*(int *)(*(long *)(param_1 + 0x10) + 0x110));
      local_50 = local_70;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      (**(code **)(*plVar5 + 0x110))(plVar5,aRStack_68);
      this_00 = *(RealObject **)(param_1 + 0x10);
      std::string::string((string *)&local_70,"Play_Chestnut_Attack");
      RealObject::PlayPositionalSound(this_00,(string *)&local_70,0.0);
      std::string::~string((string *)&local_70);
      nop();
      PlayHitEffect((PlantSmallChestnut *)param_1);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::IsDangerous(Sexy::Point const&) */

void PlantSmallChestnut::IsDangerous(Point *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  string *psVar6;
  long lVar7;
  bool bVar8;
  undefined8 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
  if ((((cVar3 == '\0') &&
       (iVar1 = *(int *)param_1, iVar4 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar4)) &&
      (-1 < *(int *)(param_1 + 4))) &&
     ((cVar3 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1), cVar3 == '\0' ||
      (lVar7 = FUN_040c7190(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4)), lVar7 != 0)))) {
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"smallChestnut");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    std::string::~string(asStack_10);
    nop();
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar5 = Board::GetCanPlantAtReason(uVar9,param_1,asStack_10,0,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar2 = (uVar5 & 0xfffffff7) == 0x15;
    bVar8 = bVar2 || uVar5 == 0x38;
    if ((!bVar2 && uVar5 != 0x38) && (bVar8 = true, uVar5 != 0x26)) {
      bVar8 = uVar5 == 0x4a || uVar5 == 0x32;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    bVar8 = true;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::RightHaveObstacle() */

void __thiscall PlantSmallChestnut::RightHaveObstacle(PlantSmallChestnut *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar4 = *pfVar2;
  fVar3 = pfVar2[1];
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)(uint)(iVar1 - (iVar1 >> 0x1f)),(float)(iVar1 / 2) + fVar4,
             fVar3);
  IsDangerous(aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::LeftHaveObstacle() */

void __thiscall PlantSmallChestnut::LeftHaveObstacle(PlantSmallChestnut *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar4 = *pfVar2;
  fVar3 = pfVar2[1];
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)(uint)(iVar1 - (iVar1 >> 0x1f)),fVar4 - (float)(iVar1 / 2),
             fVar3);
  IsDangerous(aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallChestnut::UpdateActions() */

void PlantSmallChestnut::UpdateActions(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  PlantSmallChestnut *in_x0;
  Effect_AngerFlame *this;
  undefined8 *puVar4;
  long *plVar5;
  float *pfVar6;
  UIEasyButtonWidget *this_00;
  float fVar7;
  float fVar8;
  float in_s1;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  float local_24;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_040c61bc(*(undefined4 *)(this_00 + 0x1d0));
  if (cVar1 != '\0') goto LAB_040c79d0;
  this = (Effect_AngerFlame *)UIEasyButtonWidget::GetImageNormal(this_00);
  iVar3 = Effect_AngerFlame::GetFlameCol(this);
  if (iVar3 != 1) {
    if ((iVar3 != 0xe) ||
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x30)), cVar1 == '\0'))
    goto LAB_040c79d0;
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(in_x0 + 0x10));
    local_48 = *puVar4;
    local_40 = *(undefined4 *)(puVar4 + 1);
    local_50 = (float)GetMoveRange(in_x0);
    local_38 = local_48;
    local_30 = local_40;
    if (in_x0[0x28] == (PlantSmallChestnut)0x0) {
      if ((((float)local_48 < in_s1) && (cVar1 = RightHaveObstacle(in_x0), cVar1 == '\0')) &&
         (cVar1 = Plant::CanFindTarget(*(undefined8 *)(in_x0 + 0x10)), cVar1 == '\0')) {
        local_28 = GetMoveSpeed();
        local_24 = in_s1;
        fVar7 = (float)PVZ_Dt();
        local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,fVar7);
        local_14 = in_s1;
        EATextSquish::Vec3::operator+=((Vec3 *)&local_48,(Vec3 *)&local_18);
        pfVar6 = eastl::min_alt<float>((float *)&local_48,&local_4c);
        local_48 = CONCAT44(local_48._4_4_,*pfVar6);
        goto LAB_040c7bdc;
      }
    }
    else if (((local_50 < (float)local_48) &&
             (local_4c = in_s1, cVar1 = LeftHaveObstacle(in_x0), cVar1 == '\0')) &&
            ((fVar7 = (float)local_48, local_4c <= (float)local_48 ||
             (cVar1 = FindThreatInLeft(in_x0), cVar1 != '\0')))) {
      local_28 = GetMoveSpeed();
      local_24 = fVar7;
      fVar8 = (float)PVZ_Dt();
      local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,fVar8);
      local_14 = fVar7;
      EATextSquish::Vec3::operator-=((Vec3 *)&local_48,(Vec3 *)&local_18);
      pfVar6 = eastl::max_alt<float>((float *)&local_48,&local_50);
      local_48 = CONCAT44(local_48._4_4_,*pfVar6);
LAB_040c7bdc:
      SetPositionAndUpdateRowColumn(in_x0,(SexyVector3 *)&local_38,(SexyVector3 *)&local_48);
      goto LAB_040c79d0;
    }
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(in_x0 + 0x10));
    (**(code **)(*plVar5 + 0x118))();
    SetDirectionLeft(in_x0,false);
    goto LAB_040c79d0;
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x30));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)in_x0 + 0x150))();
    goto LAB_040c79d0;
  }
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x10));
  fVar8 = *pfVar6;
  fVar7 = (float)GetMoveRange(in_x0);
  if (fVar8 < fVar7) {
    cVar1 = RightHaveObstacle(in_x0);
    if (cVar1 == '\0') goto LAB_040c7b58;
  }
  else {
    if ((fVar8 <= in_s1) && (cVar1 = FindThreatInLeft(in_x0), cVar1 == '\0')) {
      bVar2 = (**(code **)(*(long *)in_x0 + 0x150))();
      if (((fVar8 < in_s1) <= bVar2) || (cVar1 = RightHaveObstacle(in_x0), cVar1 != '\0'))
      goto LAB_040c79d0;
LAB_040c7b58:
      MoveRight(in_x0);
      goto LAB_040c79d0;
    }
    cVar1 = LeftHaveObstacle(in_x0);
    if (cVar1 == '\0') {
      MoveLeft(in_x0);
      goto LAB_040c79d0;
    }
  }
  (**(code **)(*(long *)in_x0 + 0x150))();
LAB_040c79d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

