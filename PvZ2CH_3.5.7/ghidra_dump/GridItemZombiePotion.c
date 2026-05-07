// Class: GridItemZombiePotion


/* GridItemZombiePotion::~GridItemZombiePotion() */

void __thiscall GridItemZombiePotion::~GridItemZombiePotion(GridItemZombiePotion *this)

{
  *(undefined ***)this = &PTR_GetClass_06784bb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombiePotion_06784e68;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombiePotion::~GridItemZombiePotion() */

void __thiscall GridItemZombiePotion::~GridItemZombiePotion(GridItemZombiePotion *this)

{
  ~GridItemZombiePotion(this + -0x10);
  return;
}


/* GridItemZombiePotion::~GridItemZombiePotion() */

void __thiscall GridItemZombiePotion::~GridItemZombiePotion(GridItemZombiePotion *this)

{
  ~GridItemZombiePotion(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombiePotion::~GridItemZombiePotion() */

void __thiscall GridItemZombiePotion::~GridItemZombiePotion(GridItemZombiePotion *this)

{
  ~GridItemZombiePotion(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePotion::StaticClassInit() */

void GridItemZombiePotion::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombiePotion");
    (*pcVar2)(plVar1,asStack_10,FUN_03e19d30,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombiePotion::StaticGetClass() */

long * GridItemZombiePotion::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombiePotion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombiePotion::GetClass() const */

long * GridItemZombiePotion::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombiePotion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombiePotion::GridItemZombiePotion() */

void __thiscall GridItemZombiePotion::GridItemZombiePotion(GridItemZombiePotion *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  this[0x1a5] = (GridItemZombiePotion)0x0;
  *(undefined ***)this = &PTR_GetClass_06784bb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombiePotion_06784e68;
  return;
}


/* GridItemZombiePotion::StaticNew() */

GridItemZombiePotion * GridItemZombiePotion::StaticNew(void)

{
  GridItemZombiePotion *this;
  
  this = ::operator_new(0x1a8);
  GridItemZombiePotion(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePotion::onSpawnAnimStopped(std::string const&) */

void GridItemZombiePotion::onSpawnAnimStopped(string *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  pcVar2 = *(code **)(*plVar1 + 0x78);
  std::string::string(asStack_28,"animation2");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar2)(plVar1,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombiePotion::CanBeTargetedBy(BoardEntity const*) const */

undefined8 __thiscall
GridItemZombiePotion::CanBeTargetedBy(GridItemZombiePotion *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  ZombiePotionProps *pZVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) {
    pZVar3 = GridItem::GetProps<ZombiePotionProps>();
    uVar6 = *(undefined8 *)(pZVar3 + 0xd0);
    lVar4 = FUN_03e1988c(uVar6,*(undefined8 *)(pZVar3 + 0xd8));
    puVar5 = (undefined4 *)FUN_03e19898(uVar6,lVar4 + -1);
    cVar1 = Zombie::HasCondition(pZVar2,*puVar5);
    if ((cVar1 != '\0') || (cVar1 = RealObject::IsOnOpposingTeam(pZVar2,2), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar6 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  return uVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePotion::TakeDamage(DamageInfo const&) */

void __thiscall GridItemZombiePotion::TakeDamage(GridItemZombiePotion *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ZombiePotionProps *pZVar5;
  Zombie *extraout_x0;
  ulong uVar6;
  undefined4 *puVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  SexyVector3 *pSVar10;
  string *psVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  Zombie *pZVar17;
  undefined4 uVar16;
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(uVar13,0x200000);
  if (bVar1) {
    GridItem::TakeDamage((GridItem *)this,param_1);
    pZVar5 = GridItem::GetProps<ZombiePotionProps>();
    pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)(pZVar5 + 0x108));
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
    Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(pEVar8,true);
    pSVar10 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    iVar3 = FUN_03e19ab4(0xfffffff1);
    fVar15 = (float)iVar3;
    uVar16 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar15,0.0);
    local_18 = Sexy::SexyVector3::operator+(pSVar10,(SexyVector3 *)aVStack_28);
    local_14 = fVar15;
    local_10 = uVar16;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar8,(SexyVector3 *)&local_18,-1);
    std::string::string((string *)&local_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar8,(string *)&local_18,2);
    std::string::~string((string *)&local_18);
    nop();
    if ((*(RtObject **)param_1 == (RtObject *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<ZombieGargantuar>(*(RtObject **)param_1), !bVar1)) {
      psVar11 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar11,pZVar5 + 0xf0);
    }
    else {
      psVar11 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar11,pZVar5 + 0xf8);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  else {
    uVar4 = operator|(0x40000,0x80000);
    bVar1 = TestFlag<DamageTypeFlags>(uVar13,uVar4);
    if (((bVar1) && (*(RtObject **)param_1 != (RtObject *)0x0)) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), bVar1)) {
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        fVar15 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fVar15 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
      }
      if (0.0 <= fVar15) {
        if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
          fVar15 = (float)GridItem::GetHitpoints((GridItem *)this);
        }
        else {
          fVar15 = (float)(**(code **)(*(long *)this + 0x1d8))();
        }
        if (fVar15 - *(float *)(param_1 + 8) < 0.0) {
          uVar14 = 0;
          uVar12 = 0xffffffff;
          pZVar5 = GridItem::GetProps<ZombiePotionProps>();
          nop();
          while( true ) {
            uVar13 = *(undefined8 *)(pZVar5 + 0xd0);
            uVar6 = FUN_03e1988c(uVar13,*(undefined8 *)(pZVar5 + 0xd8));
            if (uVar6 <= uVar14) break;
            puVar7 = (undefined4 *)FUN_03e19898(uVar13,uVar14);
            cVar2 = Zombie::HasCondition(extraout_x0,*puVar7);
            if (cVar2 != '\0') {
              uVar12 = (uint)uVar14;
            }
            uVar14 = uVar14 + 1;
          }
          iVar3 = uVar12 + 1;
          if ((ulong)(long)iVar3 < uVar6) {
            if (iVar3 != 0) {
              uVar14 = 0;
              while( true ) {
                puVar7 = (undefined4 *)FUN_03e19898(uVar13,uVar14);
                Zombie::EndCondition(extraout_x0,*puVar7);
                uVar13 = *(undefined8 *)(pZVar5 + 0xd0);
                if (uVar14 == uVar12) break;
                uVar14 = uVar14 + 1;
              }
            }
            puVar7 = (undefined4 *)FUN_03e19898(uVar13,(long)iVar3);
            pZVar17._0_4_ = (Zombie *)PVZ_EOT();
            Zombie::ApplyCondition(pZVar17._0_4_,0,extraout_x0,*puVar7,1);
            pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            GetPAMByName((string *)(pZVar5 + 0x100));
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
            Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
            Effect_PopAnim::SetCentered(pEVar8,true);
            pSVar10 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
            iVar3 = FUN_03e19ab4(0xfffffff1);
            fVar15 = (float)iVar3;
            uVar16 = 0;
            EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar15,0.0);
            local_18 = Sexy::SexyVector3::operator+(pSVar10,(SexyVector3 *)aVStack_28);
            local_14 = fVar15;
            local_10 = uVar16;
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar8,(SexyVector3 *)&local_18,-1);
            iVar3 = (**(code **)(*(long *)extraout_x0 + 0x170))(extraout_x0);
            FUN_03e19868(pEVar8 + 0x1c,iVar3 + 1);
            std::string::string((string *)&local_18,"animation");
            Effect_PopAnim::PlaySingleAnimation(pEVar8,(string *)&local_18,2);
            std::string::~string((string *)&local_18);
            nop();
            psVar11 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(psVar11,pZVar5 + 0xe8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          }
        }
      }
      GridItem::TakeDamage((GridItem *)this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePotion::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemZombiePotion::GatherPlantingRestrictions
          (GridItemZombiePotion *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x2a;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePotion::onGridItemInitialize() */

void __thiscall GridItemZombiePotion::onGridItemInitialize(GridItemZombiePotion *this)

{
  undefined4 uVar1;
  int iVar2;
  ZombiePotionProps *pZVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  RtObject *this_00;
  PoolDaylightStage *pPVar7;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  ResourceInfo *pRVar8;
  long *plVar9;
  StandaloneEffect *this_03;
  code *pcVar10;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  this[0x1a5] = (GridItemZombiePotion)0x0;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pZVar3 = GridItem::GetProps<ZombiePotionProps>();
  FUN_03e19870(*(undefined4 *)(pZVar3 + 0x10),this + 300);
  uVar1 = operator|(2,1);
  RealObject::JoinTeam((RealObject *)this,uVar1);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  lVar5 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),lVar4,2);
  lVar6 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar6 == 0) {
    pPVar7 = (PoolDaylightStage *)0x0;
  }
  else {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar7 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
  }
  if (lVar5 != 0) {
    this_01 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
    std::string::string((string *)&local_18,"water_effect");
    this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    std::string::string(asStack_20,"POPANIM_BACKGROUNDS_WATER_ZOMBIE_RIPPLE");
    GetPAMByName(asStack_20);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    AttachedEffect::InitializeWithAnimation(this_02,(PopAnim *)pRVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_18,"ripple");
    AttachedEffect::PlayAnimLooped(this_02,(string *)&local_18,2);
    std::string::~string((string *)&local_18);
    nop();
    pcVar10 = *(code **)(*(long *)this_02 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,-5.0,-10.0,0.0);
    (*pcVar10)(this_02,this,(string *)&local_18,1);
    plVar9 = (long *)AttachedEffect::GetEffect(this_02);
    (**(code **)(*plVar9 + 0x80))(0x3f333333);
    if ((pPVar7 != (PoolDaylightStage *)0x0) &&
       (iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar4 + 4)), iVar2 == 3)) {
      Sexy::Insets::Insets((Insets *)&local_18);
      local_18 = 0;
      local_14 = 0;
      local_10 = FUN_03e19ab4(0x304);
      local_c = FUN_03e19ab4(0x1cc);
      this_03 = (StandaloneEffect *)AttachedEffect::GetEffect(this_02);
      StandaloneEffect::SetClipRect(this_03,(TRect *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePotion::onUpdate() */

void __thiscall GridItemZombiePotion::onUpdate(GridItemZombiePotion *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtMixedPtrBase aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((this[0x1a5] == (GridItemZombiePotion)0x0) &&
     (cVar1 = FUN_03e19880(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa03)), cVar1 != '\0')) {
    GridItemAnimation::GetAnimRig();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    if (cVar1 != '\0') {
      this[0x1a5] = (GridItemZombiePotion)0x1;
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      std::string::string(asStack_58,"animation");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onSpawnAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<GridItemZombiePotion,void(GridItemZombiePotion::*)(std::string_const&)>
                (aDStack_38,aRStack_50);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

