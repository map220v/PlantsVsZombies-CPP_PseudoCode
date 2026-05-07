// Class: MapEventItem


/* MapEventItem::isPlantWars(MapEventSubType) */

bool __thiscall MapEventItem::isPlantWars(undefined8 param_1,int param_2)

{
  return param_2 == 0xe;
}


/* MapEventItem::GetChildren() const */

MapEventItem * __thiscall MapEventItem::GetChildren(MapEventItem *this)

{
  return this + 0xb8;
}


/* MapEventItem::GetPlayerProfileStatusString() const */

MapEventItem * __thiscall MapEventItem::GetPlayerProfileStatusString(MapEventItem *this)

{
  switch(*(undefined4 *)(this + 0x14)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return this + 0x28;
  default:
    return this + 0x20;
  }
}


/* MapEventItem::TEMPNAMEPLACEHOLDERVALUE(MapEventItem const&) */

MapEventItem * __thiscall MapEventItem::operator=(MapEventItem *this,MapEventItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MapEventItem MVar4;
  MapEventItem MVar5;
  MapEventItem MVar6;
  MapEventItem MVar7;
  MapEventItem MVar8;
  MapEventItem MVar9;
  MapEventItem MVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar11 = *(undefined2 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 8) = uVar13;
  *(undefined2 *)(this + 0x10) = uVar11;
  *(undefined4 *)(this + 0x14) = uVar1;
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  thunk_FUN_05475e00(this + 0x50,param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  thunk_FUN_05475e00(this + 0x60,param_1 + 0x60);
  thunk_FUN_05475e00(this + 0x68,param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = uVar2;
  this[0x7c] = param_1[0x7c];
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined2 *)(this + 0x7e) = *(undefined2 *)(param_1 + 0x7e);
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x80) = uVar1;
  *(undefined4 *)(this + 0x84) = uVar2;
  *(undefined4 *)(this + 0x88) = uVar3;
  this[0x8c] = param_1[0x8c];
  *(undefined2 *)(this + 0x8e) = *(undefined2 *)(param_1 + 0x8e);
  this[0x90] = param_1[0x90];
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x98),(RtWeakPtr *)(param_1 + 0x98));
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),(RtWeakPtr *)(param_1 + 0xa8));
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::operator=
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xb8),
             (vector *)(param_1 + 0xb8));
  uVar15 = *(undefined8 *)(param_1 + 0xd0);
  uVar14 = *(undefined8 *)(param_1 + 0xd8);
  uVar11 = *(undefined2 *)(param_1 + 0xe0);
  uVar12 = *(undefined2 *)(param_1 + 0xe2);
  uVar13 = *(undefined8 *)(param_1 + 0xe8);
  MVar4 = param_1[0xf0];
  MVar5 = param_1[0xf1];
  MVar6 = param_1[0xf2];
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  MVar7 = param_1[0x100];
  MVar8 = param_1[0x101];
  MVar9 = param_1[0x102];
  MVar10 = param_1[0x103];
  this[0x104] = param_1[0x104];
  *(undefined8 *)(this + 0xd0) = uVar15;
  *(undefined8 *)(this + 0xd8) = uVar14;
  *(undefined2 *)(this + 0xe0) = uVar11;
  *(undefined2 *)(this + 0xe2) = uVar12;
  *(undefined8 *)(this + 0xe8) = uVar13;
  this[0xf0] = MVar4;
  this[0xf1] = MVar5;
  this[0xf2] = MVar6;
  *(undefined4 *)(this + 0xf4) = uVar1;
  *(undefined4 *)(this + 0xf8) = uVar2;
  *(undefined4 *)(this + 0xfc) = uVar3;
  this[0x100] = MVar7;
  this[0x101] = MVar8;
  this[0x102] = MVar9;
  this[0x103] = MVar10;
  this[0x105] = param_1[0x105];
  MVar4 = param_1[0x106];
  this[0x107] = param_1[0x107];
  this[0x106] = MVar4;
  this[0x108] = param_1[0x108];
  uVar13 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(this + 0x118) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(this + 0x110) = uVar13;
  thunk_FUN_05475e00(this + 0x120,param_1 + 0x120);
  this[0x128] = param_1[0x128];
  thunk_FUN_05475e00(this + 0x130,param_1 + 0x130);
  return this;
}


/* MapEventItem::PrepareForWorldMapSave() */

void __thiscall MapEventItem::PrepareForWorldMapSave(MapEventItem *this)

{
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x18))();
    *(undefined8 *)(this + 0x110) = 0;
  }
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  return;
}


/* MapEventItem::SetToggleName(std::string const&) */

void MapEventItem::SetToggleName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x50);
  return;
}


/* MapEventItem::SetAdventurePlantLockStatus(bool) */

void __thiscall MapEventItem::SetAdventurePlantLockStatus(MapEventItem *this,bool param_1)

{
  this[0x128] = (MapEventItem)param_1;
  return;
}


/* MapEventItem::isPVZ1Node(MapEventSubType) */

bool __thiscall MapEventItem::isPVZ1Node(undefined8 param_1,int param_2)

{
  return param_2 - 8U < 5;
}


/* MapEventItem::GetAdviceFont() */

void MapEventItem::GetAdviceFont(void)

{
  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  return;
}


/* MapEventItem::SetAssetFilter(int) */

void __thiscall MapEventItem::SetAssetFilter(MapEventItem *this,int param_1)

{
  MapEventItem MVar1;
  
  MVar1 = SUB41(param_1,0);
  this[0x108] = MVar1;
  if (this[0x107] == (MapEventItem)0x0) {
    if ((MVar1 != (MapEventItem)0x0) && (this[0x90] != MVar1)) {
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "MapEvent has an incompatible filter with it\'s asset. Re-save the map!\n");
      this[0x90] = this[0x108];
      this[0x107] = (MapEventItem)0x1;
      return;
    }
  }
  else {
    this[0x90] = MVar1;
  }
  return;
}


/* MapEventItem::OverrideFilter(int) */

void __thiscall MapEventItem::OverrideFilter(MapEventItem *this,int param_1)

{
  if (((char)this[0x108] != 0) && ((char)this[0x108] != param_1)) {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "Trying to change MapEvent to a filter incompatible with it\'s asset. Ignoring request.\n"
              );
    this[0x90] = this[0x108];
    this[0x107] = (MapEventItem)0x1;
    return;
  }
  this[0x90] = SUB41(param_1,0);
  this[0x107] = (MapEventItem)0x0;
  return;
}


/* MapEventItem::GetFilter() const */

long __thiscall MapEventItem::GetFilter(MapEventItem *this)

{
  return (long)(char)this[0x90];
}


/* MapEventItem::getFlagOrientation() */

undefined4 __thiscall MapEventItem::getFlagOrientation(MapEventItem *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  if (*(int *)(this + 0x14) == 8) {
    puVar2 = (undefined8 *)GetChildren(this);
    uVar7 = *puVar2;
    lVar3 = FUN_04515edc(uVar7,puVar2[1]);
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)FUN_04515fb8(uVar7);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar2;
      iVar1 = FUN_04515e78(*(undefined4 *)(this_00 + 0x14));
      if (iVar1 - 3U < 2) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end(this_00);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
        uVar6 = 2;
        if (0 < (int)(*pfVar4 - *pfVar5)) {
          uVar6 = 1;
        }
        return uVar6;
      }
    }
  }
  return 0;
}


/* MapEventItem::SetEventId(unsigned short) */

void __thiscall MapEventItem::SetEventId(MapEventItem *this,ushort param_1)

{
  *(ushort *)(this + 0x8e) = param_1;
  return;
}


/* MapEventItem::GetEventId() const */

undefined2 __thiscall MapEventItem::GetEventId(MapEventItem *this)

{
  return *(undefined2 *)(this + 0x8e);
}


/* MapEventItem::DoesEventGiveReward() const */

bool __thiscall MapEventItem::DoesEventGiveReward(MapEventItem *this)

{
  return *(int *)(this + 0x14) - 2U < 4;
}


/* MapEventItem::IsEventComplete(PlayerInfo*) const */

