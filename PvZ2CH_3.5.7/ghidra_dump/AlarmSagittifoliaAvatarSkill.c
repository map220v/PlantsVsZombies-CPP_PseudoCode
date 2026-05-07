// Class: AlarmSagittifoliaAvatarSkill


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkill::StaticClassInit() */

void AlarmSagittifoliaAvatarSkill::StaticClassInit(void)

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
    std::string::string(asStack_10,"AlarmSagittifoliaAvatarSkill");
    (*pcVar2)(plVar1,asStack_10,FUN_03e889b8,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaAvatarSkill::StaticGetClass() */

long * AlarmSagittifoliaAvatarSkill::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AlarmSagittifoliaAvatarSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AlarmSagittifoliaAvatarSkill::GetClass() const */

long * AlarmSagittifoliaAvatarSkill::GetClass(void)

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
  (*pcVar3)(plVar1,"AlarmSagittifoliaAvatarSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AlarmSagittifoliaAvatarSkill::onDestroy() */

void __thiscall AlarmSagittifoliaAvatarSkill::onDestroy(AlarmSagittifoliaAvatarSkill *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x110);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkill::AlarmSagittifoliaAvatarSkill() */

void __thiscall
AlarmSagittifoliaAvatarSkill::AlarmSagittifoliaAvatarSkill(AlarmSagittifoliaAvatarSkill *this)

{
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined ***)this = &PTR_GetClass_0678fb00;
  *(undefined ***)(this + 0x10) = &PTR__AlarmSagittifoliaAvatarSkill_0678fce8;
  Sexy::Point::Point((Point *)(this + 0xa8));
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_10,local_c,this + 0xb0,1,0,aPStack_18,0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaAvatarSkill::StaticNew() */

AlarmSagittifoliaAvatarSkill * AlarmSagittifoliaAvatarSkill::StaticNew(void)

{
  AlarmSagittifoliaAvatarSkill *this;
  
  this = ::operator_new(0x118);
  AlarmSagittifoliaAvatarSkill(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkill::takeEffect() */

void __thiscall AlarmSagittifoliaAvatarSkill::takeEffect(AlarmSagittifoliaAvatarSkill *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets(aIStack_30,*(int *)(this + 0xa8) + -1,*(int *)(this + 0xac) + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar2);
    if (bVar1) {
      (**(code **)(*(long *)*puVar2 + 0x110))((long *)*puVar2,this + 0xb0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill() */

void __thiscall
AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill(AlarmSagittifoliaAvatarSkill *this)

{
  *(undefined ***)this = &PTR_GetClass_0678fb00;
  *(undefined ***)(this + 0x10) = &PTR__AlarmSagittifoliaAvatarSkill_0678fce8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill() */

void __thiscall
AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill(AlarmSagittifoliaAvatarSkill *this)

{
  ~AlarmSagittifoliaAvatarSkill(this + -0x10);
  return;
}


/* AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill() */

void __thiscall
AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill(AlarmSagittifoliaAvatarSkill *this)

{
  ~AlarmSagittifoliaAvatarSkill(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill() */

void __thiscall
AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill(AlarmSagittifoliaAvatarSkill *this)

{
  ~AlarmSagittifoliaAvatarSkill(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkill::setInfo(float, Sexy::Point const&, DamageInfo const&) */

void __thiscall
AlarmSagittifoliaAvatarSkill::setInfo
          (AlarmSagittifoliaAvatarSkill *this,float param_1,Point *param_2,DamageInfo *param_3)

{
  undefined4 uVar1;
  Board *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar2;
  Point *extraout_x1;
  float fVar3;
  float fVar4;
  int local_40;
  int local_3c;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  float local_28 [2];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)param_2;
  *(float *)(this + 0xa4) = param_1;
  DamageInfo::operator=((DamageInfo *)(this + 0xb0),param_3);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xa8),extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_40,(TPoint *)local_28);
  EATextSquish::Vec3::Vec3((Vec3 *)local_28,(float)local_40,(float)local_3c,0.0);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (this_00[0x119] != (Board)0x0) {
    local_20 = Board::calculateRoofOffsetZ(local_28[0]);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(this_00);
  std::string::string(asStack_38,"POPANIM_EFFECTS_ALARMSAGITTIFOLIA_ELECTRIC_FIELD");
  GetPAMByName(asStack_38);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)this_01 + 0x80))(0x3f800000,this_01);
  std::string::string((string *)aRStack_30,"animation1");
  fVar4 = *(float *)(this + 0xa4);
  fVar3 = (float)PVZ_T();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)(fVar4 - fVar3),this_01,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_28,-1);
  Effect_PopAnim::SetCentered(this_01,true);
  uVar1 = Board::MakeRenderOrder(0x61cd8,*(undefined4 *)(this + 0xac),0);
  FUN_03e882d0(this_01 + 0x1c,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AlarmSagittifoliaAvatarSkill::AlarmSagittifoliaAvatarSkill(AlarmSagittifoliaAvatarSkill const&)
    */

void __thiscall
AlarmSagittifoliaAvatarSkill::AlarmSagittifoliaAvatarSkill
          (AlarmSagittifoliaAvatarSkill *this,AlarmSagittifoliaAvatarSkill *param_1)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this,(BoardEntity *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined ***)this = &PTR_GetClass_0678fb00;
  *(undefined ***)(this + 0x10) = &PTR__AlarmSagittifoliaAvatarSkill_0678fce8;
  *(undefined4 *)(this + 0xa4) = uVar1;
  Sexy::Point::Point((Point *)(this + 0xa8),(TPoint *)(param_1 + 0xa8));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0xb0),(DamageInfo *)(param_1 + 0xb0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x110),(RtWeakPtrBase *)(param_1 + 0x110));
  return;
}


/* AlarmSagittifoliaAvatarSkill::TEMPNAMEPLACEHOLDERVALUE(AlarmSagittifoliaAvatarSkill const&) */

AlarmSagittifoliaAvatarSkill * __thiscall
AlarmSagittifoliaAvatarSkill::operator=
          (AlarmSagittifoliaAvatarSkill *this,AlarmSagittifoliaAvatarSkill *param_1)

{
  undefined4 uVar1;
  
  BoardEntity::operator=((BoardEntity *)this,(BoardEntity *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xa4) = uVar1;
  DamageInfo::operator=((DamageInfo *)(this + 0xb0),(DamageInfo *)(param_1 + 0xb0));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),(RtWeakPtr *)(param_1 + 0x110));
  return this;
}

