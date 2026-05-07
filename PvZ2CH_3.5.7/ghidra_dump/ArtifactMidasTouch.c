// Class: ArtifactMidasTouch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMidasTouch::StaticClassInit() */

void ArtifactMidasTouch::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMidasTouch");
    (*pcVar2)(plVar1,asStack_10,FUN_0372fe58,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMidasTouch::StaticGetClass() */

long * ArtifactMidasTouch::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactMidasTouch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMidasTouch::GetClass() const */

long * ArtifactMidasTouch::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactMidasTouch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMidasTouch::~ArtifactMidasTouch() */

void __thiscall ArtifactMidasTouch::~ArtifactMidasTouch(ArtifactMidasTouch *this)

{
  *(undefined ***)this = &PTR_GetClass_0668fcc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactMidasTouch::~ArtifactMidasTouch() */

void __thiscall ArtifactMidasTouch::~ArtifactMidasTouch(ArtifactMidasTouch *this)

{
  ~ArtifactMidasTouch(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactMidasTouch::CanGoldLization(Zombie*) */

bool __thiscall ArtifactMidasTouch::CanGoldLization(ArtifactMidasTouch *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = RealObject::IsOnTeam(param_1,2);
  if ((((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')
       ) || (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
     (((cVar1 = FUN_0373c80c(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')) ||
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0' ||
       (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar2)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1);
    bVar2 = !bVar2;
  }
  return bVar2;
}


/* ArtifactMidasTouch::GetExtraCoinMax() */

int __thiscall ArtifactMidasTouch::GetExtraCoinMax(ArtifactMidasTouch *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  iVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,7);
    iVar3 = (int)(fVar5 * fVar4 + fVar4);
  }
  return iVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMidasTouch::SpawnCoin(Sexy::SexyVector3 const&, int) */

void __thiscall
ArtifactMidasTouch::SpawnCoin(ArtifactMidasTouch *this,SexyVector3 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ProfileMgr *this_00;
  Collectable *pCVar5;
  int iVar6;
  int iVar7;
  SexyVector3 *pSVar8;
  string asStack_10 [8];
  long local_8;
  
  iVar7 = param_2 / 1000;
  local_8 = ___stack_chk_guard;
  iVar2 = (param_2 % 1000) / 500;
  iVar1 = (param_2 % 1000) % 500;
  iVar3 = iVar1 / 100;
  iVar1 = (iVar1 % 100) / 10;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  bVar4 = std::operator==(asStack_10,"Artifact_Demo_Midastouch");
  std::string::~string(asStack_10);
  if (iVar7 < 1) {
    if (iVar2 < 1) goto LAB_03748998;
    if (bVar4) goto LAB_03748800;
LAB_0374868c:
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"large_coin_gold");
      pCVar5 = (Collectable *)Board::AddCoin(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar7 != iVar2);
    if (iVar3 < 1) goto LAB_037489b4;
LAB_037486f0:
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"coin_gold");
      pCVar5 = (Collectable *)Board::AddCoin(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar7 != iVar3);
    if (iVar1 < 1) goto LAB_037487b0;
LAB_03748754:
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"coin_silver");
      pCVar5 = (Collectable *)Board::AddCoin(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar7 != iVar1);
    goto LAB_037487b0;
  }
  if (bVar4) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"super_coin_gold_fake");
      pCVar5 = (Collectable *)Board::AddCoinFake(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar6 != iVar7);
    if (iVar2 < 1) goto LAB_03748998;
LAB_03748800:
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"large_coin_gold_fake");
      pCVar5 = (Collectable *)Board::AddCoinFake(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar7 != iVar2);
    if (iVar3 < 1) goto LAB_037489b4;
LAB_03748864:
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"coin_gold_fake");
      pCVar5 = (Collectable *)Board::AddCoinFake(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar7 != iVar3);
    if (iVar1 < 1) goto LAB_037487b0;
  }
  else {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"super_coin_gold");
      pCVar5 = (Collectable *)Board::AddCoin(pSVar8,(string *)param_1);
      Collectable::SetNeverExpire(pCVar5,true);
      std::string::~string(asStack_10);
      nop();
    } while (iVar6 != iVar7);
    if (0 < iVar2) goto LAB_0374868c;
LAB_03748998:
    if (0 < iVar3) {
      if (!bVar4) goto LAB_037486f0;
      goto LAB_03748864;
    }
LAB_037489b4:
    if (iVar1 < 1) goto LAB_037487b0;
    if (!bVar4) goto LAB_03748754;
  }
  iVar7 = 0;
  do {
    iVar7 = iVar7 + 1;
    pSVar8 = *(SexyVector3 **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"coin_silver_fake");
    pCVar5 = (Collectable *)Board::AddCoinFake(pSVar8,(string *)param_1);
    Collectable::SetNeverExpire(pCVar5,true);
    std::string::~string(asStack_10);
    nop();
  } while (iVar7 != iVar1);
LAB_037487b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMidasTouch::onZombieDied(Zombie*, DamageInfo const*) */

void ArtifactMidasTouch::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ActivityConfig *this;
  undefined4 uVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 != (DamageInfo *)0x0) && (cVar1 = Zombie::HasCondition(param_2,0x7f), cVar1 != '\0'))
  {
    Zombie::EndCondition((Zombie *)param_2,0x7f);
    iVar2 = Zombie::getZombieStateSerialization((Zombie *)param_2);
    if (iVar2 == 9) {
      uVar5 = Zombie::GetFlickOffStartPositon((Zombie *)param_2);
      local_18 = CONCAT44(in_s1,uVar5);
      local_10 = in_s2;
    }
    else {
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
    }
    this = (ActivityConfig *)LawnApp::GetActivityConfig();
    iVar2 = ActivityConfig::GetMaxCoinSpecialCollected(this);
    iVar3 = UIBattleOrder::GetCurrentExp(*(UIBattleOrder **)(gLawnApp + 0x9f0));
    if (iVar3 < iVar2) {
      iVar2 = Zombie::GetSizeType((Zombie *)param_2);
      if (iVar2 == 0) {
        UIGiftFoReturn::SetIntegral
                  (*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar3 + *(int *)(param_1 + 0x40));
        SpawnCoin((ArtifactMidasTouch *)param_1,(SexyVector3 *)&local_18,*(int *)(param_1 + 0x40));
      }
      else {
        iVar2 = Zombie::GetSizeType((Zombie *)param_2);
        if (iVar2 == 1) {
          UIGiftFoReturn::SetIntegral
                    (*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar3 + *(int *)(param_1 + 0x44));
          SpawnCoin((ArtifactMidasTouch *)param_1,(SexyVector3 *)&local_18,*(int *)(param_1 + 0x44))
          ;
        }
        else {
          iVar2 = Zombie::GetSizeType((Zombie *)param_2);
          if (iVar2 == 2) {
            UIGiftFoReturn::SetIntegral
                      (*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar3 + *(int *)(param_1 + 0x48));
            SpawnCoin((ArtifactMidasTouch *)param_1,(SexyVector3 *)&local_18,
                      *(int *)(param_1 + 0x48));
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMidasTouch::onMidasTouchSpecialDied(Zombie*) */

void __thiscall
ArtifactMidasTouch::onMidasTouchSpecialDied(ArtifactMidasTouch *this,Zombie *param_1)

{
  onZombieDied((Zombie *)this,(DamageInfo *)param_1);
  return;
}


/* ArtifactMidasTouch::ArtifactMidasTouch() */

void __thiscall ArtifactMidasTouch::ArtifactMidasTouch(ArtifactMidasTouch *this)

{
  undefined4 uVar1;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668fcc0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar1;
  return;
}


/* ArtifactMidasTouch::StaticNew() */

ArtifactMidasTouch * ArtifactMidasTouch::StaticNew(void)

{
  ArtifactMidasTouch *this;
  
  this = ::operator_new(0x50);
  ArtifactMidasTouch(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMidasTouch::DoTrigger() */

void __thiscall ArtifactMidasTouch::DoTrigger(ArtifactMidasTouch *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Effect_PopAnim *pEVar4;
  PopAnim *pPVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  char *pcVar9;
  ArtifactMgr *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  Zombie *pZVar15;
  Zombie *pZVar16;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  Vec3 aVStack_40 [4];
  float local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  fVar14 = 10.0;
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  EATextSquish::Vec3::Vec3(aVStack_40,400.0,300.0,0.0);
  pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_30,"POPANIM_EFFECTS_ARTIFACT_MIDASTOUCH_EFFECT");
  GetPAMByName((string *)&local_30);
  pPVar5 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,pPVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string((string *)&local_30);
  nop();
  std::string::string((string *)&local_20,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0);
  std::string::~string((string *)&local_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)aVStack_40,-1);
  Effect_PopAnim::SetCentered(pEVar4,true);
  uVar2 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_3c);
  uVar2 = Board::MakeRenderOrder(0x65130,uVar2,0);
  FUN_03723aa0(pEVar4 + 0x1c,uVar2);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar10 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar14 = (float)ArtifactMgr::CalculateFieldValue(pAVar10,0,0);
  }
  uVar11 = 0;
  fVar13 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  pZVar16._0_4_ = (Zombie *)(fVar14 + fVar14 * fVar13);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,2);
  uVar12 = local_20;
  lVar6 = FUN_03724708(local_20,local_18);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_03724714(uVar12,uVar11);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      cVar1 = CanGoldLization(this,this_00);
      if ((cVar1 != '\0') &&
         (((iVar3 = Zombie::GetSizeType(this_00), pZVar15._0_4_ = pZVar16._0_4_, iVar3 == 1 ||
           (iVar3 = Zombie::GetSizeType(this_00), iVar3 == 0)) ||
          ((iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2 &&
           (iVar3 = FUN_03723bb4(*(undefined4 *)(this + 0x20)),
           pZVar15._0_4_ = (Zombie *)((float)pZVar16._0_4_ * 0.5), 3 < iVar3)))))) {
        Zombie::ApplyCondition(pZVar15._0_4_,0,this_00,0x7f,1);
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        local_30 = *puVar7;
        local_28 = *(undefined4 *)(puVar7 + 1);
        pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_50,"POPANIM_EFFECTS_ARTIFACT_MIDASTOUCH_ZOMBIE");
        GetPAMByName(asStack_50);
        pPVar5 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        Effect_PopAnim::CreatePopAnimRig(pEVar4,pPVar5,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        std::string::~string(asStack_50);
        nop();
        std::string::string((string *)aRStack_48,"animation");
        Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_48,0);
        std::string::~string((string *)aRStack_48);
        nop();
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar4,(SexyVector3 *)&local_30,-1);
        Effect_PopAnim::SetCentered(pEVar4,true);
        uVar2 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_30._4_4_);
        uVar2 = Board::MakeRenderOrder(0x65130,uVar2,0);
        FUN_03723aa0(pEVar4 + 0x1c,uVar2);
      }
      uVar12 = local_20;
      uVar11 = uVar11 + 1;
      uVar8 = FUN_03724708(local_20,local_18);
    } while (uVar11 < uVar8);
  }
  pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar9,"Artifact_Midastouch_Triger");
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactMidasTouch::Activate() */

