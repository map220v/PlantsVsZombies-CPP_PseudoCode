// Class: ArmorflameClusterBomb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameClusterBomb::StaticClassInit() */

void ArmorflameClusterBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmorflameClusterBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_042c2f48,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorflameClusterBomb::StaticGetClass() */

long * ArmorflameClusterBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameClusterBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameClusterBomb::GetClass() const */

long * ArmorflameClusterBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameClusterBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameClusterBomb::~ArmorflameClusterBomb() */

void __thiscall ArmorflameClusterBomb::~ArmorflameClusterBomb(ArmorflameClusterBomb *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa8);
  *(undefined ***)this = &PTR_GetClass_0682d6a0;
  *(undefined ***)(this + 0x10) = &PTR__ArmorflameClusterBomb_0682d888;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ArmorflameClusterBomb::~ArmorflameClusterBomb() */

void __thiscall ArmorflameClusterBomb::~ArmorflameClusterBomb(ArmorflameClusterBomb *this)

{
  ~ArmorflameClusterBomb(this + -0x10);
  return;
}


/* ArmorflameClusterBomb::~ArmorflameClusterBomb() */

void __thiscall ArmorflameClusterBomb::~ArmorflameClusterBomb(ArmorflameClusterBomb *this)

{
  ~ArmorflameClusterBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArmorflameClusterBomb::~ArmorflameClusterBomb() */

void __thiscall ArmorflameClusterBomb::~ArmorflameClusterBomb(ArmorflameClusterBomb *this)

{
  ~ArmorflameClusterBomb(this + -0x10);
  return;
}


/* ArmorflameClusterBomb::ArmorflameClusterBomb() */

void __thiscall ArmorflameClusterBomb::ArmorflameClusterBomb(ArmorflameClusterBomb *this)

{
  float fVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0682d6a0;
  *(undefined ***)(this + 0x10) = &PTR__ArmorflameClusterBomb_0682d888;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xb0) = fVar1 + 3.0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xb4) = fVar1 + 1.0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xbc) = fVar1 + 2.0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xb8) = fVar1 + 1.0;
  return;
}


/* ArmorflameClusterBomb::StaticNew() */

ArmorflameClusterBomb * ArmorflameClusterBomb::StaticNew(void)

{
  ArmorflameClusterBomb *this;
  
  this = ::operator_new(0xc0);
  ArmorflameClusterBomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameClusterBomb::initialize() */

void __thiscall ArmorflameClusterBomb::initialize(ArmorflameClusterBomb *this)

{
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_ARMORFLAME_CLUSTERBOMB");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar1,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string(asStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,80.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)asStack_18,2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameClusterBomb::onUpdate() */

void __thiscall ArmorflameClusterBomb::onUpdate(ArmorflameClusterBomb *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  ulong uVar10;
  code *pcVar11;
  float fVar12;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar12 = (float)PVZ_T();
  if (((*(float *)(this + 0xb4) < fVar12) && (fVar12 < *(float *)(this + 0xbc))) &&
     (*(float *)(this + 0xb8) < fVar12)) {
    uVar10 = 0;
    *(float *)(this + 0xb8) = *(float *)(this + 0xb8) + 0.1;
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar12 = *pfVar5;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    Sexy::Insets::Insets(aIStack_90,(int)fVar12,0xa0,iVar3 * 3,600);
    uVar4 = operator|(2,4);
    EntityFinder::GetEntitiesInRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aIStack_90);
    while (uVar1 = local_80, uVar6 = FUN_042c0164(local_80,local_78), uVar10 < uVar6) {
      puVar7 = (undefined8 *)FUN_042c0170(uVar1,uVar10);
      pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      puVar7 = (undefined8 *)FUN_042c0170(local_80,uVar10);
      pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
      if (pZVar8 == (Zombie *)0x0) {
        if ((pGVar9 == (GridItem *)0x0) ||
           (cVar2 = RealObject::IsOnOpposingTeam(pGVar9,1), cVar2 == '\0')) goto LAB_042c3a14;
        uVar10 = uVar10 + 1;
        pcVar11 = *(code **)(*(long *)pGVar9 + 0x110);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x42c80000,local_98,local_94,aDStack_68,0x400,0,aPStack_a0,0);
        (*pcVar11)(pGVar9,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      else {
        cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))(pZVar8);
        if ((cVar2 == '\0') && (cVar2 = RealObject::IsOnOpposingTeam(pZVar8,1), cVar2 != '\0')) {
          uVar10 = uVar10 + 1;
          pcVar11 = *(code **)(*(long *)pZVar8 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x42c80000,local_98,local_94,aDStack_68,0x400,0,aPStack_a0,0);
          (*pcVar11)(pZVar8,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        else {
LAB_042c3a14:
          uVar10 = uVar10 + 1;
        }
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  fVar12 = (float)PVZ_T();
  if (*(float *)(this + 0xb0) < fVar12) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

