// Class: ComponentPropagatedBurst


/* ComponentPropagatedBurst::SetProps(ComponentPropagatedBurstProps const&) */

void __thiscall
ComponentPropagatedBurst::SetProps
          (ComponentPropagatedBurst *this,ComponentPropagatedBurstProps *param_1)

{
  ComponentPropagatedBurstProps::operator=((ComponentPropagatedBurstProps *)(this + 0x30),param_1);
  return;
}


/* ComponentPropagatedBurst::setEndTime(float) */

void __thiscall ComponentPropagatedBurst::setEndTime(ComponentPropagatedBurst *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if ((*(float *)(this + 100) != fVar1) && (param_1 <= *(float *)(this + 100))) {
    return;
  }
  *(float *)(this + 100) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurst::queueEffect(float, int, Sexy::SexyVector3) */

void ComponentPropagatedBurst::queueEffect
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,
               ComponentPropagatedBurst *param_5,undefined4 param_6)

{
  Effect_PopAnim *this;
  PopAnim *pPVar1;
  RtClass *pRVar2;
  EffectAnimRig_JackOLanternFireSquare *this_00;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  long extraout_x0;
  EffectAnimRig_JalapenoFireSquare *this_02;
  float fVar3;
  float fVar4;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  GetPAMByName((string *)(param_5 + 0x50));
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pRVar2 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,pPVar1,pRVar2);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_18 = Board::calculateRoofOffsetZ(local_20);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_20,-1);
  FUN_03b928e4(this + 0x1c,param_6);
  UIWidget::GetAtlasImage((UIWidget *)this);
  nop();
  EffectAnimRig_JackOLanternFireSquare::SetFireDelay(this_00,param_1);
  UIWidget::GetAtlasImage((UIWidget *)this);
  nop();
  EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,this);
  if (param_5[0x59] == (ComponentPropagatedBurst)0x0) {
    setEndTime(param_5,param_1 + *(float *)(param_5 + 0x60));
  }
  else {
    UIWidget::GetAtlasImage((UIWidget *)this);
    nop();
    FUN_03b928ec(extraout_x0 + 0x220,extraout_x0 + 0x224,param_5[0x59],
                 *(undefined4 *)(param_5 + 0x5c));
    fVar3 = *(float *)(param_5 + 0x60);
    UIWidget::GetAtlasImage((UIWidget *)this);
    nop();
    fVar4 = (float)EffectAnimRig_JalapenoFireSquare::CalculateActiveTime(this_02);
    setEndTime(param_5,param_1 + fVar3 + fVar4);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurst::doDamage(BoardEntity*, DamageInfo&) */

void __thiscall
ComponentPropagatedBurst::doDamage
          (ComponentPropagatedBurst *this,BoardEntity *param_1,DamageInfo *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Zombie *this_00;
  GridItem *pGVar5;
  Dinosaur *pDVar6;
  RtObject *this_01;
  Plant *pPVar7;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar7 = (Plant *)0x0;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar7 = Sexy::RtObject::Cast<Plant>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (param_1 == (BoardEntity *)0x0) goto LAB_03b92ee8;
LAB_03b92dcc:
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (((this_00 != (Zombie *)0x0) &&
        (cVar2 = Zombie::MatchesAny(this_00,0x400,pPVar7), cVar2 == '\0')) ||
       ((pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar5 != (GridItem *)0x0 &&
        (cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))(), cVar2 == '\0')))) {
      cVar2 = '\x01';
      goto LAB_03b92df4;
    }
    if (*(int *)(this + 0x48) != 1) {
LAB_03b92ef4:
      cVar2 = '\x01';
      (**(code **)(*(long *)param_1 + 0x110))(param_1,param_2);
      goto LAB_03b92df4;
    }
    pDVar6 = Sexy::RtObject::Cast<Dinosaur>((RtObject *)param_1);
    if (pDVar6 != (Dinosaur *)0x0) {
      cVar2 = (**(code **)(*(long *)pDVar6 + 0x318))();
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pDVar6 + 800))(pDVar6);
        goto LAB_03b92df4;
      }
    }
    if (this_00 != (Zombie *)0x0) {
      uVar3 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar3);
      if (((((cVar2 == '\0') && (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1))
           && (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar1)) &&
          ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))) &&
         (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')) {
        cVar2 = Zombie::IsBerserk(this_00);
        if (cVar2 == '\0') {
          iVar4 = Zombie::GetSizeType(this_00);
          cVar2 = '\0';
          if (iVar4 == 0) {
            cVar2 = '\x01';
            Zombie::SetFacing(this_00,1);
          }
          goto LAB_03b92df4;
        }
      }
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (param_1 != (BoardEntity *)0x0) goto LAB_03b92dcc;
LAB_03b92ee8:
    if (*(int *)(this + 0x48) != 1) goto LAB_03b92ef4;
  }
  cVar2 = '\0';
