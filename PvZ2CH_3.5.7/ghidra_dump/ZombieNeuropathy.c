// Class: ZombieNeuropathy


/* ZombieNeuropathy::~ZombieNeuropathy() */

void __thiscall ZombieNeuropathy::~ZombieNeuropathy(ZombieNeuropathy *this)

{
  *(undefined ***)this = &PTR_GetClass_068ce3e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieNeuropathy_068cedf8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieNeuropathy::~ZombieNeuropathy() */

void __thiscall ZombieNeuropathy::~ZombieNeuropathy(ZombieNeuropathy *this)

{
  ~ZombieNeuropathy(this + -0x10);
  return;
}


/* ZombieNeuropathy::~ZombieNeuropathy() */

void __thiscall ZombieNeuropathy::~ZombieNeuropathy(ZombieNeuropathy *this)

{
  ~ZombieNeuropathy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieNeuropathy::~ZombieNeuropathy() */

void __thiscall ZombieNeuropathy::~ZombieNeuropathy(ZombieNeuropathy *this)

{
  ~ZombieNeuropathy(this + -0x10);
  return;
}


/* ZombieNeuropathy::ZombieNeuropathy() */

void __thiscall ZombieNeuropathy::ZombieNeuropathy(ZombieNeuropathy *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ce3e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieNeuropathy_068cedf8;
  uVar1 = PVZ_EOT();
  this[0x818] = (ZombieNeuropathy)0x1;
  this[0x819] = (ZombieNeuropathy)0x1;
  *(undefined4 *)(this + 0x814) = uVar1;
  *(undefined4 *)(this + 0x800) = 0x40866666;
  *(undefined4 *)(this + 0x804) = 0x41733333;
  *(undefined4 *)(this + 0x80c) = 0x3e6147ae;
  return;
}


/* ZombieNeuropathy::StaticNew() */

ZombieNeuropathy * ZombieNeuropathy::StaticNew(void)

{
  ZombieNeuropathy *this;
  
  this = ::operator_new(0x820);
  ZombieNeuropathy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathy::StaticClassInit() */

void ZombieNeuropathy::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieNeuropathy");
    (*pcVar2)(plVar1,asStack_10,FUN_047614d8,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieNeuropathy::StaticGetClass() */

long * ZombieNeuropathy::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieNeuropathy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieNeuropathy::GetClass() const */

long * ZombieNeuropathy::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieNeuropathy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieNeuropathy::playDeathAnimation() */

void __thiscall ZombieNeuropathy::playDeathAnimation(ZombieNeuropathy *this)

{
  int iVar1;
  
  (**(code **)(*(long *)this + 0x2f0))();
  iVar1 = (**(code **)(**(long **)(this + 0xc0) + 0x148))(*(long **)(this + 0xc0));
  *(int *)(this + 0xd0) = iVar1;
  if (iVar1 != -1) {
    SetFlag<DebugLogFlags>(this + 0xcc,1,0);
    SetFlag<DebugLogFlags>(this + 0xcc,0x400,1);
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombieNeuropathy::onHelmDropped(HelmType, int) */

undefined8 ZombieNeuropathy::onHelmDropped(Zombie *param_1,int param_2)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined8 uVar3;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  if ((param_2 == 0x15) && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
     ) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0);
      uVar3 = (**(code **)(*(long *)pZVar2 + 0x288))(pZVar2,0x15,param_1);
      *(undefined4 *)(param_1 + 0x810) = 0;
      goto LAB_04760f58;
    }
  }
  uVar3 = 0;
LAB_04760f58:
  (**(code **)(*(long *)pZVar2 + 0x1f8))(pZVar2);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathy::onBigBangAnimationDone(StandaloneEffect*) */

void ZombieNeuropathy::onBigBangAnimationDone(StandaloneEffect *param_1)

{
  char cVar1;
  float *pfVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    Zombie::setZombieState((Zombie *)param_1,5,0);
    Zombie::InvokeInvisible((Zombie *)param_1,true,false,false);
    param_1[0x818] = (StandaloneEffect)0x0;
    std::string::string(asStack_18,"Play_CherryBomb");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_18,0.0);
    std::string::~string(asStack_18);
    nop();
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_ZOMBIE_ZOMBIE_TUTORIAL_NEUROPATHY");
    GetPAMByName(asStack_20);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_18,(float)(int)(fVar4 - 10.0),(float)(int)(fVar5 - 60.0),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_18,-1);
    FUN_04760848(this + 0x1c);
    std::string::string(asStack_18,"boom");
    Effect_PopAnim::PlaySingleAnimation(this,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
    Zombie::SetIgnoresAllDamage((Zombie *)param_1,false);
    Zombie::SetIsControlled((Zombie *)param_1,false);
    (**(code **)(*(long *)param_1 + 0x218))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieNeuropathy::onDiscardBoxComplete(std::string const&) */

void __thiscall ZombieNeuropathy::onDiscardBoxComplete(ZombieNeuropathy *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  ZombieAnimRig *this_00;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"attract"), bVar2)) {
    Zombie::GetProps<ZombieNeuropathyProps>((Zombie *)this);
    (**(code **)(*(long *)this + 0x260))(this);
    (**(code **)(*(long *)this + 0x1e0))(*(undefined4 *)(this + 0x80c),this);
    this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(this + 0x80c));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathy::TryDetonatedBomb() */

void __thiscall ZombieNeuropathy::TryDetonatedBomb(ZombieNeuropathy *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBigBangAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_Neuropathy::PlayBigBang((ZombieAnimRig_Neuropathy *)pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathy::DoSpecial() */

void __thiscall ZombieNeuropathy::DoSpecial(ZombieNeuropathy *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  Zombie *pZVar11;
  undefined8 *puVar12;
  GridItem *pGVar13;
  Plant *this_00;
  float fVar14;
  float fVar15;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  RtWeakPtrBase aRStack_90 [8];
  Point aPStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar15 = *pfVar7;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar14 = pfVar7[1];
  iVar3 = (int)((float)(iVar3 / 2) + fVar15);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar8 = FUN_0476083c(*(undefined8 *)(this + 0x550));
  local_b0 = FUN_047611f8(*(undefined8 *)(lVar8 + 0x108));
  local_a8 = FUN_04761248(*(undefined8 *)(lVar8 + 0x110));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1) {
    piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    iVar5 = piVar9[3];
    fVar15 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
    uVar10 = operator|(0x20,0x400);
    uVar10 = operator|(uVar10,0x1000);
    Sexy::Point::Point(aPStack_88,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar15 * (float)iVar5),local_80,local_7c,aDStack_68,uVar10,this,
               aPStack_88,0);
    if (*piVar9 == 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      BoardTransforms::BoardSpaceToGridX(iVar3);
      iVar5 = BoardTransforms::BoardSpaceToGridY((int)(fVar14 - 30.0));
      uVar10 = operator|(1,2);
      uVar6 = operator|(uVar10,4);
      Sexy::FastCurve::SetOutRange((FastCurve *)aPStack_88,(float)iVar3,(float)(int)(fVar14 - 30.0))
      ;
      EntityFinder::GetEntitiesTouchingCircle2D
                ((float)iVar4 * 1.44,(FastCurve *)&local_80,uVar6,aPStack_88,iVar5 + -1,iVar5 + 1);
      cVar2 = RealObject::IsOnTeam(this,1);
      if (cVar2 == '\0') {
        local_a0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_80);
        local_98 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
              bVar1) {
          puVar12 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
          bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar12);
          if (bVar1) {
            this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar12);
            if ((((this_00 != (Plant *)0x0) && (0.0 < *(float *)(this_00 + 0xd8))) &&
                (cVar2 = Plant::IsInvincible(this_00,false), cVar2 == '\0')) &&
               (cVar2 = Plant::IsIgnoreControlAndDmg(this_00), cVar2 == '\0')) {
              Plant::KillPlant(this_00,0,1,1);
            }
          }
          else {
            bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar12);
            if (((bVar1) &&
                (pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12),
                pZVar11 != (Zombie *)0x0)) &&
               ((cVar2 = RealObject::IsOnTeam(pZVar11,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pZVar11 + 0x328))(pZVar11), cVar2 == '\0')))) {
              ToolPacketData::GetProps();
              ToolPacketData::GetProps();
              cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_90,(RtWeakPtrBase *)aPStack_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              if (cVar2 == '\0') {
                (**(code **)(*(long *)pZVar11 + 0x110))(pZVar11,aDStack_68);
              }
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
        }
      }
      else {
        local_a0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_80);
        local_98 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
              bVar1) {
          puVar12 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
          bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar12);
          if (bVar1) {
            pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
            if (((pZVar11 != (Zombie *)0x0) &&
                (cVar2 = RealObject::IsOnTeam(pZVar11,2), cVar2 != '\0')) &&
               (cVar2 = (**(code **)(*(long *)pZVar11 + 0x328))(pZVar11), cVar2 == '\0')) {
              ToolPacketData::GetProps();
              ToolPacketData::GetProps();
              cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_90,(RtWeakPtrBase *)aPStack_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              if (cVar2 == '\0') {
                (**(code **)(*(long *)pZVar11 + 0x110))(pZVar11,aDStack_68);
              }
            }
          }
          else {
            bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar12);
            if ((bVar1) &&
               ((pGVar13 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar12),
                pGVar13 == (GridItem *)0x0 ||
                ((((cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pGVar13),
                   cVar2 == '\0' && (cVar2 = RealObject::IsOnTeam(pGVar13,1), cVar2 != '\0')) &&
                  (cVar2 = (**(code **)(*(long *)pGVar13 + 0x208))(pGVar13), cVar2 != '\0')) &&
                 ((cVar2 = RealObject::IsOnTeam(pGVar13,2), cVar2 == '\0' ||
                  (cVar2 = (**(code **)(*(long *)pGVar13 + 0x200))(pGVar13), cVar2 == '\0')))))))) {
              (**(code **)(*(long *)pGVar13 + 0x110))(pGVar13,aDStack_68);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
    DamageInfo::~DamageInfo(aDStack_68);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieNeuropathy::onZombieInitialize() */

void __thiscall ZombieNeuropathy::onZombieInitialize(ZombieNeuropathy *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  uVar1 = PVZ_EOT();
  this[0x818] = (ZombieNeuropathy)0x1;
  this[0x819] = (ZombieNeuropathy)0x1;
  *(undefined4 *)(this + 0x810) = 1;
  *(undefined4 *)(this + 0x808) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathy::onPlaceOnBoard() */

void __thiscall ZombieNeuropathy::onPlaceOnBoard(ZombieNeuropathy *this)

{
  float fVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)(**(code **)(*(long *)this + 0x308))
                           (*(float *)(this + 0x804) - *(float *)(this + 0x800),this);
  *(float *)(this + 0x808) = fVar1 + fVar2 + *(float *)(this + 0x800);
  std::string::string(asStack_10,"Play_Zombie_Neuropathy_Init");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathy::onUpdate() */

void __thiscall ZombieNeuropathy::onUpdate(ZombieNeuropathy *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  if (*(int *)(this + 0x810) == 0) {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      Zombie::setZombieState((Zombie *)this,0,0);
      *(undefined4 *)(this + 0x810) = 2;
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onDiscardBoxComplete");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_Neuropathy::PlayBoxDiscard((ZombieAnimRig_Neuropathy *)pZVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Zombie::SetIgnoresAllDamage((Zombie *)this,false);
      Zombie::SetIsControlled((Zombie *)this,false);
      Zombie::SetIsTargetable((Zombie *)this,true);
      this[0x818] = (ZombieNeuropathy)0x0;
    }
  }
  else if ((((*(int *)(this + 0x810) == 1) &&
            (fVar3 = (float)PVZ_T(), *(float *)(this + 0x808) <= fVar3)) &&
           (this[0x818] != (ZombieNeuropathy)0x0)) &&
          (((cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0' &&
            (cVar1 = (**(code **)(*(long *)this + 0x2a8))(this), cVar1 == '\0')) &&
           (cVar1 = Zombie::HasCondition(this,0x18), cVar1 == '\0')))) {
    std::string::string(asStack_58,"Play_Zombie_Neuropathy_boxopen");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    Zombie::setZombieState((Zombie *)this,0,0);
    Zombie::SetIgnoresAllDamage((Zombie *)this,true);
    Zombie::SetIsTargetable((Zombie *)this,false);
    Zombie::SetIsControlled((Zombie *)this,true);
    TryDetonatedBomb(this);
    this[0x818] = (ZombieNeuropathy)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieNeuropathy::DropHead() */

void __thiscall ZombieNeuropathy::DropHead(ZombieNeuropathy *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar1;
  Zombie::DropHead((Zombie *)this);
  return;
}

