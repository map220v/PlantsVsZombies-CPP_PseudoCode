// Class: PlantChilibeanSubSystem


/* PlantChilibeanSubSystem::onInitialized() */

void __thiscall PlantChilibeanSubSystem::onInitialized(PlantChilibeanSubSystem *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::StaticClassInit() */

void PlantChilibeanSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieFlatulence");
    (*pcVar3)(plVar2,asStack_10,FUN_0402ad4c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantChilibeanSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0402b110,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChilibeanSubSystem::StaticGetClass() */

long * PlantChilibeanSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantChilibeanSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChilibeanSubSystem::GetClass() const */

long * PlantChilibeanSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantChilibeanSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChilibeanSubSystem::IsZombieAffectedByGas(Zombie*) */

undefined8 __thiscall
PlantChilibeanSubSystem::IsZombieAffectedByGas(PlantChilibeanSubSystem *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = std::operator==((string *)(lVar3 + 8),"west_bull");
  if ((((((!bVar1) && (bVar1 = std::operator==((string *)(lVar3 + 8),"treasureyeti"), !bVar1)) &&
        (bVar1 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar1)) &&
       ((bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1 &&
        (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)))) &&
      ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0' &&
        (cVar2 = Zombie::HasCondition(param_1,0x27), cVar2 == '\0')))))) &&
     ((cVar2 = Zombie::HasCondition(param_1,0x25), cVar2 == '\0' &&
      (cVar2 = (**(code **)(*(long *)param_1 + 0x400))(param_1), cVar2 != '\0')))) {
    uVar4 = RealObject::IsOnTeam(param_1,2);
    return uVar4;
  }
  return 0;
}


/* PlantChilibeanSubSystem::PlantChilibeanSubSystem() */

