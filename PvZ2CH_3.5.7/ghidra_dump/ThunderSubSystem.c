// Class: ThunderSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::StaticClassInit() */

void ThunderSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThunderSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5a55c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderSubSystem::StaticGetClass() */

long * ThunderSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThunderSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderSubSystem::GetClass() const */

long * ThunderSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ThunderSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::IsInHitPlants(Plant*) */

void ThunderSubSystem::IsInHitPlants(Plant *param_1)

{
  char cVar1;
  long lVar2;
  RtMixedPtrBase *this;
  ulong uVar3;
  RtWeakPtrBase *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03d588dc(uVar5,*(undefined8 *)(param_1 + 0x30));
  if (lVar2 != 0) {
    do {
      this = (RtMixedPtrBase *)FUN_03d588e8(uVar5,uVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar1 != '\0') {
        this_00 = (RtWeakPtrBase *)FUN_03d588e8(*(undefined8 *)(param_1 + 0x28),uVar4);
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (cVar1 != '\0') goto LAB_03d58bc4;
      }
      uVar4 = uVar4 + 1;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = FUN_03d588dc(uVar5,*(undefined8 *)(param_1 + 0x30));
    } while (uVar4 < uVar3);
  }
  cVar1 = '\0';
LAB_03d58bc4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::CanbeThundered(Plant*) */

void ThunderSubSystem::CanbeThundered(Plant *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar2 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==(asStack_18,"anthurium");
  if ((bVar1) || (bVar1 = std::operator==(asStack_18,"smallChestnut"), bVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ThunderSubSystem::CanbeThundered(Zombie*) */

undefined8 ThunderSubSystem::CanbeThundered(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')
       ) && (cVar1 = FUN_03d58c34(*(undefined4 *)(param_1 + 0x28)), cVar1 == '\0')) &&
     ((cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 == '\0' &&
      (cVar1 = FUN_03d58cf8(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0')))) {
    psVar3 = (string *)Zombie::GetTypeName(param_1);
    bVar2 = std::operator==(psVar3,"wave_airbubble");
    if (!bVar2) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::setConnectPopAnim(Effect_PopAnim*, int, Sexy::RtWeakPtr<Plant>) */

void __thiscall
ThunderSubSystem::setConnectPopAnim
          (undefined8 param_1_00,StandaloneEffect *param_1,undefined4 param_2,
          RtWeakPtr<Sexy::ResourceInfo> *param_4)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  float *pfVar2;
  long lVar3;
  char *__s;
  float fVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var1);
    fVar4 = *pfVar2;
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var1);
    fVar6 = *(float *)(lVar3 + 4);
    fVar5 = 160.0;
    break;
  case 1:
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var1);
    fVar4 = *pfVar2;
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var1);
    fVar5 = 90.0;
    fVar6 = *(float *)(lVar3 + 4);
    break;
  case 2:
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var1);
    fVar4 = *pfVar2 - 110.0;
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var1);
    fVar5 = *(float *)(lVar3 + 4) - 110.0;
    goto LAB_03d58e34;
  case 3:
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var1);
    fVar4 = *pfVar2 - 70.0;
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var1);
    fVar5 = *(float *)(lVar3 + 4) - 116.0;
LAB_03d58e34:
    EATextSquish::Vec3::Vec3(aVStack_18,fVar4,fVar5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(param_1,(SexyVector3 *)aVStack_18,-1);
    __s = "connect";
    goto LAB_03d58e5c;
  default:
    goto switchD_03d58de8_default;
  }
  EATextSquish::Vec3::Vec3(aVStack_18,fVar4 - 100.0,fVar6 - fVar5,0.0);
  StandaloneEffect::SetBoardSpaceOrigin(param_1,(SexyVector3 *)aVStack_18,-1);
  __s = "connect2";
LAB_03d58e5c:
  std::string::string((string *)aVStack_18,__s);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)param_1,(string *)aVStack_18,0);
  std::string::~string((string *)aVStack_18);
  nop();
switchD_03d58de8_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::findNearByPlant(Sexy::RtWeakPtr<Plant>, int&) */

