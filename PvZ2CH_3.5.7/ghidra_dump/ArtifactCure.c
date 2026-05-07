// Class: ArtifactCure


/* ArtifactCure::OnCreatePlant(Plant*) */

void __thiscall ArtifactCure::OnCreatePlant(ArtifactCure *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(this + 0x48);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCure::StaticClassInit() */

void ArtifactCure::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCure");
    (*pcVar2)(plVar1,asStack_10,FUN_0372da40,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCure::StaticGetClass() */

long * ArtifactCure::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCure",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCure::GetClass() const */

long * ArtifactCure::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCure",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCure::~ArtifactCure() */

void __thiscall ArtifactCure::~ArtifactCure(ArtifactCure *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e960;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactCure::~ArtifactCure() */

void __thiscall ArtifactCure::~ArtifactCure(ArtifactCure *this)

{
  ~ArtifactCure(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactCure::ArtifactCure() */

void __thiscall ArtifactCure::ArtifactCure(ArtifactCure *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668e960;
  return;
}


/* ArtifactCure::StaticNew() */

ArtifactCure * ArtifactCure::StaticNew(void)

{
  ArtifactCure *this;
  
  this = ::operator_new(0x60);
  ArtifactCure(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCure::CurePlants(float, bool) */

void __thiscall ArtifactCure::CurePlants(ArtifactCure *this,float param_1,bool param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Plant *this_00;
  GridItem *this_01;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  fVar9 = (*(float *)(this + 0x54) + 1.0) * *(float *)(this + 0x44);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar6 = 0;
  uVar2 = operator|(1,4);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2);
  uVar7 = local_20;
  lVar3 = FUN_03724708(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03724714(uVar7,uVar6);
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
      if (this_00 != (Plant *)0x0) {
        fVar8 = (float)Plant::GetMaxHealth(this_00);
        (**(code **)(*(long *)this_00 + 0x1e0))(this_00,(int)((float)(int)fVar8 * param_1),1);
        if (param_2) {
          Plant::SetInvincible(this_00,true,true,fVar9);
        }
      }
      puVar4 = (undefined8 *)FUN_03724714(local_20,uVar6);
      this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      if (this_01 != (GridItem *)0x0) {
        GridItem::GetType();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        FUN_05475d88(asStack_30,lVar3 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        bVar1 = std::operator==(asStack_30,"lilypad");
        if (bVar1) {
          lVar3 = *(long *)this_01;
          if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
            fVar8 = (float)GridItem::GetMaxHitpoints(this_01);
          }
          else {
            fVar8 = (float)(**(code **)(lVar3 + 0x1e0))();
            lVar3 = *(long *)this_01;
          }
          (**(code **)(lVar3 + 0x1e8))(this_01,(int)((float)(int)fVar8 * param_1),1);
          if (param_2) {
            GridItem::SetInvincible(this_01,true,true,fVar9);
          }
        }
        std::string::~string(asStack_30);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_03724708(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCure::Update() */

void __thiscall ArtifactCure::Update(ArtifactCure *this)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if ((cVar1 != '\0') && (0.0 < *(float *)(this + 0x4c))) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x58) <= fVar2) {
      CurePlants(this,*(float *)(this + 0x4c),false);
      fVar2 = (float)PVZ_T();
      fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,6);
      *(float *)(this + 0x58) = fVar2 + *(float *)(extraout_x0 + 0x150) * (1.0 - fVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCure::BuffPlants() */

void __thiscall ArtifactCure::BuffPlants(ArtifactCure *this)

{
  long extraout_x0;
  long lVar1;
  undefined8 *puVar2;
  Plant *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,1);
  uVar5 = local_20;
  lVar1 = FUN_03724708(local_20,local_18);
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03724714(uVar5,uVar4);
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
      if (this_00 != (Plant *)0x0) {
        Plant::ChangeSpeedModifier
                  (this_00,(*(float *)(extraout_x0 + 0x158) + 1.0) * *(float *)(this_00 + 0xe0),
                   *(float *)(this + 0x50));
      }
      uVar5 = local_20;
      uVar4 = uVar4 + 1;
      uVar3 = FUN_03724708(local_20,local_18);
    } while (uVar4 < uVar3);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCure::DoTrigger() */

void __thiscall ArtifactCure::DoTrigger(ArtifactCure *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  CurePlants(this,*(float *)(this + 0x40),true);
  if (0.0 < *(float *)(this + 0x50)) {
    BuffPlants(this);
    return;
  }
  return;
}


/* ArtifactCure::Activate() */

void __thiscall ArtifactCure::Activate(ArtifactCure *this)

{
  undefined *puVar1;
  char cVar2;
  ArtifactMgr *pAVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  fVar5 = 0.0;
  Artifact::Activate((Artifact *)this);
  *(undefined4 *)(this + 0x58) = 0;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x40) = fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,1);
  }
  *(float *)(this + 0x44) = fVar5;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x44) = *(float *)(this + 0x44) + fVar5 * fVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x48) = fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x4c) = fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,3,0);
  }
  *(float *)(this + 0x50) = fVar5;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar5 * fVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,3,1);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x54) = fVar5;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArtifactCure,void(ArtifactCure::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}

