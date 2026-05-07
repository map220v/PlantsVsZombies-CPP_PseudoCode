// Class: StickybombBomb


/* StickybombBomb::Draw(Sexy::Graphics*) */

void __thiscall StickybombBomb::Draw(StickybombBomb *this,Graphics *param_1)

{
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  if (*(float *)(lVar1 + 8) < -5.0) {
    return;
  }
  BoardEntity::Draw((BoardEntity *)this,param_1);
  return;
}


/* non-virtual thunk to StickybombBomb::Draw(Sexy::Graphics*) */

void __thiscall StickybombBomb::Draw(StickybombBomb *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombBomb::StaticClassInit() */

void StickybombBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"StickybombBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_0427a8b0,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StickybombBomb::StaticGetClass() */

long * StickybombBomb::StaticGetClass(void)

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
  uVar2 = ModularBoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"StickybombBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StickybombBomb::GetClass() const */

long * StickybombBomb::GetClass(void)

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
  uVar2 = ModularBoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"StickybombBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StickybombBomb::HasMaxBombs() */

bool __thiscall StickybombBomb::HasMaxBombs(StickybombBomb *this)

{
  return 2 < *(int *)(this + 0xd0);
}


/* StickybombBomb::SetAvatarEnable(bool) */

void __thiscall StickybombBomb::SetAvatarEnable(StickybombBomb *this,bool param_1)

{
  if (param_1) {
    this[0xcc] = (StickybombBomb)0x1;
  }
  return;
}


/* StickybombBomb::SetInstigator(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall StickybombBomb::SetInstigator(StickybombBomb *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombBomb::getMainAnimForBombCount(int) */

void StickybombBomb::getMainAnimForBombCount(int param_1)

{
  long lVar1;
  ulong uVar2;
  int in_w1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  uVar2 = (ulong)(uint)param_1;
  if (-1 < in_w1) {
    if (in_w1 < 2) {
      if (*(char *)(uVar2 + 0xcc) == '\0') {
        __s = "animation2";
      }
      else {
        __s = "animation7";
      }
      goto LAB_042781c0;
    }
    if (in_w1 == 2) {
      if (*(char *)(uVar2 + 0xcc) == '\0') {
        __s = "animation3";
      }
      else {
        __s = "animation8";
      }
      goto LAB_042781c0;
    }
  }
  if (*(char *)(uVar2 + 0xcc) == '\0') {
    __s = "animation4";
  }
  else {
    __s = "animation9";
  }
LAB_042781c0:
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* StickybombBomb::ExplodeImmediately() */

void __thiscall StickybombBomb::ExplodeImmediately(StickybombBomb *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xd8) = uVar1;
  return;
}


/* StickybombBomb::TryTriggerCascade(int) */

void __thiscall StickybombBomb::TryTriggerCascade(StickybombBomb *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)RandRangeFloat(0.18,0.22);
  if ((*(int *)(this + 200) == 1) &&
     (fVar3 = *(float *)(this + 0xd8), fVar2 = (float)PVZ_T(), fVar1 < fVar3 - fVar2)) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0xd8) = fVar2 + fVar1;
  }
  if (*(int *)(this + 0xd4) < param_1) {
    if (param_1 < 6) {
      *(int *)(this + 0xd4) = param_1;
      return;
    }
    *(undefined4 *)(this + 0xd4) = 5;
  }
  return;
}


/* StickybombBomb::StickybombBomb() */

