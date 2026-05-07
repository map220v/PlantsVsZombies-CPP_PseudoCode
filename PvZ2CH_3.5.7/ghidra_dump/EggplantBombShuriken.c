// Class: EggplantBombShuriken


/* EggplantBombShuriken::~EggplantBombShuriken() */

void __thiscall EggplantBombShuriken::~EggplantBombShuriken(EggplantBombShuriken *this)

{
  *(undefined ***)this = &PTR_GetClass_0674ab40;
  *(undefined ***)(this + 0x10) = &PTR__EggplantBombShuriken_0674ad40;
  EggplantShuriken::~EggplantShuriken((EggplantShuriken *)this);
  return;
}


/* non-virtual thunk to EggplantBombShuriken::~EggplantBombShuriken() */

void __thiscall EggplantBombShuriken::~EggplantBombShuriken(EggplantBombShuriken *this)

{
  ~EggplantBombShuriken(this + -0x10);
  return;
}


/* EggplantBombShuriken::~EggplantBombShuriken() */

void __thiscall EggplantBombShuriken::~EggplantBombShuriken(EggplantBombShuriken *this)

{
  ~EggplantBombShuriken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EggplantBombShuriken::~EggplantBombShuriken() */

void __thiscall EggplantBombShuriken::~EggplantBombShuriken(EggplantBombShuriken *this)

{
  ~EggplantBombShuriken(this + -0x10);
  return;
}


/* EggplantBombShuriken::EggplantBombShuriken() */

void __thiscall EggplantBombShuriken::EggplantBombShuriken(EggplantBombShuriken *this)

{
  EggplantShuriken::EggplantShuriken((EggplantShuriken *)this);
  this[0x1ed] = (EggplantBombShuriken)0x0;
  *(undefined ***)this = &PTR_GetClass_0674ab40;
  *(undefined ***)(this + 0x10) = &PTR__EggplantBombShuriken_0674ad40;
  return;
}


/* EggplantBombShuriken::StaticNew() */

EggplantBombShuriken * EggplantBombShuriken::StaticNew(void)

{
  EggplantBombShuriken *this;
  
  this = ::operator_new(0x1f0);
  EggplantBombShuriken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantBombShuriken::StaticClassInit() */

void EggplantBombShuriken::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantBombShuriken");
    (*pcVar2)(plVar1,asStack_10,FUN_03c28190,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantBombShuriken::StaticGetClass() */

long * EggplantBombShuriken::StaticGetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantBombShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantBombShuriken::GetClass() const */

long * EggplantBombShuriken::GetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantBombShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantBombShuriken::handleImpact(BoardEntity*) */

void __thiscall EggplantBombShuriken::handleImpact(EggplantBombShuriken *this,BoardEntity *param_1)

{
  char cVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ed] == (EggplantBombShuriken)0x0) {
    this[0x1ed] = (EggplantBombShuriken)0x1;
    std::string::string(asStack_18,"POPANIM_EFFECTS_SPLAT_FIRE_PEA");
    GetPAMByName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
      fVar4 = *(float *)(this + 0x1c);
      fVar5 = *(float *)(this + 0x20);
      fVar3 = *(float *)(this + 0x18);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,local_20 + fVar3,(local_1c + fVar4) - fVar5,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
      FUN_03c277c8(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      std::string::string(asStack_18,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,2);
      std::string::~string(asStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantBombShuriken::OnCollideEntity(BoardEntity*) */

void __thiscall
EggplantBombShuriken::OnCollideEntity(EggplantBombShuriken *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  RtObject *pRVar9;
  Zombie *pZVar10;
  EggplantSepcialShurikenProps *pEVar11;
  ulong uVar12;
  PopAnimRig *pPVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 local_b0;
  undefined8 local_a8;
  DummyInit aDStack_98 [48];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ed] == (EggplantBombShuriken)0x0) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    uVar14 = 0;
    uVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
    uVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar6[1]);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0,uVar5,
               uVar3,uVar4);
    uVar15 = local_b0;
    lVar7 = FUN_03c27814(local_b0,local_a8);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_03c27820(uVar15,uVar14);
        bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar8);
        if (bVar1) {
          FUN_03c27820(local_b0,uVar14);
          ToolPacketData::GetProps();
          pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          pZVar10 = Sexy::RtObject::Cast<Zombie>(pRVar9);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          cVar2 = RealObject::IsOnOpposingTeam(pZVar10,2);
          if (cVar2 == '\0') goto LAB_03c2c1d0;
        }
        else {
LAB_03c2c1d0:
          DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
          (**(code **)(*(long *)this + 0x178))(this,aRStack_68,0);
          pRVar9 = (RtObject *)Projectile::GetProps((Projectile *)this);
          pEVar11 = Sexy::RtObject::Cast<EggplantSepcialShurikenProps>(pRVar9);
          local_60 = (float)FUN_03c277d0(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c)
                                         ,*(undefined4 *)(this + 0x180),
                                         *(undefined4 *)(this + 0x184));
          local_60 = local_60 * *(float *)(pEVar11 + 0x1e0);
          SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
          SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
          puVar8 = (undefined8 *)FUN_03c27820(local_b0,uVar14);
          (**(code **)(*(long *)*puVar8 + 0x110))((long *)*puVar8,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        uVar15 = local_b0;
        uVar14 = uVar14 + 1;
        uVar12 = FUN_03c27814(local_b0,local_a8);
      } while (uVar14 < uVar12);
    }
    pPVar13 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string((string *)aRStack_68,"animation2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_98);
    PopAnimRig::PlayAndContinue(pPVar13,aRStack_68,0,aDStack_98);
    std::string::~string((string *)aRStack_68);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_b0);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