void __thiscall PlantChilibeanSubSystem::PlantChilibeanSubSystem(PlantChilibeanSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067b8f30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlantChilibeanSubSystem::StaticNew() */

PlantChilibeanSubSystem * PlantChilibeanSubSystem::StaticNew(void)

{
  PlantChilibeanSubSystem *this;
  
  this = ::operator_new(0x30);
  PlantChilibeanSubSystem(this);
  return this;
}


/* PlantChilibeanSubSystem::~PlantChilibeanSubSystem() */

void __thiscall PlantChilibeanSubSystem::~PlantChilibeanSubSystem(PlantChilibeanSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067b8f30;
  std::vector<ZombieFlatulence,std::allocator<ZombieFlatulence>>::~vector
            ((vector<ZombieFlatulence,std::allocator<ZombieFlatulence>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantChilibeanSubSystem::~PlantChilibeanSubSystem() */

void __thiscall PlantChilibeanSubSystem::~PlantChilibeanSubSystem(PlantChilibeanSubSystem *this)

{
  ~PlantChilibeanSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::SpawnGasCloudOverZombie(Zombie*, float, bool) */

void __thiscall
PlantChilibeanSubSystem::SpawnGasCloudOverZombie
          (PlantChilibeanSubSystem *this,Zombie *param_1,float param_2,bool param_3)

{
  Effect_ChilibeanGasCloud *this_00;
  ResourceInfo *pRVar1;
  char *__s;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_ChilibeanGasCloud>(*(Board **)(gLawnApp + 0x9f0));
  if (param_3) {
    __s = "POPANIM_EFFECTS_CHILIBEAN_AVATAR_STUN_CLOUD";
  }
  else {
    __s = "POPANIM_EFFECTS_CHILIBEAN_STUN_CLOUD";
  }
  std::string::string(asStack_18,__s);
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Effect_ChilibeanGasCloud::StartCloud(this_00,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::StartFlatulenceEffect(Zombie*, float, bool) */

void __thiscall
PlantChilibeanSubSystem::StartFlatulenceEffect
          (PlantChilibeanSubSystem *this,Zombie *param_1,float param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  PopAnimRig *this_01;
  ulong uVar6;
  long *plVar7;
  Zombie *extraout_x0;
  char *__s;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Zombie::GetFacing(param_1);
  if (iVar2 == 0) {
    fVar12 = -78.0;
  }
  else {
    fVar12 = 78.0;
  }
  fVar11 = *(float *)(param_1 + 0x1c);
  fVar10 = (float)FUN_0402a588(*(undefined4 *)(param_1 + 0x18),fVar11,
                               *(undefined4 *)(param_1 + 0x20));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_3) {
    __s = "POPANIM_EFFECTS_CHILIBEAN_AVATAR_GAS_ATTACK";
  }
  else {
    __s = "POPANIM_EFFECTS_CHILIBEAN_GAS_ATTACK";
  }
  std::string::string(asStack_30,__s);
  GetPAMByName(asStack_30);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string(asStack_30);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,fVar12 + fVar10,fVar11 - 125.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_20,-1);
  iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_0402a4c4(this_00 + 0x1c,iVar2 + 1);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  iVar2 = Zombie::GetFacing(param_1);
  PopAnimRig::SetMirrorX(this_01,iVar2 == 1);
  std::string::string((string *)&local_20,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_20,0);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar2 = Zombie::GetFacing(param_1);
  if (iVar2 == 0) {
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  }
  else {
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar3 = 0;
  }
  Sexy::Insets::Insets((Insets *)asStack_30,iVar3,iVar4,iVar2,1);
  uVar8 = 0;
  iVar2 = 0;
  EntityFinder::GetEntitiesInGridSquares((RtWeakPtr *)&local_20,2,asStack_30);
  uVar9 = local_20;
  uVar6 = FUN_0402a50c(local_20,local_18);
  iVar3 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = iVar3;
      plVar7 = (long *)FUN_0402a518(uVar9,uVar8);
      if (param_1 != (Zombie *)*plVar7) {
        nop();
        cVar1 = IsZombieAffectedByGas(this,extraout_x0);
        if (cVar1 != '\0') {
          iVar2 = iVar2 + 1;
          Zombie::ApplyCondition((Zombie *)param_2,0,extraout_x0,0x18,1);
          SpawnGasCloudOverZombie(this,extraout_x0,param_2,param_3);
        }
        uVar9 = local_20;
        uVar6 = FUN_0402a50c(local_20,local_18);
      }
      uVar8 = uVar8 + 1;
      iVar3 = iVar2;
    } while (uVar8 < uVar6);
  }
  if (9 < iVar2) {
    std::string::string(asStack_30,"magical_fruit_ch");
    Achievement::Queue(asStack_30,100.0);
    std::string::~string(asStack_30);
    nop();
    Achievement::ShowAll();
  }
  std::string::string(asStack_30,"Play_ChiliBean_Fart");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_30,0.0);
  std::string::~string(asStack_30);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChilibeanSubSystem::ApplyGasEffectToZombie(Zombie*, float, bool) */

void __thiscall
PlantChilibeanSubSystem::ApplyGasEffectToZombie
          (PlantChilibeanSubSystem *this,Zombie *param_1,float param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = IsZombieAffectedByGas(this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::ApplyCondition((Zombie *)param_2,0,param_1,0x18,1);
  SpawnGasCloudOverZombie(this,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::ApplyGasEffectToArea(Sexy::TRect<int> const&, float, std::vector<int,
   std::allocator<int> > const&, bool) */

void __thiscall
PlantChilibeanSubSystem::ApplyGasEffectToArea
          (PlantChilibeanSubSystem *this,TRect *param_1,float param_2,vector *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  SharkMinion *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,param_1,0xffffffff,0xffffffff);
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
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)param_3);
    if (cVar2 == '\0') {
      uVar3 = FUN_0402ab08(*(undefined8 *)param_3);
      uVar4 = FUN_0402ab58(*(undefined8 *)(param_3 + 8));
      local_44 = SharkMinion::getRow(this_00);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                           (uVar3,uVar4,&local_44);
      local_28 = FUN_0402ab58(*(undefined8 *)(param_3 + 8));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar1) goto LAB_0402be30;
    }
    else {
LAB_0402be30:
      ApplyGasEffectToZombie(this,(Zombie *)this_00,param_2,param_4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::Update() */

void __thiscall PlantChilibeanSubSystem::Update(PlantChilibeanSubSystem *this)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  RtWeakPtr *this_01;
  ulong uVar5;
  ResourceInfo *pRVar6;
  PopAnimRig *pPVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  ResourceInfo *local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  ResourceInfo *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0x10);
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0402a4dc(uVar9,*(undefined8 *)(this + 0x18));
  uVar5 = 0;
  if (lVar4 != 0) {
    do {
      this_01 = (RtWeakPtr *)FUN_0402a504(uVar9,uVar12);
      this_00 = (RtMixedPtrBase *)(this_01 + 8);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar3 == '\0') {
LAB_0402c288:
        *(undefined4 *)(this_01 + 0x18) = 2;
      }
      else {
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar3 = (**(code **)(*plVar8 + 0x328))();
        if (cVar3 != '\0') goto LAB_0402c288;
        fVar14 = (float)PVZ_T();
        fVar14 = fVar14 - *(float *)(this_01 + 0x10);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
        if (cVar3 == '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          iVar1 = *(int *)(this_01 + 0x18);
          if (iVar1 != 0) goto LAB_0402c458;
LAB_0402c4f0:
          Sexy::Color::Color((Color *)&local_98);
          if (this_01[0x1c] == (RtWeakPtr)0x0) {
            Sexy::Insets::Insets((Insets *)&local_68,0x91,0xff,0x82,0xff);
            uStack_90 = CONCAT44(uStack_5c,local_60);
          }
          else {
            Sexy::Insets::Insets((Insets *)&local_68,0xcb,0x87,0xce,0xff);
            uStack_90 = CONCAT44(uStack_5c,local_60);
          }
          local_98 = local_68;
          Sexy::Color::Color((Color *)local_78,1);
          Sexy::Insets::Insets((Insets *)&local_68,(Insets *)&local_98);
          Sexy::ColorLerp((Sexy *)local_88,fVar14 * 0.5,(Color *)local_78,
                          (RtWeakPtr<Sexy::SoundResource> *)&local_68);
          pPVar7 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)pRVar6);
          PopAnimRig::SetPAMColor(pPVar7,(Color *)local_88);
          if (2.0 < fVar14) {
            if ((pRVar6 != (ResourceInfo *)0x0) &&
               (cVar3 = (**(code **)(*(long *)pRVar6 + 0x328))(pRVar6), cVar3 == '\0')) {
              StartFlatulenceEffect
                        (this,(Zombie *)pRVar6,*(float *)(this_01 + 0x14),(bool)this_01[0x1c]);
              (**(code **)(*(long *)pRVar6 + 600))(pRVar6);
            }
            *(undefined4 *)(this_01 + 0x18) = 1;
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)this_00);
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          iVar1 = *(int *)(this_01 + 0x18);
          if (iVar1 == 0) goto LAB_0402c4f0;
LAB_0402c458:
          if ((iVar1 == 1) && (2.5 < fVar14)) {
            if ((pRVar6 == (ResourceInfo *)0x0) ||
               (cVar3 = (**(code **)(*(long *)pRVar6 + 0x328))(pRVar6), cVar3 != '\0'))
            goto LAB_0402c288;
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_60 = *(undefined4 *)(this + 0x28);
            local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
            (**(code **)(*(long *)pRVar6 + 0x110))
                      (pRVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            *(undefined4 *)(this_01 + 0x18) = 2;
          }
        }
      }
      uVar12 = uVar12 + 1;
      uVar9 = *(undefined8 *)(this + 0x10);
      uVar5 = FUN_0402a4dc(uVar9,*(undefined8 *)(this + 0x18));
    } while (uVar12 < uVar5);
  }
  uVar2 = (int)uVar5 - 1;
  if ((int)uVar5 != 0) {
    lVar10 = (long)(int)uVar2 + -1;
    lVar4 = lVar10;
    lVar13 = (long)(int)uVar2;
    while( true ) {
      lVar11 = lVar4;
      lVar4 = FUN_0402a504(uVar9,lVar13);
      if (*(int *)(lVar4 + 0x18) == 2) {
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 8));
        if (cVar3 == '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)(lVar4 + 8));
        }
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        if ((pRVar6 != (ResourceInfo *)0x0) &&
           (cVar3 = (**(code **)(*(long *)pRVar6 + 0x328))(pRVar6), cVar3 == '\0')) {
          pPVar7 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)pRVar6);
          Sexy::Color::Color((Color *)&local_68,1);
          PopAnimRig::SetPAMColor(pPVar7,(Color *)&local_68);
          (**(code **)(*(long *)pRVar6 + 0x260))(pRVar6);
        }
        local_88[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 0x10));
        local_78[0] = __gnu_cxx::
                      __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                      ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                   *)local_88,lVar13);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,(__normal_iterator *)local_78);
        std::vector<ZombieFlatulence,std::allocator<ZombieFlatulence>>::erase
                  ((vector<ZombieFlatulence,std::allocator<ZombieFlatulence>> *)(this + 0x10),
                   local_68);
      }
      if (lVar11 == lVar10 - (ulong)uVar2) break;
      uVar9 = *(undefined8 *)(this + 0x10);
      lVar4 = lVar11 + -1;
      lVar13 = lVar11;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::RemoveZombieFlatulence(Zombie*) */

