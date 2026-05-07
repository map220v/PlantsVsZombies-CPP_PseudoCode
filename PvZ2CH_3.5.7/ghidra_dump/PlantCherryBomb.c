// Class: PlantCherryBomb


/* PlantCherryBomb::StaticGetClass() */

long * PlantCherryBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCherryBomb",uVar2,StaticNew);
  return sClass;
}


/* PlantCherryBomb::GetClass() const */

long * PlantCherryBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCherryBomb",uVar2,StaticNew);
  return sClass;
}


/* PlantCherryBomb::PlantCherryBomb() */

void __thiscall PlantCherryBomb::PlantCherryBomb(PlantCherryBomb *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b7f70;
  return;
}


/* PlantCherryBomb::StaticNew() */

PlantCherryBomb * PlantCherryBomb::StaticNew(void)

{
  PlantCherryBomb *this;
  
  this = ::operator_new(0x28);
  PlantCherryBomb(this);
  return this;
}


/* PlantCherryBomb::~PlantCherryBomb() */

void __thiscall PlantCherryBomb::~PlantCherryBomb(PlantCherryBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_067b7f70;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCherryBomb::~PlantCherryBomb() */

void __thiscall PlantCherryBomb::~PlantCherryBomb(PlantCherryBomb *this)

{
  ~PlantCherryBomb(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCherryBomb::Initialize() */

void __thiscall PlantCherryBomb::Initialize(PlantCherryBomb *this)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig *pPVar3;
  RealObject *this_00;
  code *pcVar4;
  undefined4 uVar5;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar4 = *(code **)(*plVar2 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar4)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pPVar3 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar3,0xe);
    this_00 = *(RealObject **)(this + 0x10);
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this_00 + 0x124) = uVar5;
    std::string::string(asStack_58,"Play_Reverse_Explosion");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCherryBomb::ShouldGenerateSmallCherry() */

ulong __thiscall PlantCherryBomb::ShouldGenerateSmallCherry(PlantCherryBomb *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  cVar1 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    uVar3 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
    return uVar3;
  }
  iVar2 = FUN_04028768();
  if (iVar2 == 2) {
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar4 = FUN_04028980(*(undefined8 *)(this + 0x10));
    uVar3 = (ulong)(fVar5 < *(float *)(lVar4 + 0x2b8));
  }
  else {
    uVar3 = 0;
    if (2 < iVar2) {
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar4 = FUN_04028980(*(undefined8 *)(this + 0x10));
      return (ulong)(fVar5 < *(float *)(lVar4 + 700));
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCherryBomb::Explode() */

void __thiscall PlantCherryBomb::Explode(PlantCherryBomb *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  RealObject *this_00;
  Board *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_18,"Play_CherryBomb");
  RealObject::PlayPositionalSound(this_00,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar7 = *pfVar4;
  fVar8 = pfVar4[1];
  fVar9 = pfVar4[2];
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
  GetPAMByName(asStack_20);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pEVar5 + 0x80))(0x3fc00000,pEVar5);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_18,(float)(int)(fVar7 - 130.0),(float)(int)(fVar8 - 290.0),
             (float)(int)fVar9);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_18,-1);
  FUN_0402875c(pEVar5 + 0x1c,500000);
  std::string::string(asStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)pEVar5 + 0x80))(0x3fc00000);
  std::string::string(asStack_20,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_REAR");
  GetPAMByName(asStack_20);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_18,(float)(int)(fVar7 - 130.0),(float)(int)(fVar8 - 290.0),
             (float)(int)fVar9);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_18,-1);
  FUN_0402875c(pEVar5 + 0x1c,300000);
  std::string::string(asStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  Plant::DoSpecial(*(Plant **)(this + 0x10));
  cVar3 = ShouldGenerateSmallCherry(this);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
    std::string::string(asStack_18,"smallcherry");
    Board::AddPlant(this_01,iVar1,iVar2,asStack_18,-1,false,false,false,false);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCherryBomb::UpdateActions() */

void __thiscall PlantCherryBomb::UpdateActions(PlantCherryBomb *this)

{
  char cVar1;
  PopAnimRig *this_00;
  
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      Explode(this);
      return;
    }
  }
  return;
}

