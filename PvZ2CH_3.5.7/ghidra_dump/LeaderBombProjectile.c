// Class: LeaderBombProjectile


/* LeaderBombProjectile::onAnimStopped(std::string const&) */

void LeaderBombProjectile::onAnimStopped(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* LeaderBombProjectile::~LeaderBombProjectile() */

void __thiscall LeaderBombProjectile::~LeaderBombProjectile(LeaderBombProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06915790;
  *(undefined ***)(this + 0x10) = &PTR__LeaderBombProjectile_06915980;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to LeaderBombProjectile::~LeaderBombProjectile() */

void __thiscall LeaderBombProjectile::~LeaderBombProjectile(LeaderBombProjectile *this)

{
  ~LeaderBombProjectile(this + -0x10);
  return;
}


/* LeaderBombProjectile::~LeaderBombProjectile() */

void __thiscall LeaderBombProjectile::~LeaderBombProjectile(LeaderBombProjectile *this)

{
  ~LeaderBombProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LeaderBombProjectile::~LeaderBombProjectile() */

void __thiscall LeaderBombProjectile::~LeaderBombProjectile(LeaderBombProjectile *this)

{
  ~LeaderBombProjectile(this + -0x10);
  return;
}


/* LeaderBombProjectile::LeaderBombProjectile() */

void __thiscall LeaderBombProjectile::LeaderBombProjectile(LeaderBombProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06915790;
  *(undefined ***)(this + 0x10) = &PTR__LeaderBombProjectile_06915980;
  return;
}


/* LeaderBombProjectile::StaticNew() */

LeaderBombProjectile * LeaderBombProjectile::StaticNew(void)

{
  LeaderBombProjectile *this;
  
  this = ::operator_new(0x1a8);
  LeaderBombProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LeaderBombProjectile::StaticClassInit() */

void LeaderBombProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LeaderBombProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0495e898,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LeaderBombProjectile::StaticGetClass() */

long * LeaderBombProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LeaderBombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LeaderBombProjectile::GetClass() const */

long * LeaderBombProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"LeaderBombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LeaderBombProjectile::onProjectileInitialized() */

void __thiscall LeaderBombProjectile::onProjectileInitialized(LeaderBombProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<LeaderBombProjectile,void(LeaderBombProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"boom4");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<LeaderBombProjectile,void(LeaderBombProjectile::*)(std::string_const&)>
            ((Delegate1<std::string_const&> *)aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LeaderBombProjectile::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void __thiscall
LeaderBombProjectile::onAnimCommand
          (LeaderBombProjectile *this,string *param_1,float param_2,string *param_3,string *param_4)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  undefined8 *puVar6;
  StandaloneEffect *pSVar7;
  PopAnimRig *this_01;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  LineBreakCategory *pLVar12;
  LineBreakCategory *pLVar13;
  LineBreakCategory *in_x4;
  ulong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar13 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"boom4");
  if (((bVar1) && (bVar1 = std::operator==(param_3,"use_action"), this_00 = gLawnApp, bVar1)) &&
     (*(long *)(gLawnApp + 0x9f0) != 0)) {
    std::string::string(asStack_68,"TacticalCuke");
    cVar2 = LawnApp::IsGroupLoadComplete(this_00,asStack_68);
    std::string::~string(asStack_68);
    nop();
    if (cVar2 != '\0') {
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      pEVar4 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
      ;
      std::string::string((string *)&local_80,"POPANIM_EFFECTS_POWER_UP_TACTICALCUKE_EXPLOSION");
      GetPAMByName((string *)&local_80);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)&local_80);
      nop();
      pEVar4 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
      ;
      Effect_PopAnim::SetCentered(pEVar4,true);
      puVar6 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_88 = *(undefined4 *)(puVar6 + 1);
      local_90 = (float)*puVar6;
      fStack_8c = (float)((ulong)*puVar6 >> 0x20);
      _local_90 = CONCAT44(fStack_8c + 120.0,local_90 + 100.0);
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
      ;
      pLVar12 = (LineBreakCategory *)0xc3500;
      auVar16 = StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_90,800000);
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (auVar16._0_8_,auVar16._8_8_,pLVar12,pLVar13,in_x4);
      if (cVar2 == '\0') {
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
        (**(code **)(*plVar11 + 0x80))(0x40000000);
      }
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
      ;
      uVar14 = 0;
      StandaloneEffect::SetKeepAlive(pSVar7,false);
      pEVar4 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
      ;
      std::string::string(asStack_68,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
      Effect_PopAnim::GetPopAnimRigPtr();
      this_01 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_80)
      ;
      std::string::string(asStack_68,"animation");
      fVar15 = (float)PopAnimRig::CalcAnimLengthSeconds(this_01,asStack_68);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      Board::ExplosionShakeBoard(*(Board **)(gLawnApp + 0x9f0),0x14,5,fVar15);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar3 = operator|(2,4);
      EntityFinder::GetEntities((string *)&local_80,uVar3);
      uVar8 = operator|(0x1000,8);
      uVar8 = operator|(uVar8,0x200);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x45c4e000,local_98,local_94,asStack_68,uVar8,0,aPStack_a0,0);
      uVar8 = local_80;
      lVar9 = FUN_0495e5f4(local_80,local_78);
      if (lVar9 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_0495e600(uVar8,uVar14);
          cVar2 = RealObject::IsOnOpposingTeam(*puVar6,1);
          if (cVar2 != '\0') {
            puVar6 = (undefined8 *)FUN_0495e600(local_80,uVar14);
            (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,asStack_68);
          }
          uVar8 = local_80;
          uVar14 = uVar14 + 1;
          uVar10 = FUN_0495e5f4(local_80,local_78);
        } while (uVar14 < uVar10);
      }
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

