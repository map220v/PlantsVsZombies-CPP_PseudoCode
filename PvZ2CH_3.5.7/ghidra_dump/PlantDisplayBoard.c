// Class: PlantDisplayBoard


/* PlantDisplayBoard::SetDisplayLevelButtonGapX(float) */

void __thiscall PlantDisplayBoard::SetDisplayLevelButtonGapX(PlantDisplayBoard *this,float param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x148);
    uVar2 = FUN_04949e30(uVar4,*(undefined8 *)(this + 0x150));
    if (uVar2 <= uVar3) break;
    plVar1 = (long *)FUN_04949e3c(uVar4,uVar3);
    plVar1 = (long *)*plVar1;
    (**(code **)(*plVar1 + 0x1a8))
              (plVar1,(int)((float)(int)plVar1[9] + param_1 * (float)(int)uVar3),
               *(undefined4 *)((long)plVar1 + 0x4c));
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::SetPlantLevel(int) */

void __thiscall PlantDisplayBoard::SetPlantLevel(PlantDisplayBoard *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  RtMixedPtrBase aRStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x110) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 < 2) {
    TodStringTranslate(L"[DISPLAY_ACTION_NORMAL]");
    FUN_054766c8(this + 0x108,auStack_10);
    FUN_05476c50(auStack_10);
  }
  else {
    iVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8))
    ;
    PlantType::GetCurrentLevelSkillType(iVar2,SUB41(*(undefined4 *)(this + 0x110),0));
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 == '\0') {
      FUN_054772c4(this + 0x108,&DAT_056f11a8);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::ToWString((string *)(lVar3 + 0x10));
      TodStringTranslate(awStack_18);
      FUN_054766c8(this + 0x108,auStack_10);
      FUN_05476c50(auStack_10);
      FUN_05476c50(awStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::HideDisplayItems(bool) */

void __thiscall PlantDisplayBoard::HideDisplayItems(PlantDisplayBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this[0xd2] = (PlantDisplayBoard)0x1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x148));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x148));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar3 = (long *)*puVar2;
      (**(code **)(*plVar3 + 0x158))(plVar3,0);
      (**(code **)(*plVar3 + 0x188))(plVar3,1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::SetDisplayLevelButtonPosOffset(Sexy::SexyVector2) */

void PlantDisplayBoard::SetDisplayLevelButtonPosOffset(float param_1,float param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(ulong *)(param_3 + 300) = CONCAT44(param_2,param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_3 + 0x148));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_3 + 0x148));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar2 = (long *)*plVar2;
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,(int)((float)(int)plVar2[9] + param_1),
               (int)((float)*(int *)((long)plVar2 + 0x4c) + param_2));
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::DisplayNexyAction() */

