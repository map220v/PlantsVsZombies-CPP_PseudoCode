// Class: PlantChilibean


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibean::ApplyPlantfood() */

void __thiscall PlantChilibean::ApplyPlantfood(PlantChilibean *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_ChiliBean_PF");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChilibean::StaticGetClass() */

long * PlantChilibean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantChilibean",uVar2,StaticNew);
  return sClass;
}


/* PlantChilibean::GetClass() const */

long * PlantChilibean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantChilibean",uVar2,StaticNew);
  return sClass;
}


/* PlantChilibean::PlantChilibean() */

void __thiscall PlantChilibean::PlantChilibean(PlantChilibean *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b89f0;
  return;
}


/* PlantChilibean::StaticNew() */

PlantChilibean * PlantChilibean::StaticNew(void)

{
  PlantChilibean *this;
  
  this = ::operator_new(0x28);
  PlantChilibean(this);
  return this;
}


/* PlantChilibean::~PlantChilibean() */

void __thiscall PlantChilibean::~PlantChilibean(PlantChilibean *this)

{
  *(undefined ***)this = &PTR_GetClass_067b89f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantChilibean::~PlantChilibean() */

void __thiscall PlantChilibean::~PlantChilibean(PlantChilibean *this)

{
  ~PlantChilibean(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibean::flyThroughAir(Sexy::SexyVector2, Sexy::SexyVector2) */

void PlantChilibean::flyThroughAir
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  PlantAnimRig_Chilibean *this;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_24 = PVZ_T();
  local_20 = (float)PVZ_T();
  local_20 = local_20 + 1.0;
  local_18 = 0;
  Plant::addRelocationEvent(*(Plant **)(param_5 + 0x10),(RelocationEvent *)&local_38);
  this = (PlantAnimRig_Chilibean *)FUN_040299c4(*(undefined8 *)(param_5 + 0x10));
  PlantAnimRig_Chilibean::PlayFlyingAnim(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChilibean::OnRelocationComplete() */

void __thiscall PlantChilibean::OnRelocationComplete(PlantChilibean *this)

{
  PlantAnimRig_Chilibean *this_00;
  
  this_00 = (PlantAnimRig_Chilibean *)FUN_040299c4(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Chilibean::PlayLandingAnim(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibean::TakeDamage(DamageInfo const&) */

void PlantChilibean::TakeDamage(DamageInfo *param_1)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  long extraout_x0;
  long extraout_x0_00;
  PlantChilibeanSubSystem *this_01;
  Zombie *extraout_x0_01;
  Zombie *this_02;
  long *extraout_x0_02;
  long *extraout_x0_03;
  long *plVar6;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  Plant *pPVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x40000);
  if (((((!bVar2) || (*(RtObject **)in_x1 == (RtObject *)0x0)) ||
       (bVar2 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1), !bVar2)) ||
      ((cVar3 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x17), cVar3 != '\0' ||
       (0.0 < *(float *)(*(long *)(param_1 + 0x10) + 0xd8) - *(float *)(in_x1 + 8))))) ||
     (*(long *)in_x1 == 0)) goto LAB_04029bec;
  nop();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  psVar1 = (string *)(lVar5 + 8);
  bVar2 = std::operator==(psVar1,"west_bull");
  if ((((bVar2) || (bVar2 = std::operator==(psVar1,"piano"), bVar2)) ||
      ((bVar2 = std::operator==(psVar1,"treasureyeti"), bVar2 ||
       (((bVar2 = std::operator==(psVar1,"pirate_barrel"), bVar2 ||
         (bVar2 = std::operator==(psVar1,"birthday_barrel"), bVar2)) ||
        (bVar2 = std::operator==(psVar1,"kongfu_monk_blade"), bVar2)))))) ||
     ((bVar2 = std::operator==(psVar1,"kongfu_monk_drink"), bVar2 ||
      (bVar2 = std::operator==(psVar1,"future_imp"), bVar2)))) goto LAB_04029bec;
  bVar2 = std::operator==(psVar1,"pharaoh");
  if ((bVar2) || (bVar2 = std::operator==(psVar1,"beach_shell"), bVar2)) {
    nop();
    fVar8 = (float)FUN_040297f8(*(undefined4 *)(extraout_x0 + 0x2a8));
    cVar3 = fVar8 <= 0.0;
LAB_04029d60:
    if (cVar3 == '\0') goto LAB_04029bec;
  }
  else {
    bVar2 = std::operator==(psVar1,"kongfu_selfexplode");
    if (!bVar2) {
      bVar2 = Sexy::RtObject::IsA<ZombieMech>(*(RtObject **)in_x1);
      if ((bVar2) || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>(*(RtObject **)in_x1), bVar2))
      goto LAB_04029bec;
      nop();
      if (extraout_x0_02 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        cVar3 = (**(code **)(*extraout_x0_02 + 0x4d8))(extraout_x0_02);
        if ((cVar3 != '\0') ||
           (cVar3 = (**(code **)(*extraout_x0_02 + 0x508))(extraout_x0_02), cVar3 != '\0'))
        goto LAB_04029bec;
        nop();
        plVar6 = extraout_x0_03;
      }
      cVar3 = (**(code **)(*plVar6 + 0x400))();
      goto LAB_04029d60;
    }
    nop();
    iVar4 = Zombie::getZombieStateSerialization(this_02);
    if (iVar4 != 2) goto LAB_04029bec;
  }
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar5 = FUN_04029810(*(undefined8 *)(lVar5 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  fVar8 = *(float *)(lVar5 + 0x44);
  bVar2 = std::operator==(psVar1,"kongfu_hammer");
  if (bVar2) {
    nop();
    *(undefined1 *)(extraout_x0_00 + 0x801) = 1;
  }
  pPVar7 = *(Plant **)(param_1 + 0x10);
  iVar4 = FUN_040297f0(pPVar7);
  if (iVar4 == 2) {
    fVar8 = fVar8 + 1.5;
  }
  else if (2 < iVar4) {
    fVar8 = fVar8 + 3.0;
  }
  fVar9 = (float)Plant::GetZombieConditionExtendRate(pPVar7,0x18);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
  this_01 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  PlantChilibeanSubSystem::CauseZombieFlatulence
            (this_01,*(Plant **)(param_1 + 0x10),extraout_x0_01,fVar9 * fVar8,local_60);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
LAB_04029bec:
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChilibean::fireMines() */

void __thiscall PlantChilibean::fireMines(PlantChilibean *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined4 *puVar10;
  Plant *this_00;
  float *pfVar11;
  int iVar12;
  Board *pBVar13;
  int local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_48 = 0.0;
  if (0 < iVar1) {
    do {
      pBVar13 = *(Board **)(gLawnApp + 0x9f0);
      if (0 < *(int *)(pBVar13 + 0xf8)) {
        iVar12 = 0;
        do {
          Sexy::Point::Point((Point *)&local_40,iVar12,(int)local_48);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar13,(Point *)&local_40,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
          if (cVar3 != '\0') {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_38,(int *)&local_48);
            break;
          }
          iVar12 = iVar12 + 1;
          pBVar13 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar12 < *(int *)(pBVar13 + 0xf8));
      }
      local_48 = (float)((int)local_48 + 1);
    } while ((int)local_48 < iVar1);
  }
  cVar3 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_38);
  if (cVar3 == '\0') {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar6,uVar7);
    lVar8 = FUN_04029b20(*(undefined8 *)(this + 0x10));
    iVar1 = *(int *)(lVar8 + 0x2b8);
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar3 != '\0') {
      iVar1 = iVar1 + 1;
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)local_20);
        uVar6 = local_38;
        iVar4 = FUN_040297fc(local_38,local_30);
        iVar5 = iVar12;
        if (iVar4 <= iVar12) {
          iVar5 = PlantFramework::Rand((PlantFramework *)this,iVar4);
          uVar6 = local_38;
        }
        lVar8 = (long)iVar5;
        local_4c = 6;
        pBVar13 = *(Board **)(gLawnApp + 0x9f0);
        if (*(int *)(pBVar13 + 0xf8) < 7) {
LAB_0402a304:
          iVar5 = 5;
          while( true ) {
            piVar9 = (int *)FUN_04029808(uVar6,lVar8);
            Sexy::Point::Point((Point *)&local_48,iVar5,*piVar9);
            Plant::GetType();
            cVar3 = Board::CanPlantAt(pBVar13,(Point *)&local_48,
                                      (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            if (cVar3 != '\0') break;
            iVar5 = iVar5 + -1;
            if (iVar5 == -1) goto LAB_0402a2e4;
            pBVar13 = *(Board **)(gLawnApp + 0x9f0);
            uVar6 = local_38;
          }
          pBVar13 = *(Board **)(gLawnApp + 0x9f0);
          puVar10 = (undefined4 *)FUN_04029808(local_38,lVar8);
          uVar2 = *puVar10;
        }
        else {
          iVar5 = 0;
          do {
            iVar4 = local_4c;
            piVar9 = (int *)FUN_04029808(uVar6,lVar8);
            Sexy::Point::Point((Point *)&local_48,iVar4,*piVar9);
            Plant::GetType();
            cVar3 = Board::CanPlantAt(pBVar13,(Point *)&local_48,
                                      (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            if (cVar3 != '\0') {
              iVar5 = iVar5 + 1;
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)local_20,&local_4c);
            }
            local_4c = local_4c + 1;
            pBVar13 = *(Board **)(gLawnApp + 0x9f0);
            uVar6 = local_38;
          } while (local_4c < *(int *)(pBVar13 + 0xf8));
          if (iVar5 == 0) goto LAB_0402a304;
          iVar5 = PlantFramework::Rand((PlantFramework *)this,iVar5);
          piVar9 = (int *)FUN_04029808(local_20[0],(long)iVar5);
          iVar5 = *piVar9;
          puVar10 = (undefined4 *)FUN_04029808(local_38,lVar8);
          uVar2 = *puVar10;
        }
        Plant::GetType();
        this_00 = (Plant *)Board::AddPlant((Board *)0x0,pBVar13,iVar5,uVar2,
                                           (RtWeakPtr<Sexy::ResourceInfo> *)&local_40,1,1,0xffffffff
                                           ,0,1,1,1,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        if (this_00 != (Plant *)0x0) {
          Plant::SetIsDuplicatePlant(this_00,true);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_48);
          iVar5 = BoardTransforms::GridToBoardSpaceX(*(int *)(this_00 + 0x114));
          local_48 = (float)iVar5;
          iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(this_00 + 0x110));
          local_44 = (float)iVar5;
          uVar6 = *(undefined8 *)(this_00 + 0xa8);
          pfVar11 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             **)(this + 0x10));
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,*pfVar11,pfVar11[1]);
          flyThroughAir(local_40,local_3c,local_48,local_44,uVar6);
        }
LAB_0402a2e4:
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar1);
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantChilibean::OnAnimCommand(std::string const&, std::string const&) */

undefined1 PlantChilibean::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_2,"use_action");
    if (bVar2) {
      fireMines((PlantChilibean *)param_1);
      return 1;
    }
  }
  return 0;
}

