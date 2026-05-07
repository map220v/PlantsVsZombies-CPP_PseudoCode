// Class: ZombieTargetArchmage


/* ZombieTargetArchmage::~ZombieTargetArchmage() */

void __thiscall ZombieTargetArchmage::~ZombieTargetArchmage(ZombieTargetArchmage *this)

{
  *(undefined ***)this = &PTR_GetClass_068967e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTargetArchmage_06897220;
  ZombieTarget::~ZombieTarget((ZombieTarget *)this);
  return;
}


/* non-virtual thunk to ZombieTargetArchmage::~ZombieTargetArchmage() */

void __thiscall ZombieTargetArchmage::~ZombieTargetArchmage(ZombieTargetArchmage *this)

{
  ~ZombieTargetArchmage(this + -0x10);
  return;
}


/* ZombieTargetArchmage::~ZombieTargetArchmage() */

void __thiscall ZombieTargetArchmage::~ZombieTargetArchmage(ZombieTargetArchmage *this)

{
  ~ZombieTargetArchmage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTargetArchmage::~ZombieTargetArchmage() */

void __thiscall ZombieTargetArchmage::~ZombieTargetArchmage(ZombieTargetArchmage *this)

{
  ~ZombieTargetArchmage(this + -0x10);
  return;
}


/* ZombieTargetArchmage::ZombieTargetArchmage() */

void __thiscall ZombieTargetArchmage::ZombieTargetArchmage(ZombieTargetArchmage *this)

{
  ZombieTarget::ZombieTarget((ZombieTarget *)this);
  *(undefined ***)this = &PTR_GetClass_068967e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTargetArchmage_06897220;
  return;
}


/* ZombieTargetArchmage::StaticNew() */

ZombieTargetArchmage * ZombieTargetArchmage::StaticNew(void)

{
  ZombieTargetArchmage *this;
  
  this = ::operator_new(0x820);
  ZombieTargetArchmage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetArchmage::StaticClassInit() */

void ZombieTargetArchmage::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTargetArchmage");
    (*pcVar2)(plVar1,asStack_10,FUN_046752ec,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetArchmage::StaticGetClass() */

long * ZombieTargetArchmage::StaticGetClass(void)

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
  uVar2 = ZombieTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetArchmage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetArchmage::GetClass() const */

long * ZombieTargetArchmage::GetClass(void)

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
  uVar2 = ZombieTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetArchmage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetArchmage::onEnterState_RiseFromGround(ZombieState) */

void ZombieTargetArchmage::onEnterState_RiseFromGround(Zombie *param_1)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_78,-0x28,-0x3a);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar5 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar5)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_70 = *(undefined8 *)pfVar3;
  local_68 = 0xc2f00000;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_70);
  RealObject::SetUseGroundClipRect((RealObject *)param_1,true);
  fVar7 = *pfVar3;
  fVar6 = pfVar3[1];
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetDirtSpawnEffect();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,fVar7 + (float)local_78,(float)local_74 + -10.0 + fVar6,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_046750f8(this + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_60,"tomb_dirt_anim");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  std::string::string((string *)aRStack_60,"Play_Gravestone_rumble");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_60,0.0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetArchmage::onEnterState_TargetAttack(ZombieState) */

void ZombieTargetArchmage::onEnterState_TargetAttack(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTargetAttackAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Archmage::StartHypnotize((ZombieAnimRig_Archmage *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetArchmage::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieTargetArchmage::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar5;
  ZombieTargetProps *pZVar6;
  Projectile *this_00;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  Board *pBVar13;
  undefined4 uVar11;
  float fVar12;
  FastCurve aFStack_98 [8];
  Vec3 aVStack_90 [8];
  float afStack_88 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
      bVar2 = std::operator==(param_4,"sheep_action");
      if ((bVar2) &&
         (this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)ZombieTarget::getValidTargetPlant(),
         this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0)) {
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
                    /* WARNING: Load size is inaccurate */
        pBVar13._0_4_ = *puVar5;
        uVar11 = *(undefined4 *)((long)puVar5 + 4);
        uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
        pZVar6 = Zombie::GetProps<ZombieTargetProps>((Zombie *)param_1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_68,(RtWeakPtrBase *)(pZVar6 + 0x230));
        this_00 = (Projectile *)
                  Board::AddProjectile(pBVar13._0_4_,uVar11,0x42c80000,uVar9,aRStack_68,param_1,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Projectile::SetShadow(this_00,false);
        iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x114));
        iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x110));
        EATextSquish::Vec3::Vec3(aVStack_90,(float)(iVar3 + -0x14),(float)(iVar4 + 0x28),0.0);
        lVar7 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
        pfVar8 = eastl::max_alt<float>((float *)(lVar7 + 8),afStack_88);
        Projectile::LaunchAt(this_00,(SexyVector3 *)aVStack_90,*pfVar8,0.5);
        DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
        local_60 = Projectile::GetDamageAmount(this_00);
        (**(code **)(*(long *)this + 0x110))(this,aRStack_68);
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this);
        fVar10 = pfVar8[1];
        fVar12 = *pfVar8;
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
        Sexy::FastCurve::SetOutRange(aFStack_98,(float)(int)fVar12,(float)(int)(fVar10 - 30.0));
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar3 * 1.44,avStack_80,1,aFStack_98,*(int *)(this + 0x110) + -1,
                   *(int *)(this + 0x110) + 1);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

