// Class: PlantTangleKelpTentacle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::StaticClassInit() */

void PlantTangleKelpTentacle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTangleKelpTentacle");
    (*pcVar2)(plVar1,asStack_10,FUN_041e926c,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTangleKelpTentacle::StaticGetClass() */

long * PlantTangleKelpTentacle::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTangleKelpTentacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTangleKelpTentacle::GetClass() const */

long * PlantTangleKelpTentacle::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTangleKelpTentacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::GetAttackName(int) */

void PlantTangleKelpTentacle::GetAttackName(int param_1)

{
  long lVar1;
  uint in_w1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((int)in_w1 < 2) {
    std::string::string(in_x8,"attack");
    nop();
  }
  else {
    if (3 < (int)in_w1) {
      in_w1 = 3;
    }
    Sexy::StrFormat("attackLevel%d",(ulong)in_w1);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTangleKelpTentacle::CalcZombieRepulseRect(Sexy::RtWeakPtr<Zombie> const&) */

void PlantTangleKelpTentacle::CalcZombieRepulseRect(RtWeakPtr *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar5;
  SharkMinion *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *in_x1;
  Insets *in_x8;
  float fVar6;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x1);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this);
  fVar6 = *pfVar5;
  this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x1);
  iVar1 = SharkMinion::getRow(this_00);
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8,(int)(fVar6 - (float)(iVar2 / 2)),iVar1,iVar3,iVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::onPostLoad() */

void __thiscall PlantTangleKelpTentacle::onPostLoad(PlantTangleKelpTentacle *this)

{
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PlantTangleKelpTentacle,void(PlantTangleKelpTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::SpawnAtPosition(Sexy::SexyVector3 const&) */

void __thiscall
PlantTangleKelpTentacle::SpawnAtPosition(PlantTangleKelpTentacle *this,SexyVector3 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ResourceInfo *pRVar3;
  TimeChallengeEndLevelUI *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  fVar6 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 4);
  fVar4 = *(float *)param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_PLANT_TANGLEKELP");
  GetPAMByName(asStack_58);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,fVar4 - 10.0,fVar5 - fVar6,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_50,-1);
  iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_1 + 4));
  if (1 < *(int *)(this + 0x124)) {
    iVar1 = iVar1 + 1;
  }
  uVar2 = Board::MakeRenderOrder(0x64961,iVar1,0);
  FUN_041e63dc(this + 0x1c,uVar2);
  GetAttackName((int)this);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,aRStack_50,2);
  std::string::~string((string *)aRStack_50);
  this_00 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PlantTangleKelpTentacle,void(PlantTangleKelpTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTangleKelpTentacle::SlapZombie(Sexy::RtWeakPtr<Zombie>, float) */

void __thiscall
PlantTangleKelpTentacle::SlapZombie
          (undefined4 param_1,PlantTangleKelpTentacle *this,RtMixedPtrBase *param_3)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 == '\0') {
    return;
  }
  *(undefined4 *)(this + 0x124) = 1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)param_3);
  *(undefined4 *)(this + 0x120) = param_1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  SpawnAtPosition(this,pSVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::SwallowZombie(Sexy::RtWeakPtr<Zombie>, int, float) */

void __thiscall
PlantTangleKelpTentacle::SwallowZombie
          (undefined4 param_1,PlantTangleKelpTentacle *this,RtMixedPtrBase *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  RtObject *pRVar4;
  undefined8 uVar5;
  RealObject *this_01;
  ZombieBeachSurfer *this_02;
  ZombieHydraHeadAnimRig *this_03;
  Zombie *pZVar6;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 != '\0') {
    *(int *)(this + 0x124) = param_4;
    *(undefined4 *)(this + 0x120) = param_1;
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),(RtWeakPtr *)param_3);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_18 = *puVar3;
    local_10 = 0;
    SpawnAtPosition(this,(SexyVector3 *)&local_18);
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    bVar2 = Sexy::RtObject::IsA<ZombieBeachSurfer>(pRVar4);
    if (bVar2) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      this_02 = Sexy::RtObject::Cast<ZombieBeachSurfer>(pRVar4);
      cVar1 = ZombieBeachSurfer::IsSurfing(this_02);
      if (cVar1 != '\0') {
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        this_03 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar6);
        ZombieAnimRig_BeachSurfer::PlaySurfWithoutWave((ZombieAnimRig_BeachSurfer *)this_03);
      }
    }
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    pZVar6 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6,0,uVar5,0x18,1);
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    Zombie::SetIsControlled(pZVar6,true);
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    Zombie::SetIgnoresAllDamage(pZVar6,true);
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    Zombie::SetIgnoresCollisions(pZVar6,true);
    if (1 < param_4) {
      this_01 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      RealObject::SetDisableSnapToGround(this_01,true);
    }
    MessageRouter::Broadcast<std::string_const&,char_const*>
              ((MessageRouter *)gMessageRouter,Message::PlantKillZombie,"tanglekelp");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTangleKelpTentacle::PlantTangleKelpTentacle() */