bool __thiscall MapEventItem::IsEventComplete(MapEventItem *this,PlayerInfo *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = true;
  if (2 < *(int *)(this + 0x14) - 9U) {
    lVar3 = FUN_05474178((string *)(this + 0x28));
    if (lVar3 != 0) {
      iVar2 = PlayerInfo::GetWorldMapEventStatus(param_1,(string *)(this + 0x28));
      return 2 < iVar2;
    }
    iVar2 = PlayerInfo::GetWorldMapEventStatus(param_1,(string *)(this + 0x20));
    bVar1 = 2 < iVar2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::prepareLevelTitleText() */

void __thiscall MapEventItem::prepareLevelTitleText(MapEventItem *this)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  PrimeText_PotentialText *pPVar11;
  int extraout_w1;
  int extraout_w1_00;
  string *extraout_x1;
  int iVar12;
  ulong uVar13;
  PrimeTextWidget *pPVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auVar17 [12];
  float local_40;
  string asStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  lVar9 = FUN_05474374(uVar8,"dangerroom",0);
  iVar6 = *(int *)(this + 0x18);
  bVar2 = lVar9 != -1;
  bVar3 = iVar6 != 0;
  uVar10 = FUN_04516038(100);
  uVar13 = uVar10 & 0xffffffff;
  if (*(long *)(this + 0x110) == 0) {
    bVar5 = FUN_04515ea0(this[0xf1]);
    iVar12 = (int)uVar10;
    if ((bVar5 < bVar3) && (cVar4 = isPVZ1Node(this,iVar6), cVar4 == '\0')) {
      iVar6 = FUN_04516038(0x3c);
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
      FUN_05478178(awStack_20,&DAT_056f11a8,awStack_28);
      Sexy::Color::Color((Color *)aIStack_18,1);
      pPVar11 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Paragraph
                          (0,0,(float)iVar12,(float)iVar6,uVar8,awStack_20,1,1,(Color *)aIStack_18);
      pPVar14 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar14,pPVar11);
      *(PrimeTextWidget **)(this + 0x110) = pPVar14;
      FUN_05476c50(awStack_20);
      nop();
      Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(*(PrimeTextWidget **)(this + 0x110),false);
      iVar6 = *(int *)(this + 0x18);
    }
    else if (bVar2) {
      cVar4 = FUN_04515ea0(this[0xf1]);
      if (cVar4 == '\0') {
LAB_0451668c:
        iVar6 = *(int *)(this + 0x18);
      }
      else {
        uVar13 = (ulong)(uint)(iVar12 << 1);
        Sexy::StringToUpper((Sexy *)(*(long *)(this + 0xe8) + 0x38),extraout_x1);
        uVar8 = FUN_0547429c((string *)aIStack_18);
        Sexy::StrFormat("[%s_DANGER_ROOM_NAME]",asStack_30,uVar8);
        std::string::~string((string *)aIStack_18);
        uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
        Sexy::ToWString(asStack_30);
        TodStringTranslate(awStack_28);
        Sexy::Color::Color((Color *)aIStack_18,1);
        pPVar11 = (PrimeText_PotentialText *)
                  Sexy::BuildPotentialText_Line
                            (0,0,(float)(iVar12 << 1),uVar8,awStack_20,1,(string *)aIStack_18);
        pPVar14 = ::operator_new(0xf8);
        Sexy::PrimeTextWidget::PrimeTextWidget(pPVar14,pPVar11);
        *(PrimeTextWidget **)(this + 0x110) = pPVar14;
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
        Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(*(PrimeTextWidget **)(this + 0x110),false);
        std::string::~string(asStack_30);
        iVar6 = *(int *)(this + 0x18);
      }
    }
    else {
      cVar4 = WorldMapUtils::IsMapEventToggledOff(this);
      if (cVar4 != '\0') goto LAB_0451668c;
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
      Sexy::ToWString((string *)(this + 0x48));
      Sexy::Color::Color((Color *)aIStack_18,1);
      pPVar11 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Line
                          (0,0,(float)iVar12,uVar8,awStack_20,1,(Color *)aIStack_18);
      pPVar14 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar14,pPVar11);
      *(PrimeTextWidget **)(this + 0x110) = pPVar14;
      FUN_05476c50(awStack_20);
      Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(*(PrimeTextWidget **)(this + 0x110),bVar2);
      iVar6 = *(int *)(this + 0x18);
    }
  }
  iVar12 = (int)uVar13;
  if (*(long *)(this + 0x118) == 0) {
    cVar4 = isPlantWars(this,iVar6);
    if ((cVar4 != '\0') && (cVar4 = WorldMapUtils::IsMapEventToggledOff(this), cVar4 == '\0')) {
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
      Sexy::ToWString((string *)(this + 0x48));
      Sexy::Color::Color((Color *)aIStack_18,1);
      pPVar11 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Line
                          (0,0,(float)iVar12,uVar8,awStack_20,1,(Color *)aIStack_18);
      pPVar14 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar14,pPVar11);
      *(PrimeTextWidget **)(this + 0x118) = pPVar14;
      FUN_05476c50(awStack_20);
      Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(*(PrimeTextWidget **)(this + 0x118),false);
    }
    if (*(long *)(this + 0x118) != 0) {
      iVar6 = *(int *)(this + 0x18);
      goto LAB_04516390;
    }
  }
  else {
LAB_04516390:
    cVar4 = isPlantWars(this,iVar6);
    if (cVar4 != '\0') {
      (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),1);
      PlantWarsUtils::GetWorldMapScoreString
                ((PlantWarsUtils *)(ulong)(*(ushort *)(this + 0x8e) - 1),extraout_w1);
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x118),awStack_20);
      iVar6 = FUN_04516038(0x96);
      iVar7 = FUN_04516038(0x1e);
      pPVar14 = *(PrimeTextWidget **)(this + 0x118);
      Sexy::Insets::Insets(aIStack_18,0,0,iVar6,iVar7);
      Sexy::PrimeTextWidget::SetRect(pPVar14,aIStack_18);
      cVar4 = WorldMapUtils::IsMapEventToggledOff(this);
      if (cVar4 == '\0') {
        lVar9 = *(long *)(this + 0x118);
        fVar15 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
        iVar6 = FUN_0451605c(0xfffffffe);
        uVar16 = *(undefined4 *)(this + 0xc);
        *(int *)(lVar9 + 0x48) = ((int)fVar15 + iVar6) - iVar12 / 2;
        fVar15 = (float)FUN_0451604c(uVar16);
        iVar6 = FUN_0451605c(0x32);
        *(int *)(lVar9 + 0x4c) = (int)fVar15 + iVar6;
      }
      FUN_05476c50(awStack_20);
    }
  }
  if (*(long *)(this + 0x110) != 0) {
    bVar5 = FUN_04515ea0(this[0xf1]);
    if (bVar5 < bVar3) {
      cVar4 = isPVZ1Node(this,*(undefined4 *)(this + 0x18));
      if (cVar4 == '\0') {
        auVar17 = RiftUtils::GetNodeUnlockedTime(*(ushort *)(this + 0x8e) - 1);
        iVar6 = auVar17._8_4_;
        if (auVar17._0_8_ < 1) {
          (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),0);
          iVar6 = extraout_w1_00;
        }
        RiftUtils::GetNodeUnlockedTimeText((RiftUtils *)(ulong)(*(ushort *)(this + 0x8e) - 1),iVar6)
        ;
        Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x110),(wstring *)aIStack_18);
        lVar9 = *(long *)(this + 0x110);
        fVar15 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
        iVar6 = FUN_0451605c(0xfffffffe);
        uVar16 = *(undefined4 *)(this + 0xc);
        *(int *)(lVar9 + 0x48) = ((int)fVar15 + iVar6) - iVar12 / 2;
        fVar15 = (float)FUN_0451604c(uVar16);
        iVar6 = FUN_0451605c(0xffffffb0);
        uVar1 = *(ushort *)(this + 0x8e);
        *(int *)(lVar9 + 0x4c) = (int)fVar15 + iVar6;
        cVar4 = RiftUtils::IsNodeUnlocked(uVar1 - 1);
        if (cVar4 != '\0') {
          FUN_04515e98(this + 0xf1,1);
        }
        FUN_05476c50((wstring *)aIStack_18);
        goto LAB_045163d4;
      }
    }
    if (bVar2) {
      cVar4 = FUN_04515ea0(this[0xf1]);
      if (cVar4 == '\0') goto LAB_045163d4;
      lVar9 = *(long *)(this + 0x110);
      fVar15 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
      iVar6 = FUN_0451605c(0xfffffffe);
      uVar16 = *(undefined4 *)(this + 0xc);
      *(int *)(lVar9 + 0x48) = ((int)fVar15 + iVar6) - (int)((long)(uVar13 << 0x21) >> 0x21);
      local_40 = (float)FUN_0451604c(uVar16);
      uVar8 = 0xffffffba;
    }
    else {
      if ((bVar3) && (cVar4 = isPVZ1Node(this,*(undefined4 *)(this + 0x18)), cVar4 == '\0')) {
        (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
        pPVar14 = *(PrimeTextWidget **)(this + 0x110);
        Sexy::ToWString((string *)(this + 0x48));
        Sexy::PrimeTextWidget::SetText(pPVar14,(wstring *)aIStack_18);
        FUN_05476c50(aIStack_18);
        iVar6 = FUN_04516038(100);
        iVar7 = FUN_04516038(0x1e);
        pPVar14 = *(PrimeTextWidget **)(this + 0x110);
        Sexy::Insets::Insets(aIStack_18,0,0,iVar6,iVar7);
        Sexy::PrimeTextWidget::SetRect(pPVar14,aIStack_18);
      }
      cVar4 = WorldMapUtils::IsMapEventToggledOff(this);
      if (cVar4 != '\0') goto LAB_045163d4;
      lVar9 = *(long *)(this + 0x110);
      fVar15 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
      iVar6 = FUN_0451605c(0xfffffffe);
      uVar16 = *(undefined4 *)(this + 0xc);
      *(int *)(lVar9 + 0x48) = ((int)fVar15 + iVar6) - iVar12 / 2;
      local_40 = (float)FUN_0451604c(uVar16);
      uVar8 = 0xffffffce;
    }
    iVar6 = FUN_0451605c(uVar8);
    *(int *)(lVar9 + 0x4c) = (int)local_40 + iVar6;
  }