void __thiscall ArtifactMidasTouch::Activate(ArtifactMidasTouch *this)

{
  undefined *puVar1;
  char cVar2;
  ArtifactMgr *pAVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  iVar4 = 0;
  Artifact::Activate((Artifact *)this);
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,1);
    iVar4 = (int)fVar7;
  }
  *(int *)(this + 0x40) = iVar4;
  iVar4 = 0;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this);
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,2);
    iVar4 = (int)fVar7;
  }
  *(int *)(this + 0x44) = iVar4;
  iVar4 = 0;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,3,0);
    iVar4 = (int)fVar7;
  }
  *(int *)(this + 0x48) = iVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar2 == '\0') {
    fVar7 = 99999.0;
  }
  else {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
  }
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x4c) = (fVar6 + fVar7) - fVar7 * fVar5;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ArtifactMidasTouch,void(ArtifactMidasTouch::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMidasTouchSpecialDied);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ArtifactMidasTouch,void(ArtifactMidasTouch::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::MidasTouchSpecialDied,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMidasTouch::Update() */

void __thiscall ArtifactMidasTouch::Update(ArtifactMidasTouch *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  LightningBolt *this_01;
  char *pcVar7;
  ArtifactMgr *pAVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Zombie *pZVar14;
  Zombie *pZVar15;
  string asStack_48 [8];
  string asStack_40 [8];
  Point aPStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if ((cVar1 != '\0') && (fVar11 = (float)PVZ_T(), *(float *)(this + 0x4c) < fVar11)) {
    fVar11 = 3.0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
    if (cVar1 != '\0') {
      pAVar8 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      fVar11 = (float)ArtifactMgr::CalculateFieldValue(pAVar8,2,1);
    }
    pZVar15._0_4_ = (Zombie *)0x41200000;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
    if (cVar1 != '\0') {
      pAVar8 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      pZVar15._0_4_ = (Zombie *)ArtifactMgr::CalculateFieldValue(pAVar8,2,2);
    }
    uVar9 = 0;
    iVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    Sexy::Point::Point(aPStack_38,0,2);
    EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
              ((BoardEntitySorter_ClosestByColumn *)aVStack_30,aPStack_38);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
              (uVar3,uVar4,aVStack_30);
    do {
      uVar3 = local_20;
      uVar5 = FUN_03724708(local_20,local_18);
      if (uVar5 <= uVar9) break;
      puVar6 = (undefined8 *)FUN_03724714(uVar3,uVar9);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      cVar1 = CanGoldLization(this,this_00);
      if ((cVar1 != '\0') &&
         (((iVar2 = Zombie::GetSizeType(this_00), pZVar14._0_4_ = pZVar15._0_4_, iVar2 == 1 ||
           (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0)) ||
          ((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 2 &&
           (iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20)),
           pZVar14._0_4_ = (Zombie *)((float)pZVar15._0_4_ * 0.33333334), 3 < iVar2)))))) {
        iVar10 = iVar10 + 1;
        Zombie::ApplyCondition(pZVar14._0_4_,0,this_00,0x7f,1);
        EATextSquish::Vec3::Vec3(aVStack_30,200.0,300.0,0.0);
        this_01 = GameObject::Create<LightningBolt>();
        std::string::string(asStack_48,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT_GOLD");
        std::string::string(asStack_40,"");
        std::string::string((string *)aPStack_38,"POPANIM_EFFECTS_LIGHTNINGREED_HIT");
        LightningBolt::SetPopAnim(this_01,asStack_48,asStack_40,(string *)aPStack_38);
        std::string::~string((string *)aPStack_38);
        nop();
        std::string::~string(asStack_40);
        nop();
        std::string::~string(asStack_48);
        nop();
        FUN_03726e0c(this_01 + 0x118);
        FUN_03726df8(this_01 + 0x11c,this_01 + 0x120);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aPStack_38,(RtWeakPtrBase *)asStack_40);
        TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_01,aPStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40)
        ;
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aPStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aPStack_38,(RtWeakPtrBase *)asStack_40);
        LightningBolt::SetInitialTarget(this_01,aPStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_38)
        ;
        pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar7,"Artifact_Midastouch_Hit");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40)
        ;
      }
      uVar9 = uVar9 + 1;
    } while ((float)iVar10 < fVar11);
    if (iVar10 == 0) {
      fVar11 = (float)Artifact::GetBoostValue((Artifact *)this,6);
      fVar12 = (float)PVZ_T();
      *(float *)(this + 0x4c) = (fVar12 + 2.0) - fVar11 * 2.0;
    }
    else {
      cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
      if (cVar1 == '\0') {
        fVar11 = 99999.0;
      }
      else {
        pAVar8 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        fVar11 = (float)ArtifactMgr::CalculateFieldValue(pAVar8,2,0);
      }
      fVar12 = (float)Artifact::GetBoostValue((Artifact *)this,6);
      fVar13 = (float)PVZ_T();
      *(float *)(this + 0x4c) = (fVar13 + fVar11) - fVar11 * fVar12;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