void __thiscall
ThunderSubSystem::findNearByPlant
          (ThunderSubSystem *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SharkMinion *this_00;
  BoardEntity *this_01;
  long lVar4;
  Board *pBVar5;
  int iVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar2 = SharkMinion::getRow(this_00);
  this_01 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar3 = BoardEntity::CalcColumnPosition(this_01);
  iVar6 = 1;
  if (1 < iVar2) {
    iVar6 = -1;
  }
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar4 = Board::GetPlantAt(pBVar5,iVar3,iVar2 + iVar6,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar4 == 0) {
LAB_03d59108:
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    lVar4 = Board::GetPlantAt(pBVar5,iVar3,iVar2 - iVar6,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar4 != 0) {
      cVar1 = IsInHitPlants((Plant *)this);
      if (cVar1 == '\0') {
        if (iVar6 != 1) {
          *param_3 = 1;
          goto LAB_03d590d4;
        }
        goto LAB_03d590c8;
      }
    }
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    lVar4 = Board::GetPlantAt(pBVar5,iVar3 + -1,iVar2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((lVar4 == 0) || (cVar1 = IsInHitPlants((Plant *)this), cVar1 != '\0')) {
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      lVar4 = Board::GetPlantAt(pBVar5,iVar3 + 1,iVar2,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((lVar4 == 0) || (cVar1 = IsInHitPlants((Plant *)this), cVar1 != '\0')) {
        lVar4 = 0;
      }
      else {
        *param_3 = 3;
      }
    }
    else {
      *param_3 = 2;
    }
  }
  else {
    cVar1 = IsInHitPlants((Plant *)this);
    if (cVar1 != '\0') goto LAB_03d59108;
    if (iVar6 == 1) {
      *param_3 = 1;
      goto LAB_03d590d4;
    }
LAB_03d590c8:
    *param_3 = 0;
  }
LAB_03d590d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::takeHitEffect() */

void __thiscall ThunderSubSystem::takeHitEffect(ThunderSubSystem *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Plant *pPVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  float *pfVar11;
  RtWeakPtr *pRVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  uVar14 = *(undefined8 *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  uVar3 = FUN_03d588f0(uVar14,*(undefined8 *)(this + 0x50));
  if (uVar3 != 0) {
    do {
      plVar4 = (long *)FUN_03d588fc(uVar14,uVar13);
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x48))();
        uVar14 = *(undefined8 *)(this + 0x48);
        uVar3 = FUN_03d588f0(uVar14,*(undefined8 *)(this + 0x50));
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar3);
  }
  uVar13 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x48));
  uVar14 = *(undefined8 *)(this + 0x28);
  lVar5 = FUN_03d588dc(uVar14,*(undefined8 *)(this + 0x30));
  if (lVar5 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_03d588e8(uVar14,uVar13);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
        pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        cVar1 = Plant::CanBeRangeTargeted(pPVar7);
        if (cVar1 != '\0') {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
          uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          cVar1 = Plant::HasCondition(uVar14,9);
          if (cVar1 == '\0') {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            cVar1 = Plant::HasCondition(uVar14,10);
            if (cVar1 == '\0') {
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
              uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              cVar1 = Plant::HasCondition(uVar14,0xb);
              if (cVar1 == '\0') {
                pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                         FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                cVar1 = Plant::HasCondition(uVar14,0xd);
                if (cVar1 == '\0') {
                  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                           FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                  uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                  cVar1 = Plant::HasCondition(uVar14,0xc);
                  if (cVar1 == '\0') {
                    pRVar12 = (RtWeakPtr *)FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar12);
                    cVar1 = CanbeThundered((Plant *)pRVar9);
                    if (cVar1 != '\0') {
                      pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
                      if (*(int *)(this + 0x10) == 0) {
                        std::string::string(asStack_20,"POPANIM_THUNDER_BLUELIGHTNING_HIT");
                        GetPAMByName(asStack_20);
                        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
                        Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
                        std::string::~string(asStack_20);
                        nop();
                        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                                 FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                        uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                        uVar16 = PVZ_EOT();
                        Plant::ApplyCondition(uVar16,0,uVar14,9);
                      }
                      else {
                        std::string::string(asStack_20,"POPANIM_THUNDER_REDLIGHTNING_HIT");
                        GetPAMByName(asStack_20);
                        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
                        Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
                        std::string::~string(asStack_20);
                        nop();
                        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                                 FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                        uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                        uVar16 = PVZ_EOT();
                        Plant::ApplyCondition(uVar16,0,uVar14,10);
                      }
                      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                               FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                      p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                      pfVar11 = (float *)std::
                                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::_M_leftmost(p_Var10);
                      fVar15 = *pfVar11;
                      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                               FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                      p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                      lVar5 = std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(p_Var10);
                      EATextSquish::Vec3::Vec3
                                ((Vec3 *)aRStack_18,fVar15 - 100.0,*(float *)(lVar5 + 4) - 116.0,0.0
                                );
                      StandaloneEffect::SetBoardSpaceOrigin
                                ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_18,-1);
                      FUN_03d58904(pEVar8 + 0x1c);
                      std::string::string((string *)aRStack_18,"hit");
                      Effect_PopAnim::PlaySingleAnimation(pEVar8,(Vec3 *)aRStack_18,0);
                      std::string::~string((string *)aRStack_18);
                      nop();
                    }
                  }
                }
              }
            }
            else {
              if (*(int *)(this + 0x10) == 0) {
                pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
                std::string::string(asStack_20,"POPANIM_THUNDER_BLUELIGHTNING_NEUTRALIZATION");
                GetPAMByName(asStack_20);
                pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
                Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
                std::string::~string(asStack_20);
                nop();
                pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                         FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                pfVar11 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost(p_Var10);
                fVar15 = *pfVar11;
                pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                         FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                lVar5 = std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var10);
                EATextSquish::Vec3::Vec3
                          ((Vec3 *)aRStack_18,fVar15 - 100.0,*(float *)(lVar5 + 4) - 116.0,0.0);
                StandaloneEffect::SetBoardSpaceOrigin
                          ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_18,-1);
                FUN_03d58904(pEVar8 + 0x1c);
                std::string::string((string *)aRStack_18,"neutralization");
                Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_18,0);
                std::string::~string((string *)aRStack_18);
                nop();
                pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                         FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
                pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
                uVar14 = 10;
                goto LAB_03d59758;
              }
              pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
              std::string::string(asStack_20,"POPANIM_THUNDER_REDLIGHTNING_NEGATIVE_PARALYSIS");
              GetPAMByName(asStack_20);
              pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
              Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
              std::string::~string(asStack_20);
              nop();
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
              p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              pfVar11 = (float *)std::
                                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::_M_leftmost(p_Var10);
              fVar15 = *pfVar11;
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
              p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              lVar5 = std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var10);
              EATextSquish::Vec3::Vec3
                        ((Vec3 *)aRStack_18,fVar15 - 100.0,*(float *)(lVar5 + 4) - 116.0,0.0);
              StandaloneEffect::SetBoardSpaceOrigin
                        ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_18,-1);
              FUN_03d58904(pEVar8 + 0x1c);
              std::string::string((string *)aRStack_18,"negative_paralysis");
              Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_18,0);
              std::string::~string((string *)aRStack_18);
              nop();
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
              pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              Plant::EndCondition(pPVar7,10);
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
              uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              Plant::ApplyCondition(0x41a00000,0,uVar14,0xb);
            }
          }
          else if (*(int *)(this + 0x10) == 0) {
            pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_20,"POPANIM_THUNDER_BLUELIGHTNING_NEGATIVE_PARALYSIS");
            GetPAMByName(asStack_20);
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
            Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            std::string::~string(asStack_20);
            nop();
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            pfVar11 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(p_Var10);
            fVar15 = *pfVar11;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            lVar5 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var10);
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)aRStack_18,fVar15 - 100.0,*(float *)(lVar5 + 4) - 116.0,0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_18,-1);
            FUN_03d58904(pEVar8 + 0x1c);
            std::string::string((string *)aRStack_18,"negative_paralysis");
            Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_18,0);
            std::string::~string((string *)aRStack_18);
            nop();
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            Plant::EndCondition(pPVar7,9);
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            uVar16 = PVZ_EOT();
            Plant::ApplyCondition(uVar16,0,uVar14,0xc);
          }
          else {
            pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_20,"POPANIM_THUNDER_BLUELIGHTNING_NEUTRALIZATION");
            GetPAMByName(asStack_20);
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
            Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            std::string::~string(asStack_20);
            nop();
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            pfVar11 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(p_Var10);
            fVar15 = *pfVar11;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            lVar5 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var10);
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)aRStack_18,fVar15 - 100.0,*(float *)(lVar5 + 4) - 116.0,0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_18,-1);
            FUN_03d58904(pEVar8 + 0x1c);
            std::string::string((string *)aRStack_18,"neutralization");
            Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_18,0);
            std::string::~string((string *)aRStack_18);
            nop();
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            uVar14 = 9;
LAB_03d59758:
            Plant::EndCondition(pPVar7,uVar14);
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            uVar16 = PVZ_EOT();
            Plant::ApplyCondition(uVar16,0,uVar14,0xd);
          }
          if ((0.0 < *(float *)(this + 0x60)) &&
             (fVar15 = (float)Sexy::Rand(1.0), fVar15 < *(float *)(this + 0x60))) {
            pRVar12 = (RtWeakPtr *)FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar12);
            if (bVar2) {
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03d588e8(*(undefined8 *)(this + 0x28),uVar13);
              pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              Plant::KillPlant(pPVar7,0,0,1);
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      uVar14 = *(undefined8 *)(this + 0x28);
      uVar3 = FUN_03d588dc(uVar14,*(undefined8 *)(this + 0x30));
    } while (uVar13 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderSubSystem::ThunderSubSystem() */

void __thiscall ThunderSubSystem::ThunderSubSystem(ThunderSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0676b270;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* ThunderSubSystem::StaticNew() */

ThunderSubSystem * ThunderSubSystem::StaticNew(void)

{
  ThunderSubSystem *this;
  
  this = ::operator_new(0x68);
  ThunderSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::AddRandomThunderToZombies(ArtifactThunderData) */

void __thiscall ThunderSubSystem::AddRandomThunderToZombies(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  Zombie *this;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  Zombie *pZVar8;
  ZombieConditionTracker *pZVar9;
  Zombie *pZVar10;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  pZVar10._0_4_ = *param_2;
                    /* WARNING: Load size is inaccurate */
  pZVar9._0_4_ = param_2[2];
                    /* WARNING: Load size is inaccurate */
  pZVar8._0_4_ = *(Zombie **)((long)param_2 + 0x14);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    cVar2 = CanbeThundered(this);
    if (cVar2 != '\0') {
      fVar7 = (float)Sexy::Rand(1.0);
      if (0.5 <= fVar7) {
        cVar2 = Zombie::HasCondition(this,0x5b);
        if (cVar2 == '\0') {
          bVar1 = true;
          cVar2 = Zombie::HasCondition(this,0x5c);
          if (cVar2 == '\0') goto LAB_03d5a390;
          pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_38,"POPANIM_THUNDER_BLUELIGHTNING_NEUTRALIZATION");
          GetPAMByName(asStack_38);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
          Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          std::string::~string(asStack_38);
          nop();
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_30,-1);
          FUN_03d58904(pEVar3 + 0x1c);
          std::string::string((string *)aRStack_30,"neutralization");
          Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_30,0);
          std::string::~string((string *)aRStack_30);
          nop();
          uVar6 = 0x5c;
          goto LAB_03d59f18;
        }
        pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_38,"POPANIM_THUNDER_BLUELIGHTNING_NEGATIVE_PARALYSIS");
        GetPAMByName(asStack_38);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
        Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        std::string::~string(asStack_38);
        nop();
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_30,-1);
        FUN_03d58904(pEVar3 + 0x1c);
        std::string::string((string *)aRStack_30,"negative_paralysis");
        Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_30,0);
        std::string::~string((string *)aRStack_30);
        nop();
        Zombie::EndCondition(this,0x5b);
        cVar2 = Zombie::HasFogImmune(this);
        if ((((cVar2 == '\0') && (cVar2 = Zombie::IsBerserk(this), cVar2 == '\0')) &&
            (cVar2 = (**(code **)(*(long *)this + 0x4d8))(this), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*(long *)this + 0x508))(this), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(param_2[1],0,this,0x5d,1);
          uVar6 = Zombie::GetConditionTracker(this);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)((long)param_2 + 4),uVar6,0x5d);
        }
      }
      else {
        cVar2 = Zombie::HasCondition(this,0x5b);
        if (cVar2 == '\0') {
          cVar2 = Zombie::HasCondition(this,0x5c);
          bVar1 = false;
          if (cVar2 == '\0') {
LAB_03d5a390:
            cVar2 = Zombie::HasCondition(this,0x5d);
            if ((cVar2 == '\0') && (cVar2 = Zombie::HasCondition(this,0x5f), cVar2 == '\0')) {
              pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
              if (bVar1) {
                std::string::string(asStack_38,"POPANIM_THUNDER_BLUELIGHTNING_HIT");
                GetPAMByName(asStack_38);
                pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
                Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                std::string::~string(asStack_38);
                nop();
                Zombie::ApplyCondition(pZVar10._0_4_,0,this,0x5b,1);
              }
              else {
                std::string::string(asStack_38,"POPANIM_THUNDER_REDLIGHTNING_HIT");
                GetPAMByName(asStack_38);
                pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
                Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                std::string::~string(asStack_38);
                nop();
                Zombie::ApplyCondition(pZVar10._0_4_,0,this,0x5c,1);
              }
              pfVar5 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this);
              EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
              StandaloneEffect::SetBoardSpaceOrigin
                        ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_30,-1);
              FUN_03d58904(pEVar3 + 0x1c);
              std::string::string((string *)aRStack_30,"hit");
              Effect_PopAnim::PlaySingleAnimation(pEVar3,(Vec3 *)aRStack_30,0);
              std::string::~string((string *)aRStack_30);
              nop();
            }
          }
          else {
            pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_38,"POPANIM_THUNDER_REDLIGHTNING_NEGATIVE_PARALYSIS");
            GetPAMByName(asStack_38);
            pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
            Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            std::string::~string(asStack_38);
            nop();
            pfVar5 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_30,-1);
            FUN_03d58904(pEVar3 + 0x1c);
            std::string::string((string *)aRStack_30,"negative_paralysis");
            Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_30,0);
            std::string::~string((string *)aRStack_30);
            nop();
            Zombie::EndCondition(this,0x5c);
                    /* WARNING: Load size is inaccurate */
            Zombie::ApplyCondition(*(Zombie **)((long)param_2 + 0xc),0,this,2,1);
          }
        }
        else {
          pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_38,"POPANIM_THUNDER_BLUELIGHTNING_NEUTRALIZATION");
          GetPAMByName(asStack_38);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
          Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          std::string::~string(asStack_38);
          nop();
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_30,-1);
          FUN_03d58904(pEVar3 + 0x1c);
          std::string::string((string *)aRStack_30,"neutralization");
          Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_30,0);
          std::string::~string((string *)aRStack_30);
          nop();
          uVar6 = 0x5b;