LAB_045163d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapEventItem::ResetPointers() */

void __thiscall MapEventItem::ResetPointers(MapEventItem *this)

{
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::clear
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xb8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::InitializeMembers() */

void __thiscall MapEventItem::InitializeMembers(MapEventItem *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x98),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point((Point *)&local_10,0,0);
  this[0xf0] = (MapEventItem)0x0;
  *(undefined8 *)(this + 0xa0) = local_10;
  *(undefined2 *)(this + 0xe0) = 0xffff;
  *(undefined2 *)(this + 0xe2) = 0xffff;
  this[0xf1] = (MapEventItem)0x0;
  this[0xf2] = (MapEventItem)0x0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0x105] = (MapEventItem)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  this[0x102] = (MapEventItem)0x0;
  this[0x106] = (MapEventItem)0x0;
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::clear
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  this[0x108] = (MapEventItem)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x101] = (MapEventItem)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::EditorDraw(Sexy::Graphics*, bool, WorldMapCamera*, float, bool, bool) */

void __thiscall
MapEventItem::EditorDraw
          (MapEventItem *this,Graphics *param_1,bool param_2,WorldMapCamera *param_3,float param_4,
          bool param_5,bool param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  float fVar9;
  ulong local_58;
  ulong local_50;
  Insets local_48 [16];
  Color aCStack_38 [16];
  Color aCStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04515ea0(this[0xf1]);
  cVar1 = FUN_04515eac(this[0x105]);
  if ((cVar1 == '\0') || (!param_6)) {
    FUN_04515e98(this + 0xf1,1);
    Sexy::Graphics::PushState(param_1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(local_48,0xff,0xff,0xff,0x40);
    Sexy::Graphics::SetColor(param_1,(Color *)local_48);
    if (param_2) {
      (**(code **)(*(long *)this + 0x18))(param_4,this,param_1,param_3);
    }
    else {
      (**(code **)(*(long *)this + 0x10))(param_4,this,param_1,param_3);
    }
    Sexy::Graphics::PopState(param_1);
LAB_04516ea0:
    FUN_04515e98(this + 0xf1,uVar2);
    if (this[0x106] == (MapEventItem)0x0) goto joined_r0x04516f40;
LAB_04516eb4:
    Sexy::Insets::Insets(local_48,0x32,100,0xff,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_48);
    iVar6 = FUN_04516038((int)*(float *)(this + 8) + -0x14);
    iVar7 = FUN_04516038((int)*(float *)(this + 0xc) + -0x14);
    iVar4 = FUN_04516038(0x28);
    Sexy::Insets::Insets(local_48,(int)((float)iVar6 + param_4),iVar7,iVar4,iVar4);
    WorldMapCamera::FillRect(param_3,(TRect *)local_48);
    if (this[0x106] == (MapEventItem)0x0) goto joined_r0x04516f40;
  }
  else {
    FUN_04515e98(this + 0xf1,1);
    if (!param_2) {
      (**(code **)(*(long *)this + 0x10))(param_4,this,param_1,param_3);
      goto LAB_04516ea0;
    }
    (**(code **)(*(long *)this + 0x18))(param_4,this,param_1,param_3);
    FUN_04515e98(this + 0xf1,uVar2);
    if (this[0x106] != (MapEventItem)0x0) goto LAB_04516eb4;
joined_r0x04516f40:
    if ((!param_6) || (!param_5)) {
      Sexy::Color::Color((Color *)local_48,0x96,0x96,0x96);
      Sexy::Graphics::SetColor(param_1,(Color *)local_48);
      goto LAB_04516d7c;
    }
  }
  Sexy::Color::Color(aCStack_38,0,0xff,0);
  Sexy::Color::Color(aCStack_28,0xff,0,0xff);
  Sexy::Color::Color(aCStack_18,0,0,0xff);
  nop();
  local_58 = (ulong)(char)this[0x90];
  local_50 = 3;
  puVar8 = eastl::min_alt<unsigned_long>(&local_58,&local_50);
  puVar8 = eastl::max_alt<unsigned_long>((ulong *)local_48,puVar8);
  Sexy::Graphics::SetColor(param_1,aCStack_38 + *puVar8 * 0x10);
LAB_04516d7c:
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar3 = FUN_04516038((int)*(float *)(this + 8) + -0x14);
    iVar4 = FUN_04516038((int)*(float *)(this + 0xc) + -0x14);
    iVar4 = iVar4 + iVar6;
    iVar5 = FUN_04516038(0x28);
    iVar5 = iVar5 + iVar7;
    fVar9 = (float)iVar6;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + -2;
    Sexy::Insets::Insets(local_48,(int)((float)iVar3 + fVar9 + param_4),iVar4,iVar5,iVar5);
    WorldMapCamera::DrawRect(param_3,(TRect *)local_48);
  } while (iVar6 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::DoesPlayerOwnReward(PlayerInfo*) const */

void __thiscall MapEventItem::DoesPlayerOwnReward(MapEventItem *this,PlayerInfo *param_1)

{
  undefined1 uVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  FilesystemSaveGameContext *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x14)) {
  case 2:
  case 3:
    FUN_05475d88(asStack_10,this + 0x28);
    uVar1 = AwardsGranter::IsOwned(3,asStack_10,0);
    std::string::~string(asStack_10);
    break;
  case 4:
    FUN_05475d88(asStack_18,this + 0x28);
    GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)asStack_10,asStack_18);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    uVar1 = PlayerInfo::GameFeatureIsUnlocked(param_1,*(undefined4 *)(lVar4 + 0x30));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    break;
  case 5:
    FUN_05475d88(asStack_10,this + 0x28);
    uVar1 = AwardsGranter::IsOwned(4,asStack_10,0);
    std::string::~string(asStack_10);
    break;
  case 0xc:
    this_00 = *(FilesystemSaveGameContext **)(this + 0xb0);
    uVar1 = 0;
    if (this_00 == (FilesystemSaveGameContext *)0x0) break;
    iVar2 = FUN_04515e78(*(undefined4 *)(this_00 + 0x14));
    if (iVar2 == 1) {
      psVar3 = (string *)Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
      uVar1 = PlayerInfo::GetLevelCompleted(param_1,psVar3);
      break;
    }
  default:
    uVar1 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::GivePlayerReward(PlayerInfo*) const */

void __thiscall MapEventItem::GivePlayerReward(MapEventItem *this,PlayerInfo *param_1)

{
  string *psVar1;
  char cVar2;
  long lVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x14)) {
  case 2:
  case 3:
    psVar1 = (string *)(this + 0x28);
    cVar2 = PlayerInfo::GetIsPlantUnlocked(param_1,psVar1);
    if (cVar2 == '\0') {
      PlayerInfo::UnlockPlant(param_1,psVar1,false);
    }
    else {
      std::string::string((string *)aRStack_10,"plant");
      PlayerInfo::AddRewardByTypeName(param_1,(string *)aRStack_10,psVar1,1,false);
      std::string::~string((string *)aRStack_10);
      nop();
    }
    break;
  case 4:
    FUN_05475d88(asStack_18,this + 0x28);
    GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)aRStack_10,asStack_18);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    PlayerInfo::UnlockGameFeature(param_1,*(undefined4 *)(lVar3 + 0x30));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    break;
  case 5:
    PlayerInfo::SetPowerupUnlockState(param_1,(string *)(this + 0x28),true);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MapEventItem::DrawIslandLayer(Sexy::Graphics*, WorldMapCamera*, float) */

