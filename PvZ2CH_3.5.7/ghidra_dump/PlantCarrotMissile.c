// Class: PlantCarrotMissile


/* PlantCarrotMissile::onBePushed() */

void __thiscall PlantCarrotMissile::onBePushed(PlantCarrotMissile *this)

{
  Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
  return;
}


/* PlantCarrotMissile::UpdateActions() */

void __thiscall PlantCarrotMissile::UpdateActions(PlantCarrotMissile *this)

{
  char cVar1;
  Plant *pPVar2;
  
  pPVar2 = *(Plant **)(this + 0x10);
  cVar1 = FUN_0408fba8(*(undefined4 *)(pPVar2 + 0x1d0));
  if (cVar1 == '\0') {
    return;
  }
  Plant::KillPlant(pPVar2,0,0,1);
  return;
}


/* PlantCarrotMissile::PlantCarrotMissile() */

void __thiscall PlantCarrotMissile::PlantCarrotMissile(PlantCarrotMissile *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantCarrotMissile)0x0;
  *(undefined ***)this = &PTR_GetClass_067cd340;
  return;
}


/* PlantCarrotMissile::StaticNew() */

PlantCarrotMissile * PlantCarrotMissile::StaticNew(void)

{
  PlantCarrotMissile *this;
  
  this = ::operator_new(0x30);
  PlantCarrotMissile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotMissile::StaticClassInit() */

void PlantCarrotMissile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCarrotMissile");
    (*pcVar2)(plVar1,asStack_10,FUN_0408fdc4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCarrotMissile::StaticGetClass() */

long * PlantCarrotMissile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCarrotMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCarrotMissile::GetClass() const */

long * PlantCarrotMissile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCarrotMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCarrotMissile::~PlantCarrotMissile() */

void __thiscall PlantCarrotMissile::~PlantCarrotMissile(PlantCarrotMissile *this)

{
  *(undefined ***)this = &PTR_GetClass_067cd340;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCarrotMissile::~PlantCarrotMissile() */

void __thiscall PlantCarrotMissile::~PlantCarrotMissile(PlantCarrotMissile *this)

{
  ~PlantCarrotMissile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotMissile::PlayIdleAnim(bool) */

void __thiscall PlantCarrotMissile::PlayIdleAnim(PlantCarrotMissile *this,bool param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    if (param_1) {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_40,"avatar_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    else {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_40,"missle_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    this[0x28] = (PlantCarrotMissile)param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCarrotMissile::onKilled(bool) */

void PlantCarrotMissile::onKilled(bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  char *pcVar6;
  float *pfVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  StandaloneEffect *pSVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  Zombie *this;
  long *extraout_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Plant *this_01;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  DamageInfo *pDVar22;
  float fVar21;
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  Point aPStack_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  uVar5 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_Plant_Squash_Impact");
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(uVar5 + 0x10);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar20 = pfVar7[1];
  fVar21 = *pfVar7;
  iVar2 = SharkMinion::getRow((SharkMinion *)this_00);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pEVar8 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  std::string::string((string *)&local_80,"POPANIM_EFFECTS_CARROT_MISSILE_DROP");
  GetPAMByName((string *)&local_80);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::string::~string((string *)&local_80);
  nop();
  pEVar8 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Effect_PopAnim::SetCentered(pEVar8,true);
  pSVar10 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(int)fVar21,(float)(int)(fVar20 - 30.0),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar10,(SexyVector3 *)aRStack_68,800000);
  pSVar10 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  StandaloneEffect::SetKeepAlive(pSVar10,false);
  pEVar8 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  std::string::string((string *)aRStack_68,"missle_boom");
  Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_68,0);
  std::string::~string((string *)aRStack_68);
  nop();
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  this_01 = *(Plant **)(uVar5 + 0x10);
  fVar16 = (float)FUN_0408fbfc(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                               *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar17 = (float)FUN_0408fc0c(*(undefined4 *)(this_01 + 0x3bc));
  fVar18 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar19 = (float)FUN_0408fc10(*(undefined4 *)(*(long *)(uVar5 + 0x10) + 0x424));
  pDVar22._0_4_ = (DamageInfo *)(fVar16 * fVar17 * 1800.0 * fVar18 * fVar19);
  if (*(char *)(uVar5 + 0x28) != '\0') {
    pDVar22._0_4_ = (DamageInfo *)((float)pDVar22._0_4_ * 1.5);
  }
  uVar14 = 0;
  Sexy::Point::Point(aPStack_88,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo(pDVar22._0_4_,local_80,uStack_7c,aRStack_68,1,0,aPStack_88,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(2,4);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aPStack_88,(float)(int)fVar21,(float)(int)(fVar20 - 30.0));
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar3 * 1.44,(string *)&local_80,uVar4,aPStack_88,iVar2 + -1,iVar2 + 1);
  uVar15 = CONCAT44(uStack_7c,local_80);
  lVar11 = FUN_0408fc18(uVar15,local_78);
  if (lVar11 != 0) {
    do {
      puVar12 = (undefined8 *)FUN_0408fc24(uVar15,uVar14);
      cVar1 = RealObject::IsOnOpposingTeam(*(RealObject **)(uVar5 + 0x10),(RealObject *)*puVar12);
      if (cVar1 != '\0') {
        puVar12 = (undefined8 *)FUN_0408fc24(CONCAT44(uStack_7c,local_80),uVar14);
        this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
        if (this == (Zombie *)0x0) {
          FUN_0408fc24(CONCAT44(uStack_7c,local_80),uVar14);
          nop();
          (**(code **)(*extraout_x0 + 0x110))();
        }
        else {
          cVar1 = Zombie::IsOnGround(this);
          if (((cVar1 != '\0') &&
              (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
             (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
            (**(code **)(*(long *)this + 0x110))(this,aRStack_68);
          }
        }
      }
      uVar14 = uVar14 + 1;
      uVar15 = CONCAT44(uStack_7c,local_80);
      uVar13 = FUN_0408fc18(uVar15,local_78);
    } while (uVar14 < uVar13);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

