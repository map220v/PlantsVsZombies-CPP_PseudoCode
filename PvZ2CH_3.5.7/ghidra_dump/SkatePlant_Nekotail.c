// Class: SkatePlant_Nekotail


/* SkatePlant_Nekotail::GetDamageAmount() */

float __thiscall SkatePlant_Nekotail::GetDamageAmount(SkatePlant_Nekotail *this)

{
  return (*(float *)(this + 0x34) + 1.0) * 2000.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::GetLaserShooterPos() */

void __thiscall SkatePlant_Nekotail::GetLaserShooterPos(SkatePlant_Nekotail *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float local_24;
  ulong local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  lVar3 = *(long *)(this + 8);
  fVar6 = *(float *)(lVar3 + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_037dbe60(*(undefined4 *)(lVar3 + 0x18),fVar6,*(undefined4 *)(lVar3 + 0x20));
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
  this_00 = *(PopAnimRig **)(this + 0x20);
  std::string::string((string *)&local_20,"laser_shooter01");
  PopAnimRig::CalcSymbolRect(this_00,(string *)&local_20,(TRect *)&local_18);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  fVar5 = *(float *)(lVar3 + 0x9c);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,fVar5,*(float *)(lVar3 + 0xa0));
  iVar1 = FUN_037dc030(local_18 + local_10 / 2);
  iVar2 = FUN_037dc030(local_14 + local_c / 2);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(fVar4 - local_28) + (float)iVar1,
             (fVar6 - local_24) + (float)iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20 & 0xffffffff,(int)(local_20 >> 0x20));
}


/* SkatePlant_Nekotail::~SkatePlant_Nekotail() */

void __thiscall SkatePlant_Nekotail::~SkatePlant_Nekotail(SkatePlant_Nekotail *this)

{
  *(undefined ***)this = &PTR__SkatePlant_Nekotail_0669b040;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  SkatePlant::~SkatePlant((SkatePlant *)this);
  return;
}


/* SkatePlant_Nekotail::~SkatePlant_Nekotail() */

void __thiscall SkatePlant_Nekotail::~SkatePlant_Nekotail(SkatePlant_Nekotail *this)

{
  ~SkatePlant_Nekotail(this);
  AK::FreeHook(this);
  return;
}


/* SkatePlant_Nekotail::SkatePlant_Nekotail(SkateBoardMower*) */

void __thiscall
SkatePlant_Nekotail::SkatePlant_Nekotail(SkatePlant_Nekotail *this,SkateBoardMower *param_1)

{
  SkatePlant::SkatePlant((SkatePlant *)this,param_1);
  *(undefined ***)this = &PTR__SkatePlant_Nekotail_0669b040;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::CanBeTarget(BoardEntity*) */

void __thiscall SkatePlant_Nekotail::CanBeTarget(SkatePlant_Nekotail *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  long *extraout_x0;
  GridItem *pGVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      if (extraout_x0 != (long *)0x0) {
        cVar2 = (**(code **)(*extraout_x0 + 0x328))();
        if (cVar2 == '\0') {
          pcVar5 = *(code **)(*extraout_x0 + 0x3d0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x10))
          ;
          cVar2 = (*pcVar5)(extraout_x0,aRStack_10,0);
          bVar3 = 0;
          if ((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(extraout_x0,0x27), cVar2 == '\0')) {
            bVar3 = Zombie::HasCondition(extraout_x0,0x25);
            bVar3 = bVar3 ^ 1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          goto LAB_037dd4b0;
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar4 + 0x200))();
        goto LAB_037dd4b0;
      }
    }
  }
  bVar3 = 0;
LAB_037dd4b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::LoadLaserEffect(std::string, int) */

void SkatePlant_Nekotail::LoadLaserEffect
               (undefined8 param_1,undefined8 param_2,string *param_3,int param_4)