void __thiscall StickybombBomb::StickybombBomb(StickybombBomb *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ModularBoardEntity::ModularBoardEntity((ModularBoardEntity *)this);
  *(undefined4 *)(this + 200) = 0;
  this[0xcc] = (StickybombBomb)0x0;
  *(undefined ***)this = &PTR_GetClass_068223b0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)(this + 0x10) = &PTR__StickybombBomb_068225a8;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  *(undefined4 *)(this + 0x108) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieKilled);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<StickybombBomb,void(StickybombBomb::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* StickybombBomb::StaticNew() */

StickybombBomb * StickybombBomb::StaticNew(void)

{
  StickybombBomb *this;
  
  this = ::operator_new(0x120);
  StickybombBomb(this);
  return this;
}


/* StickybombBomb::~StickybombBomb() */

void __thiscall StickybombBomb::~StickybombBomb(StickybombBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_068223b0;
  *(undefined ***)(this + 0x10) = &PTR__StickybombBomb_068225a8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  ModularBoardEntity::~ModularBoardEntity((ModularBoardEntity *)this);
  return;
}


/* non-virtual thunk to StickybombBomb::~StickybombBomb() */

void __thiscall StickybombBomb::~StickybombBomb(StickybombBomb *this)

{
  ~StickybombBomb(this + -0x10);
  return;
}


/* StickybombBomb::~StickybombBomb() */

void __thiscall StickybombBomb::~StickybombBomb(StickybombBomb *this)

{
  ~StickybombBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StickybombBomb::~StickybombBomb() */

void __thiscall StickybombBomb::~StickybombBomb(StickybombBomb *this)

{
  ~StickybombBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombBomb::broadcastDamage() */

void __thiscall StickybombBomb::broadcastDamage(StickybombBomb *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  undefined8 *puVar8;
  Zombie *pZVar9;
  SexyVector3 *pSVar10;
  ZombieTosserSubSystem *pZVar11;
  RtObject *pRVar12;
  CthulhuSubSystem *this_02;
  StickybombBomb *this_03;
  RtObject *this_04;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  FastCurve aFStack_68 [96];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar13 = *pfVar5;
    fVar14 = pfVar5[1];
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar15 = *(float *)(this + 0xe0);
    uVar4 = operator|(2,4);
    Sexy::FastCurve::SetOutRange(aFStack_68,fVar13,fVar14);
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar3 * SQRT(fVar15),avStack_c8,uVar4,aFStack_68,0xffffffff,0xffffffff);
    iVar3 = *(int *)(this + 0xd4);
    fVar14 = *(float *)(this + 0xdc);
    fVar13 = *(float *)(this + 0xe8);
    uVar6 = operator|(0x400,0x1000);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x118));
    Sexy::Point::Point((Point *)&local_e0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_d8,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar13 * fVar14 * (float)iVar3),local_d8,local_d4,aFStack_68,uVar6,
               pRVar7,(Point *)&local_e0,0);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_c8);
    local_e0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8)
      ;
      this_04 = (RtObject *)*puVar8;
      cVar1 = RealObject::IsOnTeam(this_04,2);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this_04 + 0x110))(this_04,aFStack_68);
        bVar2 = Sexy::RtObject::IsA<Zombie>(this_04);
        if ((bVar2) &&
           (pRVar12 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00), this_04 != pRVar12)) {
          pZVar9 = Sexy::RtObject::Cast<Zombie>(this_04);
          std::string::string((string *)&local_d8,"stickybomb");
          this_02 = (CthulhuSubSystem *)
                    Zombie::GetAttachedBoardEntity(pZVar9,(FastCurve *)&local_d8);
          std::string::~string((string *)&local_d8);
          nop();
          if ((this_02 != (CthulhuSubSystem *)0x0) &&
             (cVar1 = CthulhuSubSystem::Update(this_02), cVar1 != '\0')) {
            pRVar12 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this_02 + 0x10));
            this_03 = Sexy::RtObject::Cast<StickybombBomb>(pRVar12);
            if ((this_03 != this) &&
               (fVar13 = (float)Sexy::Rand(1.0), fVar13 < *(float *)(this + 0xe4))) {
              TryTriggerCascade(this_03,*(int *)(this + 0xd4) + 1);
            }
          }
        }
        pZVar9 = Sexy::RtObject::Cast<Zombie>(this_04);
        if ((((pZVar9 != (Zombie *)0x0) && (this[0xcc] != (StickybombBomb)0x0)) &&
            (cVar1 = Zombie::CanBeLaunchedByPlants(pZVar9), cVar1 != '\0')) &&
           (((cVar1 = Zombie::IsBerserk(pZVar9), cVar1 == '\0' &&
             (cVar1 = Zombie::HasFogImmune(pZVar9), cVar1 == '\0')) &&
            (iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)pZVar9), iVar3 < 800)))) {
          DVec3::DVec3((DVec3 *)&local_d8);
          pSVar10 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)pZVar9);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_d8,pSVar10);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          local_d8 = (float)(iVar3 / 2) + local_d8;
          pZVar11 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar11,pZVar9,
                     (FastCurve *)&local_d8,aRStack_b0,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
    }
    DamageInfo::~DamageInfo((DamageInfo *)aFStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombBomb::explode() */

void __thiscall StickybombBomb::explode(StickybombBomb *this)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  SexyVector3 *this_01;
  Zombie *pZVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  *(undefined4 *)(this + 200) = 2;
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_STICKYBOMB_EXPLOSION");
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  uVar5 = 0xc2c80000;
  uVar6 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,-80.0,-100.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_28);
  local_14 = uVar5;
  local_10 = uVar6;
  uVar5 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = Board::MakeRenderOrder(0x64960,uVar5,1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2);
  std::string::string((string *)&local_18,"animation5");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (cVar1 != '\0') {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    Zombie::EndCondition(pZVar4,0x57);
  }
  broadcastDamage(this);
  (**(code **)(*(long *)this + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StickybombBomb::onUpdate() */

void __thiscall StickybombBomb::onUpdate(StickybombBomb *this)

{
  float fVar1;
  
  ModularBoardEntity::onUpdate((ModularBoardEntity *)this);
  if ((*(int *)(this + 200) == 1) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0xd8) < fVar1)) {
    explode(this);
    return;
  }
  return;
}


