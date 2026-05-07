// Class: PlantAsparagus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::StaticClassInit() */

void PlantAsparagus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAsparagus");
    (*pcVar2)(plVar1,asStack_10,FUN_041049a8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAsparagus::StaticGetClass() */

long * PlantAsparagus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAsparagus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAsparagus::GetClass() const */

long * PlantAsparagus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAsparagus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAsparagus::ConFirmPlantFoodType() */

undefined1 __thiscall PlantAsparagus::ConFirmPlantFoodType(PlantAsparagus *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  if (iVar1 == 0) {
    return 2;
  }
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  return iVar1 != iVar2 + -1;
}


/* PlantAsparagus::GetPlantFoodPlayCount() */

undefined4 __thiscall PlantAsparagus::GetPlantFoodPlayCount(PlantAsparagus *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ConFirmPlantFoodType(this);
  uVar2 = 2;
  if (iVar1 == 1) {
    uVar2 = 3;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::GetRowValidEntity(int) */

void PlantAsparagus::GetRowValidEntity(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  BoardEntity *pBVar5;
  undefined4 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  undefined4 local_34;
  undefined8 local_30;
  RtMixedPtrBase aRStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  plVar4 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  local_30 = (**(code **)(*plVar4 + 0x3f8))(plVar4,0);
  (**(code **)(*plVar4 + 0x2b0))(auStack_18,plVar4,0);
  local_34 = 0;
  (**(code **)(*plVar4 + 0xe0))(aRStack_28,plVar4,in_w1,0,&local_34,&local_30);
  (**(code **)(*plVar4 + 0x100))(aRStack_20,plVar4,auStack_18,0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if ((cVar1 == '\0') || (cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20), cVar1 == '\0')) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
LAB_04102fc8:
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_28);
      goto LAB_04102f44;
    }
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 == '\0') goto LAB_04102f44;
  }
  else {
    pBVar5 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    iVar2 = BoardEntity::CalcColumnPosition(pBVar5);
    pBVar5 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar5);
    if (iVar2 <= iVar3) goto LAB_04102fc8;
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_20);
LAB_04102f44:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::ConfirmRow() */