void __thiscall PlantDisplayBoard::DisplayNexyAction(PlantDisplayBoard *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  long lVar5;
  Zombie *this_00;
  ulong uVar6;
  string *psVar7;
  Plant *this_01;
  ResourceInfo *pRVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  Board *pBVar13;
  code *pcVar14;
  float fVar15;
  float fVar16;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04949e00(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  if (((0 < iVar3) && (*(MiniBoard **)(this + 0xf0) != (MiniBoard *)0x0)) &&
     (iVar9 = *(int *)(this + 0xd8), iVar9 < iVar3)) {
    if (this[0xd3] != (PlantDisplayBoard)0x0) {
      iVar9 = iVar9 + 1;
      *(int *)(this + 0xd8) = iVar9;
    }
    if (*(int *)(this + 0xe0) < iVar9) {
      *(undefined4 *)(this + 0xd8) = *(undefined4 *)(this + 0xdc);
    }
    *(undefined4 *)(this + 0xe4) = 0;
    MiniBoard::ResetBoard(*(MiniBoard **)(this + 0xf0));
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    psVar4 = (string *)FUN_04949e20(*(undefined8 *)(this + 0x160),(long)*(int *)(this + 0xd8));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::DisplaySelectButton,*(int *)(psVar4 + 0x3c))
    ;
    if (*(int *)(this + 0x114) == 1) {
      SetPlantLevel(this,*(int *)(psVar4 + 0x3c));
    }
    else if (*(int *)(this + 0x114) == 3) {
      TodStringTranslate(L"[DISPLAY_ACTION_PLANTFOOD]");
      FUN_054766c8(this + 0x108,asStack_10);
      FUN_05476c50(asStack_10);
    }
    bVar1 = std::operator!=(psVar4,"");
    plVar10 = *(long **)(this + 0xf0);
    if (bVar1) {
      (**(code **)(*plVar10 + 0x158))(plVar10,0);
      lVar5 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,psVar4);
      if (lVar5 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
        *(ResourceInfo **)(this + 0x100) = pRVar8;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
    }
    else {
      uVar11 = 0;
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      uVar12 = *(undefined8 *)(psVar4 + 0x20);
      lVar5 = FUN_04949e44(uVar12,*(undefined8 *)(psVar4 + 0x28));
      if (lVar5 != 0) {
        do {
          pBVar13 = *(Board **)(this + 0xf0);
          uVar12 = FUN_04949e58(uVar12,uVar11);
          FUN_05475d88(asStack_10,uVar12);
          lVar5 = FUN_04949e58(*(undefined8 *)(psVar4 + 0x20),uVar11);
          this_00 = (Zombie *)
                    Board::AddZombie(pBVar13,asStack_10,1,*(undefined4 *)(lVar5 + 0xc),
                                     *(undefined4 *)(lVar5 + 0x10));
          std::string::~string(asStack_10);
          uVar12 = *(undefined8 *)(psVar4 + 0x20);
          lVar5 = FUN_04949e58(uVar12,uVar11);
          if (0 < *(int *)(lVar5 + 8)) {
            Zombie::SetHitpoints(this_00,(float)*(int *)(lVar5 + 8));
            uVar12 = *(undefined8 *)(psVar4 + 0x20);
          }
          uVar11 = uVar11 + 1;
          uVar6 = FUN_04949e44(uVar12,*(undefined8 *)(psVar4 + 0x28));
        } while (uVar11 < uVar6);
      }
      uVar11 = 0;
      lVar5 = FUN_04949e64(*(undefined8 *)(psVar4 + 8),*(undefined8 *)(psVar4 + 0x10));
      if (lVar5 != 0) {
        do {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
          psVar7 = (string *)FUN_04949e78(*(undefined8 *)(psVar4 + 8),uVar11);
          cVar2 = std::operator==((string *)(lVar5 + 8),psVar7);
          iVar3 = -1;
          if (cVar2 != '\0') {
            iVar3 = *(int *)(psVar4 + 0x3c);
          }
          this_01 = (Plant *)Board::AddPlant(*(Board **)(this + 0xf0),*(int *)(psVar7 + 0xc),
                                             *(int *)(psVar7 + 0x10),psVar7,iVar3,false,false,true,
                                             false);
          lVar5 = FUN_04949e78(*(undefined8 *)(psVar4 + 8),uVar11);
          if (0 < *(int *)(lVar5 + 8)) {
            *(float *)(this_01 + 0xd8) = (float)*(int *)(lVar5 + 8);
          }
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
          uVar12 = *(undefined8 *)(psVar4 + 8);
          psVar7 = (string *)FUN_04949e78(uVar12,uVar11);
          cVar2 = std::operator==((string *)(lVar5 + 8),psVar7);
          if (cVar2 != '\0') {
            fVar16 = *(float *)(psVar4 + 0x48);
            *(Plant **)(this + 0x118) = this_01;
            if (0.0 < fVar16) {
              fVar15 = (float)PVZ_T();
              *(float *)(this + 0x120) = fVar15 + fVar16;
            }
            Plant::SetPlantAvatarShowIndex(this_01,*(int *)(this + 0xd4));
            PlantFramework::SetAvatarEnable(*(PlantFramework **)(this_01 + 0xa8),(bool)psVar4[0x40])
            ;
            plVar10 = *(long **)(this_01 + 0xa8);
            pcVar14 = *(code **)(*plVar10 + 0x458);
            lVar5 = FUN_04949e78(*(undefined8 *)(psVar4 + 8),uVar11);
            if (pcVar14 != PlantFramework::SetSpecialStatus) {
              (*pcVar14)(plVar10,*(undefined4 *)(lVar5 + 0x14));
            }
            Plant::SetSkillProbability(this_01,*(int *)(psVar4 + 0x44));
            if (psVar4[0x41] == (string)0x0) {
LAB_0494ad6c:
              uVar12 = *(undefined8 *)(psVar4 + 8);
            }
            else {
              cVar2 = Plant::CanApplyPlantfood(this_01);
              if (cVar2 == '\0') {
                if ((psVar4[0x4c] == (string)0x0) ||
                   (*(code **)(**(long **)(this_01 + 0xa8) + 0x4b0) ==
                    PlantFramework::DelayPlantfood)) goto LAB_0494ad6c;
                (**(code **)(**(long **)(this_01 + 0xa8) + 0x4b0))();
                uVar12 = *(undefined8 *)(psVar4 + 8);
              }
              else {
                plVar10 = *(long **)(this_01 + 0xa8);
                if (psVar4[0x40] == (string)0x0) {
                  (**(code **)(*plVar10 + 0x240))(plVar10);
                  uVar12 = *(undefined8 *)(psVar4 + 8);
                }
                else {
                  (**(code **)(*plVar10 + 0x238))(plVar10);
                  uVar12 = *(undefined8 *)(psVar4 + 8);
                }
              }
            }
          }
          uVar11 = uVar11 + 1;
          uVar6 = FUN_04949e64(uVar12,*(undefined8 *)(psVar4 + 0x10));
        } while (uVar11 < uVar6);
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
/* PlantDisplayBoard::Update() */

void __thiscall PlantDisplayBoard::Update(PlantDisplayBoard *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar2 = FUN_04949dfc(*(undefined1 *)(*(long *)(this + 0xf0) + 0x9dc));
  if (((cVar2 == '\0') && (iVar1 = *(int *)(this + 0xd8), -1 < iVar1)) &&
     (iVar4 = FUN_04949e00(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168)),
     iVar1 < iVar4)) {
    if ((0.0 < *(float *)(this + 0x120)) &&
       (fVar13 = (float)PVZ_T(), *(float *)(this + 0x120) < fVar13)) {
      *(undefined4 *)(this + 0x120) = 0xbf800000;
      if ((*(long *)(this + 0x118) != 0) &&
         ((plVar11 = *(long **)(*(long *)(this + 0x118) + 0xa8), plVar11 != (long *)0x0 &&
          (pcVar9 = *(code **)(*plVar11 + 0x460), pcVar9 != PlantFramework::AutoFire)))) {
        (*pcVar9)();
      }
    }
    fVar13 = (float)PVZ_Dt();
    fVar14 = *(float *)(this + 0xe4);
    *(float *)(this + 0xe4) = fVar13 + fVar14;
    lVar5 = FUN_04949e20(*(undefined8 *)(this + 0x160),(long)*(int *)(this + 0xd8));
    if (*(float *)(lVar5 + 0x38) <= fVar13 + fVar14) {
      DisplayNexyAction(this);
    }
    if (this[0xd2] == (PlantDisplayBoard)0x0) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x148));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x148));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar3) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar11 = (long *)*puVar6;
        (**(code **)(*plVar11 + 0x158))(plVar11,1);
        (**(code **)(*plVar11 + 0x188))(plVar11,0);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      uVar12 = *(undefined8 *)(this + 0x148);
      uVar7 = FUN_04949e30(uVar12,*(undefined8 *)(this + 0x150));
      uVar10 = 0;
      while (uVar10 < uVar7) {
        uVar8 = FUN_04949e00(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
        if (uVar10 < uVar8) {
          uVar10 = uVar10 + 1;
        }
        else {
          puVar6 = (undefined8 *)FUN_04949e3c(uVar12,uVar10);
          (**(code **)(*(long *)*puVar6 + 0x158))((long *)*puVar6,0);
          uVar12 = *(undefined8 *)(this + 0x148);
          uVar7 = FUN_04949e30(uVar12,*(undefined8 *)(this + 0x150));
          uVar10 = uVar10 + 1;
        }
      }
    }
    else {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x148));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x148));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar3) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar11 = (long *)*puVar6;
        (**(code **)(*plVar11 + 0x158))(plVar11,0);
        (**(code **)(*plVar11 + 0x188))(plVar11,1);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDisplayBoard::SetDisplayLevel(int) */

