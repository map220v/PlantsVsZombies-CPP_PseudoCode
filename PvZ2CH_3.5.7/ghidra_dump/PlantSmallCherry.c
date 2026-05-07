// Class: PlantSmallCherry


/* PlantSmallCherry::GetCollisionFlags(PlantWeapon) */

void PlantSmallCherry::GetCollisionFlags(void)

{
  operator|(1,4);
  return;
}


/* PlantSmallCherry::StaticGetClass() */

long * PlantSmallCherry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSmallCherry",uVar2,StaticNew);
  return sClass;
}


/* PlantSmallCherry::GetClass() const */

long * PlantSmallCherry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSmallCherry",uVar2,StaticNew);
  return sClass;
}


/* PlantSmallCherry::PlantSmallCherry() */

void __thiscall PlantSmallCherry::PlantSmallCherry(PlantSmallCherry *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b84b0;
  return;
}


/* PlantSmallCherry::StaticNew() */

PlantSmallCherry * PlantSmallCherry::StaticNew(void)

{
  PlantSmallCherry *this;
  
  this = ::operator_new(0x28);
  PlantSmallCherry(this);
  return this;
}


/* PlantSmallCherry::~PlantSmallCherry() */

void __thiscall PlantSmallCherry::~PlantSmallCherry(PlantSmallCherry *this)

{
  *(undefined ***)this = &PTR_GetClass_067b84b0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSmallCherry::~PlantSmallCherry() */

void __thiscall PlantSmallCherry::~PlantSmallCherry(PlantSmallCherry *this)

{
  ~PlantSmallCherry(this);
  AK::FreeHook(this);
  return;
}


/* PlantSmallCherry::Initialize() */

void __thiscall PlantSmallCherry::Initialize(PlantSmallCherry *this)

{
  char cVar1;
  long *plVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCherry::Explode() */

void __thiscall PlantSmallCherry::Explode(PlantSmallCherry *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  BoardEntity *this_00;
  Insets *pIVar9;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar10;
  int extraout_w1;
  undefined8 uVar11;
  RealObject *this_02;
  Plant *this_03;
  code *pcVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  Insets aIStack_98 [16];
  Iterator aIStack_88 [32];
  string asStack_68 [96];
  long local_8;
  
  this_02 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Potato_Mine");
  RealObject::PlayPositionalSound(this_02,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar19 = *pfVar5;
  fVar14 = pfVar5[1];
  Plant::GetProps();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  lVar6 = FUN_04028e88(*(undefined8 *)(lVar6 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  this_03 = *(Plant **)(this + 0x10);
  fVar15 = (float)FUN_04028e4c(*(undefined4 *)(this_03 + 0xf4),*(undefined4 *)(this_03 + 0x100),
                               *(undefined4 *)(this_03 + 0x104),*(undefined4 *)(this_03 + 0x3b8));
  fVar16 = (float)FUN_04028e5c(*(undefined4 *)(this_03 + 0x3bc));
  iVar1 = *(int *)(lVar6 + 0x2c);
  fVar17 = (float)Plant::GetExtraDPSmodifier(this_03);
  fVar18 = (float)FUN_04028e60(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar7,0x29);
  while( true ) {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88);
    if (!bVar2) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)asStack_68);
    Sexy::RtId::~RtId((RtId *)asStack_68);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
    cVar3 = (**(code **)(*plVar8 + 0x328))();
    if (cVar3 == '\0') {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
      pcVar12 = *(code **)(*plVar8 + 0xb8);
      if (*(code **)(*(long *)this + 400) == GetCollisionFlags) {
        uVar4 = GetCollisionFlags();
      }
      else {
        uVar4 = (**(code **)(*(long *)this + 400))(this,0);
      }
      cVar3 = (*pcVar12)(plVar8,uVar4);
      if (cVar3 != '\0') {
        this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        cVar3 = BoardEntity::IsInRow(this_00,*(int *)(*(long *)(this + 0x10) + 0x110));
        if (cVar3 != '\0') {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          pIVar9 = (Insets *)(**(code **)(*plVar8 + 0x178))();
          Sexy::Insets::Insets(aIStack_98,pIVar9);
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)asStack_68,(float)(int)fVar19,(float)(int)fVar14);
          bVar2 = RectCircleIntersection<int>((TRect *)aIStack_98,(SexyVector2 *)asStack_68,60.0);
          if (bVar2) {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
            pcVar12 = *(code **)(*plVar8 + 0x110);
            uVar7 = operator|(0x20,0x400);
            uVar11 = *(undefined8 *)(this + 0x10);
            Sexy::Point::Point(aPStack_a8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar15 * fVar16 * (float)iVar1 * fVar17 * fVar18),local_a0,
                       local_9c,asStack_68,uVar7,uVar11,aPStack_a8,0);
            (*pcVar12)(plVar8,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aIStack_88,"POPANIM_EFFECTS_SMALLCHERRY_EXPLOSION");
  GetPAMByName((string *)aIStack_88);
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar10,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  std::string::~string((string *)aIStack_88);
  nop();
  p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var13);
  fVar15 = *pfVar5;
  FUN_04028e64(aIStack_98,p_Var13);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_98);
  p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  fVar14 = *(float *)(lVar6 + 0x9c);
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var13);
  fVar16 = *(float *)(lVar6 + 4);
  FUN_04028e64(aIStack_88,p_Var13);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_88);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,fVar15 - fVar14,fVar16 - *(float *)(lVar6 + 0xa0),0.0)
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)asStack_68,-1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_98);
  uVar4 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_04028e44(this_01 + 0x1c,uVar4);
  std::string::string(asStack_68,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_01,asStack_68,bVar2);
  std::string::~string(asStack_68);
  nop();
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  Plant::KillPlant(*(Plant **)(this + 0x10),1,bVar2,0x8000000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCherry::UpdateActions() */

void __thiscall PlantSmallCherry::UpdateActions(PlantSmallCherry *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  PopAnimRig *this_01;
  long *plVar3;
  PlantAnimRig *pPVar4;
  code *pcVar5;
  undefined8 local_60;
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar2 == 1) {
    local_60 = (**(code **)(*(long *)this + 0x3f8))(this,0);
    (**(code **)(*(long *)this + 0xe0))
              (aRStack_58,this,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0,0,&local_60);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
    else {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar5 = *(code **)(*plVar3 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar5)(plVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar4 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar4,0xe);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
  }
  else {
    this_01 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_01);
    if (cVar1 == '\0') {
      Explode(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