{
  int iVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  char *pcVar3;
  size_t __n;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"plantfood_laser");
  nop();
  std::string::string(asStack_30,"plantfood02_laser");
  nop();
  std::string::string(asStack_28,"plantfood_impact");
  nop();
  std::string::string(asStack_20,"plantfood02_impact");
  nop();
  std::string::string(asStack_18,"plantfood_explode");
  nop();
  std::string::string(asStack_10,"plantfood02_explode");
  nop();
  std::string::string(asStack_50,"");
  nop();
  __n = 0;
  iVar1 = Board::MakeRenderOrder(0x64d48,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
  if (param_4 == 1) {
    iVar1 = iVar1 + -2;
    pcVar3 = (char *)FUN_0547429c(asStack_28);
    std::string::append(asStack_50,pcVar3,__n);
  }
  else if (param_4 == 2) {
    iVar1 = iVar1 + -3;
    pcVar3 = (char *)FUN_0547429c(asStack_18);
    std::string::append(asStack_50,pcVar3,__n);
  }
  else if (param_4 == 0) {
    iVar1 = iVar1 + -1;
    pcVar3 = (char *)FUN_0547429c(asStack_38);
    std::string::append(asStack_50,pcVar3,__n);
  }
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_48,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_48,-1);
  FUN_037dbd44(this + 0x1c,iVar1);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,asStack_50,0);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  std::string::~string(asStack_50);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::onDraw(Sexy::Graphics*) */

void SkatePlant_Nekotail::onDraw(Graphics *param_1)

