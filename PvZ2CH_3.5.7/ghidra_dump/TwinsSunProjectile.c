// Class: TwinsSunProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsSunProjectile::StaticClassInit() */

void TwinsSunProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsSunProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d40394,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsSunProjectile::StaticGetClass() */

long * TwinsSunProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsSunProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsSunProjectile::GetClass() const */

long * TwinsSunProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsSunProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsSunProjectile::TwinsSunProjectile() */

void __thiscall TwinsSunProjectile::TwinsSunProjectile(TwinsSunProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069af480;
  *(undefined ***)(this + 0x10) = &PTR__TwinsSunProjectile_069af670;
  Sexy::Point::Point((Point *)(this + 0x1a8),-1,-1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* TwinsSunProjectile::StaticNew() */

TwinsSunProjectile * TwinsSunProjectile::StaticNew(void)

{
  TwinsSunProjectile *this;
  
  this = ::operator_new(0x1d0);
  TwinsSunProjectile(this);
  return this;
}


/* TwinsSunProjectile::~TwinsSunProjectile() */

void __thiscall TwinsSunProjectile::~TwinsSunProjectile(TwinsSunProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069af480;
  *(undefined ***)(this + 0x10) = &PTR__TwinsSunProjectile_069af670;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TwinsSunProjectile::~TwinsSunProjectile() */

void __thiscall TwinsSunProjectile::~TwinsSunProjectile(TwinsSunProjectile *this)

{
  ~TwinsSunProjectile(this + -0x10);
  return;
}


/* TwinsSunProjectile::~TwinsSunProjectile() */

void __thiscall TwinsSunProjectile::~TwinsSunProjectile(TwinsSunProjectile *this)

{
  ~TwinsSunProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TwinsSunProjectile::~TwinsSunProjectile() */

void __thiscall TwinsSunProjectile::~TwinsSunProjectile(TwinsSunProjectile *this)

{
  ~TwinsSunProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsSunProjectile::onUpdate(float) */

void TwinsSunProjectile::onUpdate(float param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  Projectile *in_x0;
  SunBomb_Effect *this;
  BoardEntity *pBVar4;
  RtObject *this_00;
  TwinsSunProps *pTVar5;
  ResourceInfo *pRVar6;
  SexyVector3 *pSVar7;
  char *pcVar8;
  undefined8 uVar9;
  Point aPStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,-1,-1);
  cVar2 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(in_x0 + 0x1a8),(TPoint *)aPStack_18);
  if (cVar2 == '\0') goto LAB_04d46a30;
  RealObject::CalcGridPosition();
  if (local_10[0] < *(int *)(in_x0 + 0x1a8)) goto LAB_04d46a30;
  cVar2 = CardGameUtils::IsPlayingCardGame();
  if (cVar2 == '\0') {
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar2 != '\0') goto LAB_04d46a88;
    uVar9 = 0x3f800000;
  }
  else {
LAB_04d46a88:
    uVar9 = FUN_04d3fbd0(*(undefined4 *)(in_x0 + 0xc0));
  }
  this = Board::AddEffect<SunBomb_Effect>(*(Board **)(gLawnApp + 0x9f0));
  pBVar4 = (BoardEntity *)Projectile::GetInstigator(in_x0);
  SunBomb_Effect::Init(this,(Point *)(in_x0 + 0x1a8),pBVar4);
  uVar1 = *(undefined4 *)(in_x0 + 0x1b0);
  this_00 = (RtObject *)Projectile::getProps(in_x0);
  pTVar5 = Sexy::RtObject::Cast<TwinsSunProps>(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(pTVar5 + 0x1e0));
  SunBomb_Effect::SetRedStarProjectile(this,uVar1,(RtWeakPtr<Sexy::SoundResource> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  std::string::string((string *)aPStack_18,"POPANIM_EFFECTS_TWINSHONEYSUCKLE_SUN");
  GetPAMByName((string *)aPStack_18);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  std::string::~string((string *)aPStack_18);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  (**(code **)(*(long *)this + 0x80))(uVar9,this);
  pSVar7 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)in_x0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,pSVar7,-1);
  iVar3 = (**(code **)(*(long *)in_x0 + 200))();
  FUN_04d3fbc0(this + 0x1c,iVar3 + 1);
  std::string::string((string *)local_10,"tysj01");
  Effect_PopAnim::PlaySingleAnimation
            ((Effect_PopAnim *)this,(RtWeakPtr<Sexy::SoundResource> *)local_10,0);
  std::string::~string((string *)local_10);
  nop();
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
  pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar8,"Play_Sun_Attack_Impact");
  (**(code **)(*(long *)in_x0 + 0x48))();
LAB_04d46a30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsSunProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall TwinsSunProjectile::OnCollideEntity(TwinsSunProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TPoint<int> aTStack_28 [8];
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this + 0x1a8),(TPoint *)&local_10);
  if (cVar1 != '\0') {
    BoardEntity::CalcGridPosition();
    Sexy::Point::Point((Point *)&local_20,1,0);
    Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)&local_20);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)aRStack_18);
    *(undefined8 *)(this + 0x1a8) = local_10;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar4,uVar5,(Point *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if ((bVar2) &&
     (cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)this_00), cVar1 != '\0')) {
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