LAB_03b92df4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ComponentPropagatedBurst::ComponentPropagatedBurst() */

void __thiscall ComponentPropagatedBurst::ComponentPropagatedBurst(ComponentPropagatedBurst *this)

{
  undefined4 uVar1;
  
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_06736260;
  ComponentPropagatedBurstProps::ComponentPropagatedBurstProps
            ((ComponentPropagatedBurstProps *)(this + 0x30));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x60) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* ComponentPropagatedBurst::StaticNew() */

ComponentPropagatedBurst * ComponentPropagatedBurst::StaticNew(void)

{
  ComponentPropagatedBurst *this;
  
  this = ::operator_new(0x88);
  ComponentPropagatedBurst(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurst::explode() */

void __thiscall ComponentPropagatedBurst::explode(ComponentPropagatedBurst *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  RtObject *this_00;
  Plant *pPVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30;
  int local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pPVar4 = Sexy::RtObject::Cast<Plant>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  fVar8 = *(float *)(this + 0x44);
  uVar2 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(pPVar4 + 0x110),1);
  if (((DAT_06acd100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06acd100), iVar3 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06acd098,-98.0,-120.0,0.0);
    __cxa_guard_release(&DAT_06acd100);
  }
  GetPAMByName((string *)(this + 0x50));
  iVar3 = *(int *)(pPVar4 + 0x114);
  if (-1 < iVar3) {
    fVar7 = 0.0;
    do {
      iVar1 = iVar3 + -1;
      Sexy::Point::Point((Point *)aRStack_18,iVar3,*(int *)(pPVar4 + 0x110));
      BoardTransforms::GridToBoardSpace((Point *)aRStack_18);
      uVar6 = 0;
      fVar5 = (float)local_2c;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,fVar5,0.0);
      local_28 = Sexy::SexyVector3::operator+
                           ((SexyVector3 *)&DAT_06acd098,(SexyVector3 *)aRStack_18);
      local_24 = fVar5;
      local_20 = uVar6;
      queueEffect(fVar7,local_28,fVar5,uVar6,this,uVar2);
      fVar7 = fVar7 + fVar8;
      iVar3 = iVar1;
    } while (iVar1 != -1);
    iVar3 = *(int *)(pPVar4 + 0x114);
  }
  iVar3 = iVar3 + 1;
  fVar7 = fVar8;
  if (iVar3 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
    do {
      iVar1 = iVar3 + 1;
      Sexy::Point::Point((Point *)aRStack_18,iVar3,*(int *)(pPVar4 + 0x110));
      BoardTransforms::GridToBoardSpace((Point *)aRStack_18);
      uVar6 = 0;
      fVar5 = (float)local_2c;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,fVar5,0.0);
      local_28 = Sexy::SexyVector3::operator+
                           ((SexyVector3 *)&DAT_06acd098,(SexyVector3 *)aRStack_18);
      local_24 = fVar5;
      local_20 = uVar6;
      queueEffect(fVar7,local_28,fVar5,uVar6,this,uVar2);
      iVar3 = iVar1;
      fVar7 = fVar7 + fVar8;
    } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
  }
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ComponentPropagatedBurst::onBegin() */

void __thiscall ComponentPropagatedBurst::onBegin(ComponentPropagatedBurst *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x60) = uVar1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 100) = uVar1;
  explode(this);
  return;
}


/* ComponentPropagatedBurst::~ComponentPropagatedBurst() */

void __thiscall ComponentPropagatedBurst::~ComponentPropagatedBurst(ComponentPropagatedBurst *this)

{
  *(undefined ***)this = &PTR_GetClass_06736260;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x70));
  ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps
            ((ComponentPropagatedBurstProps *)(this + 0x30));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentPropagatedBurst::~ComponentPropagatedBurst() */

void __thiscall ComponentPropagatedBurst::~ComponentPropagatedBurst(ComponentPropagatedBurst *this)