void __thiscall
MapEventItem::DrawIslandLayer
          (MapEventItem *this,Graphics *param_1,WorldMapCamera *param_2,float param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  Image *pIVar8;
  int iVar9;
  code *pcVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_30;
  float local_20;
  float local_10;
  
  iVar9 = *(int *)(this + 0x14);
  if (iVar9 == 1) {
    plVar5 = (long *)LawnApp::GetWorldMap(gLawnApp);
    if (*(int *)(this + 0x78) == 3) {
      sVar2 = FUN_04515eb0(*(undefined2 *)(this + 0xe0));
      if (sVar2 != -1) {
        uVar12 = FUN_0451604c(*(undefined4 *)(this + 8));
        uVar14 = FUN_0451604c(*(undefined4 *)(this + 0xc));
        (**(code **)(*plVar5 + 0x310))
                  (uVar12,uVar14,0x3f800000,0x3f800000,0,plVar5,param_1,param_2,(int)sVar2);
      }
    }
  }
  else if ((iVar9 != 0) && (iVar9 - 10U < 2)) {
    sVar2 = FUN_04515eb4(*(undefined2 *)(this + 0xe2));
    if (sVar2 == -1) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar9 = *(int *)(lVar7 + 0x38);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar9 = (int)(((float)iVar9 - *(float *)(this + 0x84) * (float)*(int *)(lVar7 + 0x38)) * 0.5);
      cVar1 = FUN_04515e80(this[0x103]);
      if (cVar1 == '\0') {
        pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        iVar4 = FUN_04516038((int)*(float *)(this + 8));
        fVar17 = param_3 + (float)*(int *)(this + 0xa0) + (float)iVar9 + (float)iVar4;
        iVar9 = FUN_04516038((int)*(float *)(this + 0xc));
        iVar9 = iVar9 + *(int *)(this + 0xa4);
        sVar2 = FUN_04515e88(*(undefined2 *)(this + 0x7e));
        fVar11 = (float)PVZ_T();
        fVar13 = (float)FUN_04515e8c(*(undefined4 *)(this + 0x80));
        local_20 = (float)(int)sVar2 + fVar11 * fVar13;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_10 = (float)*(int *)(lVar7 + 0x38) * *(float *)(this + 0x84);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        iVar4 = *(int *)(lVar7 + 0x3c);
        fVar11 = *(float *)(this + 0x88);
      }
      else {
        pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        iVar4 = FUN_04516038((int)*(float *)(this + 8));
        fVar17 = param_3 + (float)*(int *)(this + 0xa0) + (float)iVar9 + (float)iVar4;
        iVar9 = FUN_04516038((int)*(float *)(this + 0xc));
        iVar9 = iVar9 + *(int *)(this + 0xa4);
        sVar2 = FUN_04515e88(*(undefined2 *)(this + 0x7e));
        fVar11 = (float)PVZ_T();
        fVar13 = (float)FUN_04515e8c(*(undefined4 *)(this + 0x80));
        local_20 = (float)(int)sVar2 + fVar11 * fVar13;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        local_10 = (float)*(int *)(lVar7 + 0x38) * *(float *)(this + 0x84);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        fVar11 = *(float *)(this + 0x88);
        iVar4 = *(int *)(lVar7 + 0x3c);
      }
      local_30 = (float)iVar9;
      WorldMapCamera::DrawImageRotated
                (param_2,pIVar8,fVar17,local_30,local_20,cVar1 != '\0',local_10,
                 (float)iVar4 * fVar11);
      return;
    }
    fVar17 = -1.0;
    cVar1 = FUN_04515e80(this[0x103]);
    if (cVar1 == '\0') {
      fVar17 = 1.0;
    }
    plVar5 = (long *)LawnApp::GetWorldMap(gLawnApp);
    pcVar10 = *(code **)(*plVar5 + 800);
    uVar6 = FUN_04515eb8(*(undefined8 *)(this + 0xe8));
    fVar11 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
    uVar12 = FUN_0451604c(*(undefined4 *)(this + 0xc));
    fVar13 = (float)FUN_04515e90(*(undefined4 *)(this + 0x84));
    uVar14 = FUN_04515e94(*(undefined4 *)(this + 0x88));
    sVar3 = FUN_04515e88(*(undefined2 *)(this + 0x7e));
    fVar15 = (float)PVZ_T();
    fVar16 = (float)FUN_04515e8c(*(undefined4 *)(this + 0x80));
    (*pcVar10)(fVar11 + param_3,uVar12,fVar13 * fVar17,uVar14,(float)(int)sVar3 + fVar15 * fVar16,
               plVar5,param_1,param_2,(int)sVar2,uVar6);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04517680 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* MapEventItem::drawImageFlashing(Sexy::Graphics*, WorldMapCamera*, Sexy::Image*, int, int, int,
   int) */

void MapEventItem::drawImageFlashing
               (Graphics *param_1,WorldMapCamera *param_2,Image *param_3,int param_4,int param_5,
               int param_6,int param_7)

{
  undefined1 auVar1 [16];
  bool bVar2;
  Insets *pIVar3;
  float fVar4;
  undefined1 extraout_var [12];
  undefined4 local_2c;
  Color aCStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  fVar4 = fmodf(fVar4,1.0);
  local_18[0] = 0;
  local_2c = 0x42800000;
  auVar1._4_12_ = extraout_var;
  auVar1._0_4_ = fVar4;
  fVar4 = CurveLerp<float>(auVar1,0x40000000,fVar4,(Insets *)local_18,&local_2c,0xc);
  Sexy::Color::Color(aCStack_28,0xffee44,(int)fVar4);
  pIVar3 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_2);
  Sexy::Insets::Insets((Insets *)local_18,pIVar3);
  bVar2 = (bool)Sexy::Graphics::GetColorizeImages((Graphics *)param_2);
  Sexy::Graphics::SetDrawMode((Graphics *)param_2,1);
  Sexy::Graphics::SetColorizeImages((Graphics *)param_2,true);
  Sexy::Graphics::SetColor((Graphics *)param_2,aCStack_28);
  WorldMapCamera::DrawImage
            ((WorldMapCamera *)param_3,(Image *)(ulong)(uint)param_4,(float)param_5,(float)param_6,
             false,-1.0,-1.0);
  Sexy::Graphics::SetColor((Graphics *)param_2,(Color *)local_18);
  Sexy::Graphics::SetColorizeImages((Graphics *)param_2,bVar2);
  Sexy::Graphics::SetDrawMode((Graphics *)param_2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapEventItem::drawImageFlashing(Sexy::Graphics*, WorldMapCamera*, Sexy::Image*, int, int) */

void __thiscall
MapEventItem::drawImageFlashing
          (MapEventItem *this,Graphics *param_1,WorldMapCamera *param_2,Image *param_3,int param_4,
          int param_5)

{
  int iVar1;
  
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_3);
  SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_3);
  drawImageFlashing((Graphics *)this,(WorldMapCamera *)param_1,(Image *)param_2,(int)param_3,param_4
                    ,param_5,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::CompleteEvent(PlayerInfo*) const */

void __thiscall MapEventItem::CompleteEvent(MapEventItem *this,PlayerInfo *param_1)

{
  string *psVar1;
  int iVar2;
  long lVar3;
  LevelUtils *this_00;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x14) - 9U < 3) goto LAB_04517908;
  psVar1 = (string *)(this + 0x28);
  lVar3 = FUN_05474178(psVar1);
  if (lVar3 == 0) {
    PlayerInfo::SetWorldMapEventStatus(param_1,this + 0x20,this + 0x20,3,1);
    lVar3 = FUN_05474184(this + 0x68);
    if (lVar3 != 0) goto LAB_04517958;
LAB_04517874:
    lVar3 = FUN_05474184(this + 0x60);
    if (lVar3 != 0) goto LAB_0451799c;
LAB_04517884:
    iVar2 = *(int *)(this + 0x14);
  }
  else {
    PlayerInfo::SetWorldMapEventStatus(param_1,this + 0x20,psVar1,3,1);
    lVar3 = FUN_05474184(this + 0x68);
    if (lVar3 == 0) goto LAB_04517874;
LAB_04517958:
    uVar7 = FUN_0547429c(this + 0x68);
    Sexy::StrFormat("nar_%s",asStack_10,uVar7);
    PlayerInfo::CompleteNarrationEvent(param_1,asStack_10);
    std::string::~string(asStack_10);
    lVar3 = FUN_05474184(this + 0x60);
    if (lVar3 == 0) goto LAB_04517884;
LAB_0451799c:
    uVar7 = FUN_0547429c(this + 0x60);
    Sexy::StrFormat("nar_%s",asStack_10,uVar7);
    PlayerInfo::CompleteNarrationEvent(param_1,asStack_10);
    std::string::~string(asStack_10);
    iVar2 = *(int *)(this + 0x14);
  }
  if (iVar2 == 1) {
    this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    lVar3 = LevelUtils::GetLevelInfo(this_00,psVar1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0xd4) == 3) {
        PlayerInfo::UnlockPlant(param_1,(string *)(lVar3 + 0xd8),false);
      }
      else if (*(int *)(lVar3 + 0xd4) == 4) {
        PlayerInfo::SetPowerupUnlockState(param_1,(string *)(lVar3 + 0xd8),true);
      }
      uVar6 = 0;
      while( true ) {
        uVar7 = *(undefined8 *)(lVar3 + 0x138);
        uVar5 = FUN_04515ee8(uVar7,*(undefined8 *)(lVar3 + 0x140));
        if (uVar5 <= uVar6) break;
        puVar4 = (undefined4 *)FUN_04515ef4(uVar7,uVar6);
        PlayerInfo::UnlockGameFeature(param_1,*puVar4);
        uVar6 = uVar6 + 1;
      }
      goto LAB_04517908;
    }
  }
  GivePlayerReward(this,param_1);