void __thiscall PlantDisplayBoard::SetDisplayLevel(PlantDisplayBoard *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((0 < param_1) &&
     (iVar2 = FUN_04949e00(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168)), 0 < iVar2))
  {
    SetPlantLevel(this,param_1);
    if (*(int *)(this + 0x114) == 1) {
      if (this[0xd3] == (PlantDisplayBoard)0x0) {
        iVar3 = FUN_04949e00(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
        iVar1 = param_1 + iVar3 + -1;
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = iVar1 / iVar3;
        }
        *(int *)(this + 0xd8) = iVar1 - iVar2 * iVar3;
      }
      else {
        iVar3 = FUN_04949e00(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
        iVar1 = param_1 + iVar3 + -2;
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = iVar1 / iVar3;
        }
        *(int *)(this + 0xd8) = iVar1 - iVar2 * iVar3;
      }
    }
    DisplayNexyAction(this);
    return;
  }
  return;
}


/* PlantDisplayBoard::~PlantDisplayBoard() */

void __thiscall PlantDisplayBoard::~PlantDisplayBoard(PlantDisplayBoard *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR_GetClass_06913180;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_0494a084(lVar1 + 0x30);
  MiniBoard::CloseBoard(*(MiniBoard **)(this + 0xf0));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(gLawnApp + 0x9f0) = 0;
  std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::~vector
            ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)(this + 0x160));
  std::vector<DisplayLevelButton*,std::allocator<DisplayLevelButton*>>::~vector
            ((vector<DisplayLevelButton*,std::allocator<DisplayLevelButton*>> *)(this + 0x148));
  FUN_05476c50(this + 0x108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantDisplayBoard::~PlantDisplayBoard() */

void __thiscall PlantDisplayBoard::~PlantDisplayBoard(PlantDisplayBoard *this)

{
  ~PlantDisplayBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::PlantDisplayBoard(DisplayType, bool) */

void __thiscall
PlantDisplayBoard::PlantDisplayBoard
          (PlantDisplayBoard *this,undefined4 param_2,PlantDisplayBoard param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  MiniBoard *this_00;
  long lVar11;
  DisplayLevelButton *pDVar12;
  code *pcVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  DisplayLevelButton *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06913180;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  FUN_05476574(this + 0x108);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x124),0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 300),0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x134),0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x13c),0.0,0.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  this[0xe8] = param_3;
  this_00 = ::operator_new(0xe08);
  MiniBoard::MiniBoard(this_00);
  *(MiniBoard **)(this + 0xf0) = this_00;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  this[0xd1] = (PlantDisplayBoard)0x0;
  this[0xd2] = (PlantDisplayBoard)0x0;
  this[0xd3] = (PlantDisplayBoard)0x1;
  *(MiniBoard **)(gLawnApp + 0x9f0) = this_00;
  MiniBoard::InitBoard(this_00);
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  lVar11 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_0494a084(lVar11 + 0x30);
  FUN_054772c4(this + 0x108,&DAT_056f11a8);
  *(undefined4 *)(this + 0x114) = param_2;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x110) = 1;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x120) = 0xbf800000;
  puVar6 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetDisplayLevel);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantDisplayBoard,void(PlantDisplayBoard::*)(int)>>
            ((MessageRouter *)puVar6,Message::DisplayLevelSelect,&local_50);
  if (*(int *)(this + 0x114) == 1) {
    iVar7 = FUN_0494a170(200);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ab0);
    iVar10 = *(int *)(lVar11 + 0x38);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b70);
    iVar7 = iVar7 + (iVar10 - *(int *)(lVar11 + 0x38)) / 2;
    iVar8 = FUN_0494a170(0xa0);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ab0);
    iVar10 = *(int *)(lVar11 + 0x3c);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b70);
    if (this[0xe8] == (PlantDisplayBoard)0x0) {
      iVar10 = (iVar8 + iVar10) - *(int *)(lVar11 + 0x3c);
    }
    else {
      iVar10 = FUN_0494a184(0x14);
      iVar7 = iVar7 - iVar10;
      iVar10 = FUN_0494a170(0xa0);
      iVar8 = FUN_0494a184(0);
      iVar10 = iVar10 + iVar8;
    }
    iVar8 = 1;
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b70);
    iVar1 = *(int *)(lVar11 + 0x38);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70c58);
    local_28 = (DisplayLevelButton *)0x0;
    iVar5 = (iVar1 + *(int *)(lVar11 + 0x38) * -4) / 5;
    iVar1 = iVar5;
    do {
      pDVar12 = ::operator_new(0xf0);
      DisplayLevelButton::DisplayLevelButton(pDVar12,iVar8);
      local_28 = pDVar12;
      std::vector<DisplayLevelButton*,std::allocator<DisplayLevelButton*>>::push_back
                ((vector<DisplayLevelButton*,std::allocator<DisplayLevelButton*>> *)(this + 0x148),
                 &local_28);
      pDVar12 = local_28;
      pcVar13 = *(code **)(*(long *)local_28 + 0x198);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70c58);
      iVar2 = *(int *)(lVar11 + 0x38);
      iVar4 = iVar8 + -1;
      iVar8 = iVar8 + 1;
      iVar9 = FUN_0494a184(10);
      iVar2 = iVar7 + iVar4 * iVar2 + iVar1;
      iVar1 = iVar1 + iVar5;
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70c58);
      uVar3 = *(undefined4 *)(lVar11 + 0x38);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70c58);
      (*pcVar13)(pDVar12,iVar2,iVar10 - iVar9,uVar3,*(undefined4 *)(lVar11 + 0x3c));
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_28);
    } while (iVar8 != 6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::SetPlantName(std::string const&) */

void PlantDisplayBoard::SetPlantName(string *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  bool bVar1;
  int iVar2;
  string *psVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  DisplayActionInfo *pDVar7;
  ulong uVar8;
  undefined8 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<PowerPropertySheet> *)(param_1 + 0xf8);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  MiniBoard::ResetBoard(*(MiniBoard **)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0x118) = 0;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(int *)(param_1 + 0x114) == 1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar6 + 0x220));
    if (bVar1) {
      std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::clear
                ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)(param_1 + 0x160));
      uVar8 = 0;
      while( true ) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
        if (*(int *)(lVar6 + 0x2c) <= (int)uVar8) break;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x220));
        uVar5 = FUN_04949e00(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
        if (uVar8 < uVar5) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x220));
          pDVar7 = (DisplayActionInfo *)FUN_04949e20(*(undefined8 *)(lVar6 + 0x10),uVar8);
          std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::push_back
                    ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)
                     (param_1 + 0x160),pDVar7);
          uVar8 = uVar8 + 1;
        }
        else {
          uVar8 = uVar8 + 1;
        }
      }
    }
    else {
LAB_0494cd38:
      std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::clear
                ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)(param_1 + 0x160));
    }
  }
  else {
    if (*(int *)(param_1 + 0x114) != 3) goto LAB_0494cb9c;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar6 + 0x228));
    if (!bVar1) goto LAB_0494cd38;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x228));
    std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::operator=
              ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)(param_1 + 0x160),
               (vector *)(lVar6 + 0x10));
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar2 = FUN_04949e00(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168));
  *(int *)(param_1 + 0xe0) = iVar2 + -1;