/* StickybombBomb::onZombieKilled(Zombie*, DamageInfo const*) */

void StickybombBomb::onZombieKilled(Zombie *param_1,DamageInfo *param_2)

{
  DamageInfo *pDVar1;
  
  if ((*(int *)(param_1 + 200) == 1) &&
     (pDVar1 = (DamageInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x110)), param_2 == pDVar1)) {
    explode((StickybombBomb *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombBomb::IncrementBombCount(float, float, float, float, float) */

void __thiscall
StickybombBomb::IncrementBombCount
          (StickybombBomb *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  int iVar1;
  char cVar2;
  AttachedEffect *pAVar3;
  char *pcVar4;
  float fVar5;
  string asStack_28 [8];
  Vec3 aVStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = HasMaxBombs(this);
  if (cVar2 == '\0') {
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
    iVar1 = *(int *)(this + 200);
    *(float *)(this + 0xdc) = *(float *)(this + 0xdc) + param_1;
    if (this[0xcc] != (StickybombBomb)0x0) {
      *(undefined4 *)(this + 0xd0) = 3;
      *(float *)(this + 0xdc) = param_1 * 3.0;
      if (iVar1 != 0) {
LAB_0427b87c:
        if (iVar1 != 2) {
          std::string::string((string *)aVStack_20,"bomb");
          pAVar3 = (AttachedEffect *)
                   ModularBoardEntity::GetAttachedEffect
                             ((ModularBoardEntity *)this,(string *)aVStack_20);
          std::string::~string((string *)aVStack_20);
          nop();
          getMainAnimForBombCount((int)this);
          AttachedEffect::PlayAnimLooped(pAVar3,(string *)aVStack_20,2);
          std::string::~string((string *)aVStack_20);
        }
        goto LAB_0427b828;
      }
      goto LAB_0427b728;
    }
    if (iVar1 != 0) goto LAB_0427b87c;
LAB_0427b86c:
    pcVar4 = "animation";
  }
  else {
    if (*(int *)(this + 200) != 0) goto LAB_0427b828;
    if (this[0xcc] == (StickybombBomb)0x0) goto LAB_0427b86c;
LAB_0427b728:
    pcVar4 = "animation6";
  }
  EATextSquish::Vec3::Vec3(aVStack_20,20.0,-10.0,0.0);
  pAVar3 = (AttachedEffect *)
           ModularBoardEntity::AddAttachedEffect
                     ((ModularBoardEntity *)this,"bomb","POPANIM_EFFECTS_STICKYBOMB_EXPLOSION",
                      pcVar4,(SexyVector3 *)aVStack_20,1,false,false);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aVStack_20);
  if (this[0xcc] == (StickybombBomb)0x0) {
    pcVar4 = "animation";
  }
  else {
    pcVar4 = "animation6";
  }
  std::string::string(asStack_28,pcVar4);
  AnimationSequence::AddSingleAnimation(aVStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  getMainAnimForBombCount((int)this);
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aVStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  AttachedEffect::PlayAnimSequence(pAVar3,(AnimationSequence *)aVStack_20);
  fVar5 = (float)PVZ_T();
  *(undefined4 *)(this + 200) = 1;
  *(float *)(this + 0xe0) = param_3;
  *(float *)(this + 0xe4) = param_4;
  *(float *)(this + 0xd8) = fVar5 + param_2;
  *(float *)(this + 0xe8) = param_5;
  AnimationSequence::~AnimationSequence((AnimationSequence *)aVStack_20);
LAB_0427b828:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