LAB_04517908:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MapEventItem::MapEventItem() */

void __thiscall MapEventItem::MapEventItem(MapEventItem *this)

{
  size_t in_x2;
  
  *(undefined ***)this = &PTR__MapEventItem_068579b0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 8));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  Set8BytesTo0((string *)(this + 0x40));
  Set8BytesTo0((string *)(this + 0x48));
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0((string *)(this + 0x60));
  Set8BytesTo0((string *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x98));
  Sexy::Point::Point((Point *)(this + 0xa0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  Set8BytesTo0(this + 0x120);
  Set8BytesTo0((string *)(this + 0x130));
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::string::append((string *)(this + 0x20),"",in_x2);
  std::string::append((string *)(this + 0x28),"",in_x2);
  *(undefined4 *)(this + 0x58) = 0;
  std::string::append((string *)(this + 0x30),"",in_x2);
  std::string::append((string *)(this + 0x38),"",in_x2);
  std::string::append((string *)(this + 0x40),"",in_x2);
  std::string::append((string *)(this + 0x48),"",in_x2);
  this[0x100] = (MapEventItem)0x0;
  std::string::append((string *)(this + 0x60),"",in_x2);
  std::string::append((string *)(this + 0x68),"",in_x2);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 2;
  this[0x107] = (MapEventItem)0x1;
  this[0x128] = (MapEventItem)0x1;
  this[0x103] = (MapEventItem)0x0;
  this[0x104] = (MapEventItem)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (MapEventItem)0x0;
  *(undefined2 *)(this + 0x7e) = 0;
  this[0x8c] = (MapEventItem)0x0;
  *(undefined2 *)(this + 0x8e) = 0;
  this[0x90] = (MapEventItem)0x0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0x3f800000;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  std::string::append((string *)(this + 0x130),"",1);
  InitializeMembers(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::drawRiftEventAdditionalIcons(Sexy::Graphics*, WorldMapCamera*) */

void __thiscall
MapEventItem::drawRiftEventAdditionalIcons
          (MapEventItem *this,Graphics *param_1,WorldMapCamera *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  float *pfVar8;
  SalesProgressBar *pSVar9;
  CachedUIResourcePtr *pCVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  GraphicsAutoState aGStack_20 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  if (this[0xf1] == (MapEventItem)0x0) {
    if (*(long *)(this + 0x110) == 0) {
      iVar2 = -0x3c;
    }
    else {
      cVar1 = FUN_04515e70(*(undefined8 *)(*(long *)(this + 0x110) + 0xe0));
      iVar2 = -0x3c;
      if (cVar1 == '\0') {
        iVar2 = -0x6e;
      }
    }
    cVar1 = isPlantWars(this,*(undefined4 *)(this + 0x18));
    fVar13 = (float)iVar2;
    if (cVar1 != '\0') {
      fVar13 = -50.0;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f860);
    fVar12 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f860);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    fVar13 = (float)FUN_0451604c(fVar13 + *(float *)(this + 0xc));
    WorldMapCamera::DrawImage(param_2,pIVar6,fVar12 - (float)(iVar2 / 2),fVar13,false,-1.0,-1.0);
  }
  else {
    cVar1 = RiftUtils::IsRiftTimedLevel(this);
    if (cVar1 != '\0') {
      iVar2 = 0;
      iVar5 = 1;
      pfVar8 = (float *)FUN_04515ed4(DAT_06b0f8e0,1);
      fVar13 = *pfVar8 + *(float *)(this + 8);
LAB_0451808c:
      fVar12 = -30.0;
      do {
        fVar13 = (float)FUN_0451604c(fVar13 + fVar12);
        fVar14 = *(float *)(this + 0xc);
        fVar12 = pfVar8[1];
        iVar3 = FUN_04516038(0xf);
        fVar12 = (float)FUN_0451604c((fVar12 + fVar14) - (float)iVar3);
        iVar3 = FUN_04516038(0x28);
        fVar14 = (float)iVar3;
        cVar1 = RiftUtils::HasEarnedFirstClearReward(this,iVar2);
        if (cVar1 == '\0') {
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f928);
          fVar15 = fVar13 - fVar14 * 0.5;
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f678);
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_18);
          pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f950;
          if (iVar2 == 0) {
            pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f6f8;
            goto LAB_04518114;
          }
LAB_04517fe8:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          pLVar7 = (LotteryResultProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          pSVar9 = (SalesProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
          pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          WorldMapCamera::DrawImage
                    (param_2,pIVar6,fVar13 - (float)iVar3 * 0.5,fVar12,false,(float)iVar3,
                     (float)iVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          if (iVar5 == 2) goto LAB_04517df0;
        }
        else {
          fVar15 = fVar13 - fVar14 * 0.5;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f6d0);
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f678);
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          pLVar7 = (LotteryResultProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f890);
          iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          pSVar9 = (SalesProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f890);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f890);
          WorldMapCamera::DrawImage
                    (param_2,pIVar6,fVar13 - (float)iVar3 * 1.5 * 0.5,fVar12 - 12.0,false,
                     (float)iVar3 * 1.5,(float)iVar4 * 1.5);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_18);
          if (iVar2 != 0) {
            pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f628;
            goto LAB_04517fe8;
          }
          pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f650;
LAB_04518114:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          pLVar7 = (LotteryResultProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          pSVar9 = (SalesProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
          pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          WorldMapCamera::DrawImage
                    (param_2,pIVar6,fVar13 - (float)iVar3 * 0.5,fVar12,false,(float)iVar3,
                     (float)iVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 1;
        pfVar8 = (float *)FUN_04515ed4(DAT_06b0f8e0,1);
        fVar13 = *pfVar8 + *(float *)(this + 8);
        if (iVar2 == 0) goto LAB_0451808c;
        fVar12 = 30.0;
      } while( true );
    }
    cVar1 = isPlantWars(this,*(undefined4 *)(this + 0x18));
    if (cVar1 == '\0') {
      iVar2 = 1;
      lVar11 = 0;
      do {
        pfVar8 = (float *)FUN_04515ed4(DAT_06b0f8e0,lVar11);
        fVar13 = (float)FUN_0451604c(*pfVar8 + *(float *)(this + 8));
        fVar12 = (float)FUN_0451604c(pfVar8[1] + *(float *)(this + 0xc));
        iVar5 = FUN_04516038(0x28);
        fVar14 = (float)iVar5;
        iVar5 = (int)lVar11;
        cVar1 = RiftUtils::HasEarnedFirstClearReward(this,iVar5);
        if (cVar1 == '\0') {
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f928);
          fVar15 = fVar13 - fVar14 * 0.5;
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f678);
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_18);
          pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f6f8;
          if (lVar11 != 0) {
            if (iVar5 != 1) {
              pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f9b0;
              goto LAB_04518338;
            }
            pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f950;
          }
LAB_0451846c:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          pLVar7 = (LotteryResultProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          pSVar9 = (SalesProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
          pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          WorldMapCamera::DrawImage
                    (param_2,pIVar6,fVar13 - (float)iVar5 * 0.5,fVar12,false,(float)iVar5,
                     (float)iVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
        }
        else {
          fVar15 = fVar13 - fVar14 * 0.5;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f6d0);
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f678);
          WorldMapCamera::DrawImage(param_2,pIVar6,fVar15,fVar12,false,fVar14,fVar14);
          pLVar7 = (LotteryResultProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f890);
          iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          pSVar9 = (SalesProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f890);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f890);
          WorldMapCamera::DrawImage
                    (param_2,pIVar6,fVar13 - (float)iVar3 * 1.5 * 0.5,fVar12 - 12.0,false,
                     (float)iVar3 * 1.5,(float)iVar4 * 1.5);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_18);
          if (lVar11 == 0) {
            pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f650;
            goto LAB_0451846c;
          }
          if (iVar5 == 1) {
            pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f628;
            goto LAB_0451846c;
          }
          pCVar10 = (CachedUIResourcePtr *)&DAT_06b0f6a8;
LAB_04518338:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          pLVar7 = (LotteryResultProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          pSVar9 = (SalesProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
          pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          WorldMapCamera::DrawImage
                    (param_2,pIVar6,fVar13 - (float)iVar5 * 0.5,fVar12,false,(float)iVar5,
                     (float)iVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
          if (iVar2 == 3) break;
        }
        lVar11 = lVar11 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
LAB_04517df0:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::DrawMapStars(Sexy::Graphics*, WorldMapCamera*) */

void __thiscall
MapEventItem::DrawMapStars(MapEventItem *this,Graphics *param_1,WorldMapCamera *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  size_t __n;
  int iVar9;
  float fVar10;
  float fVar11;
  FastCurve aFStack_48 [8];
  string asStack_40 [8];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  Insets aIStack_28 [16];
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap();
  if ((cVar1 == '\0') ||
     (((cVar1 = PVZ2UnchartedModeUtils::IsUnchartedBirthday(), cVar1 == '\0' &&
       (cVar1 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(), cVar1 == '\0')) &&
      (iVar3 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar3 != 3)))) {
    lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0f798);
    iVar7 = (int)((float)*(int *)(lVar6 + 0x38) * 0.65);
    iVar3 = FUN_04515ea8(*(undefined4 *)(this + 0xf4));
    fVar10 = (float)FUN_0451604c(*(undefined4 *)(this + 8));
    fVar11 = (float)FUN_0451604c(*(float *)(this + 0xc) + 22.0);
    Sexy::FastCurve::SetOutRange(aFStack_48,fVar10,fVar11);
    uVar4 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap();
    bVar2 = (bool)Sexy::Graphics::GetColorizeImages(param_1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    iVar9 = (int)((float)(iVar3 + -1) * -((float)iVar7 * 0.5));
    for (iVar3 = 0; iVar5 = FUN_04515ea8(*(undefined4 *)(this + 0xf4)), iVar3 < iVar5;
        iVar3 = iVar3 + 1) {
      __n = 0xff;
      Sexy::Insets::Insets((Insets *)aTStack_18,0xff,0xff,0xff,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)aTStack_18);
      fVar11 = 0.0;
      Sexy::FastCurve::SetOutRange((FastCurve *)aTStack_18,(float)iVar9,0.0);
      fVar10 = (float)Sexy::SexyVector2::operator+
                                ((SexyVector2 *)aFStack_48,(SexyVector2 *)aTStack_18);
      Set8BytesTo0(asStack_40);
      if ((uVar4 & 0xff) == 0) {
        if (iVar3 < *(int *)(this + 0xf8)) {
          std::string::append(asStack_40,"IMAGE_WORLDMAP_COMMON_STAR",__n);
        }
        else {
          std::string::append(asStack_40,"IMAGE_WORLDMAP_COMMON_STAR_EMPTY",__n);
        }
      }
      else {
        PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix
                  ((PVZ2UnchartedModeUtils *)(ulong)(uVar4 & 0xff));
        pcVar8 = "_HUD_WORLDMAP_STAR_LEVEL_EMPTY";
        if (iVar3 < *(int *)(this + 0xf8)) {
          pcVar8 = "_HUD_WORLDMAP_STAR_LEVEL";
        }
        std::operator+((string *)aIStack_28,pcVar8);
        FUN_05474278(asStack_40,aTStack_18);
        std::string::~string((string *)aTStack_18);
        std::string::~string((string *)aIStack_28);
      }
      lVar6 = StringHelper::ToImage(asStack_40,false);
      iVar9 = iVar9 + iVar7;
      EA::Text::Rectangle::Rectangle
                ((Rectangle *)&local_38,fVar10,fVar11,(float)*(int *)(lVar6 + 0x38) * 0.65,
                 (float)*(int *)(lVar6 + 0x3c) * 0.65);
      local_38 = local_38 - local_30 * 0.5;
      local_34 = local_34 - local_2c * 0.5;
      Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(lVar6 + 0x38),*(int *)(lVar6 + 0x3c));
      Sexy::TRect<float>::TRect(aTStack_18,(TRect *)&local_38);
      WorldMapCamera::DrawImageRotated((WorldMapCamera *)0x0,param_2,lVar6,aIStack_28,aTStack_18,0);
      std::string::~string(asStack_40);
    }
    Sexy::Graphics::SetColorizeImages(param_1,bVar2);
    Sexy::Color::Color((Color *)aTStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aTStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MapEventItem::~MapEventItem() */

void __thiscall MapEventItem::~MapEventItem(MapEventItem *this)

{
  *(undefined ***)this = &PTR__MapEventItem_068579b0;
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x18))();
    *(undefined8 *)(this + 0x110) = 0;
  }
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  std::string::~string((string *)(this + 0x130));
  std::string::~string((string *)(this + 0x120));
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::~vector
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98));
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  return;
}


/* MapEventItem::~MapEventItem() */

void __thiscall MapEventItem::~MapEventItem(MapEventItem *this)

{
  ~MapEventItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::OnPrecedingPathRevealComplete(WorldMap&) */

void __thiscall MapEventItem::OnPrecedingPathRevealComplete(MapEventItem *this,WorldMap *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PopAnim *pPVar6;
  RtClass *pRVar7;
  PopAnimRig *pPVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  char *pcVar12;
  code *pcVar13;
  string asStack_80 [8];
  string asStack_78 [24];
  SexyTransform2D aSStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [20];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04515e78(*(undefined4 *)(this + 0x14));
  cVar1 = FUN_04515ea0(this[0xf1]);
  if (cVar1 == '\0') {
    cVar1 = FUN_04515ea4(this[0xf2]);
    if (cVar1 != '\0') {
LAB_04518c10:
      WorldMap::ActivateMapPathGroupWithEvent((MapEventItem *)param_1,SUB81(this,0));
    }
  }
  else {
    if ((iVar3 - 2U < 3) || (iVar3 == 0xc)) {
      FUN_04515fbc(this + 0xf2);
      pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar12,"Play_UI_Map_Plant_Appears");
      WorldMap::ActivateMapPathGroupWithEvent((MapEventItem *)param_1,SUB81(this,0));
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      pPVar6 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06b0f8b8);
      pRVar7 = (RtClass *)PopAnimRig::StaticGetClass();
      pPVar8 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar6,pRVar7);
      std::string::string(asStack_80,"animation");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,WorldMap::OnPathDestinationAnimationFinished);
      Sexy::Delegate1<std::string_const&>::Delegate1<WorldMap,void(WorldMap::*)(std::string_const&)>
                (aDStack_38,asStack_78);
      PopAnimRig::PlayAndStop(pPVar8,asStack_80,0,aDStack_38);
      std::string::~string(asStack_80);
      nop();
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
      iVar4 = FUN_04516038(0x61);
      iVar5 = FUN_04516038(0x73);
      FUN_04515e50((float)-iVar4,(float)-iVar5,auStack_58,auStack_4c);
      PopAnimRig::SetRenderTransform(pPVar8,aSStack_60);
      WorldMap::PlacePathDestinationAnimationOnEvent(param_1,pPVar8,this);
      if (iVar3 == 0xc) {
        lVar9 = FUN_04515eb8(*(undefined8 *)(this + 0xe8));
        sVar2 = FUN_04515eb4(*(undefined2 *)(this + 0xe2));
        puVar10 = (undefined8 *)FUN_04515ec4(*(undefined8 *)(lVar9 + 0x78),(long)sVar2);
        pPVar8 = (PopAnimRig *)*puVar10;
        std::string::string(asStack_78,"open");
        Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aDStack_38);
        PopAnimRig::PlayAndStop(pPVar8,asStack_78,0,aDStack_38);
        std::string::~string(asStack_78);
        nop();
      }
      goto LAB_04518bd0;
    }
    cVar1 = FUN_04515ea4(this[0xf2]);
    if (cVar1 != '\0') goto LAB_04518c10;
    if (iVar3 == 1) {
      sVar2 = FUN_04515eb0(*(undefined2 *)(this + 0xe0));
      plVar11 = (long *)WorldMap::GetPopAnimRigByID(param_1,sVar2);
      (**(code **)(*plVar11 + 0x120))();
      pcVar13 = *(code **)(*plVar11 + 0x80);
      Sexy::PrimeTypeface::GetCharWidthKern((wchar_t)param_1,(wchar_t)*plVar11);
      (*pcVar13)(plVar11);
      iVar3 = FUN_04515e84(*(undefined4 *)(this + 0x78));
      if (iVar3 == 1) {
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Map_Minigame_Node_Reveal");
      }
      else if ((iVar3 - 2U & 0xfffffffd) == 0) {
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Map_Gargantuar_Node_Reveal");
      }
      else {
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Map_Level_Node_Reveal");
      }
      goto LAB_04518bd0;
    }
  }
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
LAB_04518bd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::RemoveChild(MapEventItem*) */