LAB_03d59f18:
          Zombie::EndCondition(this,uVar6);
          Zombie::ApplyCondition(pZVar8._0_4_,0,this,0x5f,1);
          uVar6 = Zombie::GetConditionTracker(this);
          ZombieConditionTracker::SetAdditionalValue(pZVar9._0_4_,uVar6,0x5f);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* ThunderSubSystem::~ThunderSubSystem() */

void __thiscall ThunderSubSystem::~ThunderSubSystem(ThunderSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b270;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x48));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ThunderSubSystem::~ThunderSubSystem() */

void __thiscall ThunderSubSystem::~ThunderSubSystem(ThunderSubSystem *this)

{
  ~ThunderSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::AddPlantToThunder(Plant*, ThunderType, float) */

void __thiscall
ThunderSubSystem::AddPlantToThunder
          (undefined4 param_1_00,ThunderSubSystem *this,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,undefined4 param_4)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  float *pfVar2;
  char *pcVar3;
  TimeChallengeEndLevelUI *this_01;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x10) = param_4;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x60) = param_1_00;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28))
  ;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28),
             (RtWeakPtr *)(this + 0x18));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (*(int *)(this + 0x10) == 0) {
    pcVar3 = "POPANIM_THUNDER_BLUELIGHTNING";
  }
  else {
    pcVar3 = "POPANIM_THUNDER_REDLIGHTNING";
  }
  std::string::string(asStack_58,pcVar3);
  GetPAMByName(asStack_58);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,*pfVar2 - 100.0,pfVar2[1] - 116.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_50,-1);
  FUN_03d58904(this_00 + 0x1c);
  std::string::string((string *)aRStack_50,"lightning");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_50,0);
  std::string::~string((string *)aRStack_50);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_SkyCity_Lightning_Release");
  this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLightningAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ThunderSubSystem,void(ThunderSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::onLightningAnimDone(StandaloneEffect*) */

void ThunderSubSystem::onLightningAnimDone(StandaloneEffect *param_1)

{
  RtWeakPtr *this;
  undefined4 uVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  float *pfVar5;
  TimeChallengeEndLevelUI *this_01;
  char *pcVar6;
  undefined4 local_64;
  Effect_PopAnim *local_60;
  string asStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    local_64 = 0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)findNearByPlant((ThunderSubSystem *)param_1,aRStack_50,&local_64);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (this_00 ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      takeHitEffect((ThunderSubSystem *)param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x20),
                 (RtWeakPtrBase *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (param_1 + 0x28),(RtWeakPtr *)(param_1 + 0x20));
      pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      if (*(int *)(param_1 + 0x10) == 0) {
        pcVar6 = "POPANIM_THUNDER_BLUELIGHTNING_CONNECT";
      }
      else {
        pcVar6 = "POPANIM_THUNDER_REDLIGHTNING_CONNECT";
      }
      local_60 = pEVar3;
      std::string::string(asStack_58,pcVar6);
      GetPAMByName(asStack_58);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      FUN_03d58904(local_60 + 0x1c);
      pEVar3 = local_60;
      uVar1 = local_64;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this);
      setConnectPopAnim((ThunderSubSystem *)param_1,pEVar3,uVar1,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(param_1 + 0x48),
                 &local_60);
      pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      if (*(int *)(param_1 + 0x10) == 0) {
        pcVar6 = "POPANIM_THUNDER_BLUELIGHTNING_CONNECT_HIT";
      }
      else {
        pcVar6 = "POPANIM_THUNDER_REDLIGHTNING_CONNECT_HIT";
      }
      std::string::string(asStack_58,pcVar6);
      GetPAMByName(asStack_58);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_50,-1)
      ;
      FUN_03d58904(pEVar3 + 0x1c);
      std::string::string((string *)aRStack_50,"connect_hit");
      Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_50,0);
      std::string::~string((string *)aRStack_50);
      nop();
      this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)pEVar3);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onHitAnimCommand);
      Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
      Delegate4<ThunderSubSystem,void(ThunderSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
                (aDStack_38,aRStack_50);
      TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderSubSystem::onLightningAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ThunderSubSystem::onLightningAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  onLightningAnimDone((StandaloneEffect *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSubSystem::onConnectHitDone(StandaloneEffect*) */

void ThunderSubSystem::onConnectHitDone(StandaloneEffect *param_1)

{
  RtWeakPtr *this;
  undefined4 uVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  float *pfVar5;
  TimeChallengeEndLevelUI *this_01;
  char *pcVar6;
  undefined4 local_64;
  Effect_PopAnim *local_60;
  string asStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x40) < 4) {
    this = (RtWeakPtr *)(param_1 + 0x20);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar2) goto LAB_03d5b1c4;
    local_64 = 0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)findNearByPlant((ThunderSubSystem *)param_1,aRStack_50,&local_64);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    if (this_00 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      if (*(int *)(param_1 + 0x10) == 0) {
        pcVar6 = "POPANIM_THUNDER_BLUELIGHTNING_CONNECT";
      }
      else {
        pcVar6 = "POPANIM_THUNDER_REDLIGHTNING_CONNECT";
      }
      local_60 = pEVar3;
      std::string::string(asStack_58,pcVar6);
      GetPAMByName(asStack_58);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      FUN_03d58904(local_60 + 0x1c);
      pEVar3 = local_60;
      uVar1 = local_64;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this);
      setConnectPopAnim((ThunderSubSystem *)param_1,pEVar3,uVar1,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (param_1 + 0x28),this);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(param_1 + 0x48),
                 &local_60);
      pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      if (*(int *)(param_1 + 0x10) == 0) {
        pcVar6 = "POPANIM_THUNDER_BLUELIGHTNING_CONNECT_HIT";
      }
      else {
        pcVar6 = "POPANIM_THUNDER_REDLIGHTNING_CONNECT_HIT";
      }
      std::string::string(asStack_58,pcVar6);
      GetPAMByName(asStack_58);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,*pfVar5 - 100.0,pfVar5[1] - 116.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_50,-1)
      ;
      FUN_03d58904(pEVar3 + 0x1c);
      std::string::string((string *)aRStack_50,"connect_hit");
      Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_50,0);
      std::string::~string((string *)aRStack_50);
      nop();
      this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)pEVar3);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onHitAnimCommand);
      Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
      Delegate4<ThunderSubSystem,void(ThunderSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
                (aDStack_38,aRStack_50);
      TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
      goto LAB_03d5b1c4;
    }
  }
  takeHitEffect((ThunderSubSystem *)param_1);
LAB_03d5b1c4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ThunderSubSystem::onHitAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ThunderSubSystem::onHitAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  onConnectHitDone((StandaloneEffect *)param_1);
  return;
}