void __thiscall PlantTangleKelpTentacle::PlantTangleKelpTentacle(PlantTangleKelpTentacle *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06805030;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  *(undefined4 *)(this + 0x124) = 1;
  *(undefined4 *)(this + 0x120) = 0;
  TransfromKeyFrameSystem::TransfromKeyFrameSystem((TransfromKeyFrameSystem *)(this + 0x128));
  ZombieRepulseSystem::ZombieRepulseSystem((ZombieRepulseSystem *)(this + 0x148));
  return;
}


/* PlantTangleKelpTentacle::StaticNew() */

PlantTangleKelpTentacle * PlantTangleKelpTentacle::StaticNew(void)

{
  PlantTangleKelpTentacle *this;
  
  this = ::operator_new(0x168);
  PlantTangleKelpTentacle(this);
  return this;
}


/* PlantTangleKelpTentacle::~PlantTangleKelpTentacle() */

void __thiscall PlantTangleKelpTentacle::~PlantTangleKelpTentacle(PlantTangleKelpTentacle *this)

{
  *(undefined ***)this = &PTR_GetClass_06805030;
  ZombieRepulseSystem::~ZombieRepulseSystem((ZombieRepulseSystem *)(this + 0x148));
  TransfromKeyFrameSystem::~TransfromKeyFrameSystem((TransfromKeyFrameSystem *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* PlantTangleKelpTentacle::~PlantTangleKelpTentacle() */

void __thiscall PlantTangleKelpTentacle::~PlantTangleKelpTentacle(PlantTangleKelpTentacle *this)

{
  ~PlantTangleKelpTentacle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::CanbeDamaged(Zombie const*) */

void __thiscall PlantTangleKelpTentacle::CanbeDamaged(PlantTangleKelpTentacle *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  string *psVar3;
  code *pcVar4;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    cVar1 = Zombie::IsControlled(param_1);
    if ((cVar1 == '\0') && (cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 != '\0')) {
      pcVar4 = *(code **)(*(long *)param_1 + 0x3d0);
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_20,"tanglekelp");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar1 = (*pcVar4)(param_1,aRStack_10,0);
      bVar2 = 0;
      if (cVar1 != '\0') {
        bVar2 = Zombie::IsInvisible(param_1);
        bVar2 = bVar2 ^ 1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string(asStack_20);
      nop();
      goto LAB_041eaa30;
    }
  }
  bVar2 = 0;
LAB_041eaa30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::DamageAndRepulseEntityInRect(Sexy::TRect<int> const&, BoardEntity*) */

void __thiscall
PlantTangleKelpTentacle::DamageAndRepulseEntityInRect
          (PlantTangleKelpTentacle *this,TRect *param_1,BoardEntity *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  ulong uVar9;
  long *extraout_x0;
  ulong uVar10;
  code *pcVar11;
  DamageInfo *pDVar12;
  BoardEntity *local_a8 [2];
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a8[0] = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesInRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
             param_1);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_80);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_80);
  local_98 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                       (uVar5,uVar6,local_a8);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_68,(__normal_iterator *)&local_98);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,local_68[0]);
  }
  uVar5 = local_80;
  uVar10 = 0;
  lVar7 = FUN_041e6448(local_80,local_78);
  if (lVar7 != 0) {
    do {
      puVar8 = (undefined8 *)FUN_041e6454(uVar5,uVar10);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
      if (this_00 == (Zombie *)0x0) {
        nop();
        if ((extraout_x0 != (long *)0x0) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x200))(), cVar2 != '\0')) {
                    /* WARNING: Load size is inaccurate */
          pDVar12._0_4_ = *(DamageInfo **)(this + 0x120);
          pcVar11 = *(code **)(*extraout_x0 + 0x110);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar12._0_4_,local_88,local_84,(DamageInfo *)local_68,aPStack_90,0);
          (*pcVar11)(extraout_x0,(DamageInfo *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
      else {
        cVar2 = CanbeDamaged(this,this_00);
        if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
          pDVar12._0_4_ = *(DamageInfo **)(this + 0x120);
          pcVar11 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar12._0_4_,local_88,local_84,(DamageInfo *)local_68,aPStack_90,0);
          (*pcVar11)(this_00,(DamageInfo *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
          cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
          if ((((cVar2 == '\0') &&
               (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
              (iVar4 = Zombie::GetSizeType(this_00), iVar4 != 2)) &&
             (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 != '\0')) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_88);
            iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
            ZombieRepulseSystem::Add
                      ((ZombieRepulseSystem *)(this + 0x148),(RtWeakPtr *)local_68,
                       (float)(iVar4 << 1),0.5);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
          }
        }
      }
      uVar5 = local_80;
      uVar10 = uVar10 + 1;
      uVar9 = FUN_041e6448(local_80,local_78);
    } while (uVar10 < uVar9);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::BeginUpdateZombieTransform(Sexy::RtWeakPtr<Zombie> const&, int) */

void __thiscall
PlantTangleKelpTentacle::BeginUpdateZombieTransform
          (PlantTangleKelpTentacle *this,RtWeakPtr *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 local_70;
  float local_68;
  Vec3 aVStack_60 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_70 = *puVar3;
  local_68 = *(float *)(puVar3 + 1);
  fVar4 = local_68;
  if (local_68 <= 0.0) {
    fVar4 = 0.0;
  }
  if (param_2 == 2) {
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)&local_70,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 115.0,local_70._4_4_,90.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,100.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 30.0,local_70._4_4_,90.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,90.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 + 60.0,local_70._4_4_,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 + 60.0,local_70._4_4_,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 10.0,local_70._4_4_,fVar4 - 20.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,-40.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 25.0,local_70._4_4_,local_68 - 120.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,-40.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    local_20[0] = 0xd;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = param_2;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 5;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0x11;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 7;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0x2d;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
  }
  else if (2 < param_2) {
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)&local_70,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 115.0,local_70._4_4_,120.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,100.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 30.0,local_70._4_4_,110.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,80.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    fVar1 = local_70._4_4_;
    fVar5 = (float)local_70 + 60.0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3(aVStack_60,fVar5,fVar1 - (float)iVar2,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    fVar1 = local_70._4_4_;
    fVar5 = (float)local_70 + 60.0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3(aVStack_60,fVar5,fVar1 - (float)iVar2,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 70.0,local_70._4_4_,110.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,95.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 30.0,local_70._4_4_,120.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,90.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 + 60.0,local_70._4_4_,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 + 60.0,local_70._4_4_,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 70.0,local_70._4_4_,90.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,100.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70,local_70._4_4_,90.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,80.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    fVar1 = local_70._4_4_;
    fVar5 = (float)local_70 + 60.0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3(aVStack_60,fVar5,(float)iVar2 + fVar1,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    fVar1 = local_70._4_4_;
    fVar5 = (float)local_70 + 60.0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3(aVStack_60,fVar5,(float)iVar2 + fVar1,fVar4);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,0.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 + 20.0,local_70._4_4_,5.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,25.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    EATextSquish::Vec3::Vec3(aVStack_60,(float)local_70 - 25.0,local_70._4_4_,fVar4 - 120.0);
    Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,-40.0);
    std::vector<Transform2,std::allocator<Transform2>>::push_back
              ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
    local_20[0] = 0xe;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 4;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 4;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0xb;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0xd;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 1;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 5;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0xc;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0xc;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 2;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 4;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0xe;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 7;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    local_20[0] = 0x28;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
  }
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_20,(vector *)avStack_38);
  TransfromKeyFrameSystem::Add
            ((TransfromKeyFrameSystem *)(this + 0x128),param_1,avStack_50,
             (vector<unsigned_int,std::allocator<unsigned_int>> *)local_20);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_20);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38);
  std::vector<Transform2,std::allocator<Transform2>>::~vector
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelpTentacle::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void PlantTangleKelpTentacle::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  string *in_x3;
  code *pcVar4;
  DamageInfo *pDVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x110));
    if (pRVar3 == (ResourceInfo *)0x0) {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x118));
      if (pRVar3 != (ResourceInfo *)0x0) {
                    /* WARNING: Load size is inaccurate */
        pDVar5._0_4_ = *(DamageInfo **)(param_1 + 0x120);
        pcVar4 = *(code **)(*(long *)pRVar3 + 0x110);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo(pDVar5._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
        (*pcVar4)(pRVar3,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      Zombie::SetIgnoresAllDamage((Zombie *)pRVar3,false);
      pcVar4 = *(code **)(*(long *)pRVar3 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
      (*pcVar4)(pRVar3,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    goto LAB_041ec4dc;
  }
  bVar1 = std::operator==(param_4,"attackLevel2");
  if (bVar1) {
    bVar1 = std::operator==(in_x3,"grabUp");
    if (!bVar1) {
      bVar1 = std::operator==(in_x3,"damage");
      if ((bVar1) &&
         (pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x110)),
         pRVar3 != (ResourceInfo *)0x0)) {
        CalcZombieRepulseRect((RtWeakPtr *)param_1);
        DamageAndRepulseEntityInRect
                  ((PlantTangleKelpTentacle *)param_1,(TRect *)aDStack_68,(BoardEntity *)pRVar3);
      }
      goto LAB_041ec4dc;
    }
  }
  else {
    bVar1 = std::operator==(param_4,"attackLevel3");
    if (!bVar1) goto LAB_041ec4dc;
    bVar1 = std::operator==(in_x3,"grabUp");
    if (!bVar1) {
      bVar1 = std::operator==(in_x3,"damage1");
      if ((((bVar1) || (bVar1 = std::operator==(in_x3,"damage2"), bVar1)) ||
          (bVar1 = std::operator==(in_x3,"damage3"), bVar1)) &&
         (pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x110)),
         pRVar3 != (ResourceInfo *)0x0)) {
        CalcZombieRepulseRect((RtWeakPtr *)param_1);
        DamageAndRepulseEntityInRect
                  ((PlantTangleKelpTentacle *)param_1,(TRect *)aDStack_68,(BoardEntity *)pRVar3);
      }
      goto LAB_041ec4dc;
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x110));
  if (cVar2 != '\0') {
    BeginUpdateZombieTransform
              ((PlantTangleKelpTentacle *)param_1,(RtWeakPtr *)(param_1 + 0x110),
               *(int *)(param_1 + 0x124));
  }
LAB_041ec4dc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTangleKelpTentacle::onUpdate() */

void __thiscall PlantTangleKelpTentacle::onUpdate(PlantTangleKelpTentacle *this)

{
  float fVar1;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar1 = (float)PVZ_Dt();
  TransfromKeyFrameSystem::Update((TransfromKeyFrameSystem *)(this + 0x128),fVar1);
  fVar1 = (float)PVZ_Dt();
  ZombieRepulseSystem::Update((ZombieRepulseSystem *)(this + 0x148),fVar1);
  return;
}