void __thiscall MapEventItem::RemoveChild(MapEventItem *this,MapEventItem *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  MapEventItem *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xb8);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<MapEventItem**,std::vector<MapEventItem*,std::allocator<MapEventItem*>>>,MapEventItem*>
                       (uVar1,uVar2,local_28);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::erase
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)this_00,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapEventItem::MapEventItem(MapEventItem const&) */

void __thiscall MapEventItem::MapEventItem(MapEventItem *this,MapEventItem *param_1)

{
  *(undefined ***)this = &PTR__MapEventItem_068579b0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 8));
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x60);
  Set8BytesTo0(this + 0x68);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x98));
  Sexy::Point::Point((Point *)(this + 0xa0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  Set8BytesTo0(this + 0x120);
  Set8BytesTo0(this + 0x130);
  operator=(this,param_1);
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEventItem::DrawEventLayer(Sexy::Graphics*, WorldMapCamera*, float) */

void MapEventItem::DrawEventLayer(Graphics *param_1,WorldMapCamera *param_2,float param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  WorldMap *this;
  Image *pIVar17;
  string *psVar18;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  wstring *pwVar19;
  LotteryResultProgressBar *pLVar20;
  DTextField *this_02;
  WorldMapCamera *this_03;
  ulong uVar21;
  string *extraout_x1;
  WorldMapCamera *in_x2;
  PopAnimRig *pPVar22;
  code *pcVar23;
  char *__s;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 in_register_00005004;
  float fVar27;
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  Color aCStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 1:
    this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    if (*(int *)(param_1 + 0x78) == 3) {
      sVar7 = FUN_04515eb0(*(undefined2 *)(param_1 + 0xe0));
      WorldMap::GetPopAnimRigByID(this,sVar7);
      nop();
      pPVar22 = (PopAnimRig *)DTextField::getCharNum(this_02);
      this_03 = (WorldMapCamera *)FUN_04515ec0(*(undefined8 *)(this + 0x328));
      fVar27 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 8));
      fVar26 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
      WorldMapCamera::DrawPopAnimRig(this_03,pPVar22,fVar27,fVar26,1.0,1.0,0.0);
      uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
      uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
      (**(code **)(*(long *)this + 0x318))(uVar24,uVar25,this,param_2);
      if ((*(int *)(param_1 + 0x18) == 0) &&
         (cVar2 = isPVZ1Node((MapEventItem *)param_1), cVar2 == '\0')) goto LAB_04519568;
    }
    else {
      sVar7 = FUN_04515eb0(*(undefined2 *)(param_1 + 0xe0));
      if (sVar7 == -1) {
        sVar7 = FUN_04515eb4(*(undefined2 *)(param_1 + 0xe2));
        if (sVar7 == -1) goto switchD_04519098_caseD_6;
        FUN_04515eb8(*(undefined8 *)(param_1 + 0xe8));
        uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
        uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
        (**(code **)(*(long *)this + 800))(uVar24,uVar25,0x3f800000,0x3f800000,0,this,param_2);
      }
      else {
        uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
        uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
        (**(code **)(*(long *)this + 0x310))(uVar24,uVar25,0x3f800000,0x3f800000,0,this,param_2);
      }
      uVar13 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
      lVar15 = FUN_05474374(uVar13,"dangerroom",0);
      if (((lVar15 != -1) && (cVar2 = FUN_04515ea0(param_1[0xf1]), cVar2 != '\0')) &&
         (cVar2 = FUN_04515ebc(this[0x355]), cVar2 == '\0')) {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        cVar2 = PlayerInfo::HasDangerRoomInfo(this_01,(string *)(*(long *)(param_1 + 0xe8) + 0x38));
        if (cVar2 == '\0') {
          uVar21 = 1;
        }
        else {
          lVar15 = PlayerInfo::GetDangerRoomInfo
                             (this_01,(string *)(*(long *)(param_1 + 0xe8) + 0x38));
          uVar21 = (ulong)*(uint *)(lVar15 + 8);
        }
        Sexy::StrFormat(L"%d",auStack_58,uVar21);
        iVar8 = FUN_04516038(100);
        Sexy::Color::Color(aCStack_48,1);
        Sexy::Graphics::SetColor((Graphics *)param_2,aCStack_48);
        Sexy::StringToUpper((Sexy *)(*(long *)(param_1 + 0xe8) + 0x38),extraout_x1);
        uVar13 = FUN_0547429c((string *)aCStack_48);
        Sexy::StrFormat("IMAGE_WORLDMAP_DANGER_LEVEL_%s",(string *)aRStack_50,uVar13);
        std::string::~string((string *)aCStack_48);
        Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>
                  (*(string **)(gLawnApp + 0x848),SUB81((string *)aRStack_50,0));
        pLVar20 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_48)
        ;
        fVar27 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 8));
        iVar11 = FUN_0451605c(0xfffffffe);
        iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar20);
        fVar26 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
        iVar9 = FUN_0451605c(0x2d);
        iVar10 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar20);
        WorldMapCamera::DrawImage
                  (in_x2,(Image *)pLVar20,((float)iVar11 + fVar27) - (float)(iVar12 / 2),
                   ((float)iVar9 + fVar26) - (float)(iVar10 / 2),false,-1.0,-1.0);
        pwVar19 = (wstring *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded)
        ;
        fVar27 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 8));
        iVar11 = FUN_0451605c(0xfffffffe);
        fVar26 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
        iVar12 = FUN_0451605c(0x1e);
        WorldMapCamera::DrawString
                  ((PrimeTypeface *)in_x2,pwVar19,(int)auStack_58,((int)fVar27 + iVar11) - iVar8 / 2
                   ,(int)fVar26 + iVar12,iVar8,0,(int *)0x0);
        std::string::~string((string *)aRStack_50);
        FUN_05476c50(auStack_58);
      }
      prepareLevelTitleText((MapEventItem *)param_1);
      if (*(long *)(param_1 + 0x110) != 0) {
        Sexy::GraphicsAutoState::GraphicsAutoState
                  ((GraphicsAutoState *)aCStack_48,(Graphics *)param_2);
        plVar14 = *(long **)(param_1 + 0x110);
        iVar8 = *(int *)((long)plVar14 + 0x4c);
        pcVar23 = *(code **)(*plVar14 + 0x128);
        *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + (float)(int)plVar14[9];
        *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + (float)iVar8;
        (*pcVar23)(plVar14,param_2);
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aCStack_48);
      }
      if (*(long *)(param_1 + 0x118) != 0) {
        Sexy::GraphicsAutoState::GraphicsAutoState
                  ((GraphicsAutoState *)aCStack_48,(Graphics *)param_2);
        plVar14 = *(long **)(param_1 + 0x118);
        iVar8 = *(int *)((long)plVar14 + 0x4c);
        pcVar23 = *(code **)(*plVar14 + 0x128);
        *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + (float)(int)plVar14[9];
        *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + (float)iVar8;
        (*pcVar23)(plVar14,param_2);
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aCStack_48);
      }
      iVar8 = *(int *)(param_1 + 0x18);
      if ((iVar8 != 0) && (cVar2 = isPVZ1Node((MapEventItem *)param_1), cVar2 == '\0')) {
        drawRiftEventAdditionalIcons((MapEventItem *)param_1,(Graphics *)param_2,in_x2);
      }
      cVar2 = CardGameUtils::IsInCardGameWorldMap();
      cVar3 = CardGameUtils::IsInCardGameWorldMap();
      bVar6 = 0;
      if (cVar3 != '\0') {
        bVar6 = CardGameUtils::IsHardMode();
        bVar6 = bVar6 ^ 1;
      }
      cVar3 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap();
      bVar5 = 0;
      if (cVar3 != '\0') {
        bVar5 = PVZ2UnchartedModeUtils::IsHardMode();
        bVar5 = bVar5 ^ 1;
      }
      cVar3 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap();
      cVar4 = '\0';
      if (cVar3 != '\0') {
        cVar4 = PVZ2UnchartedModeUtils::IsTimeLimitWorld();
      }
      cVar3 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap();
      if ((((cVar3 != '\0') && (cVar3 = PVZ2UnchartedModeUtils::IsHardMode(), cVar3 != '\0')) &&
          (param_1[0xf1] == (Graphics)0x0)) ||
         (((cVar2 != '\0' && (cVar2 = CardGameUtils::IsHardMode(), cVar2 != '\0')) &&
          (param_1[0xf1] == (Graphics)0x0)))) {
        Sexy::GraphicsAutoState::GraphicsAutoState
                  ((GraphicsAutoState *)aCStack_48,(Graphics *)param_2);
        pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f860);
        fVar27 = (float)FUN_0451604c(*(undefined4 *)(param_1 + 8));
        pLVar20 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f860);
        iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar20);
        fVar26 = (float)FUN_0451604c(*(float *)(param_1 + 0xc) - 50.0);
        WorldMapCamera::DrawImage(in_x2,pIVar17,fVar27 - (float)(iVar11 / 2),fVar26,false,-1.0,-1.0)
        ;
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aCStack_48);
      }
      if (((((iVar8 == 0) &&
            (cVar2 = isPVZ1Node((MapEventItem *)param_1,*(undefined4 *)(param_1 + 0x18)),
            cVar2 == '\0')) && (bVar5 < (bVar6 ^ 1))) || ((cVar4 != '\0' && (bVar5 != 0)))) ||
         (cVar2 = isPlantWars((MapEventItem *)param_1,*(undefined4 *)(param_1 + 0x18)),
         cVar2 != '\0')) {
LAB_04519568:
        DrawMapStars((MapEventItem *)param_1,(Graphics *)param_2,in_x2);
      }
    }
    nop();
    goto switchD_04519098_caseD_6;
  case 2:
    plVar14 = (long *)LawnApp::GetWorldMap(gLawnApp);
    FUN_04515eb0(*(undefined2 *)(param_1 + 0xe0));
    uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
    uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*plVar14 + 0x310))(uVar24,uVar25,0x3f800000,0x3f800000,0,plVar14,param_2);
    cVar2 = FUN_04515ea4(param_1[0xf2]);
    if (cVar2 == '\0') goto switchD_04519098_caseD_6;
    break;
  case 3:
    plVar14 = (long *)LawnApp::GetWorldMap(gLawnApp);
    FUN_04515eb0(*(undefined2 *)(param_1 + 0xe0));
    uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
    uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*plVar14 + 0x310))(uVar24,uVar25,0x3f800000,0x3f800000,0,plVar14,param_2);
    cVar2 = FUN_04515ea4(param_1[0xf2]);
    if (cVar2 == '\0') {
      psVar18 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar18);
      pcVar23 = *(code **)(*plVar14 + 0x328);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aCStack_48,(RtWeakPtrBase *)aRStack_50);
      uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
      uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
      (*pcVar23)(uVar24,uVar25,plVar14,param_2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      goto switchD_04519098_caseD_6;
    }
    break;
  case 4:
    cVar2 = FUN_04515ea4(CONCAT44(in_register_00005004,param_3),param_1[0xf2]);
    if ((cVar2 != '\0') && (sVar7 = FUN_04515eb4(*(undefined2 *)(param_1 + 0xe2)), sVar7 != -1)) {
      plVar14 = (long *)LawnApp::GetWorldMap(gLawnApp);
      FUN_04515eb8(*(undefined8 *)(param_1 + 0xe8));
      iVar8 = FUN_04516038((int)*(float *)(param_1 + 8));
      iVar11 = FUN_04516038((int)*(float *)(param_1 + 0xc));
      (**(code **)(*plVar14 + 800))
                ((float)(iVar8 + *(int *)(param_1 + 0xa0)),
                 (float)(iVar11 + *(int *)(param_1 + 0xa4)),0x3f800000,0x3f800000,0,plVar14,param_2)
      ;
    }
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x98);
    pIVar17 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    iVar9 = FUN_04516038((int)*(float *)(param_1 + 8));
    iVar8 = *(int *)(param_1 + 0xa0);
    iVar10 = FUN_04516038((int)*(float *)(param_1 + 0xc));
    iVar11 = *(int *)(param_1 + 0xa4);
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    iVar12 = *(int *)(lVar15 + 0x38);
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    WorldMapCamera::DrawImage
              (in_x2,pIVar17,(float)(iVar9 + iVar8),(float)(iVar10 + iVar11),false,(float)iVar12,
               (float)*(int *)(lVar15 + 0x3c));
    cVar2 = FUN_04515e7c(param_1[0x102]);
    goto joined_r0x0451971c;
  case 5:
    cVar2 = FUN_04515ea4(CONCAT44(in_register_00005004,param_3),param_1[0xf2]);
    if (cVar2 != '\0') goto switchD_04519098_caseD_6;
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x98);
    pIVar17 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    iVar9 = FUN_04516038((int)*(float *)(param_1 + 8));
    iVar8 = *(int *)(param_1 + 0xa0);
    iVar10 = FUN_04516038((int)*(float *)(param_1 + 0xc));
    iVar11 = *(int *)(param_1 + 0xa4);
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    iVar12 = *(int *)(lVar15 + 0x38);
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    WorldMapCamera::DrawImage
              (in_x2,pIVar17,(float)(iVar9 + iVar8),(float)(iVar10 + iVar11),false,(float)iVar12,
               (float)*(int *)(lVar15 + 0x3c));
    cVar2 = FUN_04515e7c(param_1[0x102]);
