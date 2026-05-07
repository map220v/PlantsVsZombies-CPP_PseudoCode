// Class: StatueMazeModule


/* StatueMazeModule::checkWinCondition() */

void __thiscall StatueMazeModule::checkWinCondition(StatueMazeModule *this)

{
  FUN_03d130d4(*(undefined4 *)(this + 0x50),6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::StaticClassInit() */

void StatueMazeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"StatueMazeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03d162b0,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::StaticGetClass() */

long * StatueMazeModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"StatueMazeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StatueMazeModule::DisabledPlay() */

bool __thiscall StatueMazeModule::DisabledPlay(StatueMazeModule *this)

{
  return *(int *)(this + 0x8c) < 1;
}


/* StatueMazeModule::onNextSetStart() */

void __thiscall StatueMazeModule::onNextSetStart(StatueMazeModule *this)

{
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
  return;
}


/* StatueMazeModule::costAllLife() */

bool __thiscall StatueMazeModule::costAllLife(StatueMazeModule *this)

{
  if ((*(int *)(this + 0x8c) < 1) && (0 < *(int *)(this + 0x88))) {
    return *(int *)(this + 0x94) == 0;
  }
  return false;
}


/* StatueMazeModule::finishCurrentSet() */

bool __thiscall StatueMazeModule::finishCurrentSet(StatueMazeModule *this)

{
  return *(int *)(this + 0x88) < 1;
}


/* StatueMazeModule::updateState() */

undefined4 __thiscall StatueMazeModule::updateState(StatueMazeModule *this)

{
  return *(undefined4 *)(this + 0x50);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::GetTargetRadius(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void __thiscall
StatueMazeModule::GetTargetRadius(StatueMazeModule *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  float fVar1;
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_20,*(float *)param_2,*(float *)(param_2 + 4));
  fVar1 = *(float *)(param_1 + 4);
  Sexy::FastCurve::SetOutRange(aFStack_18,*(float *)param_1,fVar1);
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_20,(SexyVector2 *)aFStack_18);
  local_c = fVar1;
  DVec2::getLength((DVec2 *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::GetCenter(int) */

Point * StatueMazeModule::GetCenter(int param_1)

{
  int in_w1;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,in_w1 / 2,in_w1 / 2);
  return in_x8;
}


/* StatueMazeModule::GetStatueLocationOffset(int) */

void StatueMazeModule::GetStatueLocationOffset(int param_1)

{
  int iVar1;
  int iVar2;
  int in_w1;
  Point *in_x8;
  
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if ((in_w1 <= iVar1) && (iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), in_w1 <= iVar1)) {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Point::Point(in_x8,(iVar1 - in_w1) / 2,(iVar2 - in_w1) / 2);
    return;
  }
  Sexy::Point::Point(in_x8,0,0);
  return;
}


/* StatueMazeModule::GetStatueRealLocation(int, int, Sexy::Point) */

Point * StatueMazeModule::GetStatueRealLocation
                  (Point *param_1,undefined8 param_2_00,int param_2,int param_4,int *param_5)

{
  Sexy::Point::Point(param_1,param_4 + *param_5,param_2 + param_5[1]);
  return param_1;
}


/* StatueMazeModule::onHammerEffectDone(std::string const&) */

void StatueMazeModule::onHammerEffectDone(string *param_1)

{
  StandaloneEffect *this;
  
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x98))
  ;
  StandaloneEffect::SetVisibility(this,false);
  return;
}


/* StatueMazeModule::onFillSets() */

void __thiscall StatueMazeModule::onFillSets(StatueMazeModule *this)

{
  ToxicWaterPerfumeBottleProjectile *this_00;
  UIMazeMiniGameCredit *this_01;
  long lVar1;
  
  this_00 = (ToxicWaterPerfumeBottleProjectile *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 0x54) + 1);
  this_01 = (UIMazeMiniGameCredit *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  UIMazeMiniGameCredit::SetLeftTarget(this_01,*(int *)(this + 0x88));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  FUN_03d13194(lVar1 + 0x164,*(undefined4 *)(this + 0x8c));
  return;
}


/* StatueMazeModule::changeLife(bool) */

void __thiscall StatueMazeModule::changeLife(StatueMazeModule *this,bool param_1)

{
  long lVar1;
  
  if (!param_1) {
    *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + -1;
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48))
    ;
    FUN_03d13194(lVar1 + 0x164,*(undefined4 *)(this + 0x8c));
    return;
  }
  *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  FUN_03d13194(lVar1 + 0x164,*(undefined4 *)(this + 0x8c));
  return;
}


