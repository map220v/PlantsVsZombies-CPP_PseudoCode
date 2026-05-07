// Class: PlantAnthurium


/* PlantAnthurium::GetDamageFlags(PlantWeapon) */

undefined8 __thiscall PlantAnthurium::GetDamageFlags(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 - 1U < 2) {
    uVar1 = operator|(0x80,0x4000000);
    uVar1 = operator|(uVar1,0x2000);
    return uVar1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::StaticClassInit() */

void PlantAnthurium::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnthurium");
    (*pcVar2)(plVar1,asStack_10,FUN_042205f4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnthurium::StaticGetClass() */

long * PlantAnthurium::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnthurium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnthurium::GetClass() const */

long * PlantAnthurium::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnthurium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnthurium::CalcDirection(Plant*) */

undefined1 __thiscall PlantAnthurium::CalcDirection(PlantAnthurium *this,Plant *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  iVar1 = *(int *)(param_1 + 0x110);
  iVar2 = *(int *)(lVar4 + 0x110);
  if (iVar1 < iVar2) {
    iVar1 = *(int *)(param_1 + 0x114);
    uVar3 = 4;
    iVar2 = *(int *)(lVar4 + 0x114);
    if ((iVar2 <= iVar1) && (uVar3 = 2, iVar1 != iVar2)) {
      uVar3 = 0;
      if (iVar2 < iVar1) {
        uVar3 = 5;
      }
      return uVar3;
    }
  }
  else if (iVar1 == iVar2) {
    iVar1 = *(int *)(param_1 + 0x114);
    uVar3 = 0;
    iVar2 = *(int *)(lVar4 + 0x114);
    if ((iVar2 <= iVar1) && (uVar3 = 8, iVar1 != iVar2)) {
      return iVar2 <= iVar1;
    }
  }
  else {
    uVar3 = 0;
    if (iVar2 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x114);
      uVar3 = 6;
      iVar2 = *(int *)(lVar4 + 0x114);
      if ((iVar2 <= iVar1) && (uVar3 = 3, iVar1 != iVar2)) {
        uVar3 = 0;
        if (iVar2 < iVar1) {
          uVar3 = 7;
        }
        return uVar3;
      }
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::ChainExist(std::vector<AnthuriumThunderChain,
   std::allocator<AnthuriumThunderChain> > const&, AnthuriumThunderChain const&) */

void __thiscall
PlantAnthurium::ChainExist(PlantAnthurium *this,vector *param_1,AnthuriumThunderChain *param_2)

{
  char cVar1;
  bool bVar2;
  AnthuriumThunderChain *pAVar3;
  undefined8 local_30;
  undefined8 local_28;
  AnthuriumThunderChain aAStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_0421eec4(*(undefined8 *)param_1);
  local_28 = FUN_0421ef14(*(undefined8 *)(param_1 + 8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) {
LAB_0421f008:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    pAVar3 = (AnthuriumThunderChain *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    AnthuriumThunderChain::AnthuriumThunderChain(aAStack_20,pAVar3);
    cVar1 = AnthuriumThunderChain::OnSameGride(aAStack_20,param_2);
    if (cVar1 != '\0') {
      AnthuriumThunderChain::~AnthuriumThunderChain(aAStack_20);
      bVar2 = true;
      goto LAB_0421f008;
    }
    AnthuriumThunderChain::~AnthuriumThunderChain(aAStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::PlayThunderUpEffect() */

void __thiscall PlantAnthurium::PlayThunderUpEffect(PlantAnthurium *this)

{
  int iVar1;
  SexyVector3 *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar4 = 0;
  uVar3 = 0xc1200000;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-10.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar4;
  iVar1 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_ANTHURIUM_BULLET");
  GetPAMByName(asStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,iVar1);
  std::string::string((string *)aRStack_30,"plantfood");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_30,0);
  std::string::~string((string *)aRStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::PlayThunderHitEffect(Sexy::Point const&) */

void __thiscall PlantAnthurium::PlayThunderHitEffect(PlantAnthurium *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  float local_28;
  float local_24;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)*(int *)param_1 + local_28,(float)*(int *)(param_1 + 4) + local_24,
             0.0);
  uVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(int *)(param_1 + 4));
  iVar2 = Board::MakeRenderOrder(0x65130,uVar1,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_ANTHURIUM_BULLET_HIT");
  GetPAMByName(asStack_38);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,iVar2)
  ;
  std::string::string((string *)aRStack_30,"idle2");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_30,0);
  std::string::~string((string *)aRStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::PlayElectricityAborbEffect(Plant*) */

void __thiscall PlantAnthurium::PlayElectricityAborbEffect(PlantAnthurium *this,Plant *param_1)

{
  int iVar1;
  SexyVector3 *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar4 = 0;
  uVar3 = 0xc1a00000;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-20.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar4;
  iVar1 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(param_1 + 0x110),0xffffffff);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_ANTHURIUM_BULLET_HIT");
  GetPAMByName(asStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,iVar1);
  std::string::string((string *)aRStack_30,"idle1");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_30,0);
  std::string::~string((string *)aRStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::PlayElectricityDispelEffect(Plant*) */

void __thiscall PlantAnthurium::PlayElectricityDispelEffect(PlantAnthurium *this,Plant *param_1)

{
  int iVar1;
  SexyVector3 *this_00;
  int *piVar2;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  RtWeakPtr *__n;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  string asStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  uVar5 = 0xc1900000;
  EATextSquish::Vec3::Vec3(aVStack_28,-3.0,-18.0,0.0);
  fVar4 = 0.0;
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_14 = uVar5;
  local_10 = uVar6;
  uVar5 = CalcDirection(this,param_1);
  __n = aRStack_30;
  std::string::string(asStack_40,"idle");
  nop();
  switch(uVar5) {
  case 0:
    std::string::append(asStack_40,"idle1",(size_t)__n);
    fVar4 = 180.0;
    break;
  case 1:
    fVar4 = 0.0;
    std::string::append(asStack_40,"idle1",(size_t)__n);
    break;
  case 2:
    fVar4 = 0.0;
    std::string::append(asStack_40,"idle2",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_40,"idle2",(size_t)__n);
    fVar4 = 180.0;
    break;
  case 4:
    std::string::append(asStack_40,"idle",(size_t)__n);
    fVar4 = 270.0;
    break;
  case 5:
    std::string::append(asStack_40,"idle",(size_t)__n);
    fVar4 = 180.0;
    break;
  case 6:
    fVar4 = 0.0;
    std::string::append(asStack_40,"idle",(size_t)__n);
    break;
  case 7:
    std::string::append(asStack_40,"idle",(size_t)__n);
    fVar4 = 90.0;
  }
  piVar2 = eastl::max_alt<int>((int *)(*(long *)(this + 0x10) + 0x110),(int *)(param_1 + 0x110));
  iVar1 = Board::MakeRenderOrder(0x65130,*piVar2,0);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_ANTHURIUM_LINK");
  GetPAMByName(asStack_38);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,iVar1);
  fVar4 = (float)Sexy::SexyMath::DegToRad(fVar4);
  Effect_PopAnim::SetOrientation(this_01,fVar4);
  Effect_PopAnim::PlaySingleAnimation(this_01,asStack_40,0);
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::PlayChainEffect(Sexy::Point const&, PlantAnthurium::Direction) */

void __thiscall
PlantAnthurium::PlayChainEffect(PlantAnthurium *this,int *param_1,undefined4 param_3)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  TimeChallengeEndLevelUI *this_01;
  float fVar3;
  undefined4 uVar4;
  string asStack_78 [8];
  float local_70;
  float local_6c;
  Vec3 aVStack_60 [16];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_70,0.0,0.0,0.0);
  iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(param_1[1]);
  switch(param_3) {
  case 0:
    uVar4 = 0x3f333333;
    fVar3 = 270.0;
    local_70 = -35.0;
    break;
  case 1:
    local_70 = 40.0;
    uVar4 = 0x3f333333;
    fVar3 = 90.0;
    break;
  case 2:
    local_6c = -45.0;
    uVar4 = 0x3f800000;
    fVar3 = 180.0;
    break;
  case 3:
    iVar1 = iVar1 + 1;
    fVar3 = 0.0;
    uVar4 = 0x3f800000;
    local_6c = 30.0;
    break;
  default:
    fVar3 = 0.0;
    uVar4 = 0x3f800000;
  }
  EATextSquish::Vec3::Vec3(aVStack_60,local_70 + (float)*param_1,local_6c + (float)param_1[1],0.0);
  iVar1 = Board::MakeRenderOrder(0x65130,iVar1,0xffffffff);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_78,"POPANIM_EFFECTS_ANTHURIUM_LINK");
  GetPAMByName(asStack_78);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_60,iVar1)
  ;
  this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEffectAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PlantAnthurium,void(PlantAnthurium::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  fVar3 = (float)Sexy::SexyMath::DegToRad(fVar3);
  Effect_PopAnim::SetOrientation(this_00,fVar3);
  (**(code **)(*(long *)this_00 + 0x80))(uVar4,this_00);
  std::string::string((string *)aRStack_50,"plantfood1");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_50,0);
  std::string::~string((string *)aRStack_50);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::PlayThunderDownEffect(Sexy::RtWeakPtr<BoardEntity> const&) */

void __thiscall PlantAnthurium::PlayThunderDownEffect(PlantAnthurium *this,RtWeakPtr *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  SharkMinion *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  TimeChallengeEndLevelUI *this_02;
  int local_80;
  int local_7c;
  string asStack_78 [8];
  float local_70;
  float local_6c;
  Vec3 aVStack_60 [16];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_70,0.0,0.0,0.0);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  (**(code **)(*plVar3 + 0x178))();
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_80,(TPoint *)aRStack_50);
  EATextSquish::Vec3::Vec3(aVStack_60,(float)local_80 + local_70,(float)local_7c + local_6c,0.0);
  this_00 = (SharkMinion *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  uVar1 = SharkMinion::getRow(this_00);
  iVar2 = Board::MakeRenderOrder(0x65130,uVar1,0);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_78,"POPANIM_EFFECTS_ANTHURIUM_BULLET");
  GetPAMByName(asStack_78);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aVStack_60,iVar2)
  ;
  this_02 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_01);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEffectAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PlantAnthurium,void(PlantAnthurium::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
  std::string::string((string *)aRStack_50,"plantfood1");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_50,0);
  std::string::~string((string *)aRStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnthurium::PlantAnthurium() */

void __thiscall PlantAnthurium::PlantAnthurium(PlantAnthurium *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680e6a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x28) = 3;
  return;
}


/* PlantAnthurium::StaticNew() */

PlantAnthurium * PlantAnthurium::StaticNew(void)

{
  PlantAnthurium *this;
  
  this = ::operator_new(0x60);
  PlantAnthurium(this);
  return this;
}


/* PlantAnthurium::TrigerAdvancedAttack() */

bool __thiscall PlantAnthurium::TrigerAdvancedAttack(PlantAnthurium *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_0421fce8(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_0421dce4(*(undefined8 *)(this + 0x10));
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(lVar2 + 0x2c0);
    uVar3 = FUN_0421dcec(uVar5,*(undefined8 *)(lVar2 + 0x2c8));
    if ((ulong)(long)iVar1 < uVar3) {
      pfVar4 = (float *)FUN_0421dd18(uVar5,(long)(iVar1 + -1));
      fVar7 = *pfVar4;
      goto LAB_0421fda4;
    }
  }
  fVar7 = 0.0;
LAB_0421fda4:
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  return fVar6 < fVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::AbsorbAllElectricity() */

void __thiscall PlantAnthurium::AbsorbAllElectricity(PlantAnthurium *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Plant *pPVar6;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    if ((pPVar6 != (Plant *)0x0) &&
       ((((cVar2 = Plant::HasCondition(pPVar6,9), cVar2 != '\0' ||
          (cVar2 = Plant::HasCondition(pPVar6,10), cVar2 != '\0')) ||
         (cVar2 = Plant::HasCondition(pPVar6,0xb), cVar2 != '\0')) ||
        ((cVar2 = Plant::HasCondition(pPVar6,0xc), cVar2 != '\0' ||
         (cVar2 = Plant::HasCondition(pPVar6,0xd), cVar2 != '\0')))))) {
      Plant::EndCondition(pPVar6,9);
      Plant::EndCondition(pPVar6,10);
      Plant::EndCondition(pPVar6,0xb);
      Plant::EndCondition(pPVar6,0xc);
      Plant::EndCondition(pPVar6,0xd);
      PlayElectricityAborbEffect(this,pPVar6);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::FindElectricity(Plant*&, Plant*&) */

void __thiscall
PlantAnthurium::FindElectricity(PlantAnthurium *this,Plant **param_1,Plant **param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_30);
  *param_1 = (Plant *)0x0;
  *param_2 = (Plant *)0x0;
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
LAB_042201b0:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar1);
      }
      return;
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((pPVar4 != *(Plant **)(this + 0x10)) && (pPVar4 != (Plant *)0x0)) {
      cVar2 = Plant::HasCondition(pPVar4,9);
      if (cVar2 == '\0') {
        cVar2 = Plant::HasCondition(pPVar4,10);
        if (cVar2 != '\0') {
          if (*param_1 != (Plant *)0x0) goto LAB_04220130;
LAB_042201a4:
          *param_1 = pPVar4;
        }
      }
      else {
        if (*param_1 == (Plant *)0x0) goto LAB_042201a4;
LAB_04220130:
        if (*param_2 == (Plant *)0x0) {
          *param_2 = pPVar4;
          bVar1 = true;
          goto LAB_042201b0;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::UpdateIdle() */

void __thiscall PlantAnthurium::UpdateIdle(PlantAnthurium *this)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig_Peavine *pPVar3;
  code *pcVar4;
  float fVar5;
  Plant *local_60;
  Plant *local_58;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_60 = (Plant *)0x0;
  local_58 = (Plant *)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = FindElectricity(this,&local_60,&local_58);
  if (cVar1 == '\0') {
    fVar5 = (float)PVZ_T();
    if (*(float *)(*(Plant **)(this + 0x10) + 300) < fVar5) {
      Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
      cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),0);
      if (cVar1 != '\0') {
        cVar1 = TrigerAdvancedAttack(this);
        if (cVar1 == '\0') {
          plVar2 = (long *)FUN_0421fe58(*(undefined8 *)(this + 0x10));
          pcVar4 = *(code **)(*plVar2 + 0x130);
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          (*pcVar4)(plVar2,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
        else {
          pPVar3 = (PlantAnimRig_Peavine *)FUN_0421fe58(*(undefined8 *)(this + 0x10));
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          PlantAnimRig_Peavine::PlaySecondAttack(pPVar3,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
    }
  }
  else {
    Plant::EndCondition(local_60,9);
    Plant::EndCondition(local_60,10);
    Plant::EndCondition(local_58,9);
    Plant::EndCondition(local_58,10);
    PlayElectricityAborbEffect(this,local_60);
    PlayElectricityAborbEffect(this,local_58);
    PlayElectricityDispelEffect(this,local_60);
    PlayElectricityDispelEffect(this,local_58);
    pPVar3 = (PlantAnimRig_Peavine *)FUN_0421fe58(*(undefined8 *)(this + 0x10));
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlantAnimRig_Peavine::PlaySecondAttack(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnthurium::UpdateActions() */

void __thiscall PlantAnthurium::UpdateActions(PlantAnthurium *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 1) {
    return;
  }
  UpdateIdle(this);
  return;
}


/* PlantAnthurium::ApplyPlantfood() */

void __thiscall PlantAnthurium::ApplyPlantfood(PlantAnthurium *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  AbsorbAllElectricity(this);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  std::vector<AnthuriumThunderChain,std::allocator<AnthuriumThunderChain>>::clear
            ((vector<AnthuriumThunderChain,std::allocator<AnthuriumThunderChain>> *)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlantAnthurium::~PlantAnthurium() */

void __thiscall PlantAnthurium::~PlantAnthurium(PlantAnthurium *this)

{
  *(undefined ***)this = &PTR_GetClass_0680e6a0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  std::vector<AnthuriumThunderChain,std::allocator<AnthuriumThunderChain>>::~vector
            ((vector<AnthuriumThunderChain,std::allocator<AnthuriumThunderChain>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAnthurium::~PlantAnthurium() */

void __thiscall PlantAnthurium::~PlantAnthurium(PlantAnthurium *this)

{
  ~PlantAnthurium(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::ThunderDown(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&) */

void __thiscall PlantAnthurium::ThunderDown(PlantAnthurium *this,vector *param_1)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  RealObject *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_0421ee24(*(undefined8 *)param_1);
  local_18 = FUN_0421ee74(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar2);
    PlayThunderDownEffect(this,(RtWeakPtr *)aRStack_28);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_SkyCity_Lightning_Release");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x48),(RtWeakPtr *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::GetThunderTarget() */

void PlantAnthurium::GetThunderTarget(void)

{
  int iVar1;
  bool bVar2;
  long *in_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  ulong uVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  Point aPStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0xd0))(avStack_38,in_x0,0);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_38);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_38);
  FUN_04221af4(uVar3,uVar4);
  lVar5 = FUN_0421fce8(in_x0[2]);
  iVar1 = *(int *)(lVar5 + 0x2b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar2) {
LAB_04221c98:
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    BoardEntity::CalcGridPosition();
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
    local_48 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar3,uVar4,aPStack_50);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (bVar2) {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,aPStack_50);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )in_x8,(RtWeakPtr *)aRStack_68);
      uVar7 = FUN_0421dd0c(*(undefined8 *)in_x8,*(undefined8 *)(in_x8 + 8));
      if ((ulong)(long)iVar1 <= uVar7) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        goto LAB_04221c98;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::OnAnimCommand(std::string const&, std::string const&) */

void PlantAnthurium::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [24];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"normal_fire");
  if (bVar1) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_20,
                *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantCombos,*(Plant **)(param_1 + 0x10));
    uVar3 = 1;
  }
  else {
    bVar1 = std::operator==(param_2,"advanced_fire");
    uVar3 = (ulong)bVar1;
    if (bVar1) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 3;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_20);
      lVar2 = Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_20,
                          *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
      if (lVar2 != 0) {
        fVar4 = (float)FUN_0421dcd0(*(undefined4 *)(lVar2 + 0xd8));
        fVar5 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
        FUN_0421dcd4(fVar5 * fVar4 + fVar4,(undefined4 *)(lVar2 + 0xd8));
      }
    }
    else {
      bVar1 = std::operator==(param_2,"thunder_up");
      if (bVar1) {
        PlayThunderUpEffect((PlantAnthurium *)param_1);
        uVar3 = 1;
      }
      else {
        bVar1 = std::operator==(param_2,"thunder_down");
        uVar3 = (ulong)bVar1;
        if (!bVar1) {
          uVar3 = ___stack_chk_guard;
          if (local_8 == ___stack_chk_guard) {
            PlantFramework::OnAnimCommand(param_1,param_2);
            return;
          }
          goto LAB_04221ed8;
        }
        GetThunderTarget();
        ThunderDown((PlantAnthurium *)param_1,(vector *)a_Stack_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )a_Stack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_04221ed8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::GetThunderSplashTarget(Sexy::Point const&, float, BoardEntity*) */

void PlantAnthurium::GetThunderSplashTarget(Point *param_1,float param_2,BoardEntity *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  RtObject *in_x2;
  code *pcVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtObject *this;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Zombie *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(int *)(param_3 + 4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar5 = operator|(2,4);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_28,(float)*(int *)param_3,(float)*(int *)(param_3 + 4));
  iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar6 * SQRT(param_2),avStack_20,uVar5,(FastCurve *)&local_28,uVar4,uVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar3) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this = (RtObject *)*puVar7;
    uVar4 = FUN_0421dc7c(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
    bVar1 = RealObject::IsOnOpposingTeam(this,uVar4);
    if ((this == in_x2) < bVar1) {
      pZVar8 = Sexy::RtObject::Cast<Zombie>(this);
      if (pZVar8 == (Zombie *)0x0) {
        pGVar9 = Sexy::RtObject::Cast<GridItem>(this);
        if (((pGVar9 != (GridItem *)0x0) &&
            (cVar2 = (**(code **)(*(long *)pGVar9 + 0x200))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)pGVar9 + 0x210))(pGVar9,*(undefined8 *)(param_1 + 0x10)),
           cVar2 != '\0')) {
          local_28 = (Zombie *)pGVar9;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                     (BoardEntity **)&local_28);
        }
      }
      else {
        cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))();
        if (cVar2 == '\0') {
          pcVar10 = *(code **)(*(long *)param_1 + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
          cVar2 = (*pcVar10)(param_1,aRStack_38,1);
          if (cVar2 != '\0') {
            pcVar10 = *(code **)(*(long *)pZVar8 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
            cVar2 = (*pcVar10)(pZVar8,(FastCurve *)&local_28,0);
            if (cVar2 != '\0') {
              cVar2 = (**(code **)(*(long *)pZVar8 + 0xb8))(pZVar8,7);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
              if (cVar2 != '\0') {
                local_28 = pZVar8;
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                           (BoardEntity **)&local_28);
              }
              goto LAB_04222038;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
      }
    }
LAB_04222038:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::ThunderHit() */

void __thiscall PlantAnthurium::ThunderHit(PlantAnthurium *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  Point aPStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_e0 [24];
  DamageInfo aDStack_c8 [16];
  undefined8 local_b8;
  undefined8 local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  FUN_0421ddcc(*(undefined8 *)(lVar2 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  local_b8 = (**(code **)(*(long *)this + 0x198))(this,1);
  lVar2 = FUN_0421fce8(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar2 + 700);
  local_108 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x48));
  local_100 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_108,(__normal_iterator *)&local_100);
  if (bVar1) {
    do {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_110,pRVar3);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_110);
      if (pRVar4 != (ResourceInfo *)0x0) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
        (**(code **)(*plVar5 + 0x178))();
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point(aPStack_f8,(TPoint *)&local_68);
        (**(code **)(*(long *)pRVar4 + 0x110))(pRVar4,aDStack_c8);
        DamageInfo::DamageInfo((DamageInfo *)&local_68,aDStack_c8);
        local_68 = *(undefined8 *)(this + 0x10);
        local_60 = local_60 * 0.5;
        GetThunderSplashTarget((Point *)this,fVar7,(BoardEntity *)aPStack_f8);
        local_f0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_e0);
        local_e8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_e0);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8),
              bVar1) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
          (**(code **)(*(long *)*puVar6 + 0x110))
                    ((long *)*puVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_e0);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_108);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_108,(__normal_iterator *)&local_100)
      ;
    } while (bVar1);
  }
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::ThunderChain(BoardEntity*, PlantAnthurium::Direction) */

void __thiscall PlantAnthurium::ThunderChain(PlantAnthurium *this,long *param_1,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  AnthuriumThunderChain aAStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*param_1 + 0x178))(param_1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_48,(TPoint *)aAStack_20);
  Sexy::Point::Point((Point *)&local_40);
  switch(param_3) {
  case 0:
    local_40 = BoardConstants::GRIDSQUARE_WIDTH();
    local_40 = local_48 - local_40;
    local_3c = local_44;
    break;
  case 1:
    local_40 = BoardConstants::GRIDSQUARE_WIDTH();
    local_40 = local_48 + local_40;
    local_3c = local_44;
    break;
  case 2:
    local_40 = local_48;
    local_3c = BoardConstants::GRIDSQUARE_HEIGHT();
    local_3c = local_44 - local_3c;
    break;
  case 3:
    local_40 = local_48;
    local_3c = BoardConstants::GRIDSQUARE_HEIGHT();
    local_3c = local_44 + local_3c;
  }
  AnthuriumThunderChain::AnthuriumThunderChain(aAStack_20,(Point *)&local_48,(Point *)&local_40);
  cVar1 = ChainExist(this,(vector *)(this + 0x30),aAStack_20);
  AnthuriumThunderChain::~AnthuriumThunderChain(aAStack_20);
  if (cVar1 == '\0') {
    lVar2 = FUN_0421fce8(*(undefined8 *)(this + 0x10));
    GetThunderSplashTarget((Point *)this,*(float *)(lVar2 + 700),(BoardEntity *)&local_40);
    lVar2 = FUN_0421dd00(local_38,local_30);
    if (lVar2 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
    else {
      AnthuriumThunderChain::AnthuriumThunderChain(aAStack_20,(Point *)&local_48,(Point *)&local_40)
      ;
      std::vector<AnthuriumThunderChain,std::allocator<AnthuriumThunderChain>>::push_back
                ((vector<AnthuriumThunderChain,std::allocator<AnthuriumThunderChain>> *)
                 (this + 0x30),aAStack_20);
      AnthuriumThunderChain::~AnthuriumThunderChain(aAStack_20);
      PlayChainEffect(this,(Point *)&local_48,param_3);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnthurium::OnEffectAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void PlantAnthurium::OnEffectAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  long lVar6;
  AnthuriumThunderChain *pAVar7;
  undefined8 *puVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  Point aPStack_98 [16];
  TPoint aTStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"thunder_hit");
  if ((bVar1) && (*(int *)(param_1 + 0x28) == 0)) {
    ThunderHit((PlantAnthurium *)param_1);
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  else {
    bVar1 = std::operator==(param_4,"thunder_begin_chain");
    if ((bVar1) && (*(int *)(param_1 + 0x28) == 1)) {
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x28) = 2;
      }
      else {
        Plant::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68)
        ;
        FUN_0421ddcc(*(undefined8 *)(lVar6 + 0x70));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
        local_58 = (**(code **)(*(long *)param_1 + 0x198))(param_1,1);
        local_68 = *(undefined8 *)(param_1 + 0x10);
        local_60 = local_60 * 0.5;
        FUN_0421fce8(local_68);
        local_c0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x48));
        local_b8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x48));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
              bVar1) {
          pRVar3 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c8,pRVar3);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_c8);
          if (pRVar4 != (ResourceInfo *)0x0) {
            plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
            (**(code **)(*plVar5 + 0x178))();
            Sexy::TRect<int>::GetCenter();
            Sexy::Point::Point((Point *)&local_b0,(TPoint *)&local_80);
            Sexy::Point::Point((Point *)&local_a8,local_b0 + -800,local_ac);
            Sexy::Point::Point((Point *)&local_a0,local_b0 + -800,local_ac);
            Sexy::Point::Point(aPStack_98,local_b0,local_ac + -600);
            Sexy::Point::Point((Point *)&local_80,local_b0,local_ac + 600);
            ThunderChain((PlantAnthurium *)param_1,pRVar4,0);
            ThunderChain((PlantAnthurium *)param_1,pRVar4,1);
            ThunderChain((PlantAnthurium *)param_1,pRVar4,2);
            ThunderChain((PlantAnthurium *)param_1,pRVar4,3);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
        }
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        *(undefined4 *)(param_1 + 0x28) = 2;
      }
    }
    else {
      bVar1 = std::operator==(param_4,"thunder_chain_hit");
      if ((bVar1) && (*(int *)(param_1 + 0x28) == 2)) {
        cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
        if (cVar2 != '\0') {
          Plant::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          FUN_0421ddcc(*(undefined8 *)(lVar6 + 0x70));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
          local_58 = (**(code **)(*(long *)param_1 + 0x198))(param_1,1);
          local_68 = *(undefined8 *)(param_1 + 0x10);
          local_60 = local_60 * 0.5;
          lVar6 = FUN_0421fce8(local_68);
          fVar9 = *(float *)(lVar6 + 700);
          local_c0 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(param_1 + 0x30));
          local_b8 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x30));
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
                bVar1) {
            pAVar7 = (AnthuriumThunderChain *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            AnthuriumThunderChain::AnthuriumThunderChain((AnthuriumThunderChain *)aPStack_98,pAVar7)
            ;
            Sexy::Point::Point((Point *)&local_b0,aTStack_88);
            GetThunderSplashTarget((Point *)param_1,fVar9,(BoardEntity *)&local_b0);
            local_a8 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_80);
            local_a0 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_80);
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0)
                  , bVar1) {
              puVar8 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
              (**(code **)(*(long *)*puVar8 + 0x110))
                        ((long *)*puVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
            }
            lVar6 = FUN_0421dd00(local_80,local_78);
            if (lVar6 != 0) {
              PlayThunderHitEffect((PlantAnthurium *)param_1,(Point *)&local_b0);
            }
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
            AnthuriumThunderChain::~AnthuriumThunderChain((AnthuriumThunderChain *)aPStack_98);
            std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                      ((move_iterator<Sexy::LeaderboardEntry*> *)&local_c0);
          }
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
        *(undefined4 *)(param_1 + 0x28) = 3;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