void __thiscall PlantAsparagus::ConfirmRow(PlantAsparagus *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  RtObject *pRVar7;
  SharkMinion *this_00;
  BoardEntity *pBVar8;
  int iVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar6 = *(int *)(*(long *)(this + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  iVar1 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar1 = 0;
  }
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar9 = *(int *)(*(long *)(this + 0x10) + 0x110);
  if (iVar6 != iVar4 + -1) {
    iVar9 = iVar9 + 1;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  do {
    if (iVar9 < iVar1) {
      uVar5 = 0xffffffff;
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
      if (cVar3 != '\0') {
        this_00 = (SharkMinion *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
        uVar5 = SharkMinion::getRow(this_00);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    GetRowValidEntity((int)this);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
    if (cVar3 == '\0') {
LAB_04103058:
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
    }
    else {
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      if (cVar3 != '\0') {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
        if (bVar2) {
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar7);
          if (!bVar2) goto LAB_041030cc;
          pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar7);
          if (!bVar2) goto LAB_041030cc;
LAB_0410319c:
          pBVar8 = (BoardEntity *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar6 = BoardEntity::CalcColumnPosition(pBVar8);
          pBVar8 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          iVar4 = BoardEntity::CalcColumnPosition(pBVar8);
          if ((iVar4 < iVar6) ||
             ((iVar6 == iVar4 && (*(int *)(*(long *)(this + 0x10) + 0x110) == iVar1))))
          goto LAB_04103058;
        }
        else {
LAB_041030cc:
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
          if (bVar2) {
            pRVar7 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
            bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar7);
            if (bVar2) {
              pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar7);
              if (bVar2) goto LAB_0410319c;
            }
          }
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
          if (bVar2) {
            pRVar7 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
            bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar7);
            if (bVar2) {
              pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar7);
              if (bVar2) goto LAB_04103058;
            }
          }
        }
      }
    }
    iVar1 = iVar1 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::CanDamageZombie(BoardEntity*) */

void __thiscall PlantAsparagus::CanDamageZombie(PlantAsparagus *this,BoardEntity *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  Zombie *this_00;
  float *pfVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  RtMixedPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    uVar3 = 0;
    goto LAB_04103310;
  }
  uVar3 = 0;
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if (this_00 == (Zombie *)0x0) goto LAB_04103310;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0'))
     || (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10)),
        cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    pcVar7 = *(code **)(*(long *)this + 0x3e0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    cVar2 = (*pcVar7)(this,aRStack_20,0);
    if (cVar2 == '\0') {
LAB_041033b4:
      uVar3 = 0;
      if (cVar1 == '\0') goto LAB_04103310;
      uVar3 = 0;
      cVar2 = cVar1;
    }
    else {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar8 = *pfVar5;
      lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      if (*(float *)(lVar6 + 0x10) < fVar8) goto LAB_041033b4;
      pcVar7 = *(code **)(*(long *)this_00 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar1 = (*pcVar7)(this_00,aRStack_10,0);
      uVar3 = 0;
      if (cVar1 != '\0') {
        pcVar7 = *(code **)(*(long *)this_00 + 0xb8);
        uVar4 = (**(code **)(*(long *)this + 400))(this,0);
        uVar3 = (*pcVar7)(this_00,uVar4);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    if (cVar2 == '\0') goto LAB_04103310;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
LAB_04103310:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::CanDamageGridItem(BoardEntity*) */

void __thiscall PlantAsparagus::CanDamageGridItem(PlantAsparagus *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  GridItem *this_00;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), this_00 == (GridItem *)0x0)) {
    uVar2 = 0;
  }
  else {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if ((cVar1 == '\0') ||
       (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10)),
       cVar1 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(long *)this_00 + 0x200))(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantAsparagus::Initialize() */

void __thiscall PlantAsparagus::Initialize(PlantAsparagus *this)

{
  char cVar1;
  long *plVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  return;
}


/* PlantAsparagus::IsSleeping() */

bool __thiscall PlantAsparagus::IsSleeping(PlantAsparagus *this)

{
  bool bVar1;
  int iVar2;
  Effect_AngerFlame *pEVar3;
  
  pEVar3 = (Effect_AngerFlame *)
           UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(pEVar3);
  bVar1 = false;
  if (0xe < iVar2) {
    pEVar3 = (Effect_AngerFlame *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar2 = Effect_AngerFlame::GetFlameCol(pEVar3);
    bVar1 = iVar2 < 0x12;
  }
  return bVar1;
}


/* PlantAsparagus::FindTargetAndFire(PlantWeapon) */

undefined8 PlantAsparagus::FindTargetAndFire(PlantAsparagus *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  RtObject *this;
  PlantAnimRig_Asparagus *pPVar4;
  undefined1 uVar5;
  
  cVar2 = IsSleeping(param_1);
  if ((cVar2 == '\0') && (iVar3 = ConfirmRow(param_1), iVar3 != -1)) {
    *(int *)(param_1 + 0x28) = iVar3;
    iVar1 = *(int *)(*(UIEasyButtonWidget **)(param_1 + 0x10) + 0x110);
    uVar5 = 0;
    if ((iVar1 <= iVar3) && (uVar5 = 2, iVar3 <= iVar1)) {
      uVar5 = 1;
    }
    this = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Asparagus>(this);
    FUN_041025e8(pPVar4 + 0x3b8,uVar5);
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    return 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::UpdateActions() */

void __thiscall PlantAsparagus::UpdateActions(PlantAsparagus *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  RtObject *this_01;
  PlantAnimRig_Asparagus *pPVar2;
  float fVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x30) < fVar3) {
    this_00 = (Effect_AngerFlame *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
    if (iVar1 == 0x10) {
      this_01 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Asparagus>(this_01);
      if (pPVar2 != (PlantAnimRig_Asparagus *)0x0) {
        FUN_041025f0(pPVar2 + 0x3bc,0);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        PlantAnimRig_Asparagus::PlaySleepEnd(pPVar2,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::DrawEffect(float, float, int, bool) */

void __thiscall
PlantAsparagus::DrawEffect
          (PlantAsparagus *this,float param_1,float param_2,int param_3,bool param_4)

{
  char cVar1;
  undefined4 uVar2;
  Board *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  Vec3 *__n;
  float unaff_s10;
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aVStack_18;
  std::string::string(asStack_28,"POPANIM_EFFECTS_ASPARAGUS_BULLET");
  nop();
  if (param_4) {
    std::string::append(asStack_28,"POPANIM_EFFECTS_ASPARAGUS_PLANTFOOD",(size_t)__n);
  }
  GetPAMByName(asStack_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if (this_00[0x119] != (Board)0x0) {
      unaff_s10 = (float)Board::calculateRoofOffsetZ(param_1);
      this_00 = *(Board **)(gLawnApp + 0x9f0);
    }
    this_01 = Board::AddEffect<Effect_PopAnim>(this_00);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_01,true);
    EATextSquish::Vec3::Vec3(aVStack_18,param_1,param_2,unaff_s10);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aVStack_18,-1);
    uVar2 = Board::MakeRenderOrder(0x64960,param_3,0);
    FUN_041025d8(this_01 + 0x1c,uVar2);
    std::string::string((string *)aVStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(this_01,aVStack_18,0);
    std::string::~string((string *)aVStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAsparagus::PlantAsparagus() */

void __thiscall PlantAsparagus::PlantAsparagus(PlantAsparagus *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_067e3320;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* PlantAsparagus::StaticNew() */

PlantAsparagus * PlantAsparagus::StaticNew(void)

{
  PlantAsparagus *this;
  
  this = ::operator_new(0x68);
  PlantAsparagus(this);
  return this;
}


/* PlantAsparagus::CanEndPlantfood() */

void __thiscall PlantAsparagus::CanEndPlantfood(PlantAsparagus *this)

{
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::TakeNormalDamage(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   PlantWeapon) */

void __thiscall
PlantAsparagus::TakeNormalDamage
          (PlantAsparagus *this,vector<BoardEntity*,std::allocator<BoardEntity*>> *param_1,
          int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_1);
  if (cVar1 == '\0') {
    FUN_04103ca4(*(undefined8 *)(this + 0x10));
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    FUN_04102610(*(undefined8 *)(lVar4 + 0x70),param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    if (param_3 - 1U < 2) {
      uVar6 = operator|(0x2000,0x4000000000);
      operator|=(auStack_58,uVar6);
    }
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar2)
    {
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      if (*plVar5 != 0) {
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        if (cVar1 != '\0') {
          iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)*plVar5);
          Sexy::Point::Point((Point *)&local_70,iVar3,*(int *)(this + 0x28));
          local_50 = local_70;
          (**(code **)(*(long *)*plVar5 + 0x110))((long *)*plVar5,aRStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAsparagus::~PlantAsparagus() */

void __thiscall PlantAsparagus::~PlantAsparagus(PlantAsparagus *this)

{
  *(undefined ***)this = &PTR_GetClass_067e3320;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAsparagus::~PlantAsparagus() */

void __thiscall PlantAsparagus::~PlantAsparagus(PlantAsparagus *this)

{
  ~PlantAsparagus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::CalcPlantFoodGrid() */

void __thiscall PlantAsparagus::CalcPlantFoodGrid(PlantAsparagus *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  iVar1 = ConFirmPlantFoodType(this);
  lVar5 = *(long *)(this + 0x10);
  if (iVar1 == 2) {
    iVar7 = *(int *)(lVar5 + 0x110);
    iVar8 = iVar7;
  }
  else {
    iVar7 = *(int *)(lVar5 + 0x110);
    iVar8 = iVar7 + -1;
    if (iVar1 == 0) goto LAB_0410445c;
  }
  iVar7 = iVar7 + 1;
LAB_0410445c:
  iVar1 = iVar8;
  if (iVar8 <= iVar7) {
    while( true ) {
      if (iVar1 - iVar8 == 1) {
        iVar6 = 8;
        while( true ) {
          iVar4 = iVar6 + *(int *)(lVar5 + 0x114);
          iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
          iVar2 = iVar1;
          if (iVar3 <= iVar4) {
            iVar4 = -1;
            iVar2 = -1;
          }
          Sexy::Point::Point(aPStack_10,iVar4,iVar2);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) break;
          lVar5 = *(long *)(this + 0x10);
        }
      }
      else {
        iVar6 = 1;
        while( true ) {
          iVar4 = *(int *)(lVar5 + 0x114);
          iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
          iVar4 = iVar6 + iVar4;
          if (iVar4 < iVar2) {
            Sexy::Point::Point(aPStack_10,iVar4,iVar1);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
          }
          else {
            Sexy::Point::Point(aPStack_10,-1,-1);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
          }
          if (iVar6 == 8) break;
          iVar6 = iVar6 + 1;
          lVar5 = *(long *)(this + 0x10);
        }
      }
      iVar1 = iVar1 + 1;
      if (iVar7 < iVar1) break;
      lVar5 = *(long *)(this + 0x10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAsparagus::ApplyPlantfood() */

void __thiscall PlantAsparagus::ApplyPlantfood(PlantAsparagus *this)

{
  char cVar1;
  RtObject *pRVar2;
  PlantAnimRig_Asparagus *pPVar3;
  undefined4 uVar4;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    return;
  }
  CalcPlantFoodGrid(this);
  *(undefined4 *)(this + 0x2c) = 0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar4;
  pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Asparagus>(pRVar2);
  FUN_041025f0(pPVar3 + 0x3bc,0);
  pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Asparagus>(pRVar2);
  uVar4 = ConFirmPlantFoodType(this);
  FUN_041025f8(pPVar3 + 0x3c0,uVar4);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50));
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::CheckPushed(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantAsparagus::CheckPushed(PlantAsparagus *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<Zombie>>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::RecordPush(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantAsparagus::RecordPush(PlantAsparagus *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::AvatarPush(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantAsparagus::AvatarPush(PlantAsparagus *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  long lVar6;
  ZombieTosserSubSystem *pZVar7;
  undefined8 local_d0;
  undefined8 local_c8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  RtMixedPtrBase aRStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
    if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5), this_00 != (Zombie *)0x0)) {
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      if (((cVar2 != '\0') &&
          (((bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1 &&
            (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar1)) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')))) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')) {
        Zombie::GetCurrentTitleStatus();
        cVar2 = local_58;
        TitleStatus::~TitleStatus((TitleStatus *)aRStack_70);
        if (cVar2 == '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_c0);
          cVar2 = CheckPushed(this,aRStack_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
          if (cVar2 == '\0') {
            iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
            if ((-1 < iVar3) && (iVar4 = BoardConstants::NUMBER_OF_COLUMNS(), iVar3 < iVar4)) {
              cVar2 = Zombie::IsControlled(this_00);
              if (cVar2 == '\0') {
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_c0)
                ;
                RecordPush(this,aRStack_70);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
                iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + 1);
                lVar6 = std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
                EATextSquish::Vec3::Vec3
                          ((Vec3 *)aRStack_70,(float)iVar3,*(float *)(lVar6 + 4),
                           *(float *)(lVar6 + 8));
                pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                   (*(Board **)(gLawnApp + 0x9f0));
                RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
                ZombieTosserSubSystem::LaunchZombie
                          ((ZombieTosserSubSystem *)0x437a0000,0x3ecccccd,pZVar7,this_00,aRStack_70,
                           aRStack_b8,0);
                RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                ::~RtReflectionDelegate
                          ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                            *)aRStack_b8);
              }
            }
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::GetValidEntities(int, int) */

void PlantAsparagus::GetValidEntities(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  BoardEntity **ppBVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,uVar3,param_2,in_w2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    ppBVar4 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = CanDamageZombie((PlantAsparagus *)(ulong)(uint)param_1,*ppBVar4);
    if ((cVar2 != '\0') ||
       (cVar2 = CanDamageGridItem((PlantAsparagus *)(ulong)(uint)param_1,*ppBVar4), cVar2 != '\0'))
    {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,ppBVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)in_x8);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)in_x8);
  FUN_04105740(uVar5,uVar6);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::DoNormalDamage() */

void __thiscall PlantAsparagus::DoNormalDamage(PlantAsparagus *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  BoardEntity *this_00;
  SharkMinion *this_01;
  RtObject *this_02;
  PlantAnimRig_Asparagus *pPVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtMixedPtrBase aRStack_40 [8];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = (int)this;
  GetRowValidEntity(iVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar1 != '\0') {
    lVar5 = FUN_04103ca4(*(undefined8 *)(this + 0x10));
    iVar3 = *(int *)(this + 0x2c);
    iVar4 = *(int *)(lVar5 + 0x2d0);
    *(int *)(this + 0x2c) = iVar3 + 1;
    if (iVar4 <= iVar3 + 1) {
      *(undefined4 *)(this + 0x2c) = 0;
      fVar10 = (float)PVZ_T();
      fVar12 = *(float *)(lVar5 + 0x2d4);
      fVar11 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      *(float *)(this + 0x30) = fVar10 + fVar12 * (1.0 - fVar11);
      this_02 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar8 = Sexy::RtObject::Cast<PlantAnimRig_Asparagus>(this_02);
      FUN_041025f0(pPVar8 + 0x3bc,1);
    }
    fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    iVar3 = FUN_041025e0(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    pfVar6 = (float *)FUN_04102608(*(undefined8 *)(lVar5 + 0x2b8),(long)(iVar3 + -1));
    fVar13 = *pfVar6;
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var7);
    fVar11 = *pfVar6;
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var7);
    fVar12 = *(float *)(lVar5 + 4);
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var7);
    DrawEffect(this,fVar11,(fVar12 - *(float *)(lVar5 + 8)) - 35.0,*(int *)(this + 0x28),false);
    this_00 = (BoardEntity *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    iVar3 = BoardEntity::CalcColumnPosition(this_00);
    this_01 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    SharkMinion::getRow(this_01);
    GetValidEntities(iVar2,iVar3);
    TakeNormalDamage(this,avStack_38,0);
    if (fVar10 <= fVar13) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      if (iVar3 + 1 < iVar4) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear(avStack_38);
        GetValidEntities(iVar2,iVar3 + 1);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::operator=
                  (avStack_38,(vector *)avStack_20);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
        cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_38);
        if (cVar1 == '\0') {
          puVar9 = (undefined8 *)
                   std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                   ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                            *)avStack_38);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)*puVar9);
          DrawEffect(this,*pfVar6,(pfVar6[1] - pfVar6[2]) - 35.0,*(int *)(this + 0x28),false);
          TakeNormalDamage(this,avStack_38,0);
        }
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::DoPlantFoodDamage() */

void __thiscall PlantAsparagus::DoPlantFoodDamage(PlantAsparagus *this)

{
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  TPoint *pTVar4;
  undefined4 uVar5;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
            (this + 0x38);
  local_8 = ___stack_chk_guard;
  pTVar4 = (TPoint *)
           std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                     (this_00);
  Sexy::Point::Point((Point *)&local_30,pTVar4);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_20,(__normal_iterator *)&local_28);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,local_20[0]);
  Sexy::Point::Point((Point *)local_20,-1,-1);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_30,(TPoint *)local_20);
  if (cVar1 == '\0') {
    iVar2 = BoardTransforms::GridToBoardSpaceX(local_30);
    iVar3 = BoardTransforms::GridToBoardSpaceY(local_2c);
    DrawEffect(this,(float)iVar2,(float)(iVar3 + -0x23),local_2c,true);
    GetValidEntities((int)this,local_30);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar5 = 2;
    if (cVar1 == '\0') {
      uVar5 = 1;
    }
    TakeNormalDamage(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)local_20,uVar5);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    }
    else {
      AvatarPush(this,(vector *)local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAsparagus::OnAnimCommand(std::string const&, std::string const&) */

void PlantAsparagus::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  RealObject *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    this = *(RealObject **)(param_1 + 0x10);
    if (cVar2 == '\0') {
      std::string::string(asStack_10,"Play_Asparagus_PlantFood");
      RealObject::PlayPositionalSound(this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      DoNormalDamage((PlantAsparagus *)param_1);
    }
    else {
      std::string::string(asStack_10,"Play_Asparagus_Attack");
      RealObject::PlayPositionalSound(this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      DoPlantFoodDamage((PlantAsparagus *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