/* StatueMazeModule::onReviveOK() */

void __thiscall StatueMazeModule::onReviveOK(StatueMazeModule *this)

{
  this[0x90] = (StatueMazeModule)0x0;
  changeLife(this,true);
  return;
}


/* StatueMazeModule::resetingSets() */

void __thiscall StatueMazeModule::resetingSets(StatueMazeModule *this)

{
  std::vector<GameMatrixInfo,std::allocator<GameMatrixInfo>>::clear
            ((vector<GameMatrixInfo,std::allocator<GameMatrixInfo>> *)(this + 0x60));
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::RecordCenterPosition(int) */

void __thiscall StatueMazeModule::RecordCenterPosition(StatueMazeModule *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  float *pfVar5;
  long lVar6;
  SexyVector3 *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  DVec3 aDStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  uVar1 = param_1 & 1;
  local_8 = ___stack_chk_guard;
  DVec3::DVec3(aDStack_28);
  if ((param_1 & 1U) == 0) {
    Sexy::Point::Point((Point *)&local_40,uVar1,uVar1);
    Sexy::Point::Point((Point *)&local_38,uVar1,param_1 + -1);
    Sexy::Point::Point((Point *)&local_30,param_1 + -1,uVar1);
    puVar2 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),(long)local_40);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d13644(*puVar2,(long)local_3c);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var4);
    fVar10 = *pfVar5;
    fVar9 = pfVar5[1];
    puVar2 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),(long)local_38);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d13644(*puVar2,(long)local_34);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var4);
    fVar8 = *pfVar5;
    puVar2 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),(long)local_30);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d13644(*puVar2,(long)local_2c);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var4);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,fVar10 + (fVar8 - fVar10) * 0.5,
               fVar9 + (*(float *)(lVar6 + 4) - fVar9) * 0.5,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)&local_18);
  }
  else {
    Sexy::Point::Point((Point *)&local_18,param_1 / 2,param_1 / 2);
    puVar2 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),(long)local_18);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d13644(*puVar2,(long)local_14);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,pSVar7);
  }
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x30),(SexyVector3 *)aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::TryRotateTargetStatue(Sexy::RtWeakPtr<GridItemMazeStatue>, Sexy::SexyVector3
   const&, bool, float) */