{
  RtObject *this;
  NekotailProps *pNVar1;
  UIWidget *this_00;
  PopAnimRig *this_01;
  StandaloneEffect *this_02;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_70;
  undefined4 local_6c;
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::onDraw((SkatePlant *)param_1,in_x1);
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x18))
  ;
  pNVar1 = Sexy::RtObject::Cast<NekotailProps_const>(this);
  local_40 = GetLaserShooterPos((SkatePlant_Nekotail *)param_1);
  uVar4 = 0xc2040000;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,25.0,-33.0);
  local_70 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_40,(SexyVector2 *)&local_38);
  fVar5 = *(float *)(param_1 + 0x3c);
  local_6c = uVar4;
  Sexy::FastCurve::SetOutRange(aFStack_68,*(float *)(param_1 + 0x38),fVar5);
  fVar2 = (float)FUN_037dc020(0x3f800000);
  local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_70,fVar2);
  local_5c = fVar5;
  fVar2 = (float)FUN_037dc020(0x3f800000);
  local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_68,fVar2);
  local_54 = fVar5;
  fVar2 = (float)FUN_037dc020(0x3f800000);
  local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)(pNVar1 + 0x300),fVar2);
  local_4c = fVar5;
  fVar2 = (float)FUN_037dc020(0x3f800000);
  local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)(pNVar1 + 0x308),fVar2);
  local_44 = fVar5;
  local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
  local_3c = fVar5;
  fVar2 = (float)DVec2::getLength((DVec2 *)&local_40);
  local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
  local_34 = fVar5;
  fVar5 = (float)DVec2::getLength((DVec2 *)&local_38);
  fVar3 = (float)WatergunBeamEntity::getAngleForVector
                           ((WatergunBeamEntity *)param_1,(SexyVector2 *)&local_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar2 / fVar5,1.0);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar3,(SexyVector2 *)&local_50,
             (SexyVector2 *)0x1,(bool)in_w4);
  PVPSeedBankModule::GetSkillSeedBank();
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  PVPSeedBankModule::GetSkillSeedBank();
  this_02 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  StandaloneEffect::Draw(this_02,in_x1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::LaserHitBlasting(BoardEntity*) */

void SkatePlant_Nekotail::LaserHitBlasting(BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  NekotailProps *pNVar3;
  UIWidget *pUVar4;
  PopAnimRig *pPVar5;
  StandaloneEffect *pSVar6;
  long *extraout_x0;
  RtObject *in_x1;
  float fVar7;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  SexyTransform2D aSStack_58 [40];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x18))
  ;
  pNVar3 = Sexy::RtObject::Cast<NekotailProps_const>(this);
  fVar7 = (float)FUN_037dc020(0x3f800000);
  local_80[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(pNVar3 + 0x2f8),fVar7);
  local_60[0] = GetLaserShooterPos((SkatePlant_Nekotail *)param_1);
  fVar7 = (float)FUN_037dc020(0x3f800000);
  local_78[0] = Sexy::SexyVector2::operator*((SexyVector2 *)local_60,fVar7);
  fVar7 = (float)FUN_037dc020(0x3f800000);
  local_70[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x38),fVar7);
  local_68[0] = Sexy::SexyVector2::operator-((SexyVector2 *)local_70,(SexyVector2 *)local_78);
  fVar7 = (float)WatergunBeamEntity::getAngleForVector
                           ((WatergunBeamEntity *)param_1,(SexyVector2 *)local_68);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)local_70,fVar7,1.6,(SexyVector2 *)local_80,true);
  PooyanModule::GetPooyanShooter();
  pUVar4 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
  PopAnimRig::SetRenderTransform(pPVar5,aSStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  PooyanModule::GetPooyanShooter();
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  StandaloneEffect::SetVisibility(pSVar6,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  if ((((in_x1 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<Zombie>(in_x1), !bVar1)) ||
      (nop(), extraout_x0 == (long *)0x0)) ||
     ((cVar2 = (**(code **)(*extraout_x0 + 0x328))(), cVar2 == '\0' &&
      (cVar2 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar2 == '\0')))) {
    PVPSeedBankModule::GetZombieSeedBank();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    StandaloneEffect::SetVisibility(pSVar6,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  }
  else {
    fVar7 = (float)WatergunBeamEntity::getAngleForVector
                             ((WatergunBeamEntity *)param_1,(SexyVector2 *)local_68);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)local_70,fVar7,1.5,(SexyVector2 *)local_80,true);
    PVPSeedBankModule::GetZombieSeedBank();
    pUVar4 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
    PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    PVPSeedBankModule::GetZombieSeedBank();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    StandaloneEffect::SetVisibility(pSVar6,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::FindLaserTargetByType(BoardEntityTypeFlag, float&) */

void __thiscall
SkatePlant_Nekotail::FindLaserTargetByType
          (SkatePlant_Nekotail *this,undefined8 param_2,float *param_3)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  NekotailProps *pNVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  BoardEntity *pBVar8;
  BoardEntity *pBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  ResistenceValueInfo aRStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  FastCurve aFStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_48);
  uVar6 = 0;
  lVar2 = *(long *)(this + 8);
  pBVar9 = (BoardEntity *)0x0;
  uVar13 = *(undefined4 *)(lVar2 + 0x1c);
  local_40 = FUN_037dbe60(*(undefined4 *)(lVar2 + 0x18),uVar13,*(undefined4 *)(lVar2 + 0x20));
  local_3c = uVar13;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,param_2);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pNVar3 = Sexy::RtObject::Cast<NekotailProps_const>(this_00);
  fVar14 = *(float *)(pNVar3 + 0x2d8);
  fVar10 = (float)Sexy::SexyMath::DegToRad(85.0);
  uVar7 = local_20;
  lVar2 = FUN_037dbdd4(local_20,local_18);
  if (lVar2 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_037dbde0(uVar7,uVar6);
      pBVar8 = (BoardEntity *)*puVar4;
      cVar1 = CanBeTarget(this,pBVar8);
      if (cVar1 != '\0') {
        fVar11 = (float)FUN_037dbe60(*(undefined4 *)(pBVar8 + 0x18),*(undefined4 *)(pBVar8 + 0x1c),
                                     *(undefined4 *)(pBVar8 + 0x20));
        lVar2 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        if (fVar11 <= *(float *)(lVar2 + 0x10)) {
          local_38 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,pBVar8);
          local_34 = fVar11;
          local_30 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_38,(SexyVector2 *)&local_40)
          ;
          local_2c = fVar11;
          fVar11 = (float)VectorNorm((FPoint *)&local_30);
          if (fVar11 <= fVar14 * fVar14) {
            Sexy::FastCurve::SetOutRange(aFStack_28,1.0,0.0);
            fVar12 = (float)Sexy::SexyVector2::AngleBetween
                                      ((SexyVector2 *)aFStack_28,(SexyVector2 *)&local_30);
            if ((fVar12 <= fVar10) && ((pBVar9 == (BoardEntity *)0x0 || (fVar11 < *param_3)))) {
              *param_3 = fVar11;
              pBVar9 = pBVar8;
            }
          }
        }
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_037dbdd4(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::FindLaserTarget() */

void __thiscall SkatePlant_Nekotail::FindLaserTarget(SkatePlant_Nekotail *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  ResourceInfo *pRVar5;
  float fVar6;
  undefined4 uVar7;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  lVar3 = *(long *)(this + 8);
  uVar7 = *(undefined4 *)(lVar3 + 0x1c);
  local_8 = ___stack_chk_guard;
  local_20 = FUN_037dbe60(*(undefined4 *)(lVar3 + 0x18),uVar7,*(undefined4 *)(lVar3 + 0x20));
  local_24 = 0.0;
  local_1c = uVar7;
  pRVar4 = (ResourceInfo *)FindLaserTargetByType(this,2,&local_24);
  if ((pRVar4 != (ResourceInfo *)0x0) ||
     (pRVar4 = (ResourceInfo *)FindLaserTargetByType(this,4,&local_24),
     pRVar4 != (ResourceInfo *)0x0)) {
    this_00 = (RtWeakPtr *)(this + 0x48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar2 = CanBeTarget(this,(BoardEntity *)pRVar5);
      if (cVar2 != '\0') {
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        local_18 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,(BoardEntity *)pRVar5);
        local_14 = uVar7;
        local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_18,(SexyVector2 *)&local_20);
        local_c = uVar7;
        fVar6 = (float)VectorNorm((FPoint *)&local_10);
        if (15.0 < ABS(fVar6 - local_24)) {
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::ApplyLaserDamage(BoardEntity*) */

void __thiscall
SkatePlant_Nekotail::ApplyLaserDamage(SkatePlant_Nekotail *this,BoardEntity *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)(**(code **)(*(long *)this + 0x40))();
  fVar3 = (float)PVZ_Dt();
  pcVar1 = *(code **)(*(long *)param_1 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)(fVar3 * fVar2),local_70,local_6c,aDStack_68,1,aPStack_78,0);
  (*pcVar1)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::UpdateAction() */

void SkatePlant_Nekotail::UpdateAction(void)

{
  undefined8 uVar1;
  SkatePlant *in_x0;
  BoardEntity *pBVar2;
  StandaloneEffect *pSVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::UpdateAction(in_x0);
  uVar4 = GetLaserShooterPos((SkatePlant_Nekotail *)in_x0);
  uVar1 = CONCAT44(in_s1,uVar4);
  pBVar2 = (BoardEntity *)FindLaserTarget((SkatePlant_Nekotail *)in_x0);
  if (pBVar2 == (BoardEntity *)0x0) {
    *(undefined8 *)(in_x0 + 0x40) = uVar1;
    *(undefined8 *)(in_x0 + 0x38) = uVar1;
    PVPSeedBankModule::GetSkillSeedBank();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PooyanModule::GetPooyanShooter();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PVPSeedBankModule::GetZombieSeedBank();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x48),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = PlantUltomato::getPositionForTarget((PlantUltomato *)in_x0,pBVar2);
    *(undefined4 *)(in_x0 + 0x40) = uVar4;
    *(undefined4 *)(in_x0 + 0x44) = in_s1;
    *(undefined8 *)(in_x0 + 0x38) = *(undefined8 *)(in_x0 + 0x40);
    PVPSeedBankModule::GetSkillSeedBank();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PooyanModule::GetPooyanShooter();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PVPSeedBankModule::GetZombieSeedBank();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    LaserHitBlasting((BoardEntity *)in_x0);
    ApplyLaserDamage((SkatePlant_Nekotail *)in_x0,pBVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Nekotail::Initialize(std::string const&) */

void SkatePlant_Nekotail::Initialize(string *param_1)

{
  char *pcVar1;
  PopAnimRig *pPVar2;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::Initialize(param_1);
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"plantfood_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_48,"POPANIM_EFFECTS_NEKOTAIL_ANIM");
  LoadLaserEffect(asStack_40,param_1,asStack_48,0);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x50),(RtWeakPtrBase *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"POPANIM_EFFECTS_NEKOTAIL_ANIM");
  LoadLaserEffect(asStack_40,param_1,asStack_48,1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x58),(RtWeakPtrBase *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"POPANIM_EFFECTS_NEKOTAIL_ANIM");
  LoadLaserEffect(asStack_40,param_1,asStack_48,2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x60),(RtWeakPtrBase *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::string::~string(asStack_48);
  nop();
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"laser_shooter02");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_40,false);
  std::string::~string(asStack_40);
  nop();
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"laser_shooter03");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_40,false);
  std::string::~string(asStack_40);
  nop();
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"laser_shooter04");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_40,false);
  std::string::~string(asStack_40);
  nop();
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"laser_shooter05");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_40,false);
  std::string::~string(asStack_40);
  nop();
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"laser_shooter06");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_40,false);
  std::string::~string(asStack_40);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_MagGrass_Nitro_Start");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

