// Class: TulipProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TulipProjectile::handleImpact(BoardEntity*) */

void __thiscall TulipProjectile::handleImpact(TulipProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  long lVar6;
  char *__s;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float fStack_20;
  float fStack_1c;
  Vec3 aVStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  lVar3 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar2 = FUN_0547419c(asStack_30);
  if (cVar2 == '\0') {
    GetPAMByName(asStack_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar2 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&fStack_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&fStack_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
        fVar9 = fStack_20 + *(float *)(this + 0x18);
        fVar8 = (fStack_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar9 = fStack_20 + *pfVar4;
        fVar8 = (fStack_1c + pfVar4[1]) - pfVar4[2];
      }
      cVar2 = CardGameUtils::IsPlayingCardGame();
      if ((cVar2 == '\0') && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 == '\0')) {
        uVar7 = 0x3f800000;
      }
      else {
        uVar7 = *(undefined4 *)(this + 0xc0);
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar7,this_00);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar9,fVar8,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_0434ad84(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      lVar6 = Projectile::getProps((Projectile *)this);
      __s = (char *)FUN_0547429c(lVar6 + 0x148);
      std::string::string((string *)aVStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
      std::string::~string((string *)aVStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (((*(int *)(this + 0x4c) < 1) ||
      (iVar1 = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) = iVar1, iVar1 == 0)) &&
     (cVar2 = *(char *)(lVar3 + 0x65), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string(asStack_30);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* TulipProjectile::~TulipProjectile() */

void __thiscall TulipProjectile::~TulipProjectile(TulipProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068149c0;
  *(undefined ***)(this + 0x10) = &PTR__TulipProjectile_06814bb0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TulipProjectile::~TulipProjectile() */

void __thiscall TulipProjectile::~TulipProjectile(TulipProjectile *this)

{
  ~TulipProjectile(this + -0x10);
  return;
}


/* TulipProjectile::~TulipProjectile() */

void __thiscall TulipProjectile::~TulipProjectile(TulipProjectile *this)

{
  ~TulipProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TulipProjectile::~TulipProjectile() */

void __thiscall TulipProjectile::~TulipProjectile(TulipProjectile *this)

{
  ~TulipProjectile(this + -0x10);
  return;
}


/* TulipProjectile::TulipProjectile() */

void __thiscall TulipProjectile::TulipProjectile(TulipProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068149c0;
  *(undefined ***)(this + 0x10) = &PTR__TulipProjectile_06814bb0;
  return;
}


/* TulipProjectile::StaticNew() */

TulipProjectile * TulipProjectile::StaticNew(void)

{
  TulipProjectile *this;
  
  this = ::operator_new(0x1a8);
  TulipProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TulipProjectile::StaticClassInit() */

void TulipProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TulipProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0423efc0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TulipProjectile::StaticGetClass() */

long * TulipProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TulipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TulipProjectile::GetClass() const */

long * TulipProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"TulipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