void __thiscall
PlantChilibeanSubSystem::RemoveZombieFlatulence(PlantChilibeanSubSystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  PopAnimRig *this_01;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar2) {
LAB_0402c690:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar3 + 8),(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (cVar1 != '\0') {
      this_01 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
      Sexy::Color::Color((Color *)local_18,1);
      PopAnimRig::SetPAMColor(this_01,(Color *)local_18);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_18,(__normal_iterator *)&local_20);
      std::vector<ZombieFlatulence,std::allocator<ZombieFlatulence>>::erase
                ((vector<ZombieFlatulence,std::allocator<ZombieFlatulence>> *)this_00,local_18[0]);
      goto LAB_0402c690;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibeanSubSystem::CauseZombieFlatulence(Plant*, Zombie*, float, float) */

void __thiscall
PlantChilibeanSubSystem::CauseZombieFlatulence
          (PlantChilibeanSubSystem *this,Plant *param_1,Zombie *param_2,float param_3,float param_4)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  ZombieFlatulence aZStack_28 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_20 [8];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x28) = param_4;
  ZombieFlatulence::ZombieFlatulence(aZStack_28);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_28,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_20,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  local_18 = PVZ_T();
  local_10 = 0;
  local_14 = param_3;
  iVar1 = FUN_0402a4cc(*(undefined4 *)(param_1 + 0x50));
  local_c = 1 < iVar1;
  Zombie::ApplyCondition((Zombie *)0x40000000,0,param_2,0x18,1);
  std::vector<ZombieFlatulence,std::allocator<ZombieFlatulence>>::push_back
            ((vector<ZombieFlatulence,std::allocator<ZombieFlatulence>> *)(this + 0x10),aZStack_28);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aZStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

