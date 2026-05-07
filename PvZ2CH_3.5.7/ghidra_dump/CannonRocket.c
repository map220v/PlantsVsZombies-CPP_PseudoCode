// Class: CannonRocket


/* CannonRocket::CounterRocketEffect() */

void __thiscall CannonRocket::CounterRocketEffect(CannonRocket *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb0);
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
/* CannonRocket::StaticClassInit() */

void CannonRocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"CannonRocket");
    (*pcVar2)(plVar1,asStack_10,FUN_04741a78,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonRocket::StaticGetClass() */

long * CannonRocket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonRocket::GetClass() const */

long * CannonRocket::GetClass(void)

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
  (*pcVar3)(plVar1,"CannonRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonRocket::InitializeRocketController(Sexy::Point const&, float) */

void __thiscall
CannonRocket::InitializeRocketController(CannonRocket *this,Point *param_1,float param_2)

{
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)param_1;
  *(float *)(this + 0xa4) = param_2;
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* CannonRocket::IsFalling() */

void __thiscall CannonRocket::IsFalling(CannonRocket *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xb0));
  return;
}


/* CannonRocket::CannonRocket() */

void __thiscall CannonRocket::CannonRocket(CannonRocket *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_068c6b30;
  *(undefined ***)(this + 0x10) = &PTR__CannonRocket_068c6d20;
  *(undefined4 *)(this + 0xa4) = 0;
  Sexy::Point::Point((Point *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  return;
}


/* CannonRocket::StaticNew() */

CannonRocket * CannonRocket::StaticNew(void)

{
  CannonRocket *this;
  
  this = ::operator_new(0xc0);
  CannonRocket(this);
  return this;
}


/* CannonRocket::~CannonRocket() */

void __thiscall CannonRocket::~CannonRocket(CannonRocket *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6b30;
  *(undefined ***)(this + 0x10) = &PTR__CannonRocket_068c6d20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to CannonRocket::~CannonRocket() */

void __thiscall CannonRocket::~CannonRocket(CannonRocket *this)

{
  ~CannonRocket(this + -0x10);
  return;
}


/* CannonRocket::~CannonRocket() */

void __thiscall CannonRocket::~CannonRocket(CannonRocket *this)

{
  ~CannonRocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CannonRocket::~CannonRocket() */

void __thiscall CannonRocket::~CannonRocket(CannonRocket *this)

{
  ~CannonRocket(this + -0x10);
  return;
}


/* CannonRocket::FadeOutCrosshairEffect() */

void __thiscall CannonRocket::FadeOutCrosshairEffect(CannonRocket *this)

{
  bool bVar1;
  Effect_ZombossCrosshair *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (!bVar1) {
    return;
  }
  this_00 = (Effect_ZombossCrosshair *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  Effect_ZombossCrosshair::StartOutro(this_00,1.0,1.7,180.0);
  return;
}


/* CannonRocket::CounterCrosshairEffect() */

void __thiscall CannonRocket::CounterCrosshairEffect(CannonRocket *this)

{
  bool bVar1;
  Effect_ZombossCrosshair *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (!bVar1) {
    return;
  }
  this_00 = (Effect_ZombossCrosshair *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  Effect_ZombossCrosshair::StartOutro(this_00,0.618,1.7,0.0);
  return;
}


/* CannonRocket::CounterRocket() */

void __thiscall CannonRocket::CounterRocket(CannonRocket *this)

{
  CounterCrosshairEffect(this);
  CounterRocketEffect(this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonRocket::StartCrosshairEffect(std::string const&, std::string const&) */

void __thiscall
CannonRocket::StartCrosshairEffect(CannonRocket *this,string *param_1,string *param_2)

{
  Effect_ZombossCrosshair *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_ZombossCrosshair>(*(Board **)(gLawnApp + 0x9f0));
  Effect_ZombossCrosshair::InitializeCrosshair
            (this_00,(Point *)(this + 0xa8),param_1,param_2,1.7,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonRocket::StartRocketEffect(std::string const&, std::string const&, float, float) */

void __thiscall
CannonRocket::StartRocketEffect
          (CannonRocket *this,string *param_1,string *param_2,float param_3,float param_4)

{
  Effect_ZombossRocket *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_ZombossRocket>(*(Board **)(gLawnApp + 0x9f0));
  Effect_ZombossRocket::InitializeRocket
            (this_00,this,(Point *)(this + 0xa8),param_1,param_2,param_3,param_4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonRocket::CreateExplosionEffect(std::string const&, std::string const&) */

void __thiscall
CannonRocket::CreateExplosionEffect(CannonRocket *this,string *param_1,string *param_2)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)*(int *)(this + 0xa8),(float)*(int *)(this + 0xac),0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,0x64961);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonRocket::OnRocketHitGround() */

void __thiscall CannonRocket::OnRocketHitGround(CannonRocket *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FadeOutCrosshairEffect(this);
  if (*(float *)(this + 0xa4) == 0.0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    Sexy::Point::Point((Point *)&local_98,(TPoint *)(this + 0xa8));
    local_94 = local_94 + -0x1e;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardTransforms::BoardSpaceToGridY(*(int *)(this + 0xac));
    iVar5 = BoardTransforms::BoardSpaceToGridY(*(int *)(this + 0xac));
    uVar6 = operator|(2,4);
    Sexy::FastCurve::SetOutRange(aFStack_68,(float)local_98,(float)local_94);
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar3 * 1.44,avStack_80,uVar6,aFStack_68,iVar4 + -1,iVar5 + 1);
    DamageInfo::DamageInfo((DamageInfo *)aFStack_68);
    local_60 = *(undefined4 *)(this + 0xa4);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      pGVar8 = (GridItem *)Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if ((pGVar8 == (GridItem *)0x0) ||
         (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pGVar8),
         cVar2 == '\0')) {
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
        if ((pGVar8 != (GridItem *)0x0) &&
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pGVar8),
           cVar2 != '\0')) goto LAB_04741ed8;
      }
      else {
        cVar2 = (**(code **)(*(long *)pGVar8 + 0x328))(pGVar8);
        if (cVar2 == '\0') {
LAB_04741ed8:
          (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,aFStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::string::string((string *)&local_90,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)&local_88,"missile_explosion");
    CreateExplosionEffect(this,(string *)&local_90,(string *)&local_88);
    std::string::~string((string *)&local_88);
    nop();
    std::string::~string((string *)&local_90);
    nop();
    std::string::string((string *)&local_88,"Play_CherryBomb");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_88,0.0);
    std::string::~string((string *)&local_88);
    nop();
    (**(code **)(*(long *)this + 0x48))(this);
    DamageInfo::~DamageInfo((DamageInfo *)aFStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

