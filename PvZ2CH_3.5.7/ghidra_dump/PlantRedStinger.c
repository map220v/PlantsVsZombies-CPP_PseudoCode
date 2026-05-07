// Class: PlantRedStinger


/* PlantRedStinger::IsDelayDestroy() */

undefined8 PlantRedStinger::IsDelayDestroy(void)

{
  int iVar1;
  wchar16 *in_x0;
  undefined8 uVar2;
  wchar16 *in_x1;
  wchar16 *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  if ((*(int *)(in_x0 + 0x14) == 2) &&
     (iVar1 = FUN_04113054(*(undefined4 *)(*(long *)(in_x0 + 8) + 0x50)), in_x1 = extraout_x1,
     1 < iVar1)) {
    return 1;
  }
  uVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak(in_x0,in_x1,in_x2,in_x3,in_x4)
  ;
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRedStinger::StaticClassInit() */

void PlantRedStinger::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRedStinger");
    (*pcVar2)(plVar1,asStack_10,FUN_041144b4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRedStinger::StaticGetClass() */

long * PlantRedStinger::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRedStinger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRedStinger::GetClass() const */

long * PlantRedStinger::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRedStinger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRedStinger::~PlantRedStinger() */

void __thiscall PlantRedStinger::~PlantRedStinger(PlantRedStinger *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5f90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRedStinger::~PlantRedStinger() */

void __thiscall PlantRedStinger::~PlantRedStinger(PlantRedStinger *this)

{
  ~PlantRedStinger(this);
  AK::FreeHook(this);
  return;
}


/* PlantRedStinger::PlantRedStinger() */

void __thiscall PlantRedStinger::PlantRedStinger(PlantRedStinger *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e5f90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantRedStinger::StaticNew() */

PlantRedStinger * PlantRedStinger::StaticNew(void)

{
  PlantRedStinger *this;
  
  this = ::operator_new(0x40);
  PlantRedStinger(this);
  return this;
}


/* PlantRedStinger::CancelPlantfood() */

void __thiscall PlantRedStinger::CancelPlantfood(PlantRedStinger *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long *plVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(*(long *)(this + 0x10) + 0xe4);
    return;
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar2 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(*(long *)(this + 0x10) + 0xe4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRedStinger::FindTargetAndFire(PlantWeapon) */

void PlantRedStinger::FindTargetAndFire(long *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  Plant *pPVar6;
  float fVar7;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_1[5] != 2) {
    cVar1 = Plant::CanFindTarget(param_1[2]);
    if (cVar1 != '\0') {
      lVar5 = param_1[2];
      iVar2 = FUN_041130d4(lVar5);
      if (1 < iVar2) {
        *(float *)(param_1 + 7) = *(float *)(param_1 + 7) + _FUN_04114150;
        if (iVar2 == 2) {
          lVar5 = FUN_04113fc0(lVar5);
          fVar7 = *(float *)(lVar5 + 0x2b8);
        }
        else {
          lVar5 = FUN_04113fc0(lVar5);
          fVar7 = *(float *)(lVar5 + 700);
        }
        pPVar6 = (Plant *)param_1[2];
        local_c = (fVar7 + 1.0) * *(float *)(pPVar6 + 0xe4);
        pfVar3 = eastl::min_alt<float>((float *)(param_1 + 7),&local_c);
        Plant::SetSpeedModifier(pPVar6,*pfVar3);
      }
      (**(code **)(*param_1 + 0x1a0))(param_1);
      uVar4 = 1;
      goto LAB_04114104;
    }
    pPVar6 = (Plant *)param_1[2];
    if (*(float *)(pPVar6 + 0xe4) < *(float *)(pPVar6 + 0xe0)) {
      Plant::SetSpeedModifier(pPVar6,*(float *)(pPVar6 + 0xe4));
      uVar4 = 0;
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1[2] + 0xe4);
      goto LAB_04114104;
    }
  }
  uVar4 = 0;
LAB_04114104:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantRedStinger::calcLocStateFromColumn(int) */

undefined4 __thiscall PlantRedStinger::calcLocStateFromColumn(PlantRedStinger *this,int param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_04113fc0(*(undefined8 *)(this + 0x10));
  uVar3 = *(undefined8 *)(lVar1 + 0x2c0);
  lVar1 = FUN_041130f4(uVar3,0);
  uVar2 = 0;
  if (*(int *)(lVar1 + 8) < param_1) {
    lVar1 = FUN_041130f4(uVar3,1);
    uVar2 = 2;
    if (param_1 <= *(int *)(lVar1 + 8)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* PlantRedStinger::calcMaxHealthForLocState(StingerLocationState) */

int __thiscall PlantRedStinger::calcMaxHealthForLocState(PlantRedStinger *this,int param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_04113fc0(*(undefined8 *)(this + 0x10));
  lVar2 = FUN_041130f4(*(undefined8 *)(lVar2 + 0x2c0),(long)param_2);
  iVar1 = *(int *)(lVar2 + 0xc);
  fVar3 = (float)Plant::GetExtraHitPointsmodifier(*(Plant **)(this + 0x10));
  return (int)(fVar3 * (float)iVar1);
}


/* PlantRedStinger::updateHealth(int) */

void __thiscall PlantRedStinger::updateHealth(PlantRedStinger *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  fVar6 = *(float *)(*(long *)(this + 0x10) + 0xd8);
  uVar1 = calcLocStateFromColumn(this,param_1);
  iVar2 = calcMaxHealthForLocState(this,uVar1);
  lVar5 = *(long *)(this + 0x10);
  iVar3 = calcMaxHealthForLocState(this,*(undefined4 *)(this + 0x28));
  uVar1 = *(undefined4 *)(this + 0x28);
  lVar4 = *(long *)(this + 0x10);
  *(float *)(lVar5 + 0xd8) = (fVar6 / (float)iVar2) * (float)iVar3;
  iVar2 = calcMaxHealthForLocState(this,uVar1);
  *(float *)(lVar4 + 0xdc) = (float)iVar2;
  return;
}


/* PlantRedStinger::GetMaxHitpoints() */

void __thiscall PlantRedStinger::GetMaxHitpoints(PlantRedStinger *this)

{
  calcMaxHealthForLocState(this,*(undefined4 *)(this + 0x28));
  return;
}


/* PlantRedStinger::updateLocState() */

void __thiscall PlantRedStinger::updateLocState(PlantRedStinger *this)

{
  undefined4 uVar1;
  PlantAnimRig_RedStinger *pPVar2;
  
  uVar1 = calcLocStateFromColumn(this,*(int *)(*(long *)(this + 0x10) + 0x114));
  *(undefined4 *)(this + 0x28) = uVar1;
  pPVar2 = (PlantAnimRig_RedStinger *)FUN_04114304(*(undefined8 *)(this + 0x10));
  PlantAnimRig_RedStinger::SetLocState(pPVar2,*(undefined4 *)(this + 0x28));
  return;
}


/* PlantRedStinger::Initialize() */

void __thiscall PlantRedStinger::Initialize(PlantRedStinger *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  
  updateLocState(this);
  lVar6 = *(long *)(this + 0x10);
  iVar3 = calcMaxHealthForLocState(this,*(undefined4 *)(this + 0x28));
  lVar4 = *(long *)(this + 0x10);
  uVar1 = *(undefined4 *)(lVar4 + 0x114);
  uVar2 = *(undefined4 *)(lVar4 + 0xe4);
  uVar5 = 3;
  if (*(int *)(this + 0x28) != 2) {
    uVar5 = 0;
  }
  *(float *)(lVar6 + 0xd8) = (float)iVar3;
  *(undefined4 *)(lVar4 + 0x144) = uVar5;
  *(undefined4 *)(lVar4 + 200) = 4;
  *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(lVar4 + 0xd8);
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* PlantRedStinger::UpdateActions() */

void __thiscall PlantRedStinger::UpdateActions(PlantRedStinger *this)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(int *)(*(long *)(this + 0x10) + 0x114) != *(int *)(this + 0x2c)) {
    updateLocState(this);
    updateHealth(this,*(int *)(this + 0x2c));
    lVar2 = *(long *)(this + 0x10);
    uVar3 = 3;
    if (*(int *)(this + 0x28) != 2) {
      uVar3 = 0;
    }
    *(undefined4 *)(lVar2 + 0x144) = uVar3;
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar2 + 0x114);
    *(undefined4 *)(lVar2 + 200) = 4;
    plVar1 = (long *)FUN_04114304(lVar2);
    (**(code **)(*plVar1 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRedStinger::OnAnimCommand(std::string const&, std::string const&) */

void PlantRedStinger::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  undefined8 uVar9;
  GridItem *pGVar10;
  Effect_PopAnim *this;
  ResourceInfo *pRVar11;
  float *pfVar12;
  long lVar13;
  char *__s;
  ulong uVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [80];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04113fc0(*(undefined8 *)(param_1 + 0x10));
  bVar1 = std::operator==(param_2,"use_attack");
  uVar15 = (ulong)bVar1;
  if ((bVar1) && (*(int *)(param_1 + 0x28) < 2)) {
    lVar5 = FUN_041130fc(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(param_1 + 0x28));
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_1 + 0x10);
    pfVar12 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(this_00);
    fVar20 = *(float *)(this_00 + 0xc4);
    fVar17 = *pfVar12;
    fVar16 = *(float *)(lVar5 + 0x68);
    fVar19 = *(float *)(lVar5 + 0x6c);
    fVar18 = pfVar12[1];
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)(lVar5 + 8));
    Board::AddProjectile
              ((Board *)(fVar17 + fVar16 * fVar20),fVar18,-(fVar19 * fVar20),uVar9,
               (RtWeakPtr<Sexy::SoundResource> *)&local_68,*(undefined8 *)(param_1 + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
LAB_04114b1c:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    bVar1 = std::operator==(param_2,"fire_laser");
    if (bVar1) {
      bVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
      uVar15 = (ulong)bVar2;
      if (bVar2 != 0) {
        this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        cVar3 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
        if (cVar3 == '\0') {
          __s = "POPANIM_EFFECTS_REDSTINGER_BEAM";
        }
        else {
          __s = "POPANIM_EFFECTS_REDSTINGER_AVATAR_BEAM";
        }
        uVar14 = 0;
        std::string::string((string *)aIStack_90,__s);
        nop();
        GetPAMByName((string *)aIStack_90);
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
        Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar11,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        pfVar12 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_1 + 0x10));
        EATextSquish::Vec3::Vec3((Vec3 *)&local_68,*pfVar12 - 100.0,pfVar12[1] - 115.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_68,-1);
        uVar4 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0)
        ;
        FUN_04113048(this + 0x1c,uVar4);
        std::string::string((string *)&local_68,"laser_beam");
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(this,(RtWeakPtr *)&local_68,0);
        std::string::~string((string *)&local_68);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x30),
                   (RtWeakPtrBase *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        Sexy::Insets::Insets
                  ((Insets *)&local_80,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                   *(int *)(*(long *)(param_1 + 0x10) + 0x110),0xf,1);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
        EntityFinder::GetEntitiesInGridSquares((RtWeakPtr *)&local_68,2,(Insets *)&local_80);
        uVar9 = local_68;
        lVar13 = FUN_0411310c(local_68,local_60);
        if (lVar13 != 0) {
          do {
            puVar7 = (undefined8 *)FUN_04113118(uVar9,uVar14);
            pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
            if (pZVar8 != (Zombie *)0x0) {
              uVar9 = operator|(1,4);
              uVar4 = operator|(uVar9,0x2000);
              cVar3 = Zombie::MatchesAny(pZVar8,uVar4,*(undefined8 *)(param_1 + 0x10));
              if (cVar3 == '\0') {
                    /* WARNING: Load size is inaccurate */
                Zombie::ApplyCondition(*(Zombie **)(lVar5 + 0x38),0,pZVar8,0x28,1);
              }
            }
            uVar9 = local_68;
            uVar14 = uVar14 + 1;
            uVar6 = FUN_0411310c(local_68,local_60);
          } while (uVar14 < uVar6);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
        std::string::~string((string *)aIStack_90);
        goto LAB_04114b1c;
      }
    }
    bVar1 = std::operator==(param_2,"use_special");
    if (bVar1) {
      bVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
      uVar15 = (ulong)bVar2;
      if (bVar2 != 0) {
        cVar3 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
        if (cVar3 == '\0') {
          FUN_041130fc(*(undefined8 *)(lVar5 + 0x70),2);
        }
        else {
          FUN_041130fc(*(undefined8 *)(lVar5 + 0x70),3);
        }
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
        operator|=(auStack_58,0x80);
        Sexy::Insets::Insets
                  (aIStack_90,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                   *(int *)(*(long *)(param_1 + 0x10) + 0x110),0xf,1);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
        uVar4 = operator|(4,2);
        EntityFinder::GetEntitiesInGridSquares
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
                   aIStack_90);
        for (uVar14 = 0; uVar9 = local_80, uVar6 = FUN_0411310c(local_80,local_78), uVar14 < uVar6;
            uVar14 = uVar14 + 1) {
          puVar7 = (undefined8 *)FUN_04113118(uVar9,uVar14);
          pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          if (pZVar8 == (Zombie *)0x0) {
LAB_04114c50:
            puVar7 = (undefined8 *)FUN_04113118(local_80,uVar14);
            pGVar10 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
            if ((pGVar10 == (GridItem *)0x0) ||
               (cVar3 = (**(code **)(*(long *)pGVar10 + 0x200))(), cVar3 != '\0')) {
              puVar7 = (undefined8 *)FUN_04113118(local_80,uVar14);
              (**(code **)(*(long *)*puVar7 + 0x110))((long *)*puVar7,(DamageInfo *)&local_68);
            }
          }
          else {
            uVar9 = operator|(1,4);
            uVar4 = operator|(uVar9,0x2000);
            cVar3 = Zombie::MatchesAny(pZVar8,uVar4,*(undefined8 *)(param_1 + 0x10));
            if (cVar3 == '\0') goto LAB_04114c50;
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        goto LAB_04114b1c;
      }
    }
    uVar15 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRedStinger::Explode() */

void __thiscall PlantRedStinger::Explode(PlantRedStinger *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  GridItem *this_00;
  Zombie *this_01;
  ResourceInfo *pRVar7;
  ulong uVar8;
  Effect_PopAnim *this_02;
  float *pfVar9;
  BoardEntity *this_03;
  long *plVar10;
  ulong uVar11;
  RealObject *pRVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  DamageInfo *pDVar21;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  pRVar12 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_68,"Play_Potato_Mine");
  RealObject::PlayPositionalSound(pRVar12,(string *)&local_68,0.0);
  std::string::~string((string *)&local_68);
  nop();
  lVar14 = *(long *)(this + 0x10);
  local_80 = FUN_04113054(*(undefined4 *)(lVar14 + 0x50));
  local_80 = local_80 + -2;
  lVar14 = FUN_04113fc0(lVar14);
  local_68 = FUN_041130e0(*(undefined8 *)(lVar14 + 0x2d8),*(undefined8 *)(lVar14 + 0x2e0));
  local_68 = local_68 + -1;
  piVar5 = eastl::min_alt<int>(&local_80,&local_68);
  iVar1 = *piVar5;
  lVar14 = FUN_04113fc0(*(undefined8 *)(this + 0x10));
  puVar6 = (undefined8 *)FUN_04113120(*(undefined8 *)(lVar14 + 0x2d8),(long)iVar1);
                    /* WARNING: Load size is inaccurate */
  pDVar21._0_4_ = *puVar6;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(2,4);
  lVar14 = *(long *)(this + 0x10);
  uVar18 = *(undefined4 *)(lVar14 + 0x1c);
  local_68 = FUN_041131d4(*(undefined4 *)(lVar14 + 0x18),uVar18,*(undefined4 *)(lVar14 + 0x20));
  local_64 = uVar18;
  lVar14 = FUN_04113fc0(*(undefined8 *)(this + 0x10));
  EntityFinder::GetEntitiesWithinCircle2D
            (*(undefined4 *)(lVar14 + 0x2f0),
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
             (string *)&local_68);
  uVar15 = CONCAT44(uStack_7c,local_80);
  lVar14 = FUN_0411310c(uVar15,local_78);
  if (lVar14 != 0) {
    do {
      FUN_04113118(uVar15,uVar11);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      puVar6 = (undefined8 *)FUN_04113118(CONCAT44(uStack_7c,local_80),uVar11);
      this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      puVar6 = (undefined8 *)FUN_04113118(CONCAT44(uStack_7c,local_80),uVar11);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
      if (cVar2 == '\0') {
LAB_041150f8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      else {
        pRVar12 = *(RealObject **)(this + 0x10);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        cVar2 = RealObject::IsOnOpposingTeam(pRVar12,(RealObject *)pRVar7);
        if (cVar2 == '\0') goto LAB_041150f8;
        this_03 = (BoardEntity *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        cVar2 = BoardEntity::IsInRow(this_03,*(int *)(*(long *)(this + 0x10) + 0x110));
        if (((cVar2 == '\0') ||
            ((this_00 != (GridItem *)0x0 &&
             (bVar3 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_00), bVar3)))) ||
           ((this_01 != (Zombie *)0x0 &&
            ((((cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 != '\0' ||
               (cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 != '\0')) ||
              (cVar2 = Zombie::IsControlled(this_01), cVar2 != '\0')) ||
             (cVar2 = Zombie::IsInvisible(this_01), cVar2 != '\0')))))) goto LAB_041150f8;
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        pcVar16 = *(code **)(*plVar10 + 0x110);
        Sexy::Point::Point((Point *)aRStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo(pDVar21._0_4_,local_88,local_84,(string *)&local_68,aRStack_90,0);
        (*pcVar16)(plVar10,(string *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      uVar11 = uVar11 + 1;
      uVar15 = CONCAT44(uStack_7c,local_80);
      uVar8 = FUN_0411310c(uVar15,local_78);
    } while (uVar11 < uVar8);
  }
  this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_88,"POPANIM_EFFECTS_REDSTINGER_EXPLODE");
  GetPAMByName((string *)&local_88);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
  Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::string::~string((string *)&local_88);
  nop();
  p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar9 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var13);
  fVar19 = *pfVar9;
  FUN_041130b0(aRStack_90,p_Var13);
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
  p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  fVar17 = *(float *)(lVar14 + 0x9c);
  lVar14 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var13);
  fVar20 = *(float *)(lVar14 + 4);
  FUN_041130b0((string *)&local_88,p_Var13);
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar19 - fVar17,fVar20 - *(float *)(lVar14 + 0xa0),0.0)
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_68,-1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  uVar4 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_04113048(this_02 + 0x1c,uVar4);
  std::string::string((string *)&local_68,"bz");
  Effect_PopAnim::PlaySingleAnimation(this_02,(string *)&local_68,0);
  std::string::~string((string *)&local_68);
  nop();
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantDied,*(Plant **)(this + 0x10));
  (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRedStinger::onKilled(bool) */

void PlantRedStinger::onKilled(bool param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsDelayDestroy(*(Plant **)((PlantRedStinger *)(ulong)param_1 + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  Explode((PlantRedStinger *)(ulong)param_1);
  return;
}