void __thiscall
StatueMazeModule::TryRotateTargetStatue
          (undefined4 param_1,StatueMazeModule *this,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          SexyVector3 *param_4,char param_5)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GridItemMazeStatue *pGVar5;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 2;
  if (param_5 != '\0') {
    uVar3 = 1;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  pGVar5._0_4_ = (GridItemMazeStatue *)
                 BoomerangRotateProjectile::GetTargetDegree
                           ((BoomerangRotateProjectile *)this,param_4,(SexyVector3 *)&local_18);
  uVar4 = GetTargetRadius(this,param_4,(SexyVector3 *)&local_18);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  GridItemMazeStatue::PrepareMoving(pGVar5._0_4_,uVar4,param_1,uVar2,param_4,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::IsCenter(int, int) */

void __thiscall StatueMazeModule::IsCenter(StatueMazeModule *this,int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_1,param_2);
  uVar2 = 0;
  if ((*(uint *)(this + 0x78) & 1) != 0) {
    iVar1 = (int)*(uint *)(this + 0x78) / 2;
    Sexy::Point::Point(aPStack_10,iVar1,iVar1);
    uVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)aPStack_18,(TPoint *)aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::CheatRotateStatue() */

void __thiscall StatueMazeModule::CheatRotateStatue(StatueMazeModule *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x18);
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03d13618(uVar7,*(undefined8 *)(this + 0x20));
  iVar8 = 0;
  if (lVar2 != 0) {
    do {
      uVar6 = 0;
      while( true ) {
        puVar3 = (undefined8 *)FUN_03d1362c(uVar7,uVar9);
        uVar4 = FUN_03d13638(*puVar3,puVar3[1]);
        if (uVar4 <= uVar6) break;
        cVar1 = IsCenter(this,iVar8,(int)uVar6);
        if (cVar1 == '\0') {
          puVar3 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),uVar9);
          pRVar5 = (RtWeakPtrBase *)FUN_03d13644(*puVar3,uVar6);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar5);
          TryRotateTargetStatue((StatueMazeModule *)0x40000000,this,aRStack_10,this + 0x30,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        uVar7 = *(undefined8 *)(this + 0x18);
        uVar6 = uVar6 + 1;
      }
      uVar9 = uVar9 + 1;
      iVar8 = (int)uVar9;
      uVar6 = FUN_03d13618(uVar7,*(undefined8 *)(this + 0x20));
    } while (uVar9 < uVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::createHammerEffect() */

void __thiscall StatueMazeModule::createHammerEffect(StatueMazeModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  StandaloneEffect *pSVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x98);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_18,"POPANIM_EFFECTS_MAZE_HAMMER");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_03d13184(lVar3 + 0x1c,9999999);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar4,false);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar4,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::generateHammerEffect(Sexy::SexyVector3 const&) */

void __thiscall StatueMazeModule::generateHammerEffect(StatueMazeModule *this,SexyVector3 *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  StandaloneEffect *pSVar1;
  UIWidget *this_01;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98);
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar1,true);
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,param_1,-1);
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
  std::string::string(asStack_58,"r1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHammerEffectDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<StatueMazeModule,void(StatueMazeModule::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::onNotifyStatueHit(float, float) */

void __thiscall
StatueMazeModule::onNotifyStatueHit(StatueMazeModule *this,float param_1,float param_2)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  changeLife(this,false);
  *(int *)(this + 0x94) = *(int *)(this + 0x94) + 1;
  EATextSquish::Vec3::Vec3(aVStack_18,param_1 + 70.0,param_2 - 80.0,0.0);
  generateHammerEffect(this,(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::createUIs() */

void __thiscall StatueMazeModule::createUIs(StatueMazeModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  GridItemWaterMist *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"MazeMiniGameCredit");
  UIWidget::CreateWidget(aRStack_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = FUN_03d135a0(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48));
  this_00 = (GridItemWaterMist *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  GridItemWaterMist::SetType(this_00,iVar1);
  Sexy::RtName::RtName(aRStack_18,L"MazeMiniGameLifeCounter");
  UIWidget::CreateWidget(aRStack_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::onLoadComplete() */

void __thiscall StatueMazeModule::onLoadComplete(StatueMazeModule *this)

{
  createUIs(this);
  createHammerEffect(this);
  return;
}


/* StatueMazeModule::finishAllSet() */

bool __thiscall StatueMazeModule::finishAllSet(StatueMazeModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = FUN_03d135a0(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48));
  return iVar1 + -1 <= *(int *)(this + 0x54);
}


/* StatueMazeModule::setMatrixEnable(bool) */

void __thiscall StatueMazeModule::setMatrixEnable(StatueMazeModule *this,bool param_1)

{
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::NotifyStatueEnable,param_1);
  return;
}


/* StatueMazeModule::PlayingSets() */

void __thiscall StatueMazeModule::PlayingSets(StatueMazeModule *this)

{
  setMatrixEnable(this,true);
  return;
}


/* StatueMazeModule::StatueMazeModule() */

void __thiscall StatueMazeModule::StatueMazeModule(StatueMazeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06764cf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  DVec3::DVec3((DVec3 *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  FogMovingData::FogMovingData((FogMovingData *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x98));
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  this[0x90] = (StatueMazeModule)0x0;
  return;
}


/* StatueMazeModule::StaticNew() */

StatueMazeModule * StatueMazeModule::StaticNew(void)

{
  StatueMazeModule *this;
  
  this = ::operator_new(0xa0);
  StatueMazeModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::onReviveCancel() */

void __thiscall StatueMazeModule::onReviveCancel(StatueMazeModule *this)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x90] = (StatueMazeModule)0x0;
  local_8 = ___stack_chk_guard;
  cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  lVar1 = gLawnApp;
  if (cVar2 != '\0') {
    this[0x90] = (StatueMazeModule)0x1;
    plVar3 = (long *)FUN_03d15340(*(undefined8 *)(*(long *)(lVar1 + 0x9f0) + 0xad8));
    pcVar4 = *(code **)(*plVar3 + 0xa0);
    FUN_05478178(auStack_10,L"[MAZE_STATUE_FAILED_TIP]",auStack_18);
    (*pcVar4)(plVar3,auStack_10);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::RevealingSets() */

void __thiscall StatueMazeModule::RevealingSets(StatueMazeModule *this)

{
  ResourceInfo *this_00;
  AnimationController *pAVar1;
  float fVar2;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post((_func_void *)gMessageRouter);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                      ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar2 = (float)FUN_03d1318c(*(undefined4 *)(this_00 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onRevealingDone");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar1,fVar2 + *(float *)(this + 0x7c));
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::RotatingSets() */

void __thiscall StatueMazeModule::RotatingSets(StatueMazeModule *this)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  RtWeakPtrBase *pRVar7;
  ResourceInfo *this_00;
  AnimationController *pAVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  StatueMazeModule *pSVar15;
  float fVar14;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined1 *)FUN_03d1367c(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x58));
  uVar10 = *(undefined8 *)(this + 0x18);
  uVar12 = 0;
                    /* WARNING: Load size is inaccurate */
  pSVar15._0_4_ = *(StatueMazeModule **)(puVar3 + 4);
  fVar14 = *(float *)(puVar3 + 8);
  uVar1 = *puVar3;
  iVar11 = 0;
  lVar4 = FUN_03d13618(uVar10,*(undefined8 *)(this + 0x20));
  if (lVar4 != 0) {
    do {
      uVar9 = 0;
      while( true ) {
        puVar5 = (undefined8 *)FUN_03d1362c(uVar10,uVar12);
        uVar6 = FUN_03d13638(*puVar5,puVar5[1]);
        if (uVar6 <= uVar9) break;
        cVar2 = IsCenter(this,iVar11,(int)uVar9);
        if (cVar2 == '\0') {
          puVar5 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),uVar12);
          pRVar7 = (RtWeakPtrBase *)FUN_03d13644(*puVar5,uVar9);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar7);
          TryRotateTargetStatue(pSVar15._0_4_,this,aRStack_10,this + 0x30,uVar1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        uVar10 = *(undefined8 *)(this + 0x18);
        uVar9 = uVar9 + 1;
      }
      uVar12 = uVar12 + 1;
      iVar11 = (int)uVar12;
      uVar9 = FUN_03d13618(uVar10,*(undefined8 *)(this + 0x20));
    } while (uVar12 < uVar9);
  }
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                      ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar13 = (float)FUN_03d1318c(*(undefined4 *)(this_00 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string((string *)aRStack_10,"onRotatingDone");
  pAVar8 = (AnimationController *)TimeEvent::Create(aRStack_18,aRStack_10);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar8,fVar13 + fVar14);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::CleaningSets() */

void StatueMazeModule::CleaningSets(void)

{
  ResourceInfo *this;
  AnimationController *pAVar1;
  float fVar2;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post((_func_void *)gMessageRouter);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                   ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar2 = (float)FUN_03d1318c(*(undefined4 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onCleaningDone");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2 + 3.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::~StatueMazeModule() */

void __thiscall StatueMazeModule::~StatueMazeModule(StatueMazeModule *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase *this_00;
  
  this_00 = (RtMixedPtrBase *)(this + 0x98);
  *(undefined ***)this = &PTR_GetModuleClass_06764cf0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<GameMatrixInfo,std::allocator<GameMatrixInfo>>::~vector
            ((vector<GameMatrixInfo,std::allocator<GameMatrixInfo>> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::
  vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
             *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* StatueMazeModule::~StatueMazeModule() */

void __thiscall StatueMazeModule::~StatueMazeModule(StatueMazeModule *this)

{
  ~StatueMazeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::pickTargets() */

void __thiscall StatueMazeModule::pickTargets(StatueMazeModule *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  RtWeakPtr *pRVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar11 = 0;
  iVar10 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar9 = *(undefined8 *)(this + 0x18);
  lVar3 = FUN_03d13618(uVar9,*(undefined8 *)(this + 0x20));
  if (lVar3 != 0) {
    do {
      uVar8 = 0;
      while( true ) {
        puVar4 = (undefined8 *)FUN_03d1362c(uVar9,uVar11);
        uVar5 = FUN_03d13638(*puVar4,puVar4[1]);
        if (uVar5 <= uVar8) break;
        cVar1 = IsCenter(this,iVar10,(int)uVar8);
        if (cVar1 == '\0') {
          puVar4 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),uVar11);
          pRVar6 = (RtWeakPtr *)FUN_03d13644(*puVar4,uVar8);
          std::
          vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
          ::push_back((vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
                       *)avStack_20,pRVar6);
        }
        uVar9 = *(undefined8 *)(this + 0x18);
        uVar8 = uVar8 + 1;
      }
      uVar11 = uVar11 + 1;
      iVar10 = (int)uVar11;
      uVar8 = FUN_03d13618(uVar9,*(undefined8 *)(this + 0x20));
    } while (uVar11 < uVar8);
  }
  iVar10 = 0;
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar9,uVar7);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    iVar10 = iVar10 + 1;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_03d139c8(lVar3 + 0x222);
    if (*(int *)(this + 0x80) == iVar10) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::
  vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
           *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall StatueMazeModule::AddResourceRequirements(StatueMazeModule *this,set *param_1)

{
  string *psVar1;
  GridItemType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  GridItemType::AddResourceRequirements(this_00,param_1);
  std::string::string(asStack_10,"UI_Maze_Hammer");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_StatueMaze");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::fillSets() */

void __thiscall StatueMazeModule::fillSets(StatueMazeModule *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined4 *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  GameMatrixInfo local_18 [4];
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  resetingSets(this);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  puVar6 = (undefined4 *)FUN_03d135d0(*(undefined8 *)(pRVar5 + 0x40),(long)*(int *)(this + 0x54));
  uVar9 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(puVar6 + 4);
    uVar8 = FUN_03d135dc(uVar10,*(undefined8 *)(puVar6 + 6));
    if (uVar8 <= uVar9) break;
    piVar7 = (int *)FUN_03d1360c(uVar10,uVar9);
    GameMatrixInfo::GameMatrixInfo(local_18);
    local_14 = piVar7[2];
    local_10 = piVar7[1];
    local_18[0] = (GameMatrixInfo)(*piVar7 == 1);
    std::vector<GameMatrixInfo,std::allocator<GameMatrixInfo>>::push_back
              ((vector<GameMatrixInfo,std::allocator<GameMatrixInfo>> *)(this + 0x60),local_18);
    uVar9 = uVar9 + 1;
  }
  iVar1 = puVar6[2];
  iVar2 = puVar6[10];
  uVar3 = puVar6[1];
  uVar4 = *puVar6;
  *(int *)(this + 0x80) = iVar1;
  *(int *)(this + 0x88) = iVar1;
  *(undefined4 *)(this + 0x78) = uVar4;
  *(int *)(this + 0x84) = iVar2;
  *(int *)(this + 0x8c) = iVar1 + iVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  onFillSets(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::registerForEvents() */

void __thiscall StatueMazeModule::registerForEvents(StatueMazeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<StatueMazeModule,bool(StatueMazeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<StatueMazeModule,void(StatueMazeModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<StatueMazeModule,void(StatueMazeModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<StatueMazeModule,void(StatueMazeModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStatueDestroyed);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<GridItemMazeStatue*,Sexy::CBMemberTranslatorX<StatueMazeModule,void(StatueMazeModule::*)(GridItemMazeStatue*)>>
            ((MessageRouter *)puVar1,Message::NotifyStatueDestroy,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<StatueMazeModule,void(StatueMazeModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<StatueMazeModule,void(StatueMazeModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStatueHit);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<float,float,Sexy::CBMemberTranslatorX<StatueMazeModule,void(StatueMazeModule::*)(float,float)>>
            ((MessageRouter *)puVar1,Message::NotifyStatueHit,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::resetMazeStatues(int) */

void __thiscall StatueMazeModule::resetMazeStatues(StatueMazeModule *this,int param_1)

{
  vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
  *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  std::
  vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
  ::clear((vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
           *)(this + 0x18));
  std::
  vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
  ::resize((vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
            *)(this + 0x18),(long)param_1);
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x18);
    uVar1 = FUN_03d13618(uVar3,*(undefined8 *)(this + 0x20));
    if (uVar1 <= uVar2) break;
    this_00 = (vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
               *)FUN_03d1362c(uVar3,uVar2);
    std::
    vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
    ::resize(this_00,(long)param_1);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::createMazeStatues(int) */

void __thiscall StatueMazeModule::createMazeStatues(StatueMazeModule *this,int param_1)

{
  long lVar1;
  long extraout_x0;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  TPoint aTStack_20 [8];
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  resetMazeStatues(this,param_1);
  uVar6 = 0;
  GetStatueLocationOffset((int)this);
  uVar5 = *(undefined8 *)(this + 0x18);
  uVar7 = 0;
  lVar1 = FUN_03d13618(uVar5,*(undefined8 *)(this + 0x20));
  if (lVar1 != 0) {
    do {
      uVar4 = 0;
      while( true ) {
        puVar2 = (undefined8 *)FUN_03d1362c(uVar5,uVar6);
        uVar3 = FUN_03d13638(*puVar2,puVar2[1]);
        if (uVar3 <= uVar4) break;
        Sexy::Point::Point(aPStack_10,aTStack_20);
        GetStatueRealLocation(&local_18,this,uVar7,uVar4 & 0xffffffff,aPStack_10);
        Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)&DAT_06ad60f8,local_18,local_14,1
                          );
        nop();
        if (extraout_x0 != 0) {
          puVar2 = (undefined8 *)FUN_03d1362c(*(undefined8 *)(this + 0x18),uVar6);
          this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_03d13644(*puVar2,uVar4);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aPStack_10)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
        }
        uVar5 = *(undefined8 *)(this + 0x18);
        uVar4 = uVar4 + 1;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar6 & 0xffffffff;
      uVar4 = FUN_03d13618(uVar5,*(undefined8 *)(this + 0x20));
    } while (uVar6 < uVar4);
  }
  RecordCenterPosition(this,param_1);
  setMatrixEnable(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::CreatingSets() */

void __thiscall StatueMazeModule::CreatingSets(StatueMazeModule *this)

{
  ResourceInfo *this_00;
  AnimationController *pAVar1;
  float fVar2;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fillSets(this);
  createMazeStatues(this,*(int *)(this + 0x78));
  pickTargets(this);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                      ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar2 = (float)FUN_03d1318c(*(undefined4 *)(this_00 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onCreatingDone");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar1,fVar2 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::setState(MazeGameState) */

void __thiscall StatueMazeModule::setState(StatueMazeModule *this,int param_2)

{
  if (*(int *)(this + 0x50) != param_2) {
    *(int *)(this + 0x50) = param_2;
    switch(param_2) {
    case 0:
      CreatingSets(this);
      return;
    case 1:
      RevealingSets(this);
      return;
    case 2:
      RotatingSets(this);
      return;
    case 3:
      PlayingSets(this);
      return;
    case 4:
      CleaningSets();
      return;
    }
  }
  return;
}


/* StatueMazeModule::onLevelEnded() */

void __thiscall StatueMazeModule::onLevelEnded(StatueMazeModule *this)

{
  setState(this,5);
  return;
}


/* StatueMazeModule::onCreatingDone() */

void __thiscall StatueMazeModule::onCreatingDone(StatueMazeModule *this)

{
  setState(this,1);
  return;
}


/* StatueMazeModule::onRevealingDone() */

void __thiscall StatueMazeModule::onRevealingDone(StatueMazeModule *this)

{
  setState(this,2);
  return;
}


/* StatueMazeModule::onRotatingDone() */

void __thiscall StatueMazeModule::onRotatingDone(StatueMazeModule *this)

{
  ulong uVar1;
  
  uVar1 = FUN_03d1364c(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68));
  if (uVar1 <= (ulong)(long)*(int *)(this + 0x58)) {
    setState(this,3);
    return;
  }
  RotatingSets(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::onCleaningDone() */

void __thiscall StatueMazeModule::onCleaningDone(StatueMazeModule *this)

{
  char cVar1;
  StandaloneEffect *pSVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Insets aIStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = finishAllSet(this);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
              ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
    pSVar2 = (StandaloneEffect *)Effect_ScreenFade::Create();
    FUN_03d13184(pSVar2 + 0x1c,650000);
    Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
    Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,pSVar2,1,aIStack_60,2);
    Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
    Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3fc00000,0,0x3f800000,pSVar2,2,aIStack_60,2);
    Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
    Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,pSVar2,0,aIStack_60,2);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aIStack_60,"onFadedFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_68,
               aIStack_60);
    StandaloneEffect::SetCompletionCallback(pSVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aIStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  else {
    setState(this,6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModule::onFadedFinishedCallback(StandaloneEffect*) */

void StatueMazeModule::onFadedFinishedCallback(StandaloneEffect *param_1)

{
  onNextSetStart((StatueMazeModule *)param_1);
  setState((StatueMazeModule *)param_1,0);
  return;
}


/* StatueMazeModule::setChangeCredit(bool) */

void __thiscall StatueMazeModule::setChangeCredit(StatueMazeModule *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  UIMazeMiniGameCredit *this_00;
  
  *(int *)(this + 0x94) = *(int *)(this + 0x94) + -1;
  if (param_1) {
    *(int *)(this + 0x88) = *(int *)(this + 0x88) + -1;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
    if (bVar2) {
      this_00 = (UIMazeMiniGameCredit *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      UIMazeMiniGameCredit::SetLeftTarget(this_00,*(int *)(this + 0x88));
    }
    cVar1 = finishCurrentSet(this);
    if (cVar1 != '\0') {
      setState(this,4);
    }
  }
  cVar1 = costAllLife(this);
  if ((cVar1 != '\0') && (this[0x90] == (StatueMazeModule)0x0)) {
    this[0x90] = (StatueMazeModule)0x1;
    LawnApp::ShowReviveUI(gLawnApp,0xc);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::onStatueDestroyed(GridItemMazeStatue*) */

void __thiscall
StatueMazeModule::onStatueDestroyed(StatueMazeModule *this,GridItemMazeStatue *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03d130d4(uVar1,4);
  if ((cVar2 == '\0') && (cVar2 = FUN_03d130d4(uVar1,5), cVar2 == '\0')) {
    if (param_1 != (GridItemMazeStatue *)0x0) {
      bVar3 = (bool)FUN_03d13190(param_1[0x222]);
      setChangeCredit(this,bVar3);
    }
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar3)
    {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_28 = FUN_03d15544(uVar4,uVar5,param_1);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
      if (bVar3) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::
        vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
        ::erase((vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
                 *)this_00,local_18,local_10);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::gameplayStarted() */

void __thiscall StatueMazeModule::gameplayStarted(StatueMazeModule *this)

{
  UIWidget *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UISunBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  pUVar1 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  UIWidget::SetVisible(pUVar1,true);
  pUVar1 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  UIWidget::SetVisible(pUVar1,true);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatueMazeModule::RotateMatrix(std::vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,
   std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue> > >,
   std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,
   std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue> > > > > const&, bool) */

void __thiscall StatueMazeModule::RotateMatrix(StatueMazeModule *this,vector *param_1,bool param_2)

{
  vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
  *this_00;
  ulong uVar1;
  RtWeakPtr *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  GridItemMazeStatue *this_02;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  RtWeakPtr<PowerPropertySheet> *local_48;
  TPoint aTStack_38 [8];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::
  vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
  ::resize((vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
            *)&local_20,(long)*(int *)(this + 0x78));
  uVar9 = 0;
  while( true ) {
    uVar4 = local_20;
    uVar1 = FUN_03d13618(local_20,local_18);
    if (uVar1 <= uVar9) break;
    this_00 = (vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
               *)FUN_03d1362c(uVar4,uVar9);
    std::
    vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>
    ::resize(this_00,(long)*(int *)(this + 0x78));
    uVar9 = uVar9 + 1;
  }
  uVar9 = 0;
  GetStatueLocationOffset((int)this);
  iVar6 = *(int *)(this + 0x78);
  if (0 < iVar6) {
    do {
      iVar8 = (int)uVar9;
      if (0 < iVar6) {
        uVar1 = 0;
        do {
          iVar7 = (int)uVar1;
          if (param_2) {
            puVar3 = (undefined8 *)FUN_03d1362c(local_20,uVar9);
            local_48 = (RtWeakPtr<PowerPropertySheet> *)FUN_03d13644(*puVar3,uVar1);
            puVar3 = (undefined8 *)FUN_03d13688(*(undefined8 *)param_1,(long)((iVar6 - iVar7) + -1))
            ;
            uVar4 = *puVar3;
            uVar5 = uVar9;
          }
          else {
            puVar3 = (undefined8 *)FUN_03d1362c(local_20,uVar9);
            local_48 = (RtWeakPtr<PowerPropertySheet> *)FUN_03d13644(*puVar3,uVar1);
            puVar3 = (undefined8 *)FUN_03d13688(*(undefined8 *)param_1,uVar1);
            uVar4 = *puVar3;
            uVar5 = (long)((iVar6 - iVar8) + -1);
          }
          pRVar2 = (RtWeakPtr *)FUN_03d13694(uVar4,uVar5);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(local_48,pRVar2);
          Sexy::Point::Point(aPStack_28,aTStack_38);
          GetStatueRealLocation(aPStack_30,this,uVar9 & 0xffffffff,uVar1 & 0xffffffff,aPStack_28);
          puVar3 = (undefined8 *)FUN_03d1362c(local_20,uVar9);
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d13644(*puVar3,uVar1);
          this_02 = (GridItemMazeStatue *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          GridItemMazeStatue::SetTargetPosition(this_02,aPStack_30);
          iVar6 = *(int *)(this + 0x78);
          uVar1 = uVar1 + 1;
        } while (iVar7 + 1 < iVar6);
      }
      uVar9 = uVar9 + 1;
    } while (iVar8 + 1 < iVar6);
  }
  std::
  vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
  ::operator=((vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
               *)(this + 0x18),(vector *)&local_20);
  std::
  vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>,std::allocator<std::vector<Sexy::RtWeakPtr<GridItemMazeStatue>,std::allocator<Sexy::RtWeakPtr<GridItemMazeStatue>>>>>
             *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