joined_r0x0451971c:
    if (cVar2 != '\0') {
      pIVar17 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x98));
      iVar11 = FUN_04516038((int)*(float *)(param_1 + 8));
      iVar8 = *(int *)(param_1 + 0xa0);
      iVar12 = FUN_04516038((int)*(float *)(param_1 + 0xc));
      drawImageFlashing((MapEventItem *)param_1,(Graphics *)param_2,in_x2,pIVar17,iVar11 + iVar8,
                        iVar12 + *(int *)(param_1 + 0xa4));
    }
    iVar8 = FUN_04516038(100);
    uVar13 = GetAdviceFont();
    iVar11 = FUN_04516038((int)*(float *)(param_1 + 8));
    iVar12 = FUN_04516038((int)*(float *)(param_1 + 0xc) + 0x1c);
    fVar27 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    Sexy::ToWString((string *)(param_1 + 0x48));
    Sexy::Color::Color(aCStack_48,0xffffffff);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar11 - iVar8 / 2),(float)iVar12,(float)iVar8,fVar27,uVar13
               ,param_2,aRStack_50,0,0,aCStack_48,0);
    FUN_05476c50(aRStack_50);
  default:
    goto switchD_04519098_caseD_6;
  case 0xc:
    plVar14 = (long *)LawnApp::GetWorldMap(gLawnApp);
    sVar7 = FUN_04515eb4(*(undefined2 *)(param_1 + 0xe2));
    if (sVar7 == -1) goto switchD_04519098_caseD_6;
    lVar15 = FUN_04515eb8(*(undefined8 *)(param_1 + 0xe8));
    puVar16 = (undefined8 *)FUN_04515ec4(*(undefined8 *)(lVar15 + 0x78),(long)sVar7);
    pPVar22 = (PopAnimRig *)*puVar16;
    cVar2 = FUN_04515ea4(param_1[0xf2]);
    if (cVar2 == '\0') {
LAB_04519324:
      cVar2 = FUN_04515ea0(param_1[0xf1]);
      if (cVar2 == '\0') {
        __s = "idle";
        std::string::string((string *)aCStack_48,"idle");
        cVar2 = PopAnimRig::IsAnimStringActive(pPVar22,(string *)aCStack_48);
        std::string::~string((string *)aCStack_48);
        nop();
        if (cVar2 == '\0') goto LAB_04519c08;
      }
    }
    else {
      __s = "open_idle";
      std::string::string((string *)aCStack_48,"open_idle");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar22,(string *)aCStack_48);
      std::string::~string((string *)aCStack_48);
      nop();
      if (cVar2 != '\0') goto LAB_04519324;