LAB_0494cb9c:
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(param_1 + 0x148);
    uVar5 = FUN_04949e30(uVar9,*(undefined8 *)(param_1 + 0x150));
    if (uVar5 <= uVar8) break;
    puVar4 = (undefined8 *)FUN_04949e3c(uVar9,uVar8);
    (**(code **)(*(long *)*puVar4 + 0x188))((long *)*puVar4,*(int *)(param_1 + 0xe0) < (int)uVar8);
    uVar8 = uVar8 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDisplayBoard::SetDisplayActions(std::vector<DisplayActionInfo,
   std::allocator<DisplayActionInfo> >&) */

void __thiscall PlantDisplayBoard::SetDisplayActions(PlantDisplayBoard *this,vector *param_1)

{
  std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::operator=
            ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)(this + 0x160),param_1);
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayBoard::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantDisplayBoard::DrawAll(PlantDisplayBoard *this,ModalFlags *param_1,Graphics *param_2)

{
  wstring *pwVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  Image *pIVar12;
  ulong uVar13;
  CachedUIResourcePtr<Sexy::Image> *pCVar14;
  SalesProgressBar *this_01;
  LotteryResultProgressBar *this_02;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  GraphicsAutoState aGStack_30 [8];
  int local_28;
  int local_24;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd2] == (PlantDisplayBoard)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_2);
    Sexy::Graphics::ClearClipRect(param_2);
    this_02 = *(LotteryResultProgressBar **)(this + 0x100);
    if (this_02 != (LotteryResultProgressBar *)0x0) {
      iVar3 = FUN_0494a170(200);
      fVar17 = *(float *)(this + 0x134);
      iVar4 = FUN_0494a184(0x19);
      iVar9 = *(int *)(this + 0x50);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_02);
      iVar6 = FUN_0494a170(0xa0);
      fVar16 = *(float *)(this + 0x138);
      iVar7 = FUN_0494a184(0x10);
      iVar10 = *(int *)(this + 0x54);
      this_01 = *(SalesProgressBar **)(this + 0x100);
      iVar8 = SalesProgressBar::GetCurrentLevel(this_01);
      Sexy::Graphics::DrawImage
                (param_2,(Image *)this_01,
                 (int)((((float)iVar3 + fVar17) - (float)iVar4) + (float)((iVar9 - iVar5) / 2)),
                 (int)((((float)iVar6 + fVar16) - (float)iVar7) + (float)((iVar10 - iVar8) / 2)));
    }
    pwVar1 = (wstring *)(this + 0x108);
    Sexy::Graphics::ClearClipRect(param_2);
    bVar2 = std::operator!=(pwVar1,L"");
    if (bVar2) {
      if (this[0xe8] == (PlantDisplayBoard)0x0) {
        if (this[0xd1] == (PlantDisplayBoard)0x0) {
          iVar4 = FUN_0494a170(200);
          lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ab0);
          iVar9 = *(int *)(lVar11 + 0x38);
          lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b38);
          iVar10 = *(int *)(lVar11 + 0x38);
          fVar16 = *(float *)(this + 0x124);
          iVar5 = FUN_0494a170(0xa0);
          iVar6 = FUN_0494a184(10);
          fVar17 = *(float *)(this + 0x128);
          lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b38);
          iVar3 = *(int *)(lVar11 + 0x38);
          lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b38);
          Sexy::Insets::Insets
                    ((Insets *)&local_28,(int)((float)(iVar4 + (iVar9 - iVar10) / 2) + fVar16),
                     (int)((float)(iVar5 + iVar6) + fVar17),iVar3,*(int *)(lVar11 + 0x3c));
          pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b38);
          iVar10 = local_24;
          iVar9 = local_28;
          iVar3 = FUN_0494a184(5);
          Sexy::Graphics::DrawImage(param_2,pIVar12,iVar9,iVar10 - iVar3);
          uVar15 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
          Sexy::Color::Color(aCStack_18,1);
          WriteWordInRect(param_2,pwVar1,(Insets *)&local_28,uVar15,aCStack_18,2,1);
        }
      }
      else {
        iVar4 = FUN_0494a170(200);
        iVar5 = FUN_0494a184(0x23);
        iVar6 = FUN_0494a170(0xa0);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ab0);
        iVar9 = *(int *)(lVar11 + 0x3c);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70bd8);
        iVar10 = *(int *)(lVar11 + 0x3c);
        iVar7 = FUN_0494a184(0x14);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70bd8);
        iVar3 = *(int *)(lVar11 + 0x38);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70bd8);
        Sexy::Insets::Insets
                  ((Insets *)&local_28,iVar4 - iVar5,((iVar6 + iVar9) - iVar10) + iVar7,iVar3,
                   *(int *)(lVar11 + 0x3c));
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70bd8);
        Sexy::Graphics::DrawImage(param_2,pIVar12,local_28,local_24);
        iVar9 = FUN_0494a184(3);
        local_24 = local_24 + iVar9;
        iVar9 = FUN_0494a184(5);
        uVar15 = PrimeText_Game::Typeface_FZShaoEr_18;
        local_28 = local_28 - iVar9;
        Sexy::Color::Color(aCStack_18,1);
        WriteWordInRect(param_2,pwVar1,(Insets *)&local_28,uVar15,aCStack_18,2,1);
      }
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
    if (this[0xd2] == (PlantDisplayBoard)0x0) {
      iVar9 = *(int *)(this + 0x114);
      if (iVar9 == 1) {
        iVar9 = *(int *)(this + 0xd8);
        if (iVar9 < 0) goto LAB_0494cdbc;
        uVar15 = *(undefined8 *)(this + 0x160);
        uVar13 = FUN_04949e00(uVar15,*(undefined8 *)(this + 0x168));
        if ((uVar13 <= (ulong)(long)iVar9) ||
           (lVar11 = FUN_04949e20(uVar15,(long)iVar9), *(int *)(lVar11 + 0x3c) != 4))
        goto LAB_0494cdbc;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        bVar2 = std::operator!=((string *)(lVar11 + 8),"ultomato");
        if (bVar2) {
          iVar4 = FUN_0494a170(200);
          lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ab0);
          iVar10 = *(int *)(lVar11 + 0x38);
          lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70cd8);
          iVar3 = *(int *)(lVar11 + 0x38);
          iVar9 = FUN_0494a184(0x18);
          iVar5 = FUN_0494a170(0xa0);
          if (this[0xe8] == (PlantDisplayBoard)0x0) {
            iVar6 = -iVar9;
            iVar9 = ((iVar4 + iVar10) - iVar3) + iVar9;
          }
          else {
            iVar9 = FUN_0494a170(200);
            iVar10 = FUN_0494a184(0x131);
            iVar9 = iVar9 + iVar10;
            iVar6 = FUN_0494a184(0x82);
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar11 + 0x28));
          if (0.4 <= *(float *)(lVar11 + 0x250)) {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar11 + 0x28));
            if (0.7 <= *(float *)(lVar11 + 0x250)) {
              pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70b98;
            }
            else {
              pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70a30;
            }
          }
          else {
            pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70c08;
          }
          pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
          Sexy::Graphics::DrawImage
                    (param_2,pIVar12,(int)((float)iVar9 + *(float *)(this + 0x13c)),
                     (int)((float)(iVar5 + iVar6) + *(float *)(this + 0x140)));
        }
        iVar9 = *(int *)(this + 0x114);
      }
      if ((iVar9 == 3) && (0.0 < *(float *)(this + 0x13c))) {
        iVar3 = FUN_0494a170(200);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ab0);
        iVar9 = *(int *)(lVar11 + 0x38);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70cd8);
        iVar10 = *(int *)(lVar11 + 0x38);
        iVar4 = FUN_0494a184(0x18);
        iVar5 = FUN_0494a170(0xa0);
        if (*(int *)(this + 0xd4) == -1) {
          pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70cb0;
        }
        else {
          pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70a58;
        }
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
        fVar16 = *(float *)(this + 0x13c);
        iVar6 = FUN_0494a184(0x28);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar12,
                   (int)((float)(((iVar3 + iVar9) - iVar10) + iVar4) + fVar16 + (float)iVar6),
                   (int)((float)(iVar5 - iVar4) + *(float *)(this + 0x140)));
      }
    }
  }
LAB_0494cdbc:
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