{
  ~ComponentPropagatedBurst(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurst::updateDamage(bool) */

void __thiscall ComponentPropagatedBurst::updateDamage(ComponentPropagatedBurst *this,bool param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  RtObject *this_00;
  Plant *pPVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  int local_98;
  int local_94;
  int local_90 [2];
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  fVar18 = *(float *)(this + 0x44);
  local_98 = -1;
  local_94 = BoardConstants::NUMBER_OF_COLUMNS();
  local_94 = local_94 + 1;
  fVar17 = (float)PVZ_T();
  iVar15 = (int)((fVar17 - *(float *)(this + 0x60)) / fVar18);
  if ((!param_1) || (*(int *)(this + 0x68) < iVar15)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    iVar13 = *(int *)(this + 0x68);
    if (iVar13 < iVar15) {
      uVar6 = operator|(2,4);
      uVar4 = operator|(uVar6,8);
      do {
        iVar1 = *(int *)(pPVar5 + 0x114);
        iVar13 = iVar13 + 1;
        *(int *)(this + 0x68) = iVar13;
        local_90[0] = iVar1 - iVar13;
        piVar7 = eastl::max_alt<int>(local_90,&local_98);
        iVar2 = *piVar7;
        local_88[0] = iVar13 + iVar1;
        piVar7 = eastl::min_alt<int>(local_88,&local_94);
        Sexy::Insets::Insets((Insets *)aRStack_68,iVar2,*(int *)(pPVar5 + 0x110),*piVar7 - iVar2,1);
        EntityFinder::GetEntitiesInGridSquares
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
                   aRStack_68);
        iVar13 = *(int *)(this + 0x68);
      } while (iVar13 < iVar15);
    }
    uVar16 = 0;
    Plant::GetProps();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    FUN_03b929dc(*(undefined8 *)(lVar8 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Plant::calcDamageInfoFromPlantAction((PlantAction *)pPVar5);
    SetFlag<DamageTypeFlags>(auStack_58,0x200,1);
    uVar6 = local_80;
    lVar8 = FUN_03b9291c(local_80,local_78);
    if (lVar8 != 0) {
      do {
        uVar12 = 0;
        do {
          uVar14 = *(undefined8 *)(this + 0x70);
          uVar10 = FUN_03b92908(uVar14,*(undefined8 *)(this + 0x78));
          if (uVar10 <= uVar12) {
            puVar11 = (undefined8 *)FUN_03b92928(uVar6,uVar16);
            cVar3 = doDamage(this,(BoardEntity *)*puVar11,(DamageInfo *)aRStack_68);
            uVar6 = local_80;
            if (cVar3 != '\0') {
              FUN_03b92928(local_80,uVar16);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)local_90);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x70),(RtWeakPtr *)local_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
              uVar6 = local_80;
            }
            break;
          }
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03b92914(uVar14,uVar12);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          uVar6 = local_80;
          plVar9 = (long *)FUN_03b92928(local_80,uVar16);
          uVar12 = uVar12 + 1;
        } while (lVar8 != *plVar9);
        uVar16 = uVar16 + 1;
        uVar12 = FUN_03b9291c(uVar6,local_78);
      } while (uVar16 < uVar12);
    }
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurst::onUpdate() */

void __thiscall ComponentPropagatedBurst::onUpdate(ComponentPropagatedBurst *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  RtObject *pRVar7;
  Plant *pPVar8;
  ulong uVar9;
  RtWeakPtrBase *pRVar10;
  Zombie *this_00;
  float *pfVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  updateDamage(this,(bool)((byte)this[0x58] ^ 1));
  fVar14 = (float)PVZ_T();
  fVar15 = *(float *)(this + 100);
  if (*(int *)(this + 0x48) == 1) {
    uVar12 = 0;
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    while( true ) {
      uVar13 = *(undefined8 *)(this + 0x70);
      uVar9 = FUN_03b92908(uVar13,*(undefined8 *)(this + 0x78));
      if (uVar9 <= uVar12) break;
      pRVar10 = (RtWeakPtrBase *)FUN_03b92914(uVar13,uVar12);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      if ((cVar2 != '\0') &&
         (bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10), bVar3)) {
        pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        this_00 = Sexy::RtObject::Cast<Zombie>(pRVar7);
        if ((this_00 != (Zombie *)0x0) &&
           ((cVar2 = Zombie::MatchesAny(this_00,0x400,pPVar8), cVar2 != '\0' ||
            (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')))) {
          uVar5 = operator|(1,8);
          cVar2 = Zombie::MatchesAny(this_00,uVar5);
          if (cVar2 == '\0') {
            if (fVar15 < fVar14) {
              Zombie::SetFacing(this_00);
              (**(code **)(*(long *)this_00 + 0x260))(this_00);
            }
            else {
              iVar6 = Zombie::GetFacing(this_00);
              if ((iVar6 == 1) &&
                 (pfVar11 = (float *)std::
                                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::_M_leftmost((
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)this_00),
                 (float)(iVar1 * iVar4 + 200) <= *pfVar11)) {
                Zombie::SetFacing(this_00,0);
                (**(code **)(*(long *)this_00 + 600))(this_00);
              }
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (fVar15 < fVar14) {
    Plant::KillPlant(pPVar8,1,0,0x8000000000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurst::StaticClassInit() */

void ComponentPropagatedBurst::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"row",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PropagationShape");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ComponentPropagatedBurst");
    (*pcVar3)(plVar2,avStack_20,FUN_03b94020,0x88,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentPropagatedBurst::StaticGetClass() */

long * ComponentPropagatedBurst::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentPropagatedBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentPropagatedBurst::GetClass() const */

long * ComponentPropagatedBurst::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentPropagatedBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