LAB_04519c08:
      std::string::string((string *)aCStack_48,__s);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar22,(string *)aCStack_48,0,aDStack_38);
      std::string::~string((string *)aCStack_48);
      nop();
    }
    FUN_04515eb8(*(undefined8 *)(param_1 + 0xe8));
    uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
    uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*plVar14 + 800))(uVar24,uVar25,0x3f800000,0x3f800000,0,plVar14,param_2);
    goto switchD_04519098_caseD_6;
  }
  sVar7 = FUN_04515eb4(*(undefined2 *)(param_1 + 0xe2));
  if (sVar7 != -1) {
    FUN_04515eb8(*(undefined8 *)(param_1 + 0xe8));
    uVar24 = FUN_0451604c(*(undefined4 *)(param_1 + 8));
    uVar25 = FUN_0451604c(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*plVar14 + 800))(uVar24,uVar25,0x3f800000,0x3f800000,0,plVar14,param_2);
  }
switchD_04519098_caseD_6:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapEventItem::AddChild(MapEventItem*) */

void __thiscall MapEventItem::AddChild(MapEventItem *this,MapEventItem *param_1)

{
  MapEventItem *local_8;
  
  local_8 = param_1;
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::push_back
            ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)(this + 0xb8),&local_8);
  return;
}


/* MapEventItem::SetParentEventPtr(MapEventItem*) */

void __thiscall MapEventItem::SetParentEventPtr(MapEventItem *this,MapEventItem *param_1)

{
  if (*(MapEventItem **)(this + 0xb0) != (MapEventItem *)0x0) {
    RemoveChild(*(MapEventItem **)(this + 0xb0),this);
  }
  *(MapEventItem **)(this + 0xb0) = param_1;
  if (param_1 != (MapEventItem *)0x0) {
    AddChild(param_1,this);
    return;
  }
  return;
}


/* MapEventItem::SetParentEvent(std::string const&) */

void MapEventItem::SetParentEvent(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x40);
  return;
}


/* MapEventItem::SetImageData(Sexy::RtWeakPtr<Sexy::Image>, Sexy::Point) */

void __thiscall
MapEventItem::SetImageData(MapEventItem *this,RtWeakPtr *param_2,undefined8 *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x98),param_2);
  *(undefined8 *)(this + 0xa0) = *param_3;
  return;
}


/* MapEventItem::HasImageData() const */

void __thiscall MapEventItem::HasImageData(MapEventItem *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x98));
  return;
}


/* MapEventItem::GetImageData(Sexy::RtWeakPtr<Sexy::Image>&, Sexy::Point&) const */

void __thiscall MapEventItem::GetImageData(MapEventItem *this,RtWeakPtr *param_1,Point *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)(this + 0x98));
  *(undefined8 *)param_2 = *(undefined8 *)(this + 0xa0);
  return;
}

