// Class: PlantSmallCactus


/* PlantSmallCactus::PlantSmallCactus() */

void __thiscall PlantSmallCactus::PlantSmallCactus(PlantSmallCactus *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f7430;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlantSmallCactus::StaticNew() */

PlantSmallCactus * PlantSmallCactus::StaticNew(void)

{
  PlantSmallCactus *this;
  
  this = ::operator_new(0x30);
  PlantSmallCactus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::StaticClassInit() */

void PlantSmallCactus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSmallCactus");
    (*pcVar2)(plVar1,asStack_10,FUN_0417ef60,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallCactus::StaticGetClass() */

long * PlantSmallCactus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSmallCactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSmallCactus::GetClass() const */

long * PlantSmallCactus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSmallCactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSmallCactus::~PlantSmallCactus() */

void __thiscall PlantSmallCactus::~PlantSmallCactus(PlantSmallCactus *this)

{
  *(undefined ***)this = &PTR_GetClass_067f7430;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSmallCactus::~PlantSmallCactus() */

void __thiscall PlantSmallCactus::~PlantSmallCactus(PlantSmallCactus *this)

{
  ~PlantSmallCactus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantSmallCactus::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long param_1,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Effect_AngerFlame *)
         UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this);
  if (iVar2 == 0xf) {
    PlantFramework::FindTargetZombie(aRStack_10,param_1,param_3,param_4,param_5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_0417f818;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_0417f818:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantSmallCactus::FindTargetDamageableGridItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long param_1,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Effect_AngerFlame *)
         UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this);
  if (iVar2 == 0xf) {
    PlantFramework::FindTargetDamageableGridItem
              ((PlantFramework *)aRStack_10,param_1,param_3,param_4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_0417f8e0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_0417f8e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* PlantSmallCactus::StartWalk() */

void __thiscall PlantSmallCactus::StartWalk(PlantSmallCactus *this)

{
  RtObject *this_00;
  PlantAnimRig_SmallCactus *this_01;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_SmallCactus>(this_00);
  PlantAnimRig_SmallCactus::PlayNormalRun(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::DestorySelf() */

void __thiscall PlantSmallCactus::DestorySelf(PlantSmallCactus *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  Point aPStack_38 [8];
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_38);
  Sexy::Point::Point(aPStack_20,0,-0x1e);
  Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)aRStack_18);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_SMALL_CACTUS_HIT");
  GetPAMByName((string *)aPStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string((string *)aPStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1 + 2);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallCactus::UpdateLogic() */

void __thiscall PlantSmallCactus::UpdateLogic(PlantSmallCactus *this)

{
  int iVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 0xf) {
    return;
  }
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar1 < iVar2) {
    (**(code **)(*(long *)this + 0x150))(this,0);
    return;
  }
  DestorySelf(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::UpdateSmallCactusPosition(float) */

void __thiscall PlantSmallCactus::UpdateSmallCactusPosition(PlantSmallCactus *this,float param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  BoardEntity *this_00;
  SharkMinion *this_01;
  undefined8 uVar7;
  float fVar8;
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = *puVar6;
  local_10 = *(undefined4 *)(puVar6 + 1);
  iVar3 = BoardTransforms::BoardSpaceToGridX((float)local_18);
  iVar4 = BoardTransforms::BoardSpaceToGridY(local_18._4_4_);
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    uVar7 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_20,iVar3,iVar4);
    MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
              ((MessageRouter *)puVar1,Message::PlantMoving,uVar7,aPStack_20);
  }
  fVar8 = (float)PVZ_Dt();
  local_18 = CONCAT44(local_18._4_4_,(float)local_18 + param_1 * fVar8);
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  this_01 = *(SharkMinion **)(this + 0x10);
  uVar5 = SharkMinion::getRow(this_01);
  this_00 = *(BoardEntity **)(this + 0x10);
  *(undefined4 *)(this_01 + 0x110) = uVar5;
  uVar5 = BoardEntity::CalcColumnPosition(this_00);
  *(undefined4 *)(this_00 + 0x114) = uVar5;
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  if (cVar2 == '\0') {
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantPlaced,*(Plant **)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallCactus::UpdateAnimation() */

void __thiscall PlantSmallCactus::UpdateAnimation(PlantSmallCactus *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  long lVar2;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 0xf) {
    return;
  }
  lVar2 = FUN_0417fc68(*(undefined8 *)(this + 0x10));
  UpdateSmallCactusPosition(this,*(float *)(lVar2 + 0x2b8));
  return;
}


/* PlantSmallCactus::UpdateActions() */

void __thiscall PlantSmallCactus::UpdateActions(PlantSmallCactus *this)

{
  UpdateLogic(this);
  UpdateAnimation(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::TakeDamage(DamageInfo const&) */

void PlantSmallCactus::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this;
  long lVar3;
  RtObject *this_00;
  PlantAnimRig_SmallCactus *this_01;
  ZombieSkyCityTwinsPlane *pZVar4;
  ZombieCavalry *pZVar5;
  ZombieModernSolarTruck *pZVar6;
  ZombieSkycityBattlePlane *pZVar7;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(in_x1 + 0x10) == 0x40000) &&
     (fVar8 = (float)PVZ_T(), *(float *)(param_1 + 0x2c) < fVar8)) {
    if ((*(RtObject **)in_x1 != (RtObject *)0x0) &&
       (((this = Sexy::RtObject::Cast<Zombie>(*(RtObject **)in_x1), this != (Zombie *)0x0 &&
         (cVar1 = (**(code **)(*(long *)this + 0x328))(), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')))) {
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      FUN_0417ed5c(*(undefined8 *)(lVar3 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      (**(code **)(*(long *)this + 0x110))(this,aRStack_68);
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_SmallCactus>(this_00);
      PlantAnimRig_SmallCactus::PlayUnderAttack(this_01);
      fVar8 = (float)PVZ_T();
      if (*(float *)(param_1 + 0x28) < fVar8) {
        cVar1 = Zombie::IsBoss(this);
        if (((((cVar1 == '\0') && (iVar2 = Zombie::GetSizeType(this), iVar2 != 2)) &&
             ((iVar2 = Zombie::GetSizeType(this), iVar2 != 1 &&
              ((pZVar4 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)this),
               pZVar4 == (ZombieSkyCityTwinsPlane *)0x0 &&
               (pZVar5 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)this),
               pZVar5 == (ZombieCavalry *)0x0)))))) &&
            (pZVar6 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)this),
            pZVar6 == (ZombieModernSolarTruck *)0x0)) &&
           (((pZVar7 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>((RtObject *)this),
             pZVar7 == (ZombieSkycityBattlePlane *)0x0 &&
             (cVar1 = (**(code **)(*(long *)this + 0x4d8))(this), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this + 0x508))(this), cVar1 == '\0')))) {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,this,0x18,1);
        }
        fVar8 = (float)PVZ_T();
        lVar3 = FUN_0417fc68(*(undefined8 *)(param_1 + 0x10));
        *(float *)(param_1 + 0x28) = fVar8 + *(float *)(lVar3 + 700);
      }
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    fVar8 = (float)PVZ_T();
    lVar3 = FUN_0417fc68(*(undefined8 *)(param_1 + 0x10));
    lVar3 = FUN_0417ed5c(*(undefined8 *)(lVar3 + 0x70));
    *(float *)(param_1 + 0x2c) = fVar8 + *(float *)(lVar3 + 0x28);
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallCactus::OnAnimCommand(std::string const&, std::string const&) */

void PlantSmallCactus::OnAnimCommand(string *param_1,string *param_2)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  RtObject *pRVar8;
  Zombie *pZVar9;
  GridItem *pGVar10;
  long lVar11;
  BoardEntity *pBVar12;
  long *plVar13;
  string *psVar14;
  undefined8 *puVar15;
  ResourceInfo *pRVar16;
  float *pfVar17;
  Board *pBVar18;
  ulong uVar19;
  ResourceInfo *pRVar20;
  undefined8 uVar21;
  float fVar22;
  RtMixedPtrBase aRStack_a0 [8];
  int local_98;
  int local_94;
  string asStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  undefined8 local_50;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==("hit",param_2);
  if (bVar2) {
    Plant::FindTargetInRow
              (aRStack_a0,*(long *)(param_1 + 0x10),
               *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
    if (cVar3 != '\0') {
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
      ;
      pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar8);
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
      ;
      pGVar10 = Sexy::RtObject::Cast<GridItem>(pRVar8);
      if (pZVar9 != (Zombie *)0x0) {
        Plant::GetProps();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        FUN_0417ed5c(*(undefined8 *)(lVar11 + 0x70));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
        pBVar12 = (BoardEntity *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        iVar5 = BoardEntity::CalcColumnPosition(pBVar12);
        Sexy::Point::Point((Point *)&local_80,iVar5,*(int *)(*(long *)(param_1 + 0x10) + 0x110));
        local_50 = local_80;
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        (**(code **)(*plVar13 + 0x110))(plVar13,aRStack_68);
        BoardEntity::CalcGridPosition();
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
        uVar6 = operator|(1,4);
        EntityFinder::GetEntitiesAtGridSquare((Point *)&local_80,uVar6,local_98,local_94);
        pBVar18 = *(Board **)(gLawnApp + 0x9f0);
        psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_90,"smallcactus");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar14);
        cVar3 = Board::CanPlantAt(pBVar18,&local_98,aRStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
        std::string::~string(asStack_90);
        nop();
        uVar21 = local_80;
        if (cVar3 != '\0') {
          lVar11 = FUN_0417ed4c(local_80,local_78);
          if (lVar11 == 0) {
LAB_041804ac:
            pfVar17 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               **)(param_1 + 0x10));
            fVar22 = pfVar17[1];
            iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar17);
            iVar7 = BoardTransforms::BoardSpaceToGridY(fVar22);
            cVar3 = GameObject::IsDestroyed(*(GameObject **)(param_1 + 0x10));
            puVar1 = gMessageRouter;
            if (cVar3 == '\0') {
              uVar21 = *(undefined8 *)(param_1 + 0x10);
              Sexy::Point::Point((Point *)aRStack_88,iVar5,iVar7);
              MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
                        ((MessageRouter *)puVar1,Message::PlantMoving,uVar21,aRStack_88);
            }
            Plant::SetGridLoc(*(Plant **)(param_1 + 0x10),local_98,local_94);
            bVar4 = PlantFramework::OnAnimCommand(param_1,param_2);
            uVar19 = (ulong)bVar4;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
            if (local_8 == ___stack_chk_guard) {
              return;
            }
            goto LAB_04180594;
          }
          if (lVar11 == 1) {
            puVar15 = (undefined8 *)FUN_0417ed58(uVar21);
            pRVar20 = (ResourceInfo *)*puVar15;
            ToolPacketData::GetProps();
            pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_88);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
            if (pRVar20 == pRVar16) goto LAB_041804ac;
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
      if (pGVar10 != (GridItem *)0x0) {
        Plant::GetProps();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        FUN_0417ed5c(*(undefined8 *)(lVar11 + 0x70));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
        pBVar12 = (BoardEntity *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        iVar5 = BoardEntity::CalcColumnPosition(pBVar12);
        Sexy::Point::Point((Point *)&local_80,iVar5,*(int *)(*(long *)(param_1 + 0x10) + 0x110));
        local_50 = local_80;
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        (**(code **)(*plVar13 + 0x110))(plVar13,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
    }
    DestorySelf((PlantSmallCactus *)param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  }
  uVar19 = ___stack_chk_guard;
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
LAB_04180594:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
}

